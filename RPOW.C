/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int power(int b,int p)
{
   if(p>1)
      return b*power(b,p-1);
   else
     return b;
}
void main()
{
  int r;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  r=power(2,3);
  printf("\nPower is:%d",r);
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */