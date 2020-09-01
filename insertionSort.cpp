#include<iostream>
using namespace std;

void insert(int A[],int n){
int i,j,x;
for(i=1;i<n;i++){
    j=i-1;
    x=A[i];
    while(i>-1 && A[j]>x){
        A[j+1]=A[j];
        j--;
    }
    A[j+1]=x;
  }
}

int main(){
  int A[]={2,11,12,3,6,4,9,1,8,7};
  int n=10;
  int i;

insert(A,10);
 for(i=0;i<n;i++){//printing of values of the sorted array
    cout<<A[i]<<" ";
 }
return 0;
}
