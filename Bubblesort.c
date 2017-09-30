#include <stdio.h>
#include <stdlib.h>

void bubleSort(int * array,int len)
{
	int t;
	for(int i=0;i<len;i++)
		for(int j=0;j<len-1-i;j++)
			if(array[j]>array[j+1])
				{
					t=array[j];
					array[j]=array[j+1];
					array[j+1]=t;
				}
}
int main(int argc,char *argv[])
{
	int len;
	if(argc==1)
		len=100000;
	else if(argc==2)
		len=atoi(argv[1]);
	int *array=(int *)malloc(sizeof(int)*len);
	for(int i=0;i<len;i++)
		scanf("%d",&array[i]);
	bubleSort(array,len);
	for(int i=0;i<len;i++)
		printf("%d%s",array[i],(i+1)%10?" ":"\n");

}
