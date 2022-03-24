class Solution {
public:
    int fib(int n) {
        
        if(n<2)
            return n;
        
        int f,f0=0,f1=1;
        
        
        for(int i=2;i<=n;i++)
        {
            f=f0+f1;
            f0=f1;
            f1=f;
        }
        
        return f;
    }
};