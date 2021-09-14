#include<stdio.h>
int main(){
	int N,j=0;//represent size
	scanf("%d",&N);
	int arr[N],indexarr[N];
	for(int i=0;i<N;scanf("%d",arr+i),i++);
	for(int i=0;i<N;scanf("%d",indexarr+i),i++);
	while(j!=N){
		for(int i=0;i<N;i++){
			if(j==indexarr[i])
				printf("%d ",arr[i]);
		}
		j++;
	}
	printf("\n");
	int a=0;
	for(int i=0;i<N;i++){
		for(int j=i+1;j<N;j++){
			if(indexarr[i]>indexarr[j]){
				a=indexarr[i];
				indexarr[i]=indexarr[j];
				indexarr[j]=a;
			}
		}
	}
	for(int i=0;i<N;printf("%d ",indexarr[i]),i++);
}
