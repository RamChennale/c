/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int a,b,c,d,max;
 // a=50;b=20;c=40;d=30;
  printf("Enter 4 Values: ");
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(a>b&&a>c&&a>d)
  {
     max=a;
  }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  else
  {
     if(b>c&&b>d)
     {
	max=b;
     }
     else
     {
       if(c>d)
	  max=c;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       else
	 max=d;
     }
   }
  printf("Max Value=%d",max);
}

max=a>b&&a>c&&a>d?a:b>c&&b>d?b:c>d?c:d;
7:02 PM 9/8/2010

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */







/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */