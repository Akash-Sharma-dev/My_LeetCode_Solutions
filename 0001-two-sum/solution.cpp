class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
           unordered_map<int,int>n;
           int start,end;
           for(int x = 0; x<nums.size(); x++){
               n[nums[x]] = x;
           }
           for(int x = 0; x<nums.size(); x++){
                int comp = target-nums[x];
                if(n.find(comp) !=  n.end() && n[comp] != x){
                     start = x;
                     end = n[comp];
                }
           }
           return {start,end};
    }
};    
