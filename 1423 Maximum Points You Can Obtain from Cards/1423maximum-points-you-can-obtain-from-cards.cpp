class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n = cardPoints.size();
        int left = 0, right = n-1, points = 0, left_sum = 0, right_sum = 0;
        int i = 0;
        while(i<k){
            left_sum += cardPoints[i];
            i++;
        }
        int j = n-1;
        while((n-k)<=j){
            right_sum += cardPoints[j];
            j--;
        }
        int x = left + k - 1;
        int y = right - k +1;
        while(k--){
            if(right_sum > left_sum){
                points += cardPoints[right];
                right_sum -= cardPoints[right];
                left_sum -= cardPoints[x--];
                right--;               
            }else{
                points += cardPoints[left];
                left_sum -= cardPoints[left];
                right_sum -= cardPoints[y++];
                left++;
            }
        }
        return points;
    }
};