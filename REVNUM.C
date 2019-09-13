/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int n,rn,sd,nd;
  clrscr();
  printf("Enter a Value: ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  scanf("%d",&n);
  rn=sd=nd=0;
  while(n>0)//while(n) while(n!=0)
  {
     rn=rn*10+n%10;
     sd=sd+n%10;
     nd=nd+1;
     n=n/10;
 }
 printf("\nReverse No:%d",rn);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 printf("\nSum of Digit:%d",sd);
 printf("\no of Digit:%d",nd);
 getch();
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */