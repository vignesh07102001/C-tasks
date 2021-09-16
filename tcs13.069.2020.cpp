/*Given N gold wires, each wire has a length associated with it.
 At a time, only two adjacent small wires assembled at the end of a large wire and the cost of forming is the sum of their length.
  Find the minimum cost when all wires are assembled to form a single wire.
For Example: Suppose, Arr[] = {7, 6, 8, 6, 1, 1} cost = 2 
(7, 6, 8, 6, 2)-(7, 6, 8, 8), cost = 8
 (7, 6, 8, 8)-(13, 8, 8), cost - 13 
 (13,8,8)-(13, 16), cost=16 
 (13, 16)-(29), cost = 29 
 2+8+13+16=29=68
*/
#include<stdio.h>
int main(){
	int N,max=0,min=0;
	scanf("%d",&N);
	char arr[N];
	int a[127]={};
	for(int i=0;i<N;scanf("%c",&arr[i]),i++);
	for(int i=0;i<N;i++){
		a[arr[i]]++;
	}
	for(int i=0;i<127;i++){
		if(a[i]%2==1){
			min =a[i];
			if(max<min)
				max =min;
		}			
	}
	printf("%c",max);
}
