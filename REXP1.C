/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void abc(int p1,int*p2)
{
  ++p1;
  ++*p2;
  printf("\n%d %d",p1,*p2);
  if(p1<=3)
     abc(p1,p2);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\n%d %d",p1,*p2);
}
void main()
{
  int a=1,b=2;
  abc(a,&b);
  printf("\n%d %d",a,b);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */