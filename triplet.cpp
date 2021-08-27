/* K.S.Vignesh Task-1 Triplet by Felix Sir
sample :{1,5,3,2} 1+5 not in array 1+3 not in array 
*/
#include<stdio.h>
int n,count;
int check(int ,int[]);
int main(){
	scanf("%d",&n);
	int array[n];
	for(int i=0;i<n;scanf("%d",&array[i]),i++);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(check(array[i]+array[j],array)==1)
				count +=1;
		}
	}
	printf("%d",count);
}
int check(int i,int a[]){
	int b=0;
	for(int j=0;j<n;j++){
		if(i==a[j])
			b +=1;
	}
	if (b>0)
		return 1;
	else
		return 0;
}

