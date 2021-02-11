#include<stdio.h>
int a,b;
int main(){
	printf("Enter the first num \n");
	scanf("%d",&a);
	printf("Enter the second num \n");
	scanf("%d",&b);
	int c = 0;
	for(int i =1;i<=b;i++){
	c = c + a;
	}
	printf("AxB = %d",c);
	}

