#include <stdio.h>

int main()
{
   int r1, r2, c1, c2;
   int m, n, p, q;
   int sum=0;

   printf("Consider one matrix as A and another as B\n");
   printf("Enter the number of rows and columns you want in matrix A.\n");
   printf("Enter the no.of rows in A :\n");
   scanf("%d", &r1);
   m = r1;
   getchar();
   printf("Enter the no.of columns in A :\n");
   scanf("%d", &c1);
   n = c1;
   getchar();

   printf("Enter the number of rows and columns you want in matrix B.\n");
   printf("Enter the no.of rows in B :\n");
   scanf("%d", &r2);
   p = r2;
   getchar();
   printf("Enter the no.of columns in B:\n");
   scanf("%d", &c2);
   q = c2;

   // Checks if they can be multiplyed or not.
   if (r1 == 0 || c1 == 0 || r2 == 0 || c2==0)
   {
     printf("You have entered an invalid input.\nThere is no such matrix with a zero row or column.\n");
   }
   

   else if (c1 == r2)
   {
      printf("Matrices with given rows and columns can be multiplied.\n");

      char A[m][n];
      char B[n][q]; 
      char C[m][q];// two matrices with no.of elements.

      printf("Now enter the elements of matrix A :\n");
      for (int i = 0; i < m; i++)
      {
         for (int j = 0; j < n; j++)
         {
            printf("Enter the number in %d, %d place of the matrix\n", i, j);
            scanf("%d", &A[i][j]);
         }
      }

      printf("Now enter the elements of matrix B :\n");
      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < q; j++)
         {
            printf("Enter the number in %d, %d place of the matrix\n", i, j);
            scanf("%d", &B[i][j]);
         }
      }
      // Showing the matrices.
      printf("Matrix A is :\n");

      for (int i = 0; i < m; i++)
      {
         for (int j = 0; j < n; j++)
         {
            printf("%d\t", A[i][j]);
         }
         printf("\n");
      }

      printf("Matrix B is :\n");

      for (int i = 0; i < n; i++)
      {
         for (int j = 0; j < q; j++)
         {
            printf("%d\t", B[i][j]);
         }
         printf("\n");
      }


//MULTIPLICATION-- IMP.--C[i][j]==summation of k=0 to n-1 A[i][k]*B[k][j];
for (int i = 0; i <m; i++)
{
  for (int j = 0; j < q; j++)
  {
   for (int k = 0; k <n; k++)
   {
     sum += A[i][k]*B[k][j];
   }
   C[i][j] = sum;
   sum = 0;
   
  }
  
}

printf("The resultant matrix is : \n");

for (int i = 0; i <m; i++)
{
   for (int j = 0; j < q; j++)
   {
     printf("%d\t",C[i][j]);
   }
   printf("\n");
}



   } // matrix multiply end

   else
   {
      printf("Matrices with given rows and columns cannot be multiplied.Try another way.\n");
   }
   return 0;
}