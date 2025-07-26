#include <stdio.h>
#include <string.h>
int CustomerOrder(int a)
{
   printf("Enter your preffered choice :(YOU CAN ORDER ONLY ONE ITEM) \n  1-Pizza--Rs.100\n  2-Burger--Rs.200\n  3-Cake--Rs.40\n  4-Samosa--Rs.15\n  5-Dilpasand--Rs.20\n");
   printf("Enter your choice :");
   scanf("%d", &a);
   return a;
}

int main()
{
   int a, b;
   char name[10];
   char itemname[10];
   int qty;
   int bill;
   int pizzarate = 100;
   int burgerrate = 200;
   int cakerate = 40;
   int samosarate = 15;
   int dilpasandrate = 20;
   printf("\t\t~~~~~ABC RESTAURENT~~~~~\t\t\n");
   printf("Enter your name please : ");
   scanf("%s", name);
   a = CustomerOrder(a);

   if (a == 1)
   {
      strcpy(itemname, "Pizza");
      printf("You have ordered Pizza.\n\n");
      printf("Enter the quantity :");
      scanf("%d", &qty);
      bill = pizzarate * qty;
   }
   if (a == 2)
   {
      strcpy(itemname, "Burger");
      printf("You have ordered Burger.\n\n");
      printf("Enter the quantity :");
      scanf("%d", &qty);
      bill = burgerrate * qty;
   }
   if (a == 3)
   {
      strcpy(itemname, "Cake");
      printf("You have ordered Cake.\n\n");
      printf("Enter the quantity :");
      scanf("%d", &qty);
      bill = cakerate * qty;
   }
   if (a == 4)
   {
      strcpy(itemname, "Samosa");
      printf("You have ordered Samosa.\n\n");
      printf("Enter the quantity :");
      scanf("%d", &qty);
      bill = samosarate * qty;
   }
   if (a == 5)
   {
      strcpy(itemname, "Dilpasand");
      printf("You have ordered Dilpasand.\n\n");
      printf("Enter the quantity :");
      scanf("%d", &qty);
      bill = dilpasandrate * qty;
   }
   printf("\n\n");
   getchar();
   printf("Enter your preffered choice : \n 1-Generate Invoice\n 2-Show bill in the computer\n 3-Exit\n");
   printf("Enter your choice :");
   scanf("%d", &b);
   if (b == 1)
   {
      printf("\t\t~~~~~~ABC RESTAURENT~~~~~~\t\t\n");
      printf("Date : %s\n",__DATE__);
      printf("Invoice to : %s\n", name);

      printf("--------------------------------------------------------------\n");
      printf("Items\t\t\tQuantity\t\tTotal\n");
      printf("--------------------------------------------------------------\n");
      printf("%s\t\t\t%d\t\t\t%d\n", itemname, qty, bill);
      float discount = (float)bill * 0.1;
      printf("Discount@10\t\t\t\t\t%.2f\n", discount);
      float CGST = (float)bill * 0.09;
      printf("CGST@9\t\t\t\t\t\t%.2f\n", CGST);
      float SGST = (float)bill * 0.09;
      printf("SGST@9\t\t\t\t\t\t%.2f\n", SGST);

      printf("--------------------------------------------------------------\n");
      float total = (float)bill - discount + CGST + SGST;
      printf("Net Total\t\t\t\t\t%.2f\n", total);
      printf("--------------------------------------------------------------\n");
      printf("\t\t~~Thankyou for visiting!~~\t\n");
   }
   if (b == 2)
   {
      printf("your name -- %s\n\n", name);
      printf("You have ordered %d pcs of %s\n", qty, itemname);
      printf("Net bill -- %d\n", bill);
      float discount = (float)bill * 0.1;
      printf("Discount@10--%0.2f\n", discount);
      float CGST = (float)bill * 0.09;
      printf("CGST@9--%0.2f\n", CGST);
      float SGST = (float)bill * 0.09;
      printf("SGST@9--%0.2f\n", SGST);
      float total = (float)bill - discount + CGST + SGST;
      printf("Grand Total : %0.2f\n\n", total);
      printf("\t\t~~Thankyou for visiting!~~\t\n");
   }
   if (b == 3)
   {
      printf("Thankyou for visiting!");
   }

   return 0;
}