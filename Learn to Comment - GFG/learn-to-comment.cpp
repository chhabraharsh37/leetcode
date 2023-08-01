//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;
 
void comment(int,int,int);


// } Driver Code Ends
//User function Template for C++

//Value of b is not printed.
void comment(int a,int b,int c)
{
    cout<<a<<endl;
    cout<<c<<endl;
}

//{ Driver Code Starts.
 
int main()
{
   
    
    int t;
    cin >> t;
    
    while(t--){
        int a, b, c;
        cin>>a>>b>>c;
        
        //function call
        comment(a, b, c);
    }
    
    return 0;
} 
// } Driver Code Ends