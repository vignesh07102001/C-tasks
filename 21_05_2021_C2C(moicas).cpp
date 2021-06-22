#include<stdio.h>
int b,n,m;
int main(){
	int sum=-1,sum1=0;
	printf("INPUT:\n");
	scanf("%d %d %d",&b,&n,&m);
	int k_models[n];
	int USB_models[m];
	for (int i=0;i<n;i++)
		scanf("%d",&k_models[i]);
	for (int i=0;i<m;i++)
		scanf("%d",&USB_models[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			sum1=k_models[i]+USB_models[j];
			if (sum1>=b)
				continue;
			else if(sum1>sum)
				sum = sum1;		
			}
		}
	printf("OUTPUT:\n");
	printf("%d",sum);
	}
