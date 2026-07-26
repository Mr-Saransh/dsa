#include<iostream>
using namespace std;
void prl(int n)
{
    int i;
    for(i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<j;
        }
        for(int k=2*n-2*i;k>=1;k--){
            cout<<" ";
        }
        for(int h=i;h>=1;h--){
            cout<<h;
        }
        cout<<endl;
        }
    }

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        prl(n);
    }

}

