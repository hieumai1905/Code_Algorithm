#include<bits/stdc++.h>
using namespace std;

#define M 102
int n,x[M],d=0;
bool cot[M],cheo1[M],cheo2[M];
void qlhoanvi(int i){
    for(int j=1;j<=n;j++)
    if(!cot[j] && !cheo1[i-j+n] && !cheo2[i+j-1]){
        x[i]=j;
        cot[j]=true;
        cheo1[i-j+n]=true;
        cheo2[i+j-1]=true;
        if(i==n)
        d++;
        else 
        qlhoanvi(i+1);
        cot[j]=false;
        cheo1[i-j+n]=false;
        cheo2[i+j-1]=false;

    }
}
int main(){ 
    cin>>n; 
    qlhoanvi(1); 
    cout<<d<<endl; 
    return 0; 
}
