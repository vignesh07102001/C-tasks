/* Find maximum Sum of Two Non-Overlapping Subarrays
Given an unsorted array A[] of non-negative integers, return the maximum sum of elements in two non-overlapping (contiguous) subarrays, which have lengths L and M.
Note: The L-length subarray could occur before or after the M-length subarray
Test case 1
	Enter the array size: 9
	Input array: [0,6,5,2,2,5,1,9,4], L = 1, M = 2
	Output: 20
	Explanation: One choice of sub arrays is [9] with length 1, and [6,5] with length 2.
Test case 2
	Enter the array size: 9
	Input array: [3,8,2,3,2,1,8,9,0], L = 3, M = 2
	Output: 30
	Explanation: One choice of sub arrays is [3,8,2] with length 3, and [8,9] with length 2.
Test case 3
	Input array: [2,1,2,3,5,6,1,0,8,9], L = 2, M = 4
	Output: 33
	Explanation: One choice of sub arrays is [8,9] with length 2 and [2,3,5,6] with length 4.*/
#include<stdio.h>
int add(int a,int c[],int d){
	int sum=0;
	for(int i=0;i<a;i++)
		sum = sum + c[i+d];
	return sum;
}

int max(int lap,int* b,int size){
	int max=0,address=0;
	for(int i=0;i<size;i++){
		int sum=0;
		sum =add(lap,b,i);
		if(sum>max){
			max=sum;
			address=i;
		}
		if(size-i-1<lap){
			for(int j=0;j<lap;b[address+j]=0,j++);
			return max;
		}
	}
}
int main(){
	int a,L,M,c=0,d=0,temp;
	scanf("%d",&a);
	int array[a];
	for(int i=0;i<a;scanf("%d",array+i),i++);
	scanf("%d",&L);
	scanf("%d",&M);
	if(L>M){
		temp=L;
		L=M;
		M=temp;
		
	}
	c=max(L,array,a);
	d=max(M,array,a);
	printf("\n%d\n",(c+d));
	return 0;
}
