/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void abc(char *ptr)
{
   puts(ptr);
   if(*ptr)
    abc(ptr+1);
   puts(ptr);
}
void main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  char str[10]="Welcome";
  abc(str);
}

/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */