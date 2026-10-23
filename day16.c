#include <stdio.h>
#include <math.h>
int main(){
    
int a;
int b=2;


printf("enter a");
scanf("%d",&a);


printf("%d\n", a%b);

if(a%b==0)
{
    printf("the no. is even");
}

else
{
    printf("the no. is odd");
}


return 0;
}
