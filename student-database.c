#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define MAX_STUDENTS 100
#define MAX_SUBJECTS 5
#define DATABASE_FILE "student_database.txt"

// Struktura për lëndët e një studenti
struct Lenda {
    char emri[50];
    int nota;
};

// Struktura për të dhënat e një studenti
struct Student {
    char ID[10];
    char emer[50];
    char mbiemer[50];
    char email[50];
    char telefon[15];
    int viti;
    struct Lenda lendet[MAX_SUBJECTS];
};

// Deklarimet e funksioneve
void ngarkoBazenTeDhenash();
void ruajBazenTeDhenash();
void shtoStudent();
void fshijStudent();
void kerkoStudent();
void listoStudentet();
void shfaqNotat(struct Student student);

// Variablat globale
struct Student studentet[MAX_STUDENTS];
int numriTotalStudenteve = 0;

int main() {
    FILE *skedar = fopen(DATABASE_FILE, "r");
    if (skedar == NULL) {
        printf("Skedari %s nuk ekziston. Do të krijohet një skedar i ri për të ruajtur të dhënat.\n", DATABASE_FILE);
        skedar = fopen(DATABASE_FILE, "w");
        if (skedar == NULL) {
            printf("Gabim gjatë hapjes së skedarit për të shkruar.\n");
            return 1;
        }
        fclose(skedar);
    } else {
        fclose(skedar);
    }

    ngarkoBazenTeDhenash();

    // Menyja e programit
    int zgjedhja;
    do {
        printf("\nSistemi i Menaxhimit te Studenteve FSHN\n");
        printf("=======================================\n");
        printf("1. Shto Student\n");
        printf("2. Fshij Student\n");
        printf("3. Kerko Student\n");
        printf("4. Listo Te Gjithe Studentet\n");
        printf("5. Dil\n");
        printf("Zgjedhja: ");
        scanf("%d", &zgjedhja);
        getchar(); // Pastro buffer-in e input-it

        switch (zgjedhja) {
            case 1:
                shtoStudent();
                break;
            case 2:
                fshijStudent();
                break;
            case 3:
                kerkoStudent();
                break;
            case 4:
                listoStudentet();
                break;
            case 5:
                ruajBazenTeDhenash();
                break;
            default:
                printf("Zgjedhje e pavlefshme. Provo perseri.\n");
        }
    } while (zgjedhja != 5);

    printf("\nSistemi i Menaxhimit te Studenteve FSHN\n");
    printf("Eni Nuhaj 2024\neni.nuhaj@icloud.com\n");

    return 0;
}

// Funksioni për të ngarkuar të dhënat nga skedari
void ngarkoBazenTeDhenash() {
    FILE *skedar = fopen(DATABASE_FILE, "r");
    if (skedar == NULL) {
        printf("Gabim gjate hapjes se skedarit per te ngarkuar bazen e te dhenave.\n");
        return;
    }

    numriTotalStudenteve = 0;

    while (fscanf(skedar, "%s %s %s %s %s %d",
                  studentet[numriTotalStudenteve].ID,
                  studentet[numriTotalStudenteve].emer,
                  studentet[numriTotalStudenteve].mbiemer,
                  studentet[numriTotalStudenteve].email,
                  studentet[numriTotalStudenteve].telefon,
                  &studentet[numriTotalStudenteve].viti) == 6) {

        for (int i = 0; i < MAX_SUBJECTS; i++) {
            fscanf(skedar, "%s %d",
                   studentet[numriTotalStudenteve].lendet[i].emri,
                   &studentet[numriTotalStudenteve].lendet[i].nota);
        }

        numriTotalStudenteve++;
    }

    fclose(skedar);
    printf("Baza e te dhenave u ngarkua me sukses.\n");
}

// Funksioni për të ruajtur të dhënat në skedar
void ruajBazenTeDhenash() {
    FILE *skedar = fopen(DATABASE_FILE, "w");
    if (skedar == NULL) {
        printf("Gabim gjate hapjes se skedarit per te ruajtur bazen e te dhenave.\n");
        return;
    }

    for (int i = 0; i < numriTotalStudenteve; i++) {
        fprintf(skedar, "%s %s %s %s %s %d\n",
                studentet[i].ID,
                studentet[i].emer,
                studentet[i].mbiemer,
                studentet[i].email,
                studentet[i].telefon,
                studentet[i].viti);

        for (int j = 0; j < MAX_SUBJECTS; j++) {
            fprintf(skedar, "%s %d\n",
                    studentet[i].lendet[j].emri,
                    studentet[i].lendet[j].nota);
        }
    }

    fclose(skedar);
    printf("Baza e te dhenave u ruajt me sukses.\n");
}

// Funksioni për të shtuar një student
void shtoStudent() {
    if (numriTotalStudenteve >= MAX_STUDENTS) {
        printf("Nuk ka vend te mjaftueshem ne baze per te shtuar studentin.\n");
        return;
    }

    struct Student student;

    printf("Shto Student\n");
    printf("============\n");
    printf("ID: ");
    scanf("%s", student.ID);
    printf("Emer: ");
    scanf("%s", student.emer);
    printf("Mbiemer: ");
    scanf("%s", student.mbiemer);
    printf("Email: ");
    scanf("%s", student.email);
    printf("Telefon: ");
    scanf("%s", student.telefon);
    printf("Viti: ");
    scanf("%d", &student.viti);

    printf("Shto lendet dhe notat e studentit:\n");
    for (int i = 0; i < MAX_SUBJECTS; i++) {
        printf("Lenda %d: ", i + 1);
        scanf("%s", student.lendet[i].emri);
        printf("Nota %d: ", i + 1);
        scanf("%d", &student.lendet[i].nota);
    }

    studentet[numriTotalStudenteve] = student;
    numriTotalStudenteve++;
    printf("Studenti u shtua me sukses.\n");
}

// Funksioni për të fshirë një student
void fshijStudent() {
    char ID[10];
    printf("Shkruaj ID-n e studentit qe do te fshish: ");
    scanf("%s", ID);

    bool gjetur = false;
    for (int i = 0; i < numriTotalStudenteve; i++) {
        if (strcmp(studentet[i].ID, ID) == 0) {
            gjetur = true;
            for (int j = i; j < numriTotalStudenteve - 1; j++) {
                studentet[j] = studentet[j + 1];
            }
            numriTotalStudenteve--;
            printf("Studenti u fshi me sukses.\n");
            break;
        }
    }

    if (!gjetur) {
        printf("Studenti me kete ID nuk u gjet.\n");
    }
}

// Funksioni për të kërkuar një student
void kerkoStudent() {
    char ID[10];
    printf("Shkruaj ID-n e studentit qe po kerkon: ");
    scanf("%s", ID);

    bool gjetur = false;
    for (int i = 0; i < numriTotalStudenteve; i++) {
        if (strcmp(studentet[i].ID, ID) == 0) {
            gjetur = true;
            printf("\nStudenti u gjet:\n");
            printf("ID: %s\n", studentet[i].ID);
            printf("Emer: %s\n", studentet[i].emer);
            printf("Mbiemer: %s\n", studentet[i].mbiemer);
            printf("Email: %s\n", studentet[i].email);
            printf("Telefon: %s\n", studentet[i].telefon);
            printf("Viti: %d\n", studentet[i].viti);
            printf("Lendet dhe notat:\n");
            for (int j = 0; j < MAX_SUBJECTS; j++) {
                printf("%s - Nota: %d\n", studentet[i].lendet[j].emri, studentet[i].lendet[j].nota);
            }
            break;
        }
    }

    if (!gjetur) {
        printf("Studenti me kete ID nuk u gjet.\n");
    }
}

// Funksioni për të listuar të gjithë studentët
void listoStudentet() {
    printf("\nLista e studenteve:\n");
    printf("ID\tEmri\t\tMbiemri\t\tViti\n");
    printf("--------------------------------------------\n");
    for (int i = 0; i < numriTotalStudenteve; i++) {
        printf("%s\t%s\t\t%s\t\t%d\n", studentet[i].ID, studentet[i].emer, studentet[i].mbiemer, studentet[i].viti);
    }
    printf("--------------------------------------------\n");
}
