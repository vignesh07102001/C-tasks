/*N th fibonacci Series*/
#include<stdio.h>
int main(){
	int n,final=0;
	scanf("%d",&n);
	int fe=0,se=1;
	while(n>=1){
		final = fe+se;
		fe = se;
		se = final;
		n--;
	}
	printf("%d",fe);
}
