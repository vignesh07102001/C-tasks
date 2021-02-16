#include <stdio.h>
int a[10] = {0,0,0,0,0,0,0,0,0,0}; //decimal unit digit b/w 0,1,...,9
long int b;
int repeatation();
long int c;
signed int sum = 0;
int main(){
	scanf("%ld",&b);
	while(b>0){
		c = b%10; //Remainder Every Digit
		a[c] += 1; 
		b = b/10;
		}
	repeatation();
	if (sum == 0)
		printf("%s","-1");
	else
		printf("%d",sum);
}
int repeatation(){
	for (int i=0;i<=9;i++){
		if(a[i]>1){
			sum = sum +1 ;
		}
	}
}

