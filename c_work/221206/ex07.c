#include <stdio.h>

int main(){
    int a = 10;
    a++;
    printf("a = %d\n",a);
    a--;
    printf("a = %d\n\n",a);
    printf("a = %d\n",a++);
    printf("a = %d\n",a--);
    printf("a = %d\n\n",a);
    printf("a = %d\n",--a);
    printf("a = %d\n",++a);
    printf("a = %d\n",a);

    return 0;
}
