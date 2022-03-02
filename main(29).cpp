/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*Program Statement:
 * The cosmetic company "BeautifyMe" wishes to know the alphabetic product code from the barcode. The barcode of the product is a numeric value and the alphabetic product is a string value tagged 'a-j'.
 * The alphabetic range 'a-j' represents the numeric range '0-9'. To produce the alphabetic product code, each digit in the numeric barcode is replaced by the corresponding matching letters.
 * Write an algorithm to display the alphabetic product code from the numeric barcode.
 * 
 * Input
 * The input consists of an integer - barcode, that represents the barcode of the product.
 * 
 * Output
 * Print a string representing the alphabetic product code.
 * 
 * Constraints
 * 0 <= barcode <= 10^10
 * 
 * Example
 * Input
 * 12403
 * 
 * Output
 * bcead
 * 
 * Explanation
 * The corresponding letters for the numeric barcode 12403 is 'bcead'*/





#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int barcode;
    cin>>barcode;
    
    char alphabet[] ={'a', 'b', 'c', 'd', 'e', 'f', 'h', 'i', 'j'};
    
    string res = "";
    
    while(barcode>0){
        int rem = barcode%10;
        res = alphabet[rem]+res;
        barcode = barcode/10;
    }
    
    cout<<res<<endl;
    
}
