//write a program to check number is odd , even or zero .

# include<stdio.h>
void main()

{   
 int number;

 printf("enter number");
 scanf("%d ", &number);

 //printf("value is odd");

if (number>0)
{
    printf("%d is odd", number);
}
else_if(number<0)

{
    printf("%d is even ", number);

}

else_if (number==0)
{
    printf("%d is zero",number);

}
printf(" \n\n  good bye  \n\n");
}




