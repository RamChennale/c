/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
 int x,y,z,min;
 x=30;
 y=10;
 z=20;
 if(x<y&&x<z)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 {
    min=x;
 }
 if(y<x&&y<z)
 {
    min=y;
 }
 if(z<x&&z<y)
 {
   min=z;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 }
  printf("Min Value=%d",min);
}
O/P:Min Value=10

min=x<y&&x<z?x:y<z?y:z;
6:42 PM 9/8/2010
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */