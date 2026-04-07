class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        stack<int>st;
        unordered_map<int,int>ng;
        vector<int>res;
        for(int i = 0; i<m; i++){
            while(!st.empty() && st.top() < nums2[i]){
                ng[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        while(!st.empty()){
            ng[st.top()] = -1;
            st.pop();
        }

        for(int i = 0; i<n; i++){
            res.push_back(ng[nums1[i]]);
        }

        return res;
    }
};