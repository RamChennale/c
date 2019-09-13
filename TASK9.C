/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int i,n,s,in,dn;
  clrscr();
  printf("Enter a Num:");
  scanf("%d",&n);
  i=1;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  while(i<=n)
  {
    printf("\n");
    s=1;
    while(s<=n-i)
    {
      printf(".");
      s=s+1;
    }
    dn=n;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    while(dn>=n-i+1)
    {
      printf("%d",dn);
      dn=dn-1;
    }
    in=n-i+2;
    while(in<=n)
    {
      printf("%d",in);
      in=in+1;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    }
    i=i+1;
   }
   i=1;
   while(i<=n-1)
   {
     printf("\n");
     s=1;
     while(s<=i)
     {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
        printf(".");
        s=s+1;
     }
     dn=n;
     while(dn>=i+1)
     {
       printf("%d",dn);
       dn=dn-1;
     }
     in=i+2;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     while(in<=n)
     {
       printf("%d",in);
       in=in+1;
     }
     i=i+1;
   }
    
   getch();
}  
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */






 



/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */






/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */