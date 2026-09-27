class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> mp;
        for(char i:s){
            mp[i]++;
        }

        for(char j:t){
            mp[j]--;
        }

        for(const auto& p:mp){
            if(p.second!=0)
            return false;
        }
        return true;
    }
};
