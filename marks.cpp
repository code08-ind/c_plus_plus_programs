#include<iostream>
using namespace std;

int main(){

  float a,b,c,d,e;
  float f,g;
  cout<<"Enter marks of english out of 100 : "<<endl;
  cin>>a;
  cout<<"Enter marks of maths out of 100 : "<<endl;
  cin>>b;
  cout<<"Enter marks of physics out of 100 : "<<endl;
  cin>>c;
  cout<<"Enter marks of chemistry out of 100 : "<<endl;
  cin>>d;
  cout<<"Enter marks of sst out of 100 : "<<endl;
  cin>>e;

   f = a+b+c+d+e;
   g = (f/500.0)*100.0;

  cout<<"The total marks are  : "<<f<<endl;
  cout<<"The percentage is  : "<<g<<endl;

  return 0;
}
