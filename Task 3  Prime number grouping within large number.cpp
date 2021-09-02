#include<stdio.h>
int len(int a){
    int count =0;
    while(a){
        a /=10;
        count++;
    }
    return count;
}
int exponent(int a){
    int multiply=1;
    for(int i=0;i<a;multiply *=10,i++);
    return multiply;
}
int prime(int a){
    int count =0;
    for(int i=1;i<=a;i++){
        if(a%i==0)
            count +=1;
    }
    if (count==2)
        return 1;
    else
        return 0;
}
int main(){
    long int N;
    scanf("%ld",&N);
    int K,a,count=0;
    scanf("%d",&K);
    int len1 = len(N);
    a=exponent(len1-K-1);
    K=exponent(K);
    while(N){
        if(prime(N/a)==1){
            printf("%ld\n",N/a);
            count++;
        }
        N =N%a;
        a =a/K;
    }
    /*if(count==0)
        printf("NA");*/
}

