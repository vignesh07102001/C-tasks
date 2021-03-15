#include<stdio.h>
int function(int n,int a,int b,int c); //function definition
int sum(int x); //function defintion
int n,a,b,c;
int main(){
	scanf("%d",&n);
	scanf("%d %d %d",&a,&b,&c);
	int ans = function(n,a,b,c);
	printf("%d",ans);	
}
function(int n,int a,int b,int c){
	int sum =0;
	if (n==1)
		sum=a;
	else if (n==2)
		sum=b;
	else if (n==3)
		sum=c;
	else	
		sum = function(n-1,a,b,c)+function(n-2,a,b,c)+function(n-3,a,b,c) ;
	return sum;		
}
