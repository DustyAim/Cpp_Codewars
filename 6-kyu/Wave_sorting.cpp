#include <vector>
#include <algorithm>

void wave_sort(std::vector<int> &v) {
    std::sort(v.begin(), v.end());
    for (std::size_t i = 1; i < v.size(); i += 2) {
        std::swap(v[i], v[i - 1]);
    }
}
