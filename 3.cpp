#include<bits/stdc++.h>
using namespace std;

int main() {
 int n;
 cin>>n;
 

 if( n >= 30 && n <= 50){
    cout<<"Avg"<<endl;
}else if( n >= 51 && n <= 60){
    cout<<"Good"<<endl;
}else if( n >= 61 && n <= 80){
    cout<<"e"<<endl;
}else if( n >= 80 && n <= 100){
    cout<<"Out"<<endl;
}else{
    cout<<"invalid"<<endl;
}
    return 0;
}