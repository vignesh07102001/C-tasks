/*John has cloth store having color number of shocks and having some of color.
he wants to tell the number of paired shocks */
#include<stdio.h>
int main(){
	int n,sum,t,i,j;
	scanf("%d",&n);
	int color[n];
	for(int i=0;i<n;i++)
		scanf("%d",&color[i]);
	int color1[n];
	 for(i=0;i<n;i++)
     {
          for(j=i+1;j<n;j++)
          {
               if(color[i]>color[j])
               {
                    t=color[i];
                    color[i]=color[j];
                    color[j]=t;
               }
          }
     }
     for(i=0;i<n;i=j)
     {
          int num=color[i];
          int c=1;
          for(j=i+1;j<n;j++)
          {
               if(color[j]!=num)
                    break;
               else
                    c++;
          }
          color1[i] = c;
     }
     return 0;
     for(int i=0;i<n;i++){
     	sum = color1[i]/2 + sum;
	 }
	 if(sum>0)
	 	printf("%d",sum);
	else
		printf("-1");
	
}

