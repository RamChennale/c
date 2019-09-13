/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int n1,n2;
  clrscr();
  printf("Enter 2 Values: ");
  scanf("%d%d",&n1,&n2);
  if(n1<=n2)
  {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   if(n1%2==1)
    n1=n1+1;
   while(n1<=n2)
   {
      printf("%d ",n1);
      n1=n1+2;
   }
  }
  else
  { 
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    if(n1%2==1)
      n1=n1-1;
    while(n1>=n2)
    {
	printf("%d ",n1);
	n1=n1-2;
    }
 }
  getch();

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
Enter 2 Values:20 40
20 22 24...40

Enter 2 values:19 40
20 22 24...40

Enter 2 Values:40 20
40 38 36...20

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
Enter 2 Values:41 20
40 38 36...20

7:59 PM 9/8/2010



/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */