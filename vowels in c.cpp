#include<stdio.h>
#include<string.h>
int main(){
	char c[5] ={'a','e','i','o','u'};
	int b[5]={0,0,0,0,0};
	char a[1000];
	gets(a);
	for(int i=0;i<strlen(a);i++){
		if (a[i]==65 || a[i] ==97)
			b[0]++;
		else if (a[i]==69 || a[i] ==101)
			b[1]++;
		else if (a[i]==73 || a[i] ==105)
			b[2]++;
		else if (a[i]==79 || a[i] ==111)
			b[3]++;
		else if (a[i]==85 || a[i] ==117)
			b[4]++;
		else
			continue;
	}
	for(int i=0;i<5;printf("%c--%d\n",c[i],b[i]),i++);		
}
