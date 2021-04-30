#include<stdio.h>
int n;
int main(){
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		long int a=1;
		for(int j=1;j<=i;j++){
			a = a*j;
		}
		printf("%d !=%d\n",i,a);
	}
	return 0;
}
