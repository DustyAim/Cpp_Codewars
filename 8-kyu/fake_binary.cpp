#include <string>

std::string fakeBin(std::string str){
    for(char &c : str)
        (c < '5') ? c = '0' : c = '1';
    return str;
}
