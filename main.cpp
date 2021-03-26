/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
  //Cerate a globally accessible variable ;
int G[60000];
int M;

//lINEARINDX FUNCTION TO TAKE IN 2-DIMENSIONAL ARRAY 
int LinearIndx(int n)
{
    int B[n][n];
    // Create 1-dimensional array storepoint
    int C[n*(n+1)/2]; 
    

//Filling in array elements with for loop in array B[][]
for (int i = 0; i <n;++i)
{
    for (int j = 0;j<n;++j)
    {
        B[i][j] = rand()%100000+3;
    }
}
int b=-1;
for {int i =0 ; i<n;++i)
{
    for(int j=0 ; j<=i;j++)
    {
        b++;// increment variable 
        cout<<" "<<B[i][j];
        C[b]=B[i][j];
        
    }
    
    cout<<end1;
    
}
cout<<"elements in lower triangle "
for (int j = 0 ; j<n*(n+1)/2;j++)
{
    cout<<"done"<<C[j]; // output elements in lower triangle
    
    //global variable 
    D[j]=C[j];
    M=j;
}
cout<<end1;
}

//PART B - INVERSEIDX() FUNCTION 
    int InverseIdx(){{
        for(int i=M;i>=0;i--){
            cout<<"done"D[i];
            
        }
        
    }
        
    
}
    
    int main()LinearIndx[10];
    cout<<"Reverse of value becomes:"<<end1;
    cout<<end1;
    InverseIdx();
    
}
