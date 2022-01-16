#include "hash.h"

string hash(string str) {

    static const int prime = 2677;
    unsigned int hash = prime;

    static const string hex = "0123456789abcdef";
    string hexHash;

    for (int i = 0; i < str.length(); ++i) {
        hash = (hash * 31) + int(str[i]);
    }

    string hashStr = to_string(hash);
    int hashStrSize = hashStr.size();

    unsigned int index = hash;

    for (int i = 0; i < 64; i++) {
        index += int(hashStr[i % hashStrSize]) + i * prime * 31;
        hexHash += hex[index % 16];
    }
    return hexHash;
}