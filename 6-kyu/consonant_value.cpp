#include <string>

int solve(const std::string &s)
{
    int max_sum = 0;
    int cur_sum = 0;
    for (char c : s){
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            cur_sum += (c - 'a'+1);
            max_sum = std::max(max_sum, cur_sum);
        }
        else cur_sum = 0;
    }
    return max_sum;
}