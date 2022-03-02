/*You are provided with 3 numbers: input1, input2 and input3.
 * Each of these are four digit numbers within the range >= 1000 and <= 9999
 * i.e.
 * 1000 <= input1 <= 9999
 * 1000 <= input2 <= 9999
 * 1000 <= input3 <= 9999
 * You are expected to find the key using the below formula -
 * key = [SMALLEST digit in the thousands place of all three numbers][LARGEST digit in the hundreds place of all three numbers]
 *       [SMALLEST digit in the tens place of all three numbers][LARGEST digit in the units place of all three numbers]
 *       
 * Given three numbers, write an algorithm to find the key using the above mentioned formula.
 * 
 * Input
 * The input consists of three space-separated integers - input1, input2 and input3 representing the three four - digit numbers.
 * 
 * Output
 * Print an integer representing the concatenation of four digits where first digit represents the smallest digit in the thousands place of all three numbers;
 * second digit represents the largest digit in the hundreds place of all three numbers; third digit represents the smallest digit in the tens place of all three numbers and fourth digit represents the largest digit in the units place of all three numbers.
 * 
 * Example
 * Input:
 * 3521 2452 1352
 * Output:
 * 1522*/
 
 #include<bits/stdc++.h>
 using namespace std;
 
 
 
 int main(){
     int i1, i2, i3;
     cin>>i1>>i2>>i3;
     
     int t1, t2, t3;
     int place = 1;
     
      int res = 0;
     
     
     while(i1 != 0 && i2 != 0 && i3 != 0){
        
        
         t1 = i1%10;
         t2 = i2%10;
         t3 = i3%10;
         
         if(place == 1){
             res =  max(t1, (t2, t3));
         }
         if(place == 10){
             res = res+ (min(t1, (t2, t3))*10);
         }
          if(place == 100){
             res = res+ (max(t1, (t2, t3))*100);
         }
          if(place == 1000){
             res = res+ (min(t1, (t2, t3))*1000);
         }
         
         i1 = i1/10;
         i2 = i2/10;
         i3 = i3/10;
         place *= 10;
        
     }
     
     
     cout<<res<<endl;
     
 }