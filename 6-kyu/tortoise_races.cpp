#include <vector>

class Tortoise {
public:
    static std::vector<int> race(int v1, int v2, int g) {
        if (v1 >= v2) return {-1, -1, -1}; //exception
        int total_seconds = (g * 3600) / (v2 - v1);
        int hours = total_seconds / 3600;
        int minutes = (total_seconds % 3600) / 60;
        int seconds = total_seconds % 60;
        return {hours, minutes, seconds};
    }
};