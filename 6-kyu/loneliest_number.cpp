#include <climits>
#include <numeric>

bool loneliest(unsigned long number) {
    std::vector<int> digits;
    std::vector<int> result;
    while (number > 0){
        digits.push_back(number%10);
        number = number/10;
    }

    std::reverse(digits.begin(), digits.end());

    int start = 0;
    int end = 0;
    for (int j = 0; j < digits.size(); j++){

        start = j - digits[j];
        if (start < 0) start = 0;

        end = j + digits[j];
        if (end > digits.size()-1) end = digits.size()-1;

        result.push_back(std::accumulate(digits.begin()+start, digits.begin() + end + 1, 0) - digits[j]);
    }

    int min = INT_MAX;

    for (int k = 0; k < result.size(); k++){
        if (result[k] < min) min = result[k];
    }

    for (int g = 0; g < result.size(); g++){
        if ((result[g] == min) and (digits[g] == 1))
            return true;
    }
    return false;
}