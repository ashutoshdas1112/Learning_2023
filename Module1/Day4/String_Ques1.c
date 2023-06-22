#include<stdio.h>
#include<string.h>
int main(){
	char str[40];
	scanf("%s",str);
	//fgets(str,40,stdin);
	int i,len;
	len=strlen(str);
	for(i=0;str[i]!='\0';i++){
		if(str[i]>='A' && str[i]<='Z'){
			str[i]=str[i]+32;
		}else{
			str[i]=str[i]-32;
		}
		
	}
	printf("\n%s",str);
}
