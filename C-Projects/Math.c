#include<stdio.h>
#include<math.h>

int main()
{ int a,b,c;
printf("Enter the coeffecients of the quadratic expression ax^2+bx+c\n");
printf("a=");
scanf("%d", &a);
printf("b=");
scanf("%d", &b);
printf("c=");
scanf("%d", &c);
    float det = (b*b)-(4*a*c);

    if (det > 0){
    printf("Roots are real and unequal\n");
    printf("Root 1 is %.2f\n", ((-b)+(sqrt(det)))/(2*a));
    printf("Root 2 is %.2f\n", ((-b)-(sqrt(det)))/(2*a));
    }
    else if (det == 0) {
    printf("Roots are real and equal\n");
    printf("Root 1 is %.2lf\n", -b/(2*a));
    printf("Root 2 is %.2lf\n", -b/(2*a));
    }
    else {
    printf("Roots are imaginary"); }
   
   
    return 0;
}



//finding even or odd.



#include <stdio.h>
int main(){
int r;
printf("Enter the number you want to check whether it is even or odd\n");
scanf("%d",&r);
int p=r%2;
if (p==0) {
printf("It's an even number"); }
else {printf("It's an odd number");}
return 0;
}





//prime number



#include <stdio.h>
int main () {
//finding whether it is a prime number.
//To check it is a prime number we have to divide it twice with 1 and with itself to
//get the remainder zero.

int r, count = 0;
printf("Enter the number you want to check whether it is a prime number or not\n");
scanf("%d",&r);

for (int i=1;i<=r;i++){
if (r%i == 0){
count++;
}
}
if (count == 2) {
printf("It's a prime number");

}
else {
printf("It's not a prime number");
}


return 0;}





//greatest number.



#include <stdio.h>
int main() {
int a,b,c;
printf("Enter the three numbers in which you want to check the greatest one\n");
scanf("%d %d %d", &a,&b,&c);

if (a>b && a>c) {
printf("%d is the greatest number!",a);}

if (b>a && b>c) {
printf("%d is the greatest number!",b);}


if (c>a && c>b) {
printf("%d is the greatest number!",c);}

return 0;
}