class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> primes;
        for (int n = left; n <= right; ++n) {
            bool is_prime = true;
            if (n <= 1) is_prime = false; 
            else {
            for (int i = 2; i * i <= n; ++i) { 
             if (n % i == 0) {
             is_prime = false;
              break; 
             }
            }
        }
            if (is_prime) {
                primes.push_back(n); 
            }
        }
        if (primes.size() < 2) {
            return {-1, -1};
        }

        int num1 = -1, num2 = -1;
        int minDiff = INT_MAX;
        for (int i = 1; i < primes.size(); ++i) {
         int diff = primes[i] - primes[i - 1];
          if (diff < minDiff) {
            minDiff = diff;
             num1 = primes[i - 1];
             num2 = primes[i];
            }
        }
        return {num1, num2};
    }
};
