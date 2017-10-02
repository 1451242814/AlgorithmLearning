#include <iostream>
#include <cstdlib>

using namespace std;

namespace HeapSort{
inline int left(int i)
{
return 2*i+1;
}
inline int right(int i)
{
    return 2*i+2;
}

void maxHeapfiy(int *array,int i,int len)
{
    int largest=i;
    if(left(i)<len&&array[left(i)]>array[largest])
        largest=left(i);
    if(right(i)<len&&array[right(i)]>array[largest])
        largest=right(i);
    if(largest!=i)
    {
        int t=array[i];
        array[i]=array[largest];
        array[largest]=t;
        maxHeapfiy(array,largest,len);
    }

}
void buildHeap(int *array,int n)
{
    for(int i=(n-1)/2;i>=0;i--)
        maxHeapfiy(array,i,n);
}
void heapSort(int *array,int len)
{
    while(len>1)
	{
        maxHeapfiy(array,0,len);
		int t=array[0];
		array[0]=array[len-1];
		array[len-1]=t;
		len--;
	}
}

};

int main(const int argc,const char *argv[])
{
    int len;
    if(argc==1)
        len=100000;
    else if(argc==2)
        len=atoi(argv[1]);
    int *array=new int[len];
    for(int i=0;i<len;i++)
        cin>>array[i];
    cout << endl;
    HeapSort::heapSort(array,len);
    for(int i=0;i<len;i++)
        cout<<array[i]<<((i+1)%10?' ':'\n');
    cout << endl;

    return 0;
}
