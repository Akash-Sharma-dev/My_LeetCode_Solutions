class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int j = 0; j<n; j++){//Traversing second array from 0 to n
            int x = nums2[j]; //Putting new element in x
            nums1[m] = x; //Placing new element from second array at last of first array
            int i = m-1; //setting i to last of first array
            //***
            //putting new element from 2nd array in sorted 1st array to its right position like insertion sort
            while(i>=0 && x<nums1[i]){
                nums1[i+1] = nums1[i];
                nums1[i] = x;
                i--;
            }
//**
            m++; // Updating the size of 1st array as 1 element added
        }
    }
};
