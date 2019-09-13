/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
/* Write a C program to determine if the given string is a palindrome or not */

#include<stdio.h>
#include<string.h>

enum Boolean{false,true};
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
enum Boolean IsPalindrome(char string[])
{
 int left,right,len=strlen(string);
 enum Boolean matched=true;
 if(len==0)
  return 0;
  left=0;
  right=len-1;

  /* Compare the first and last letter,second & second last & so on */
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  while(left<right&&matched)
  {
   if(string[left]!=string[right])
   matched=false;
   else
   {
    left++;
    right--;
   }
  }
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  return matched;
 }

int main()
{
  char string[40];
  clrscr();
  printf("****Program to test if the given string is a palindrome****\n");
  printf("Enter a string:");
  scanf("%s",string);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  if(IsPalindrome(string))
  printf("The given string %s is a palindrome\n",string);
  else
  printf("The given string %s is not a palindrome\n",string);
  getch();
  return 0;
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */