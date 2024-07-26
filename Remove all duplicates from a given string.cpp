#include <iostream>
#include <unordered_set>
#include <string>

class Solution{
public:
    std::string removeDuplicates(std::string str) {
        unordered_set<char> seen;
        string result;
        
        for(char c : str) {
            if(seen.find(c) == seen.end()) {
                seen.insert(c);
                result += c;
            }
        }
        
        return result;
    }
};
