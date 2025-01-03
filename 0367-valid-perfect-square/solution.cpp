class Solution {
public:
    bool isPerfectSquare(int num) {
      if(num==1) return 1;
          int left = 1,right = num/2;
              int mid;
                  while(left<=right){
                          mid = left + (right-left)/2;
                                  if(mid<num/mid){
                                              left = mid+1;
                                                      }
                                                              else if(mid>num/mid){
                                                                         right = mid-1;
                                                                                 }else if(mid*mid==num){
                                                                                             return 1;
                                                                                                     }else{
                                                                                                                 right = mid-1;
                                                                                                                         }
                                                                                                                             }
                                                                                                                                 return 0;  
    }
};
