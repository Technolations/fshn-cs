#include <stdio.h>

int main (void){

	int n;
	float k;
	float s;
	int num = 1;
	int em = 3;
	
	printf("Vendos vleren e n: ");
	scanf("%d", &n);

	for (int i = 1; i <=n; i++) {
		k=1.0*num/em;
		s = s + k;
		int num_ri = num + em;
		int em_ri = num * em;
		num = num_ri;
		em = em_ri;
		printf("%d eshte numeruesi dhe %d eshte emeruesi\n", num, em);
	}
}