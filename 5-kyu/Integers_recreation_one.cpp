#include <utility>
#include <vector>
#include <cmath>

class SumSquaredDivisors
{
public:
    static std::vector<std::pair<long long, long long>> listSquared(long long m, long long n){
        long long result = 0;
        std::vector<std::pair<long long, long long>> output;
        for (long long i = m; i <= n; i++){
            for (long long j = 1; j <= i; j++){
                if (i%j == 0)
                    result += j*j;
            }
            long long root = static_cast<long long>(std::sqrt(result));
            if (root * root == result)
                output.push_back({i, result});
            result = 0;
        }
        return output;
    };
};
