#include <stdio.h>
#include <string.h>


int main()
{
int initial, final, Ticket, age , rate;
char name[10];
char sex;
char strin[15],strfi[15];

printf("\t~~~~LUXURY TRAVELS~~~~\t\n");

printf("Enter your name:\n");
fgets(name,10,stdin);
getchar;

printf("Enter your sex --'M' for male,'F' for female :\n" );
scanf("%c",&sex);


printf("Enter your age:\n");
scanf("%d",&age);
getchar;

printf("Enter the initial point you started from:\n 1.Moinabad\n 2.Aziz Nagar\n 3.Appa Junction\n 4.Kali Mandir\n 5.Bandlaguda\n 6.Sun City\n 7.Langer House\n 8.Mehdipatnam\n");
scanf("%d",&initial);

printf("Enter the final destination :\n 1.Moinabad\n 2.Aziz Nagar\n 3.Appa Junction\n 4.Kali Mandir\n 5.Bandlaguda\n 6.Sun City\n 7.Langer House\n 8.Mehdipatnam\n");
scanf("%d",&final);

if (initial == final || final > 8 || final < initial) {
    printf("ANNI MUSKONI BAYTIKI DOBBEY!!\n");  
    goto end;
}


if ( (initial==1 && final==2) || (initial==2 && final==3) || (initial==3 && final==4) || (initial==4 && final==5) || (initial==5 && final==6) || (initial==6 && final==7) || (initial==7 && final==8))
{ 
rate = 10;
} 


if ( (initial==1 && final==3) || (initial==2 && final==4) || (initial==3 && final==5) || (initial==4 && final==6) || (initial==5 && final==7) || (initial==6 && final==8))
{ 
rate = 15;
} 

if ( (initial==1 && final==4) || (initial==2 && final==5) || (initial==3 && final==6) || (initial==4 && final==7) || (initial==5 && final==8)) 
{rate = 20;
} 

if ( (initial==1 && final==5) || (initial==2 && final==6) || (initial==3 && final==7) || (initial==4 && final==8))
{ 
rate = 25;
} 

if ( (initial==1 && final==6) || (initial==2 && final==7) || (initial==3 && final==8))
{ 
rate = 30;
} 

if ( (initial==1 && final==7) || (initial==2 && final==8) )
{ 
rate = 35;
} 

if ( initial==1 && final==8) { 
rate = 40;
}

if (initial == 1 ) { strcpy(strin,"Moinabad"); } 
if (initial == 2 ) { strcpy(strin,"Aziz Nagar"); } 
if (initial == 3 ) { strcpy(strin,"Appa Junction"); } 
if (initial == 4 ) { strcpy(strin,"Kali Mandir"); } 
if (initial == 5 ) { strcpy(strin,"Bandlaguda"); } 
if (initial == 6 ) { strcpy(strin,"Sun City"); } 
if (initial == 7 ) { strcpy(strin,"Langer House"); } 
if (initial == 8 ) { strcpy(strin,"Mehdipatnam"); } 


if (final == 1 ) { strcpy(strfi,"Moinabad"); } 
if (final == 2 ) { strcpy(strfi,"Aziz Nagar"); } 
if (final == 3 ) { strcpy(strfi,"Appa Junction"); } 
if (final == 4 ) { strcpy(strfi,"Kali Mandir"); } 
if (final == 5 ) { strcpy(strfi,"Bandlaguda"); } 
if (final == 6 ) { strcpy(strfi,"Sun City"); } 
if (final == 7 ) { strcpy(strfi,"Langer House"); } 
if (final == 8 ) { strcpy(strfi,"Mehdipatnam"); } 

printf("\t\t~~~~LUXURY TRAVELS~~~~\t\t\n\n");

printf("Date :\t\t %s\n",__DATE__);
printf("Time :\t\t %s\n",__TIME__);
printf("Ticket No. : \t %d\n",Ticket);
printf("----------------------------------------------------\n");
printf("Name :\t\t\t%s\t\t\t\n",name);
printf("Age : \t\t\t%d\t\t\t\n",age);
printf("Sex : \t\t\t%c\t\t\t\n",sex);
printf("----------------------------------------------------\n");
printf("Initial point : \t%s\t\t\n",strin);
printf("final point : \t\t%s\t\t\n",strfi);
printf("----------------------------------------------------\n");
printf("Rate : \t\t\t%d rs\t\t\n",rate);
printf("----------------------------------------------------\n");
printf("\t\t~~~~HAPPY JOURNEY!~~~~\n");


end:
return 0;
}