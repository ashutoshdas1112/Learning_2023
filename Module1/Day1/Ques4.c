#include<stdio.h>
int main(){
	int Number1,Number2,choice;
	int adition,substract,multiplication,mod;
	float division;
	printf("Enter Number1:");
	scanf("%d",&Number1);
	printf("Enter Number2:");
	scanf("%d",&Number2);
	printf("\nEnter Your Choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			adition=Number1+Number2;
		    printf("\nThe sum of two number is:%d",adition);
		    break;
		case 2:
		    substract=Number1-Number2;
		    printf("\nThe substraction of two number is:%d",substract);	
		    break;
		case 3:
		    multiplication=Number1-Number2;
		    printf("\nThe substraction of two number is:%d",multiplication);	
		    break;
		case 4:
			division=Number1/Number2;
			printf("\nThe division of two number is:%f",division);
			break;
		case 5:
			mod=Number1%Number2;
			printf("\nThe mod of two number is:%d",mod);
			break;
		default:
		printf("Invalid ");	
	}
	return 0;

}
