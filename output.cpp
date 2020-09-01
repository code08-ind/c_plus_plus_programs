#include<iostream>
using namespace std;

int main(){
  float a;
  float b;
  float d,c,e;
  float f;

  cout<<"Enter the first number :"<<endl;
  cin>>a;

  cout<<"Enter the second number :"<<endl;
  cin>>b;

  d= a+b;
  c=a-b;
  e=a*b;
  f=a/b;

  cout<<"The sum is : "<<d<<endl;
  cout<<"The difference is : "<<c<<endl;
  cout<<"The product is : "<<e<<endl;
  cout<<"The division is : "<<f<<endl;

  return 0;
}
