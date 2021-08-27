/*Printing Nth Prime Number*/
#include<stdio.h>
int nxtprime(int );
int main(){
	int a,c;
	c=2;
	scanf("%d",&a);
	while(a>1){
		c = nxtprime(c);
		a--;
	}
	printf("%d",c);
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
