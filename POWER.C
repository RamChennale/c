/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int b,p,r;
  clrscr();
  int power(int,int);
  printf("Enter 2 Values: ");
  scanf("%d%d",&b,&p);
  r=power(b,p);
  printf("\nPower Value=%d",r);
  getch();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
int power(int x,int y)
{
   int r=1,i;
   for(i=1;i<=y;i++)
      r=r*x;
   return r;

}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */