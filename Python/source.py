import pygame
import sys        # Punoi: Eni Nuhaj Viti 1, A2
import random

pygame.init()

# Dimensionet e ekranit
screen_width, screen_height = 800, 800
background_color = (30, 30, 30)
screen = pygame.display.set_mode((screen_width, screen_height))
pygame.display.set_caption("Volcano Burst Game")

grid_size = 20 
cell_size = screen_width // grid_size
font_size = cell_size // 2  
grid = [[random.randint(1, 100) for _ in range(grid_size)] for _ in range(grid_size)]
font = pygame.font.SysFont(None, font_size)

def draw_grid():
    for y in range(grid_size):
        for x in range(grid_size):
            rect = pygame.Rect(x * cell_size, y * cell_size, cell_size, cell_size)
            color = (255, 0, 0) if grid[y][x] == 0 else (255, 255, 255)
            pygame.draw.rect(screen, color, rect, 1)
            if grid[y][x] != 0:
                num_text = font.render(str(grid[y][x]), True, (255, 255, 255))
                text_rect = num_text.get_rect(center=rect.center)
                screen.blit(num_text, text_rect)

def spread_lava(x, y):
    if grid[y][x] == 0:  # Qeliza eshte kthyer ne llava
        return

    height = grid[y][x]
    grid[y][x] = 0  # Kthe qelizen qe klikohet ne llava

    to_spread = [(x, y)]
    while to_spread:
        current_x, current_y = to_spread.pop()
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = current_x + dx, current_y + dy
            if (0 <= nx < grid_size and 0 <= ny < grid_size and
                    grid[ny][nx] != 0 and grid[ny][nx] < height):
                grid[ny][nx] = 0
                to_spread.append((nx, ny))

def reset_grid():
    for y in range(grid_size):
        for x in range(grid_size):
            grid[y][x] = random.randint(1, 100)

# Butonat
button_color = (0, 150, 0)
button_rect = pygame.Rect(0, 0, 120, 40)
button_rect.center = (screen_width - 80, 20)

def draw_button():
    pygame.draw.rect(screen, button_color, button_rect)
    text = font.render('Reset', True, (255, 255, 255))
    text_rect = text.get_rect(center=button_rect.center)
    screen.blit(text, text_rect)

running = True 
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.MOUSEBUTTONDOWN:
            mouse_x, mouse_y = event.pos
            if button_rect.collidepoint(mouse_x, mouse_y):
                reset_grid()
            else:
                grid_x, grid_y = mouse_x // cell_size, mouse_y // cell_size
                if 0 <= grid_x < grid_size and 0 <= grid_y < grid_size:
                    spread_lava(grid_x, grid_y)

    screen.fill(background_color)
    draw_grid()
    draw_button()
    pygame.display.flip()

pygame.quit()
sys.exit()

