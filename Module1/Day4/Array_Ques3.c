#include<stdio.h>
void reverseArray(int arr[],int n){
	int start=0;
	int end=n-1;
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
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
	reverseArray(arr,size);
	printf("\nThe reverse array is:");
	for(i=0;i<size;i++){
		printf("%d ",arr[i]);
	}
    return 0;
}
