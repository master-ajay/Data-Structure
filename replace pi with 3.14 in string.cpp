#include<bits/stdc++.h>
using namespace std;

void replacepi(string str){
    
    if(str.length()==0){
        return ;
    }
    if(str[0]=='p' and str[1]=='i'){
        cout<<"3.14";
        replacepi(str.substr(2));
    }
    else{
        cout<<str[0];
        replacepi(str.substr(1));
    }

}

int main()
{
 replacepi("pisingpiajpipjpi");   
}
