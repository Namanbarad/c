#include<stdio.h>
void main()
{
    // write a program to findout whether given year is leap year or 
    // not ( using if else )
    int year;
    printf("\t\tenter year for leap year  ") ;
    scanf("%d",&year);

    if(year%4==0)
    {
      printf("\t\t%d is leap year\n\n",year);

    }
    else
    {
      printf("\t\t%d is not leap year\n\n",year);

    }
    printf("\t\n\n   !!!!!!    GOOD BY    !!!!!  ");

}