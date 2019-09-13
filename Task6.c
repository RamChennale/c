/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int i,n,s,in;
  clrscr();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("Enter a Num:");
  scanf("%d",&n);
  i=1;
  while(i<=n)
  {
    printf("\n");
    s=1;
    while(s<=i-1)
    {
      printf(".");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      s=s+1;
    }
    in=1;
    while(in<=n-i+1)
    {
      printf("%d",in);
      in=in+1;
    }
    i=i+1;
  }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  getch();

}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */