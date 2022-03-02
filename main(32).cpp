/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/*The e-commerce company "BuySellGoods" collected the sales value of N most popular selling products on its website.
 * From these values the company decides to calculate the total sales value of the two highest selling products.
 * 
 * Write an algorithm to help the company calculate the total sales value of the two highest selling products on its website.
 * 
 * Input
 * The first line of input consists of an integer- numProducts representing the total number of products (N).
 * The next line consists of N space-separated integers- saleValue[1], salesValue[2]....... saleValue[N],
 * representing the sales value of the N selected products.
 * 
 * Output
 * Print an integer representing the total sales value of the two highest selling products on the website.
 * 
 * Constraints
 * 2 <= numProducts <= 10^6
 * 
 * Note
 * More than one product can have a similar sales value.
 * 
 * Example
 * Input
 * 5
 * 15 26 13 7 45
 * 
 * Output
 * 71
 * 
 * Explanation
 * The two products with highest sales value are the second the fifth products. Hence the total sales value is 71 (26+45)
 * */



#include <bits/stdc++.h>

using namespace std;

int main()
{
 int numProducts;
 cin>>numProducts;
 
 int salesValue[numProducts];
 for(int i = 0; i<numProducts; i++){
     cin>>salesValue[i];
 }


sort(salesValue, salesValue+numProducts);
reverse(salesValue, salesValue+numProducts);

int res = salesValue[0]+salesValue[1];
cout<<res<<" ";


}
