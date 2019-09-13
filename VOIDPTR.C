/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
  int i=100;
  char ch='A';
  float f=16.8;
  void *ptr;
  ptr=(int*)&i;
  printf("\n%d %d",i,*(int*)ptr);
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  ptr=(char*)&ch;
  printf("\n%c %c",ch,*(char*)ptr);
  ptr=(float*)&f;
  printf("\n%f %f",f,*(float*)ptr);

}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */