#include<stdio.h>
int totalSeconds(char *str){
	int hh,mm,ss,total;
	sscanf(str,"%d:%d:%d",&hh,&mm,&ss);
	printf("\nHour is:%d",hh);
	printf("\nMinute is:%d",mm);
	printf("\nSeconds is:%d",ss);
	total=hh*3600+mm*60+ss;
	//printf("Total Seconds is:%d",total);
	return total;
}
int main(){
	char str[9];
	printf("\nEnter a string in the format of(hh:mm:yy)");
	scanf("%s",str);
    int res=totalSeconds(str);
    printf("\nTotal Second is:%d",res);
	return 0;	
}
