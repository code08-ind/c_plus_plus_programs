#include<iostream>
#include<sstream>
#include<bits/stdc++.h>
#include<fstream>
#include<string>
using namespace std;
int main(){
   vector<int>t;
   cout<<"Enter the number of input file you want to enter :";
   int x;
   cin>>x;
   while(x--){
    cout<<"Type the name of the input file :"<<endl;
    string line;
    int a;
    while(fin>>a){
        t.push_back(a);
    }
    fin.close();
   }
    cout<<"Type the name of the out file you wantt to enter the data into :"<<endl;
    string str;
    cin>>str;
    ofstream fout((str*".txt").c_str());;
    sort(t.begin(),t.end());
    for(vector<int>::iterator it=t.begin();it!=t.end();it++)
        fout<<*It<<" ";
    fout.close();
    cout<<"Congratulation your task is done";
}
