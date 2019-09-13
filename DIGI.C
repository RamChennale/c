/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int n,rn,counter=0;
  clrscr();
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("Enter a Num: ");
  scanf("%d",&n);
  rn=0;
  while(n)
  {
   rn=rn*10+n%10;
   n=n/10;
   counter++;
  }
  while(rn)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  {
   switch(rn%10)
   {
      case 0:printf("ZERO");
	  break;
      case 1:printf(" ONE");
	break;
      case 2:printf(" TWO");
	break;
      case 3:printf(" THREE");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
       break;
      case 4:printf(" FOUR");
	break;
      case 5:printf(" FIVE");
	break;
      case 6:printf(" SIX");
	break;
      case 7:printf(" SEVEN");
	break;
      case 8:printf(" EIGHT");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	break;
      case 9:printf(" NINE");
	break;
  }
   rn=rn/10;
   counter--;
}
while(counter)
{
   printf(" ZERO");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
    counter--;
}
getch();
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */