/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int*funptr(int a)
{
  static int s;
  s=++a;;
  return &s;
}
void main()
{
  int *p;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int *(*ptr)(int);
  ptr=&funptr;
  p=ptr(10);
  printf("\nValue=%d",*p);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */