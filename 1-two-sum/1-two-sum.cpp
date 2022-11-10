class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> p;
        vector<int> result;
        // for (int i=0;i<nums.size();i++)
        //     p[nums[i]]=i;
           
        for (int i=0;i<nums.size();i++){
            if (p.find(target-nums[i])!=p.end()) {
                
                cout<<i<<endl;
                result.push_back(i);
                result.push_back(p[target-nums[i]]);
            }
            p[nums[i]]=i;
        }
        return result;
    }
};