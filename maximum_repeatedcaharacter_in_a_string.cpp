/*maximum repeated character in a String*/
#include<stdio.h>
#include<string.h>
int main(){
	int b[128]={};
	char a[1000];
	gets(a);
	for(int i=0;i<strlen(a);i++){
		b[a[i]]++;	
	}
	int max=1;
	for(int i=0;i<=127;i++){
		if (max<b[i])
			max =i;
	}
	if(max>1)
		printf("%c",max);
	else
		printf("No Repeated Characters");
}
