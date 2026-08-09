class GapInPrimes
{
public:
    static std::pair<long long, long long> gap(int g, long long m, long long n) {
        std::vector<bool> is_prime(n+1, true);
        is_prime[0] = is_prime[1] = false;
        long long j = 0;

        for (long long i = 2; i*i <= n; i++){
            if (is_prime[i]){
                j = i;
                while ((i*j) <= n) {
                    is_prime[i*j] = false;
                    j++;
                }
            }
        }
        int g_cur = 0;
        for (long long k = m; k < n+1; k++){
            if (is_prime[k]){
                if (g_cur == g - 1 && is_prime[k - g])
                    return {k - g, k};
                g_cur = 0;
            }
            else
                g_cur++;
        }
        return {0, 0};
    }
};