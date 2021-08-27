#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d",&a);
	int sum=0;
	c=a;
	while(a>0){
		b = a%10;
		sum +=(b*b*b);
		a =a/10;
	}
	if(sum==c)
		printf("Amstrong NUmber");
	else
		printf("Not an Amstrong NUmber");
		
}
