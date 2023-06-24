#include<stdio.h>
struct Students{
	char name[50];
	int age;
	float marks;
	
};
int main(){
	int n,i;
	printf("\nEnter the number of students:");
	scanf("%d",&n);
	struct Students* s1=(struct Students*)malloc(n*sizeof(struct Students));
	printf("\nEnter the details of student:");
	for(i=0;i<n;i++){
		printf("\nDetails of student:%d",i+1);
		printf("\nEnter the name of student:");
		scanf("%s",s1[i].name);
		printf("\nEnter the age of student:");
		scanf("%d",&(s1[i].age));
		printf("\nEnter the mark of student:");
		scanf("%f",&(s1[i].marks));
	}
	printf("\nStudent details are:");
	for(i=0;i<n;i++){
	   printf("\nDetails of student:%d",i+1);
	   printf("\nName is:%s:",s1[i].name);
	   printf("\nAge is:%d:",s1[i].age);
	   printf("\nMark is:%.2f:",s1[i].marks);
	}
	return 0;
}
