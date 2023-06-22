#include<stdio.h>
int maxAndMin(int arr[],int n){
	int max=arr[0];
	int min=arr[0];
	int i;
	for(i=0;i<n;i++){
		if(arr[i]>max){
			max=arr[i];
		}
		if(arr[i]<min){
			min=arr[i];
		}
	}
	printf("\nMax value of the array is:%d",max);
	printf("\nMax value of the array is:%d",min);
	
}
int main(){
	int size,i;
	int arr[size];
	printf("\nEnter the size of array:");
	scanf("%d",&size);
	printf("\nEnter the array elements :");
	for(i=0;i<size;i++){
		scanf("%d",&arr[i]);
	}
	printf("\nArray elements are:");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
	maxAndMin(arr,size);
	return 0;
	
}
