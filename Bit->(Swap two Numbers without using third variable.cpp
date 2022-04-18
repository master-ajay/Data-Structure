#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a=3;
    int b=8;
    cout<<"Before swap \na="<<a<<" "<<"b="<<b;
    a=a^b;
    b=a^b;
    a=a^b;
    cout<<"\nAfter swap \na="<<a<<" "<<"b="<<b;
}
