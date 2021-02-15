#include <stdio.h>
int a[10] = {0,0,0,0,0,0,0,0,0,0}; //decimal unit digit b/w 0,1,...,9
long int b;
int sortdescend(); //function definition for descending order
int repeatation();
long int c;
int main(){
	//printf("Enter the key\n");
	scanf("%ld",&b);
	while(b>0){
		c = b%10; //Remainder Every Digit
		a[c] += 1; 
		b = b/10;
		}
	sortdescend(); //function call
	if (a[0] ==1)
		printf("%s","-1");
	else
		repeatation();
}
int repeatation(){
	int sum = 0;
	for (int i=0;i<=9;i++){
		if(a[i]>1){
			sum = sum +1 ;
		}
	}
	printf("%d",sum);
}
int sortdescend(){
		for (int i=0;i<=9;++i) 
        {
        	for (int j=i+1;j<=9;++j) 
            {
            	if (a[i]<a[j]) 
            	{
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
}
