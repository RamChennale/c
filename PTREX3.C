/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int a=10,b=30,c;
  int *ptr;
  ptr=&b;
  c=b-*ptr;
  printf("\n%d %d %d",a,b,c);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ptr=&a;
  *ptr=20;
  c=*ptr;
  printf("\n%d %d %d",a,b,c);
}
  
  
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */