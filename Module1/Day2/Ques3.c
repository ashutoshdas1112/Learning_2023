#include<stdio.h>
int addAlternateElements(int arr[],int size){
	int sum=0;
	int i;
	for(i=0;i<size;i+=2){
		sum+=arr[i];
	}
	return sum;
}
int main(){
	int size;
	printf("\nEnter the size of array:");
	scanf("%d",&size);
	int arr[size];
	int i;
	printf("\nEnter the elemnts of array:");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nThe array elements are:");
	for(i=0;i<size;i++){
		printf(" %d",arr[i]);
	}
	int res=addAlternateElements(arr,size);
	printf("\nThe sum of alternate elemnts in the array is:%d",res);
}
