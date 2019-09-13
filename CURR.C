/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void txt(long no)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
  switch(no)
  {
    case 1:printf("ONE ");
	   break;
    case 2:printf("TWO ");
	   break;
    case 3:printf("THREE ");
	   break;
    case 4:printf("FOUR ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   break;
    case 5:printf("FIVE ");
	   break;
    case 6:printf("SIX ");
	   break;
    case 7:printf("SEVEN ");
	   break;
    case 8:printf("EIGHT ");
	   break;
    case 9:printf("NINE ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   break;
    case 10:printf("TEN ");
	   break;
    case 11:printf("ELEVEN ");
	   break;
    case 12:printf("TWELVE ");
	   break;
    case 13:printf("THIRTEEN ");
	   break;
    case 14:printf("FOURTEEN ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   break;
    case 15:printf("FIFTEEN ");
	   break;
    case 16:printf("SIXTEEN ");
	   break;
    case 17:printf("SEVENTEEN ");
	   break;
    case 18:printf("EIGHTTEEN ");
	   break;
    case 19:printf("NINETEEN ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   break;
    case 20:printf("TWENTY ");
	   break;
    case 30:printf("THIRTY ");
	   break;
    case 40:printf("FORTY ");
	   break;
    case 50:printf("FIFTY ");
	   break;
    case 60:printf("SIXTY ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   break;
    case 70:printf("SEVNENTY ");
	   break;
    case 80:printf("EIGHTY ");
	   break;
    case 90:printf("NINTY ");
	   break;
    case 100:printf("HUNDRED ");
	   break;
    case 1000:printf("THOUSAND ");
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
	   break;
    case 100000:printf("LACK ");
	   break;
    case 10000000:printf("CRORE ");
  }

}// END FOR TXT

void digittotxt(long n)
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */

 long t;
 if(n==0)
 printf("\nZERO ");
 if(n>=10000000)
 {   t=n/10000000;
     if(t<=20)
     txt(t);
     else
     {
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      txt(t/10*10);
      txt(t%10);
     }
     txt(10000000);
 }
 n=n%10000000;
 if(n>=100000)
 {
     t=n/100000;
     if(t<=20)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     txt(t);
     else
     {
      txt(t/10*10);
      txt(t%10);
     }
     txt(100000);
 }
 n=n%100000;
 if(n>=1000)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 {
     t=n/1000;
     if(t<=20)
     txt(t);
     else
     {
      txt(t/10*10);
      txt(t%10);
     }
     txt(1000);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 }
 n=n%1000;
 if(n>=100)
 {
    txt(n/100);
    txt(100);
 }

 n=n%100;
 if(n<=20)
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
 txt(n);
 else
 {
  txt(n/10*10);
  txt(n%10);
 }
}

void currency( double RPS)
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   long r,p;
   r=(long)RPS;
   digittotxt(r);
   printf(" RUPEES ");
   p=(RPS-r)*100;
   digittotxt(p);
   printf(" PAISE");
}

void main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
    double n;
    clrscr();
    printf("\nEnter a Num: ");
    scanf("%lf",&n);
    currency(n);
    getch();
}


/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */




/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */