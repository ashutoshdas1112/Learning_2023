#include<stdio.h>
struct box{
	float length;
	float  width;
	float height;
};
int volumeAndAreaOfBox(struct box* boxPtr);
int main(){
	struct box b;
	struct box* boxPtr=&b;
	printf("\nEnter the length of the box:");
	scanf("%f",&boxPtr->length);
	printf("\nEnter the weight of the box:");
	scanf("%f",&boxPtr->width);
	printf("\nEnter the height of the box:");
	scanf("%f",&boxPtr->height);
	volumeAndAreaOfBox(boxPtr);	
	return 0;
}
int volumeAndAreaOfBox(struct box* boxPtr){
	float volume=boxPtr->length*boxPtr->width*boxPtr->height;
    float	surfaceArea = 2 * (boxPtr->length * boxPtr->width + boxPtr->length * boxPtr->height + boxPtr->width * boxPtr->height);
	printf("\nThe volume of box is:%.2f",volume);
	printf("\nThe surface of box is:%.2f",surfaceArea);
}
