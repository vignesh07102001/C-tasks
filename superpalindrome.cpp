#include<stdio.h>
#include<math.h>
int palindrome(long int b){
    long int a=b,sum=0;
    while(a){
        sum =(sum*10)+(a%10);
        a /=10;
    }
    
    if(sum==b)
        return 1;
    else
        return 0;
}
int checksquareroot(long int a){
    long int b;
    float c;
    c=sqrt((double)a);
    b=c;
    if(b==c){
    	if(palindrome(b)==1)
    		return 1;
    	}
    return 0;
}
int main(){
    long int L,R,count=0;
    scanf("%ld %ld",&L,&R);
    for(long int i=L;i<=R;i++){
        if((palindrome(i)==1)&&(checksquareroot(i))){
            count +=1;
        }
    }
    printf("%ld",count);
    
}
