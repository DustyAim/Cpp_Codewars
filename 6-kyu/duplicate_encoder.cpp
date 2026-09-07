#include <string>
#include <unordered_map>
#include <cctype>

std::string duplicate_encoder(const std::string& word) {
    std::unordered_map<char, int> times_of_chars;
    std::string result;

    for (unsigned char c : word)
        times_of_chars[std::tolower(c)]++;

    for (unsigned char c : word)
        result.push_back(times_of_chars[std::tolower(c)] > 1 ? ')' : '(');

    return result;
}