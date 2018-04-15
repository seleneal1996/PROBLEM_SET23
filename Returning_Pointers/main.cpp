#include <iostream>
#include <stdlib.h>

using namespace std;

int * getRandNumPtr (){
    int x = rand();
    cout<<x<<endl;
    return &x;
}


int main()
{
    int*randNumPtr=getRandNumPtr();
    cout<<*randNumPtr;  //ERROR
    return 0;
}
