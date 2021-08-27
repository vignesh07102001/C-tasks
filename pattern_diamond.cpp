/* Diamond Star Pattern
       *
    *     *
*             *
    *     *
       *
*/
#include<stdio.h>
int main(){
	int N,k=1;
	scanf("%d",&N);
	for(int i=1;i<=2*N-1;i++){
		if((i==1)||(i==2*N-1)){
			for(int j=1;j<N;printf(" "),j++);
			printf("*\n");
		}
		else{
			if(i<N){
				for(int j=1;j<=N-i;printf(" "),j++);
				printf("*");
				for(int j=1;j<=k;printf(" "),j++);
				k +=2;
				printf("*\n");
			}
			else{
				for(int j=1;j<=i-N;printf(" "),j++);
				printf("*");
				for(int j=1;j<=k;printf(" "),j++);
				k -=2;
				printf("*\n");
			}
			
		}
	}
}
