#include<stdio.h>
#include<string.h>
int passprint(int b,int c,int d, int f,int g){
	int e=0;
    if(b>100||c>100||d>100||f>100||g>100)
        printf("wh\n");
    else{
        e =b+c+d+f+g;
        switch(e){
            case 400 ... 500:
                printf("O\n");
                break;
            case 300 ... 399:
                printf("A\n");
                break;
            case 250 ... 299:
                printf("B\n");
                break;
             case 200 ... 249:
                printf("C\n");
                break;
             case 0 ... 199:
                printf("E\n");
                break;
        }
    }
}
int main(){
    int N;
    scanf("%d",&N);
    if(N<0)
        printf("Invalid Input");
    else{
        char name[N][100];
        int M1[N];int M2[N];int M3[N];int M4[N];int M5[N];
        for(int i=0;i<N;i++){
        	//scanf("%100s",name[i]);
        	scanf("%d:%d:%d:%d:%d",M1[i],M2[i],M3[i],M4[i],M5[i]);
        }
        for(int i=0;i<N;i++){
        	//printf("%s:",name[i]);
        	
            passprint(M1[i],M2[i],M3[i],M4[i],M5[i]);
        }
    }
}
