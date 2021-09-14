#include<stdio.h>
int main(){
	int dim1,dim2;
	scanf("%d %d",&dim1,&dim2);
	int arr[dim2][dim1];
	int column[dim1],row[dim2];
	
	//getting an array
	for(int i=0;i<dim2;i++){
		for(int j=0;j<dim1;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	//checking row wise minimum
	int k=0;
	for(int i=0;i<dim2;i++){
		int a=arr[i][0];
		for(int j=0;j<dim1;j++){
			if(arr[i][j]<a)
				a=arr[i][j];
		}
		row[k++]=a;
	}	
	//checking colum wise max
	k=0;
	for(int i=0;i<dim1;i++){
		int a=arr[i][0];
		for(int j=0;j<dim2;j++){
			if(arr[i][j]>a)
				a=arr[i][j];
		}
		column[k++]=a;
	}
	int count=0;
	for(int i=0;i<dim1;i++){
		for(int j=0;j<dim2;j++){
			if(column[j]==row[i]){
				printf("%d",row[i]);
				count++;
			}
		}
	}
	if(count ==0)
		printf("-1");
}
