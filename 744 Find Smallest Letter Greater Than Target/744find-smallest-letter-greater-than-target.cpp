class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        int l =  0, h = n-1;

        while(l<h){
            int mid = (l+h)/2;
            if(letters[mid]==target || letters[mid] < target){
                l = mid+1;
            }else{
                h = mid;
            }
        }
        if(letters[l] > target)
            return letters[l];
        return letters[0];
    }
};