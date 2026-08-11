class ASum {
public:
    static long long findNb(long long m) {
        long long sum = 0;
        long long n = 1;
        while (sum < m) {
            sum += n * n * n;
            if (sum == m) return n;
            n++;
        }
        return -1;
    }
};