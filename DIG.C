/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int n,rn=0,counter=0;
  clrscr();
  printf("Enter a Num:" );
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  scanf("%d",&n);
  while(n)
  {
    rn=rn*10+n%10;
    counter++;
    n=n/10;

  }
  while(rn)
  {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    switch(rn%10)
    {
      case 0:printf(" ZERO");
	   break;
      case 1:printf(" ONE");
	break;
      case 2:printf(" TWO");
	break;
      case 3:printf(" THREE");
	break;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      case 4:printf(" FOUR");
	break;
      case 5:printf(" FIVE");
	break;
      case 6:printf(" SIX");
	break;
      case 7:printf(" SEVEN");
	break;
      case 8:printf(" EIGHT");
	break;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      case 9:printf(" NINE");
   }
   rn=rn/10;
   counter--;
 }
 while(counter)
 {
    printf(" ZERO");
    counter--;
 }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
getch();
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */