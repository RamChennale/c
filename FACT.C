/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int fact(int n)
{
  int r=1,i;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  for(i=1;i<=n;i++)
    r=r*i;
  return r;
}
void main()
{
  int n,r;
  clrscr();
  printf("Enter a Num: ");
  scanf("%d",&n);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  r=fact(n);
  printf("\nResult Value=%d",r);
  getch();

}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */