#include <stdio.h>
int countBits(int arr[],int size){
	int count=0,i;
	for(i=0;i<size;i++){
		int x=arr[i];
		while(x>0){
			count+=x & 1;
			x>>=1;
		}
	}
	return count;
	
}
int main(){
	int arr[]={0x1,0xF4,0x10001};
	int size=sizeof(arr)/sizeof(arr[0]);
	int res=countBits(arr,size);
	printf("Total number of set bits is:%d",res);
	return 0;
	
	
}
