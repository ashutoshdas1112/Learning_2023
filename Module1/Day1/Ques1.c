#include<stdio.h>
int biggestNumber(int a,int b){
	int big_number;
	if(a>b){
		big_number=a;
	}else{
		big_number=b;
	}
}
int main(){
	int num1,num2,res;
	printf("\nEnter two number:");
	scanf("%d %d",&num1,&num2);
	res=biggestNumber(num1,num2);
	printf("\nThe biggest number is:%d",res);
	return 0;
	
}
