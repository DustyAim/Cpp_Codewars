#include <string>

std::string encode(const std::string &str) {
    std::string result = str;
    for (char &c : result) {
        switch (c) {
            case 'a': c = '1'; break;
            case 'e': c = '2'; break;
            case 'i': c = '3'; break;
            case 'o': c = '4'; break;
            case 'u': c = '5'; break;
        }
    }
    return result;
}

std::string decode(const std::string &str) {
    std::string result = str;
    for (char &c : result) {
        switch (c) {
            case '1': c = 'a'; break;
            case '2': c = 'e'; break;
            case '3': c = 'i'; break;
            case '4': c = 'o'; break;
            case '5': c = 'u'; break;
        }
    }
    return result;
}
