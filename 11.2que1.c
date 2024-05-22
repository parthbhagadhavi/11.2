#include<stdio.h>
int str(int *arr,int size){
    printf("Your revers string is\n");
  for(int i = size;i>=0;i--){
printf("%d\n",*(arr + i));
  }
}




main(){
int size;
printf("enter the array size \n");
scanf("%d",&size);

int arr[size];
for(int a=0;a<=size;a++){
printf("b[%d]=",a);
scanf("%d",&arr[a]);

}
str(arr,size);
}

 
 
    