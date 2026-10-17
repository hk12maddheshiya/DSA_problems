class Solution {
public:
    bool threeFibonacciSum(int n) {
        if (n%2 != 0) return false;
        int fib = 0;
        int first = 0;
        int second = 1;
        while( fib <= n/2 ){
            fib = first+second;
            first = second;
            second = fib;

            if(fib == n/2) return true;
        }
        return false;
        
    }
};