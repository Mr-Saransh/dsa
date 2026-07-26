#include<iostream>
using namespace std;
void printPattern(int n)
{
    int i;
    char ch='A';
    for(i=0;i<=n;i++)
    {
    for(int j=0;j<=i;j++){
        cout<<char(ch+i);
    }   
        cout<<endl;
        }
    }

void printPattern2(int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    for(int j=n;j>i;j--){
        cout<<"*";}
    for(int k=0;k<2*i;k++){
        cout<<" ";
    }
    for(int l=n;l>i;l--){
        cout<<"*";

    }
    cout<<"\n";

}
    for(i=0;i<=n;i++){
    for(int m=0;m<i;m++){
        cout<<"*";
    }
    if(i==0){
        continue;
    }else{
    for(int k=0;k<2*n-2*i;k++){
        cout<<" ";
    }}
    for(int h=0;h<i;h++){
        cout<<"*";
    }
     cout<<"\n";
    }

    }

void printPattern3(int n)

{
    int i;
    for(i=0;i<=n;i++){
    for(int m=0;m<i;m++){
        cout<<"*";
    }
    if(i==0){
        continue;
    }else{
    for(int k=0;k<2*n-2*i;k++){
        cout<<" ";
    }}
    for(int h=0;h<i;h++){
        cout<<"*";
    }
     cout<<"\n";
    }



    for(i=0;i<n-1;i++)
    {
    for(int j=n-1;j>i;j--){
        cout<<"*";}
    for(int k=0;k<2*i+2;k++){
        cout<<" ";
    }
    for(int l=n-1;l>i;l--){
        cout<<"*";


    }
    cout<<"\n";

    }}

void printPattern4(int n)
{
    int i;
    for(i=0;i<=n;i++){
    for(int m=n-1;m>=i;m--){
        cout<<"-";}
    char ch='A';
    int breakpoint=(2*i+1)/2;
    for(int j=1;j<=2*i+1;j++){
        cout<<ch;
        if(j<=breakpoint){
            ch++;
        }else{
            ch--;}
}
    for(int m=n-1;m>=i;m--){
        cout<<"-";}
    cout<<endl;
}}

void printPattern5(int n){
    int i;
    for(i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i==0||j==0||j==n-1||i==n-1){
            cout<<"*";
        }
        else{
        cout<<" ";}
    }
    cout<<endl;
}}

void printPattern6(int n){
    int i;
    for(i=0;i<=n-1;i++){
    for(char ch='A'+n-1-i;ch<='A'+n-1;ch++){
        cout<<ch;
    }cout<<endl;}}

void printPattern7(int n){
    int i;
    for(i=0;i<2*n-1;i++){
    for(int j=0;j<2*n-1;j++){
        int layer=min(min(i,j),min(2*n-2-i,2*n-2-j));  //calculated the minimum distance from the edges to determine the layer value !!!
        cout<<n-layer;
    }cout<<endl;}}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        int n;
        cin>>n;
        printPattern7(n);
    }

}

