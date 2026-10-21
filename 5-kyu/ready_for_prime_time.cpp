#include <vector>

std::vector<unsigned> prime(unsigned n){
    std::vector<bool> primes(n+1, true);
    std::vector<unsigned int> result;
    primes[0] = false;
    primes [1] = false;

    for (unsigned p = 2; p*p <= n; p++){
        if (primes[p]) {
            for (int i = p*p; i <= n; i += p)
                primes[i] = false;
        }
    }
    for (int j = 0; j < primes.size(); j++){
        if (primes[j] == true)
            result.push_back(j);
    }
    return result;
}