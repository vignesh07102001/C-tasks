#include <stdio.h>

int main()
{
    
    int n,k,tmp;
    scanf("%d", &n);
	int arr1[n];
    for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr1[i]);
	}
	scanf("%d",&k);

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr1[j] <arr1[i])
            {
                tmp = arr1[i];
                arr1[i] = arr1[j];
                arr1[j] = tmp;
            }
        }
    }
    printf("%d",arr1[k-1]);
}
