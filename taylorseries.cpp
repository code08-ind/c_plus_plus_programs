#include<iostream>
using namespace std;

int tay(int x,int n){
  static int p = 1;
  static int f = 1;
  int r;
  if(n==0){
    return 1;
  }
  else{
    int r = tay(x,n-1);
    p = p*x;
    f = f*n;
    return r+(p/f);
  }
}

int main (){
  int t = tay(1,4);
  cout<<t;
  return 0;
}

