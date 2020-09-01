#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
/* Enter your code here. Read input from STDIN. Print output to STDOUT */
int t;
scanf("%d",&t);
while(t-->0){
int n,r,q;
char s[30000];
int indrupees = 0;
scanf("%d %d %d",&n,&r,&q);
scanf("%s",s);
char s1[30000] = "";
int j=strlen(s) - 1;
int maxij = 0;
int maxil = 0;
int l= 0;{}

while(j >= 0){
char s2[30000];
l = 0;
maxil=0;
for(int k =j-1;k>=0;k--){
if (s[k] == s[j]){
int c=k;
l=0;
while(j> c && s[k] == s[j]){
j--;
k--;
l++;
}
if(l>maxil){
maxil = l;
}
j+=l;
k+=l;
}
}
if(maxil > q/r){
indrupees += q;

j-=maxil;
}
else{
indrupees += r;
j--;
}
}
printf("%d\n",indrupees);

}
return 0;
}


