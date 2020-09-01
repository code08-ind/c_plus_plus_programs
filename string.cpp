#include<iostream>
#include<string>
using namespace std;

int main(){
string s1 = "Hello";
string s2 = "World";
cout<<s1.length()<<endl;
cout<<s2.size()<<endl;
cout<<s1+s2<<endl;
cout<<s1.append(s2)<<endl;

return 0;
}
