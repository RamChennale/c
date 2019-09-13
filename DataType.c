/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int i;
  long l;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  float f;
  i=32767+1;
  l=32767+1;
  f=32767+1;
  printf("%d %ld %f",i,l,f);
}
O/P:-32768 -32768 -32768.000000


void main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  int i;
  long int l;
  float f;
  i=32767+1;
  l=32767l+1;//l=(long)32767+1;
  f=32767.0f+1;//f=(float)32767+1;
  printf("%d %ld %f",i,l,f);
}
O/P:-32768 32768 32768.000000
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */


  



/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */