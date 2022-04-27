#include <iostream>

using namespace std;

int findbit(int n,int pos){
    return ((n&(1<<pos))!=0);
}

int setbit(int n,int pos){
    return (n|(1<<pos));
}

int unique(int arr[],int len){
    int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<len;j++){
            if(findbit(arr[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result=setbit(result,i);
        }
    }
    return result;
}

int main()
{
    int arr[] = {1,1,1,2,2,2,4};
    cout<<unique(arr,7);
    return 0;
}
