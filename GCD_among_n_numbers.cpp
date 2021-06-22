/* GCD among n numbers*/
#include<stdio.h>
int GCD(int [],int ,int );
int main(){
	int n,min,result;
	printf("----This Program is Designed for Findout GCD among N number---\n");
	printf("Enter the number of terms :");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the %d terms:\n",n);
	scanf("%d",&arr[0]);
	min = arr[0];
	for(int i=1;i<n;i++){
		scanf("%d",&arr[i]);
		if (arr[i]<min)
			min=arr[i];		
	}
	result = GCD(arr,min,n);
	printf("\nGCD of Given numbers:%d",result);
}
int GCD(int a[],int b,int c){
	int r=1;
	for(int i=1;i<=b;i++){
		int k=0;
		for(int j=0;j<c;j++){
			if(a[j]%i !=0)
				break;
			else
				k++;
				continue;
		}
		if (k==c)
			r=i;
	}
	return r;
}
