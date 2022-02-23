// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int mx(int p){
    int k =-1;
   while(p != 0){
       int q = p%10;
       if(k < q){
           k = q;
       }
       p = p/10;
   } 
   
   return k;
}
int mn(int p){
    int h =10000;
   while(p != 0){
       int q = p%10;
       if(h > q){
           h = q;
       }
       p = p/10;
   } 
   return h;
}

int diff(int n1, int n2, int n3){
   int M = mx(n1)+mx(n2)+mx(n3);
   int N = mn(n1)+mn(n2)+mn(n3);
   int res = M-N;
    return res;
}


int main() {
    
int n1 =5213;

int n2 = 5698;

int n3 = 2153;

cout<<diff(n1, n2, n3);

OUTPUT:
12

}