#include <stdio.h>
int main(){

    int n1,n2,n3, result;
    printf("n1입력: ");
    scanf("%d",&n1);
    printf("n2입력: ");
    scanf("%d",&n2);
    printf("n3입력: ");
    scanf("%d",&n3);
    result=(n1-n2)*(n2+n3)*(n3%n1);

    printf("%d\n",result);



return 0;}