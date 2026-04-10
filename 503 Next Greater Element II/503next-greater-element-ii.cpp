class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        stack<int>st;
        vector<int>res(n, -1);
        int gt = 0;
        for(int i = 0; i<n; i++){
            if(nums[i] > nums[gt]) gt = i;
            while(!st.empty() && nums[st.top()] < nums[i]){
                res[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }
        for(int i = 0; i<=gt; i++){
            while(!st.empty() && nums[st.top()] < nums[i]){
                res[st.top()] = nums[i];
                st.pop();
            }
            st.push(i);
        }

        return res;
    }
};