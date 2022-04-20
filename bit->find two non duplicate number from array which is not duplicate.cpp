#include<bits/stdc++.h>
using namespace std;

int findbit(int num,int pos){
  return ((num&(1<<pos))!=0);
}

int main(){
  int arr[]={1,1,2,2,3,4,5,5,6,6};
  int n=sizeof(arr)/sizeof(arr[0]);
  
  int xore=arr[0];
  for(int i=1;i<n;i++){
    xore=xore^arr[i];
  }
  
  // right most 1 bit position
  int rightmostbit=ffs(xore)-1;
  
  int num1=0;
  int num2=0;
  for(int i=0;i<n;i++){
    if(findbit(arr[i],rightmostbit))
      num1=num1^arr[i];
    else
      num2=num2^arr[i];
  }
  
  cout<<num1<<endl<<num2;
    
}
