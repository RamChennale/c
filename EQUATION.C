/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program to calculate the following Sum:
	Sum=1-x2/2! +x4/4!-x6/6!+x8/8!-x10/10!
*/

#include <stdio.h>
#include <math.h>

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
int counter,f_coun;
float sum=0,x,power,fact;
clrscr();

printf("<-----------------------PROGRAM FOR SUM OF EQ. SERIES----------------------->");
printf("\n\n\tEQUATION SERIES : 1- X^2/2! + X^4/4! - X^6/6! + X^8/8! - X^10/10!");

printf("\n\n\n\tENTER VALUE OF X : ");
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
scanf("%f",&x);

for(counter=0, power=0; power<=10; counter++,power=power+2)
{
fact=1;
//CALC FACTORIAL OF POWER VALUE
for(f_coun=power; f_coun>=1; f_coun--)
        fact *= f_coun;
//EQ. FOR SUM SERIES
sum=sum+(pow(-1,counter)*(pow(x,power)/fact));
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}

printf("SUM : %f",sum);
getch();

}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */