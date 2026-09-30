class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> mp;
        for(int num:nums){
            mp[num]++;
        }
        vector<int> sort;

        for(auto& p:mp){
            sort.push_back(p.first);
        }
        int ans = 0;
        int max_ans = 0;

        for(int num: sort){
            cout << num<<endl;
        }
        for(int i = 0; i< sort.size();i++){
            if (i==0){
                ans = 1;
                continue;
            }
            if(sort[i]-1 == sort[i-1]){
                ans+=1;
                continue;
            }
            else{
                max_ans = max(ans, max_ans);
                ans = 1;
            }
        }
        return max(max_ans, ans);
    }
};
