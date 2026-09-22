#include <unordered_map>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;

        unordered_map<char, int> smap{};
        unordered_map<char, int> tmap{};

        for (auto c : s) {
            if (smap.count(c) == 0) {
                smap.insert({c, 0});
            } else {
                smap[c]++;
            }
        }

        for (auto c : t) {
            if (tmap.count(c) == 0) {
                tmap.insert({c, 0});
            } else {
                tmap[c]++;
            }
        }

        for (auto key : smap) {
            try {
                if (tmap.at(key.first) != key.second) return false;
            }
            catch (...) {
                return false;
            }
            
        }

        return true;
    }
};
