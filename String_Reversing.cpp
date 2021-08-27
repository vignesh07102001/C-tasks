#include<stdio.h>
int print(int );
int nxtprime(int );
int main(){
	int rows;
	printf("Enter the number of Rows:");
	scanf("%d",&rows);
	for(int i=1;i<=rows;i++){
		print(i);
		printf("\n");
	}
}
int print(int a){
	int b=1;
	static int prime=2;
	while(b<=a){
		printf("%d\t",prime);
		prime =nxtprime(prime);		
		b++;
	}	
}
int nxtprime(int n){
	for(int i=n+1;i>0;i++){
		int count=0;
		for(int j=1;j<=i;j++){
			if(i%j==0)
				count++;
		}
		if(count==2){
			return i;
			break;
		}
	}
}

