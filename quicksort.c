#include <stdio.h>
#include <stdlib.h>
inline void swap(int *a,int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
}
void quicksort(int *array,int len)
{
    if(len<=1)
        return ;
    int mid=array[len-1];
    int i=0,j=0;
    while(j<len)
    {
        if(array[j]<=mid)
        {
            swap(&array[i],&array[j]);
            i++;
        }
        j++;
    }
    i--;
    quicksort(array,i);
    quicksort(array+i+1,len-i-1);

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
        quicksort(array,len);
        for(int i=0;i<len;i++)
                printf("%d%s",array[i],(i+1)%10?" ":"\n");

}
