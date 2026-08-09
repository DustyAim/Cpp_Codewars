#include <vector>
#include <string>

class DirReduction {
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> arr) {
        std::vector<std::string> result; // стек
        for (const auto& dir : arr) {
            if (!result.empty() && ((result.back() == "NORTH" && dir == "SOUTH") || (result.back() == "SOUTH" && dir == "NORTH") || (result.back() == "EAST" && dir == "WEST") || (result.back() == "WEST" && dir == "EAST"))) 
                result.pop_back(); 
            else 
                result.push_back(dir);
        }
        return result;
    }
};