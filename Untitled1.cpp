#include<stdio.h>
float derive(int a,int b[],int c,float d[]){
	for(int i=0;i<c;i++){
		if(a==b[i]){
			return d[i];
		}
	}
}
int main(){
	int N;
	float price1;
	scanf("%d",&N);
//No of items available
	int item_code[N];
	float price[N],tax[N];
	for(int i=0;i<N;scanf("%d|%f|%f",&item_code[i],&price[i],&tax[i]),i++);
//No of items purchased
	int N1;
	scanf("%d",&N1);
	int item_code1[N1],Quantity[N1];
	for(int i=0;i<N1;scanf("%d|%d",&item_code1[i],&Quantity[i]),i++);
//No of Possible denomination
	int N2;
	scanf("%d",&N2);
	int denomination[N2],Dcount[N2],Dcount1[N2]={0};
	for(int i=0;i<N2;scanf("%d|%d",&denomination[i],&Dcount[i]),i++);
//cash paid
	int cashpaid;
	scanf("%d",&cashpaid);
	printf("==START_BILL==\n");
	float totalprice2,totalprice1,tax2;
	for(int i=0;i<N1;i++){
		price1 =derive(item_code1[i],item_code,N,price);
		float total_price =price1*Quantity[i];
		float tax1 =derive(item_code1[i],item_code,N,tax);
		float paytax = (tax1*total_price)/100;
		printf("%d|%.2f|%d|%.2f|%.2f|%.2f|%.2f\n",item_code1[i],price1,Quantity[i],total_price,tax1,paytax,total_price+paytax);
		totalprice1 +=total_price;
		tax2 +=paytax;
		totalprice2 +=(total_price+paytax);		
	}
	printf("\n%.2f\n",totalprice1);
	printf("%.2f\n",tax2);
	printf("%.2f\n",totalprice2);
	totalprice2 = (int)totalprice2;
	printf("%.2f\n",totalprice2);
	totalprice2= (float)totalprice2;
	float balance= cashpaid -totalprice2;
	printf("%.2f\n",balance);
	balance=(int)balance;
	printf("\n");
	for(int i=0;i<N2;i++){
		int count =0;
		if((balance>denomination[i])&&(Dcount[i]>0)){
			count = balance/denomination[i];
			if(count<Dcount[i])
				{
				balance =balance-(count*denomination[i]);
				Dcount[i]=Dcount[i]-count;
				Dcount1[i]=Dcount1[i]+count;
			}
			else{
				balance= balance -(Dcount[i]*denomination[i]);
				Dcount1[i] +=Dcount[i];
				Dcount[i] =0;
				}
			}
		}
	for(int i=0;i<N2;i++){
		if(Dcount1[i]>0){
			printf("%d-%d\n",denomination[i],Dcount1[i]);
		}
	}
	printf("==End_Bill==");
}


