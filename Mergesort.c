#include <stdio.h>
#include <stdlib.h>

void mergeSort(int * arraySorted,int * array,int len)
{
	int t;
	if(len == 1)
		return;
	int mid=len/2;
	int * array_l=array,* array_r=array+mid;
	mergeSort(arraySorted,array_l,mid);
	mergeSort(arraySorted+mid,array_r,len-mid);
	while(array_l-array<mid&&array_r-array<len)
	{
		if(*array_l>*array_r)
			*arraySorted++=*array_r++;
		else
			*arraySorted++=*array_l++;
	}
	if(array_l-array<mid)
		while(array_l-array<mid)
			*arraySorted++=*array_l++;
	else
		while(array_r-array<len)
			*arraySorted++=*array_r++;
	for(int i=0;i<len;i++)
				array[i]=arraySorted[i-len];

}
int main(int argc,char *argv[])
{
	int len;
	if(argc==1)
		len=100000;
	else if(argc==2)
		len=atoi(argv[1]);
	int *array=(int *)malloc(sizeof(int)*len);
	int *arraySorted=(int *)malloc(sizeof(int)*len);
	for(int i=0;i<len;i++)
		scanf("%d",&array[i]);
	mergeSort(arraySorted,array,len);
	for(int i=0;i<len;i++)
		printf("%d%s",array[i],(i+1)%10?" ":"\n");

}
