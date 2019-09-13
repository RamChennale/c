/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  long int n1,n2,n,t;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int counter=0,flag;
  clrscr();
  printf("\nEnter Two Num: ");
  scanf("%ld%ld",&n1,&n2);
  for(n=n1;n<=n2;n++)
  {
    flag=0;
    for(t=2;t<n;t++)
    {
       if(n%t==0)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       {
	 flag=1;
	 break;
       }
    }
    if(flag==0)
    printf("\n%d.PRIME=%ld",++counter,n);
 }
 getch();
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */