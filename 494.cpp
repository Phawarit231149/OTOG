#include<iostream>
#include<string>
using namespace std;
int main(){
  int n ;
  cin>>n;
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if (i+j>=n+1) {
            cout<<"*";
        }
        else{
            cout<<"-";
        }
    }
    cout<<"\n";
  }
  
}
