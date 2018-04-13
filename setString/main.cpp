#include <iostream>

using namespace std;

void setString(char **strPtr)
{
    int x;
    cin>>x;
    if(x<0)
        *strPtr ="Negative!";
    else
        *strPtr ="Nonnegative!";
}
int main()
{
    char *str;
    setString(&str);
    cout<<str;
    return 0;
}
