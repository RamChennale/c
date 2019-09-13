/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
{
   int n,rn,sd,nd;
   clrscr();
   printf("Enter a Num: ");
   scanf("%d",&n);
   rn=sd=nd=0;
   while(n>0)  //while(n) (n!=0)
   {
     rn=rn*10+n%10;
     sd=sd+n%10;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
     nd=nd+1;
     n=n/10;
  }
printf("\nRev Num:%d",rn);
printf("\nSum Of Digit:%d",sd);
printf("\nNo Of Digit:%d",nd);
getch();
}


/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
7:05 PM 9/9/2010
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */