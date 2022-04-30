#include<bits/stdc++.h>
using namespace std;

void move_x_End(string str){
    
    if(str.length()==0)
        return;
    if(str[0]=='x')
        {
            move_x_End(str.substr(1));
            cout<<'x';
        }
    else
        {
            cout<<str[0];
            move_x_End(str.substr(1));
        }
    
}

int main(){
    string str="axxbdxcefxhix";
    move_x_End(str);
}
