#include<iostream>
using namespace std;

//int C(int n,int r){
//   if(r==0 || n==r){
//      return 1;
//   }
//   else{
//      return C(n-1,r-1)+C(n-1,r);
//   }
//
//}
//
//int main(){
//   int x = C(4,2);
//   cout<<x;
//   return 0;
//}
//Tower Of Hanoi Problem
int TOH(int n,int A,int B,int C){
   if(n>0){
    TOH(n-1,A,C,B);
    cout<<"( "<<A<<" , "<<C<<" )"<<endl;
    TOH(n-1,B,A,C);
   }
}

int main(){
   TOH(4,1,2,3);
   return 0;
}
