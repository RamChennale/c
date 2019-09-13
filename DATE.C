/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
   int dd,mm,yy;
   long dp;
   clrscr();
   printf("\nEnter Date: ");
   scanf("%d",&dd);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   printf("Enter Month: ");
   scanf("%d",&mm);
   printf("\nEnter Year: ");
   scanf("%d",&yy);
   dp=(yy-1)*365l+(yy-1)/4;
   switch(mm)
   {
     case 12:dp+=30;
     case 11:dp+=31;
     case 10:dp+=30;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     case 9: dp+=31;
     case 8: dp+=31;
     case 7: dp+=30;
     case 6: dp+=31;
     case 5: dp+=30;
     case 4: dp+=31;
     case 3: dp+=28;
     case 2: dp+=31;
     case 1: dp+=dd;
   }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   if(yy%4==0&&mm>2)
       dp++;

  printf("\nWeek Day Is: ");
  switch(dp%7)
    {
      case 1: printf(" Sunday");
	 break;
      case 2: printf(" Monday");
	 break;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
      case 3:  printf(" Tuesday");
	 break;
      case 4: printf(" Wednesday");
	 break;
      case 5: printf(" Thrusday");
	 break;
      case 6: printf(" Friday");
	 break;
      case 0: printf(" Saturday");
    }
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
   getch();
}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */