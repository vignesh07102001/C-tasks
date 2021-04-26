#include<stdio.h>
int  a,b,c,d,e,f;
float del,delx,dely,x,y;
int main(){
	scanf("%d %d %d",&a,&b,&c);
	scanf("%d %d %d",&d,&e,&f);
	del = ((a*e)-(b*d));
	delx=((c*e)-(b*f));
	dely=((a*f)-(c*d));
	x = delx/del;
	y = dely/del;
	printf("The value of X: %f\n",x);
	printf("The value of Y: %f",y);
	return 0 ;
}
