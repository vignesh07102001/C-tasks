#include<stdio.h>
int check(int a);
int main(){
	int n,f,a,b;
	scanf("%d",&n);
	if (n>200 || n<100)
		printf("INVALID NUMBER");
	else{
		f=check(n);
		if(f==1){
			if(n%4==0){
				for(int i=0;i<=3;i++)
					printf("%d\n",n/4);
			}
			else{
				printf("%d\n%d\n",n/4,n/4);
				a = (n - 2*(n/4))/2;
				printf("%d\n%d\n",a,a);
				
			}
		}
		else{
			printf("%d\n%d\n%d\n",n/4,n/4,n/4);
			b = n - 3*(n/4);
			printf("%d",b);
		}
	}	
}
int check(int a){
	if (a%2 ==0)
		return 1;
	else
		return 0;	
}
