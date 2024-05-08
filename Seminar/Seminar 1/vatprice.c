// Merr nga perdoruesi nje cmim dhe llogarit TVSH
// dhe vleren totale

#include <stdio.h>

float main(void){
	float cmimi, tvsh, total;
	printf("Vendos cmimin: ");
	scanf("%f", &cmimi);
	tvsh = cmimi * 0.2;
	total = tvsh + cmimi;
	printf("Cmimi eshte %f me vlere totale %f dhe TVSH %f", cmimi, total, tvsh);
}