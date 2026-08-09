#include <vector>

int maxSequence(const std::vector<int>& arr){
    int max_sum = 0;
    int cur_sum = 0;
    for (int i = 0; i < arr.size(); i++){
        cur_sum = std::max(0, cur_sum + arr[i]);
        max_sum = std::max(max_sum, cur_sum);
    }
    return max_sum;
}
