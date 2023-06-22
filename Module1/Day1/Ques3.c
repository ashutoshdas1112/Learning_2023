#include<stdio.h>
#include<string.h>
int main(){
	int rollNo;
	int total;
	float percentage;
	char name[100];
	printf("\nEnter your name :");
	fgets(name,100,stdin);
	printf("\nEnter the rollno:");
	scanf("%d",&rollNo);
	int Physics_mark,math_mark,Chemistry_mark;
	printf("\nEnter the mark of Physics out of 100:");
	scanf("%d",&Physics_mark);
	printf("\nEnter the mark of Chemistry out of 100:");
	scanf("%d",&math_mark);
	printf("\nEnter the mark of Physics out of 100:");
	scanf("%d",&Chemistry_mark);
	total=Physics_mark+math_mark+Chemistry_mark;
	percentage=(total*100/300);
	printf("\n-------------------------------------");
	printf("\nThe Suummary is:");
	printf("\nRoll.No is:%d",rollNo);
	printf("\nName is:%s",name);
	printf("\nTotal mark is:%d",total);
	printf("\nTotal percentage is:%.2f",percentage);
	return 0;
}
