/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program that uses functions to perform the following:
	i) Addition of Two Matrices
	ii) Multiplication of Two Matrices
*/

#include<stdio.h>

void main()
{
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int ch,i,j,m,n,p,q,k,r1,c1,a[10][10],b[10][10],c[10][10];
clrscr();
printf("************************************");
printf("\n\t\tMENU");
printf("\n**********************************");
printf("\n[1]ADDITION OF TWO MATRICES");
printf("\n[2]MULTIPLICATION OF TWO MATRICES");
printf("\n[0]EXIT");
printf("\n**********************************");
printf("\n\tEnter your choice:\n");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
scanf("%d",&ch);

if(ch<=2 & ch>0)
{
 printf("Valid Choice\n");
}

switch(ch)
{
  case 1:
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("Input rows and columns of A & B Matrix:");
  scanf("%d%d",&r1,&c1);
  printf("Enter elements of matrix A:\n");
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      scanf("%d",&a[i][j]);
    }
  printf("Enter elements of matrix B:\n");
    for(i=0;i<r1;i++)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    {
      for(j=0;j<c1;j++)
      scanf("%d",&b[i][j]);
    }
  printf("\n =====Matrix Addition=====\n");
    for(i=0;i<r1;i++)
    {
      for(j=0;j<c1;j++)
      printf("%5d",a[i][j]+b[i][j]);
      printf("\n");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    }
  break;

  case 2:
  printf("Input rows and columns of A matrix:");
  scanf("%d%d",&m,&n);
  printf("Input rows and columns of B matrix:");
  scanf("%d%d",&p,&q);
  if(n==p)
  {
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("matrices can be multiplied\n");
  printf("resultant matrix is %d*%d\n",m,q);
  printf("Input A matrix\n");
  read_matrix(a,m,n);
  printf("Input B matrix\n");
  /*Function call to read the matrix*/
  read_matrix(b,p,q);
  /*Function for Multiplication of two matrices*/
  printf("\n =====Matrix Multiplication=====\n");
  for(i=0;i<m;++i)
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    for(j=0;j<q;++j)
    {
      c[i][j]=0;
      for(k=0;k<n;++k)
	c[i][j]=c[i][j]+a[i][k]*b[k][j];
    }

  printf("Resultant of two matrices:\n");
     write_matrix(c,m,q);
    }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    /*end if*/
  else
  {
  printf("Matrices cannot be multiplied.");
  }
  /*end else*/
  break;

  case 0:
  printf("\n Choice Terminated");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  exit();
  break;

  default:
  printf("\n Invalid Choice");
}
getch();
}

/*Function read matrix*/
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int read_matrix(int a[10][10],int m,int n)
  {
    int i,j;
      for(i=0;i<m;i++)
	for(j=0;j<n;j++)
	scanf("%d",&a[i][j]);
  return 0;
  }

  /*Function to write the matrix*/
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int write_matrix(int a[10][10],int m,int n)
  {
    int i,j;
      for(i=0;i<m;i++)
      {
	for(j=0;j<n;j++)
	printf("%5d",a[i][j]);
	printf("\n");
      }
   return 0;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   }


/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */