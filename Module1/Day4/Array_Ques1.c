#include<stdio.h>
int sumAndAvg(int arr[],int n){
	int sum=0,i;
	float avg;
	for(i=0;i<n;i++){
		sum=sum+arr[i];
	}
	avg=sum/n;
	printf("\nThe sum of the array is:%d",sum);
	printf("\nThe average of array is:%.2f",avg);
}
int main(){
	int size,i;
	int arr[size];
	printf("\nEnter the size of array:");
	scanf("%d",&size);
	printf("\nEnter the array eleemnts:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nThe array elements are:");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	sumAndAvg(arr,size);
	return 0;
}
