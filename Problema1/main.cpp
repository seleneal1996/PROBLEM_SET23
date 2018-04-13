#include <iostream>

using namespace std;

void printNTimes(char *msg = "\n",int n=1)
{
    for(int i=0;i<n;++i)
    {
     cout<<msg<<"\n";
    }
}
int main()
{
    int n;
    char *msg=new char[100];
    cout<<"Ingrese mensaje:"<<endl;
    cin>>msg;
    cout<<"Ingrese n:"<<endl;
    cin>>n;
    printNTimes(msg,n);
    cout<<msg<<endl;
}
