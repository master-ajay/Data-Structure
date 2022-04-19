/******************************************************************************
1010 1101
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
setbit 1001|0100 1100
UNSETBIT 1100 on pos=2 => 1100 & 0100->1011 =>1000
toglebit 1011 on pos=3 => 1011 xor 1000 => 0011
findbit 1011 on pos=1 => 10101 01010 & 
*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int setbit(int num,int pos){
    return (num|1<<pos);
}

int unsetbit(int num,int pos){ //or Clear bit 
    return (num&(~(1<<pos)));
}

int togglebit(int num,int pos){
    return (num^(1<<pos));
}

bool findbit(int num,int pos)
{
    bool bit = num & (1<<pos);
    return bit;
}
int main()
{
    int num=13;
    int pos=1;
    cout<<setbit(num,4)<<endl;
    cout<<unsetbit(num,pos)<<endl;
    cout<<togglebit(num,pos)<<endl;
    cout<<findbit(10,3);
    return 0;
}
