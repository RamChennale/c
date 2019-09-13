/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int i,n,s,dn;
  clrscr();
  printf("Enter a Num:");
  scanf("%d",&n);
  i=1;
  while(i<=n)
  {
    printf("\n");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    s=1;
    while(s<=n-i)
    {
      printf(".");
      s=s+1;
    }
    dn=i;
    while(dn>=1)
    {
      printf("%d",dn);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      dn=dn-1;
    }

    i=i+1;
  }
  getch();
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */