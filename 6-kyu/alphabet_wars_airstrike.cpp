#include <string>
#include <vector>
#include <unordered_map>

std::string alphabetWar(const std::string& fight) {
    std::string survivers = fight;
    int sum = 0;

    std::unordered_map<char, int> powers;
    powers['w'] = -4;
    powers['p'] = -3;
    powers['b'] = -2;
    powers['s'] = -1;
    powers['m'] = 4;
    powers['q'] = 3;
    powers['d'] = 2;
    powers['z'] = 1;


    for (int i = 0; i < survivers.size(); i++) {
        if (survivers[i] == '*') {
            if (i > 0 && survivers[i-1] != '*') {
                survivers[i-1] = '_';
            }
            if (i < survivers.size() - 1 && survivers[i+1] != '*') {
                survivers[i+1] = '_';
            }
        }
    }


    for (int j = 0; j < survivers.size(); j++){

        if (powers.find(survivers[j]) != powers.end()) {
            sum += powers[survivers[j]];
        }
    }

    if (sum == 0) return "Let's fight again!";
    return (sum < 0) ? "Left side wins!" : "Right side wins!";
}