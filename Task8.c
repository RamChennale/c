/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int i,n,s,in,dn;
  clrscr();
  printf("Enter a Num: ");
  scanf("%d",&n);
  i=1;
  while(i<=n)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  {
   printf("\n");
   dn=n;
   while(dn>=n-i+1)
   {
     printf("%d",dn);
     dn=dn-1;
   }
   s=1;
   while(s<=(n-i)*2)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   {
     printf(".");
     s=s+1;
   }
   in=n-i+1;
   while(in<=n)
   {
     printf("%d",in);
     in=in+1;
   }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   i=i+1;
  }
  getch();
}
    


   

   
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */




/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */