// count all ones in a number
#include<bits/stdc++.h>
using namespace std;
int numberOfOnes(int n){
    int count=0;
    while(n){
        n=n&(n-1);
        count++;
    }
    return count;
}
int main(){
    int num=23;
    cout<<numberOfOnes(num);
}
