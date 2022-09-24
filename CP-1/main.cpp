#include <iostream>

using namespace std;

bool checkPallindrome(int n)
{
    if(n<0)
        return false;
    int x=0,y=n;
    while (n)
    {
        x=x*10+n%10;
        n/=10;
    }
    if(x==y)
        return true;
    else
        return false;
}
int main()
{
    int x=121;
    if(checkPallindrome(x))
        cout<<"It is a pallindrome";
    else
        cout<<"It is not a pallindrome";
    return 0;
}
