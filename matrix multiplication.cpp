#include <iostream>
using namespace std;

int main()
{
    int a[2][3]={{1,2,1},
        {3,4,1}};
    int m=2;
    int n=3;
    int b[3][4]={
        {1,2,3,1},
        {4,5,6,1},
        {1,1,1,1}
    };
    int o=4;
    int c[m][o];
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            c[i][j]=0;
            for(int k=0;k<n;k++){
                c[i][j]+=a[i][k]*b[k][j];
            }
            cout<<c[i][j]<<" ";
        }
    }
    
    return 0;
}
