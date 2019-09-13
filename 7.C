/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
char str[70];
FILE *p;
if((p=fopen("string.txt","r"))==NULL){
printf("\nUnable t open file string.txt");
exit(1);
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
}
while(fgets(str,70,p)!=NULL)
puts(str);
fclose(p);
return 0;
}

/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */