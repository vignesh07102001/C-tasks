#include<stdio.h>
int main(){
	int array_size,result;
	scanf("%d",&array_size);
	int array[array_size];
	int array1[array_size];
	for(int i=0;i<array_size;scanf("%d",array+i),i++);
	for(int i=0;i<array_size;i++){
		int count=0;
		for(int j=0;j<array_size;j++){
			if(array[i]==array[j])
				++count;
		}
		array1[i]=count;
	}
	for(int i=0;i<array_size;i++){
		if(array1[i]>1)
			continue;
		result =array[i];
	}
	printf("%d",result);
}
