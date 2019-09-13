/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
#include<stdio.h>
int main(){
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
int a[50],size,num,i,pos,temp;
printf("\nEnter size of the array: ");
scanf("%d",&size);
printf("\nEnter %d elements in to the array: ",size);
for(i=0;iscanf("%d",&a[i]);
printf("\nEnter position and number to insert: ");
scanf("%d %d",&pos,&num);
i=0;
while(i!=pos-1)
i++;
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */
temp=size++;
while(i{
a[temp]=a[temp-1];
temp--;
}
a[i]=num;
for(i=0;iprintf(" %d",a[i]);
return 0;
}
/*For Any Doubts contact Mr.Balu Email:balu.bhig@gmail.com */