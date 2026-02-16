class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        vector<int>res;
        unordered_map<int,int>mpp;

        for(int i = 0; i<n; i++){
            mpp[nums1[i]]++;
        }
        for(int j = 0; j<m; j++){
            if(mpp[nums2[j]] != 0){
                res.push_back(nums2[j]);
                mpp[nums2[j]] = 0;
            }
        }
        return res;
    }
};
