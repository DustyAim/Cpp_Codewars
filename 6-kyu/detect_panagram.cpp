#include <string>

bool is_pangram(const std::string& s) {
    std::vector<bool> letters(26, false);
    for (char c : s){
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            int base = (c >= 'a') ? 'a' : 'A';   // определяем базу
            letters[(c-base)] = true; }
    }
    for (bool b : letters) {
        if (!b) return false;
    }
    return true;
}
