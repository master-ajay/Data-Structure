//Time Complexity O(n) , Space Complexity O(1) Juggling Algorithm
#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}

int gcd(int a,int b){
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

void leftRotate(int arr[],int d,int n){
    
    d=d%n;
    int g_c_d = gcd(d,n);
    
    for(int i=0;i<g_c_d;i++){
        
        int temp=arr[i];
        int j=i;
        
        while(1){
            int k=j+d;
            if(k>=n)
                k=k-n;
            
            if(k==i)
                break;

            arr[j] = arr[k];
            j = k;
        }
        arr[j] = temp;
    }
}


int main(){
    
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
    leftRotate(arr, 2, n);
    printArray(arr, n);
    
    return 0;
}





//
// int main(){
//     int arr[] = {1,2,3,4,5};
//     int len=5;
//     int num=2;
//     int temp[num];
//     for(int i=0;i<num;i++){
//         temp[i]=arr[i];
//     }
    
//     for(int i=0;i<len-num;i++){
//         arr[i]=arr[i+num];
//     }
    
//     for(int i=0;i<num;i++){
//         arr[len-num+i]=temp[i];
//     }
    
//     for(int i=0;i<len;i++){
//         cout<<arr[i]<<endl;
//     }
// }





// #include <bits/stdc++.h>
// using namespace std;

// void rotatebyone(int arr[]){
//     int temp = arr[0];
//     int i;
//     i=0;
//     for(i=0;i<4;i++){
//         arr[i]=arr[i+1];
//     }
//     arr[i]=temp;
// }

// int main()
// {
//     int arr[]={1,2,3,4,5};
//     for(int i=0;i<2;i++){
//         rotatebyone(arr);
//     }
//     for(int i=0;i<5;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }
