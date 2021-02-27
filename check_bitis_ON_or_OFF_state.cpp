/* find the nth digit from LSB of 'n' bit number is a ON state or OFF state
ON state ==1 and OFF state == 0;
By K.S.Vignesh EEE,KNCET.*/
#include <stdio.h>
int power(int a,int b);
int bit,number,temp,a; //bit = no of bit ;
int main(){
	printf("Enter the number of bit:");
	scanf("%d",&bit);
	a = (power(2,bit))-1;
	printf("Enter the number betwen 0 to %d: ",a);
	scanf("%d",&number);
	for (int i=0;i<bit;i++){
		temp=1<<i;
		if((number|temp)==number)
			printf("The digit %d from LSB is ON state\n",i);
		else
			printf("The digit %d from LSB is OFF state\n",i);
	}
}
int power(int a,int b){
	int c=1;
	while(b!=0){
		c = c*a;
		b = b-1;
	}
	return c;
}

