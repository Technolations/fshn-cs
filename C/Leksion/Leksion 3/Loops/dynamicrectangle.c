#include <stdio.h>

int main(){
 int m,n,k;
 printf("Jep numrin e rreshtave: ");
 scanf("%d",&m);
 printf("Jep numrin e kolonave: ");
 scanf("%d",&n);
 printf("Jep trashesine: ");
 scanf("%d",&k);
 
 //afishimi i rreshtat e pare
 for(int i=1;i<=k;i++){
 for(int j=1;j<=n;j++){
 printf("*");
 }
 printf("\n");
 }
 
 
 //afishojme rreshtat ne mes
 for(int i=1;i<=m-2;i++){
 //afishojme yjet
 for(int j=1;j<=k;j++){
 printf("*");
 }
 //afishojme hapesirat
 for(int j=1;j<=n-2*k;j++){
 printf(" ");
 } 
 //afishojme yjet
 for(int j=1;j<=k;j++){
 printf("*");
 }
 //kalojme rresht te ri
 printf("\n");
 }
 
 //afishojme rreshtat e fundit
 for(int i=1;i<=k;i++){
 for(int j=1;j<=n;j++){
 printf("*");
 }
 printf("\n");
 }
 
 return 0;
}