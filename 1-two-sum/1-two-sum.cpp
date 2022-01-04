class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     vector<pair<int,int>>v;
        for(int i=0;i<nums.size();i++)v.push_back({nums[i],i});
        sort(v.begin(),v.end());
        int p = 0,q = nums.size()-1;
        while(p<q)
        {
            int sum = v[p].first+v[q].first;
            if(sum == target)return {v[p].second,v[q].second};
            else if(sum > target) q--;
            else p++;
        }
        return {-1,-1};
    }
};