#include<stdio.h>
int main(){
	int N,j=0;//represent size
	scanf("%d",&N);
	int arr[N],updarr[N];
	for(int i=0;i<N;scanf("%d",arr+i),i++);
	(arr[0]>arr[1])?updarr[0]=arr[0]:updarr[0]=arr[1];
	(arr[N-1]>arr[N-2])?updarr[N-1]=arr[N-1]:updarr[N-1]=arr[N-2];
	if((arr[0]<arr[1])&& (arr[N-1]>arr[N-2])){
		for(int i=2;i<N;i++)
			updarr[++j]=arr[i];
	}
	else{
		for(int i=0;i<N;i++)
			updarr[++j]=arr[i];
	}
	for(int j=0;j<N;printf("%d ",updarr[j]),j++);
}
