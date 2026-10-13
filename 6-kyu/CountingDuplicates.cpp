#include <string>
#include <map>
#include <cctype>

std::size_t duplicateCount(const std::string& in)
{
    std::size_t count = 0;
    std::map<char, int> reg;
    for (char c : in) {
        char lower = std::tolower(c);
        reg[lower]++;
    }
  
    for (const auto& [ch, freq] : reg) {
        if (freq > 1) ++count;
    }
    return count;
}