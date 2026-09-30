#include <stdio.h>
int main () {
    int a,b;

    printf("enter a");
    scanf("%d", &a);
    
    printf("enter b");
    scanf("%d", &b);

    int sum = a-b;
    printf("the sum of the no.s : %d", sum);
    return 0;

}