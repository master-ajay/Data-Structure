#include<bits/stdc++.h>
using namespace std;
void tower_of_hanoi(int n,char from,char to,char aux){
    if(n==0){
        return;
    }
    tower_of_hanoi(n-1,from,aux,to);
    cout<<"Move Disk "<<n<<" from "<<from<<" to "<<to<<endl;
    tower_of_hanoi(n-1,aux,to,from);
}

int main()
{
    tower_of_hanoi(3,'A','C','B');
    return 0;
}
