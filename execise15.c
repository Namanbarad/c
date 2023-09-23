#include<stdio.h>
void main()
{
    //    write a program to  findout small  area of two  triangle 
   float height1,base1,area1,height2,base2,area2;
    
    printf("\t\ttriangle area 1\n\n");
    
    printf("value of height1=  ");
    scanf("%f",&height1);

    printf("value of base1=  ");
    scanf("%f",&base1);

    area1 = (height1 * base1) / 2; 

    printf("\t\t triangle area 2\n\n");
    printf("value of height2= ");
    scanf("%f",&height2);

    printf("value of base2= ");
    scanf("%f",&base2);

    area2=(height2*base2)/2;

    printf("\n\t triangle area 1 is %.2f\n",area1);
    printf("\n\t triangle area 2 is %.2f\n\n",area2);

    if(area1<area2)
    {
     printf("\t triangle area 1 is smaller than area 2\n");
    
    }
    else
    {
     printf("\t triangle area 1 is not smaller than area 2\n");

    }

    printf("\tGOOD BY");

}