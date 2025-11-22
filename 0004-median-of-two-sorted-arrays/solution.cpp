class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int n1 = nums1.size(), n2 = nums2.size(), mid = 0, i = 0, j = 0, k = 0, n = n1 + n2;
        
        if(n==0) return 0;
        vector<int>nums(n);
        
        while(i<n1 && j<n2){
            if(nums1[i] < nums2[j]){
                nums[k] = nums1[i];
                i++;
            }else{
                nums[k] = nums2[j];
                j++;
            }
            k++;
        }

        while(i<n1){
            nums[k++] = nums1[i++];
        }

        while(j<n2){
            nums[k++] = nums2[j++];
        }
        
        if(n==1) return nums[0];
        if(n==2) return (float)(nums[0] + nums[1])/2;
        
        mid = n/2;
        if(!(n % 2)){
            return (float)(nums[mid-1] + nums[mid])/2;
        }else{
            return nums[mid];
        }
    }
};
