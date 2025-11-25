#include<iostream>
using namespace std;
int addnumbers(int a,int b){
    return a+b;
}
int main(){
    int x,y;
    cout<<"enter two integer numers:"<<endl;
    cin>>x>>y;
    addnumbers(x,y);
    cout<<"the sum is = : "<<addnumbers(x,y)<<endl;
    return 0;
}
