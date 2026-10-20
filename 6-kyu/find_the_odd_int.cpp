#include <vector>

int findOdd(const std::vector<int>& numbers){
    std::unordered_map<int, int> digits;
    int counter = 0;
    for (int i = 0; i < numbers.size(); i++){
        digits[numbers[i]]++;
    }

    for (const auto& pair: digits){
        if (pair.second % 2 == 1)
            return pair.first;
    }
}