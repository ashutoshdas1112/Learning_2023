#include<stdio.h>
int findSmallAndLarge(int arr[],int n){
	int smallDigit=9;
	int largeDigit=0;
	int i;
	for(i=0;i<n;i++){
		int num=arr[i];
		while(num!=0){
			int digit=num%10;
			if(digit<smallDigit){
				smallDigit=digit;
			}
			if(digit>largeDigit){
				largeDigit=digit;
			}
			num/=10;
		}
	}
	printf("\nSmallest Digit is:%d",smallDigit);
	printf("\nLargest Digit is:%d",largeDigit);
}
int main(){
	int n,i;
	int arr[n];
	printf("\nEnter the size of array:");
	scanf("%d",&n);
	printf("\nEnter the elements of array:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	findSmallAndLarge(arr,n);
	return 0;
}
