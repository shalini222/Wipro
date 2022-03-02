/*The apparel company "FeelGood" has collected a list of the sales values of the N highest selling brands of products during the festive season. Each brand is identified by a unique ID numbered 0 - (N-1) in the list.
 * From this list the company wishes to determine the Kth largest sales value for a given day.
 * 
 * Write an algorithm to help the company determine the sales value of the Kth largest selling product.
 * 
 * Input
 * The first line of input consists of two integers- numBrands and largestSale where the first integer represents the total number of brands selected by  the company (N) and the second integer represents the Kth value.
 * The next line consists of N space separated integers - salesValue[0], salesValue[1],.... salesValue[N-1]
 * representing the sales value of the N brands.
 * 
 * Output
 * Print an integer representing the Kth largest sales value in the list for the given day.
 * 
 * Constraint
 * 0 < numBrands < 10^6
 * 0 < largestSale <= numBrands
 * 0 < salesValue[i] <= 10^6
 * 0 <= i < numBrands
 * 
 * Example
 * Input
 * 5 3
 * 45 32 67 21 12
 * 
 * Output
 * 32
 * 
 * Explanation
 * The 3rd largest value in the given list is 32.
 * Hence the output is 32.*/

#include <bits/stdc++.h>

using namespace std;

int main()
{

int numBrands, largestSale;
cin>>numBrands>>largestSale;

int salesValue[numBrands];

for(int i = 0; i<numBrands; i++){
    cin>>salesValue[i];
}

sort(salesValue, salesValue+numBrands);
reverse(salesValue, salesValue+numBrands);

cout<<salesValue[largestSale-1];


}
