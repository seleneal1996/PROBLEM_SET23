#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;

void aleatorio()
{
    //variable =limite_inferior+rand()%((limite_superior+1))-limite_inferior;
    int numero;
    srand(time(0));

    for(int i=1;i<=20;i++)
    {
        numero=rand()%10+1;
        cout<<numero<<"  ";
    }
}
int main()
{
    //int li,ls;
    //cout<<"Digite el limite inferior:"<<endl;
    //cin>>li;
    //cout<<"Digite el limite superior:"<<endl;
    //cin>>ls;

    aleatorio();
}
