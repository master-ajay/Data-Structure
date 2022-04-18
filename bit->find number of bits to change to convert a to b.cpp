#include<bits/stdc++.h>
using namespace std;
// int findbit(int num){
//     return (num&1!=0);
// }

// int ones(int num){
//     int count=0;
//     while(num!=0){
//         if(findbit(num))
//             count++;
//         num=num>>1;
//     }
//     return count;
// }

int ones(int num){
    int count=0;
    while(num!=0){
        num=num&(num-1);
        count++;
    }
    return count;
}

int main()
{
    int a=4;
    int b=1;
    int num=a^b;
    cout<<ones(num);
    return 0;
}
