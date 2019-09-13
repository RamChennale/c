/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int a,b;
  char *ptr;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ptr=&a;
  a=32767;
  b=*ptr;
  printf("\n%d %d %d",a,b,*ptr);
  *ptr=0;
  printf("\n%d %d",a,*ptr);
}


/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */