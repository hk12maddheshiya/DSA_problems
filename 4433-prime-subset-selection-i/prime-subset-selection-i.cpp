class Solution {
public:
    vector<int> maxPrimes(int n, int s) {
        vector<bool> sieve(n+1, true);
        sieve[0] = sieve[1] = false;
        for(int i = 2; i*i <= n; i++){
            if (sieve[i] == true){
               for (int j = i * i; j <= n; j += i) {
    sieve[j] = false;
}
            }
        }
        vector<int> primes;
        for(int i = 2; i<= n; i++){
            if (sieve[i]== true) primes.push_back(i);
        }
        int sum = 0;
        vector<int > ans;
        for (auto i : primes){
            sum = sum + i;
            if(sum > s) return ans;
            
            ans.push_back( i );
        }

        return ans;

    }
};