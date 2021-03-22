#include<stdio.h>
int n=0;
int k=0;
int main(){
	scanf("%d %d",&n,&k);
	int S[n];
	int a = 0;int b = 0;int c = 0;
	for (int i=0;i<n;i++)
		S[i] = i+1;
	printf("\n");
	
	for(int i=0;i<(n-1);i++){
		for(int j=i+1;j<n;j++){
			if((S[i]&S[j])<k)
			{
				if(a<(S[i]&S[j]))
					a = (S[i]&S[j]);
			}
			if((S[i]|S[j])<k)
			{
				if(b<(S[i]|S[j]))
					b = (S[i]|S[j]);	
			}
			if((S[i]^S[j])<k)
			{
				if(c<(S[i]^S[j]))
					c = (S[i]^S[j]);
			}
		}
	}
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
}
