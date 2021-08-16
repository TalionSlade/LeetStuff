class Solution
{
public:
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = false;
        isPrime[1] = false;
        isPrime[n]=false;
        
        for (int p = 2; p * p <= n; p++){ 
            //DP
            if (isPrime[p] == true){
                for (int i = p * p; i <= n; i += p){
                    isPrime[i] = false;
                }
            }
        }
        int ans = 0;
        for (auto ele : isPrime)
        {
            if (ele)
            {
                ans++;
            }
        }
        return ans;
    }
};