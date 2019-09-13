/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int*abc(int a)
{
   static int s;
   s=++a;
   return &s;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
void main()
{
  int *p;
  int x=100;
  int r;
  int *(*ptr)(int);
  ptr=&abc;
  p=ptr(x);//&abc(10) p=abc(x);
  r=*ptr(x);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\n%d %d",r,*p);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */