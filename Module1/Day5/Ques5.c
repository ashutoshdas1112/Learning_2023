#include<stdio.h>
#include<string.h>
struct details{
	char name[50];
	int id;
};
void swapStructure(struct details* details1,struct details* details2){
	struct details temp;
	strcpy(temp.name,details1->name);
	strcpy(details1->name,details2->name);
	strcpy(details2->name,temp.name);
	
	temp.id=details1->id;
	details1->id=details2->id;
	details2->id=temp.id;
	
	
}
int main(){
	struct details details1,details2;
	printf("\nEnter the name :");
	scanf("%s",details1.name);
	printf("\nEnter the id:");
	scanf("%d",&details1.id);
	printf("\nEnter the name :");
	scanf("%s",details2.name);
	printf("\nEnter the id:");
	scanf("%d",&details2.id);
	printf("\nBefore swapping the details is:");
	printf("\nName:%s,id:%d",details1.name,details1.id);
	printf("\nName:%s,id:%d",details2.name,details2.id);
	swapStructure(&details1,&details2);
    printf("\nAfter swapping the details is:");
	printf("\nName:%s,id:%d",details1.name,details1.id);
	printf("\nName:%s,id:%d",details2.name,details2.id);
	return 0;
}
