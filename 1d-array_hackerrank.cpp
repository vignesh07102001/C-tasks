#include<stdio.h>
int n=0;
int main(){
	scanf("%d",&n);
	int b[n];
	for(int i=0;i<n;i++)
		scanf("%d",&b[i]);
	int sum =0;
	for(int i=0;i<n;i++){
		sum += b[i];
	}
	printf("%d",sum);
	return 0;
}
