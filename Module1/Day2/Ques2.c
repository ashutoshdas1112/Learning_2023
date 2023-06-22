#include<stdio.h>
void swapNumber(int *a,int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int num1,num2;
	printf("\nEnter the value of num1 and num2:");
	scanf("%d %d",&num1,&num2);
	swapNumber(&num1,&num2);
	printf("\nAfter swapping the two number is: %d %d",num1,num2);
	return 0;
	
}
