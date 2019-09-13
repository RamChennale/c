/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program that uses functions to perform the following operations:
   To insert a sub-string in to given main string from a given position.
*/

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
char a[10];
char b[10];
char c[10];
int p=0,r=0,i=0;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int t=0;
int x,g,s,n,o;
clrscr();

puts("Enter First String:");
gets(a);
puts("Enter Second String:");
gets(b);
printf("Enter the position where the item has to be inserted: ");
scanf("%d",&p);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
r = strlen(a);
n = strlen(b);
i=0;

// Copying the input string into another array
while(i <= r)
{
 c[i]=a[i];
 i++;
}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
s = n+r;
o = p+n;

// Adding the sub-string
for(i=p;i<s;i++)
{
 x = c[i];
 if(t<n)
 {
  a[i] = b[t];
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  t=t+1;
 }
 a[o]=x;
 o=o+1;
}

printf("%s", a);
getch();
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */