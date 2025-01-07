#include<stdio.h>
int main(){
	int a=3107;
	int *ptr=&a;
	printf("gia tri cua a la: %d\n",a);
	printf("vi tri cua a la: %d\n",&a);
	printf("vi tri cua a la: %d\n",ptr);
	printf("gia tri cua a la: %d",*ptr);
}
