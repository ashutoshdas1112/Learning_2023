#include<stdio.h>
	struct time{
		int hours;
		int minutes;
		int seconds;
	};
struct time timeDifference(struct time t1,struct time t2){
	struct time diff;
	int t1sec=t1.hours*3600+t1.minutes*60+t1.seconds;
	int t2sec=t2.hours*3600+t2.minutes*60+t2.seconds;
	int diffSec=t1sec-t2sec;
	
	diff.hours=diffSec/3600;
	diffSec %= 3600;
    diff.minutes = diffSec / 60;
    diff.seconds = diffSec % 60;
    return diff;
	
}
int main(){
	struct time t1,t2,diff;
	printf("\nEnter first time period(hours minutes seconds)");
	scanf("%d %d %d",&t1.hours,&t1.minutes,&t1.seconds);
    printf("\nEnter second time period(hours minutes seconds)");
	scanf("%d %d %d",&t2.hours,&t2.minutes,&t2.seconds);
	diff=timeDifference(t1,t2);
	printf("The difference is: %d hours, %d minutes, %d seconds\n", diff.hours, diff.minutes, diff.seconds);
	return 0;
}

