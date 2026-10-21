#include <string>
#include <vector>
#include <algorithm>

std::string spinWords(const std::string &str)
{
    std::vector<std::string> words;
    std::string word;

    for (char c : str) {
        if (c != ' ') {
            word += c;
        } else {
            words.push_back(word);
            word.clear();
        }
    }
    words.push_back(word);          // не забыть последнее слово

    std::string result;
    for (std::size_t i = 0; i < words.size(); ++i) {
        if (i > 0) result += ' ';
        std::string w = words[i];
        if (w.size() >= 5) {
            std::reverse(w.begin(), w.end());
        }
        result += w;
    }
    return result;
}