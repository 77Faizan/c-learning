#include <stdio.h>
float main() {
float a,b;
float choice;

printf("[1] additio\n");
printf("[2] subtraction\n");
printf("[3] multiplication\n");
printf("[4] division\n");

printf("enter choice");
scanf("%f" , &choice);

printf("enter a");
scanf("%f", &a);

printf("enter b");
scanf("%f", &b);

if( choice==1 )
{
    printf("sum = %f\n", a+b);
}
 else if (choice ==2)
 {
    printf("subtraction %f\n",a-b);
 }

else if (choice ==3)

{
    printf("multiplication %f \n", a*b);

}

else if(choice == 4)
{

    printf("division %f\n", a/b);

}

if (b != 0)

{
    printf("%f\n", a/b);


}
else
{
printf("Error:cannot divide by 0!4");

}



return 0;







}