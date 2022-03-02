/*Program Statement:
 * The garments company Apparel wishes to open outlets at various locations.
 * The company shortlisted several plots in these locations and wishes to select only plots that are square-shaped.
 * Write an algorithm to help Apparel find the number of plots that it can select for its outlets.
 * 
 * Input
 * The first line of the input consists of an integer numofPlots, representing the number of plots shortlisted by the company for outlets(N).
 * The second line consists of N space-separated integers - area1, area2...areaN representing the area of the N plots selected for outlets.
 * 
 * Output
 * Print an integer representing the number of plots that will be selected for outlets.
 * 
 * Constraints
 * 0 <= numOfPlots <= 10^6
 * 0 <= area <= 106
 * 0 <= i <= numOfPlots
 * 
 * Example
 * Input:
 * 8
 * 79 77 54 81 48 34 25 16
 * 
 * Output
 * 3
 * 
 * Explanation
 * The areas that are square form are 81,25,16. So, output is 3*/
 
 
 
 #include <bits/stdc++.h>
 using namespace std;
 
 bool isSquare(int n){
     for(int i = 0; i<=n; i++){
         if( n == i*i){
             return true;
         }
     }
     
     return false;
 }
 
 
 
 
 int main(){
 
 int numOfPlots;
 cin>>numOfPlots;
 
 int area[numOfPlots];
 
 
 for(int i =0; i<numOfPlots; i++){
     cin>>area[i];
 }
 
 int count =0;
 
 for(int i =0; i<numOfPlots; i++){
     if(isSquare(area[i])){
         count++;
     }
     
     
 }
 
 
 cout<<count<<endl;
 
 
 }
 
 