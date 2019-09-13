/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int n1,n2;
  clrscr();
  printf("Enter 2 Values: ");
  scanf("%d%d",&n1,&n2);
  if(n1<=n2)
  {
	if(n1%2==1)
	 n1=n1+1;
	while(n1<=n2)
	{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	 printf("%d ",n1);
	 n1=n1+2;
	}
  }//end of if
  else
  {
    if(n1%2==1)
    n1=n1-1;
    while(n1>=n2)
    {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       printf("%d ",n1);
       n1=n1-2;
    }
  }//end if else

 getch();
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */