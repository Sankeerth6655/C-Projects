#include <stdio.h>
void printstar(int rows){

    for (int  i = 0; i <rows; i++)
    {
        for (int j = 0; j <=i; j++)
        {
           printf("*");
        }
        printf("\n");
    }
    
}

void revprintstar(int r){
    for (int i = 0; i < r; i++)
    {  for (int j = 0; j <=r-i-1; j++)
    {
        printf("*");
       
        
    }
    printf("\n");
}}


int  main(){int r,choice;
printf("Enter 0 if you want starpattern and 1 for revstarpattern.\n");
scanf("%d",&choice);

switch (choice)
{
case 0:
printf("Enter the no.of rows of stars you want to print.\n");
scanf("%d",&r);

    printstar(r);
    break;
 case 1:
 printf("Enter the no.of rows of stars you want to print.\n");
scanf("%d",&r);

    revprintstar(r);
    break;

default:
printf("You have entered invalid choice.\n");
    break;
}
        


    return 0;
}
