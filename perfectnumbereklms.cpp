#include<stdio.h>
int perfect(long long int a){
  long long int sum=0;
  for(long long int i=1;i<a;i++){
      if(a%i==0)
        sum += i;
  }
  if(sum==a)
    return 1;
  else
	return 0;
}
int main(){
    long long int intial,last,count=0;
    scanf("%ld",&intial);
    scanf("%ld",&last);
    if(intial<0||last<0)
        printf("Invalid Input");
    else{
    	for(long long int i=intial;i<=last;i++){
        	if(perfect(i)==1){
            	printf("%ld\n",i);
            	count++;
       		}
    	}
    	if(count==0)
        	printf("-1");
    }
}
