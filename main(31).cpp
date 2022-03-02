/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


/*Program Statement - 
 * A data company wishes to store its data files on the server. 
 * They wish to store N files. Each file has a particular size. 
 * The bucket ID is calculated as the sum of digits of its file size.
 * The server returns the bucket ID for every file request where the file is stored.
 * 
 * Write an algorithm to find the bucket IDs where the files are stored.
 * 
 * Input
 * The first line of the input consists of an integer numFiles representing the number of files to be stored (N).
 * The second line consists of N spaced separated integers - fileSize1, fileSize2,..., fileSizeN, representing the sizes of the files.
 * 
 * Output
 * Print N space-separated integers representing the bucket IDs for each file, respectively.
 * 
 * Constraints
 * 0 <= numFiles <= 10^6
 * 0 <= fileSizei <= 10^6
 * 0 <= i < numFiles
 * 
 * Example
 * Input:
 * 4
 * 43 345 20 987
 * 
 * Output
 * 7 12 2 24*/



#include <bits/stdc++.h>

using namespace std;

int main()
{
  int numFiles;
  cin>>numFiles;

    int fileSize[numFiles];
    for(int i =0; i<numFiles; i++){
        cin>>fileSize[i];
    }
        int id;
        
        
    for(int i =0; i<numFiles; i++){
        id =0;
        while(fileSize[i] > 0){
            int rem = fileSize[i]%10;
            id = id+rem;
            fileSize[i] = fileSize[i]/10;
            
        }
        
        cout<<id<<" ";
    }


}
