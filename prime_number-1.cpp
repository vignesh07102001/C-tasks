/*Checking Whether the number is prime number or not 
VIGNESH .K.S KNCET EEE*/
#include<stdio.h>
int n,count=0;
int main(){
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i==0){
			count += 1;
			if (count ==1)
				printf("The number is Divisible by ");
			printf("%d ",i);
		}
	}
	if (count ==0)
		printf("Given N is a Prime number");
}
