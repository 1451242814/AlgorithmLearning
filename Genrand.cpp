#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

int main(int argc,char *argv[])
{
	int len;
	if(argc==1)
	    len=1000000;
	if(argc==2)
		len=atoi(argv[1]);
    srand(time(NULL));
    for(int i=0;i<len;i++)
    {
	cout<<rand()<<' ';
	if((i+1)%10==0)
	    cout<<endl;
    }
}
