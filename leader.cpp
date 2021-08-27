#include<stdio.h>
int n,result=0;
int main(){
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;scanf("%d",&array[i]),i++);
	for(int i=0;i<n;i++){
		if(array[i]<array[i+1]){
			result +=1;
		}
	}
	printf("%d",result);
}

