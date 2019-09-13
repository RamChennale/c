/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
void main()
{
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  int i=10;
  char ch='A';
  float f=14.0;
  //int *iptr=&i;
  //char*cptr=&ch;
  //float *fptr=&f;
  void*ptr;
  ptr=(int*)&i;
  printf("\ni=%d *ptr=%d",i,*(int*)ptr);
  ptr=(char*)&ch;
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
  printf("\nch=%c *ptr=%c",ch,*(char*)ptr);
  ptr=(float*)&f;
  printf("\nf=%f *ptr=%f",f,*(float*)ptr);

}
/*Naresh i Technologies For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */