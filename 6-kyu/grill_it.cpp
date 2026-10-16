#include <string>

std::string grille(const std::string& message, unsigned code)
{
    std::string res;
    int n = (int)message.size();
    
    for (int pos = 0; pos < n; ++pos) {
        int bit = n - 1 - pos;         
        if ((code >> bit) & 1u)
            res.push_back(message[pos]);
    }
    return res;
}