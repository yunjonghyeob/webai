#include <stdio.h>
int main(){

    int n1;
    printf("n1입력: ");
    scanf("%d",&n1);
    n1=~n1;
    n1=n1+1;
    
    printf("부호바꾼값:%d\n",n1);
    


return 0;}