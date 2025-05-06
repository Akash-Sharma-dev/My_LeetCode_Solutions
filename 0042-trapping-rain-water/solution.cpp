class Solution {
    public:
        int trap(vector<int>& height) {
            int water = 0;
            int n = height.size();
            int current = 0;
            int last = 1;
            int large = last;
            while(current+1<n){
                 last = current+1;
                 large = last;
                 while(last<n && height[last]<height[current]){
                     if(height[large]<=height[last]){
                                                           large = last;
                                                                    }

                                                         last++;
                  }
                                                  if(last<n){
                                                    for(int i = current+1;i<last;i++){
                    water += height[current]-height[i];
                                                  }
                                                    current = last;
             }else{
               for(int i = current+1;i<large;i++){
                    water += height[large]-height[i];
             }
               current = large;
             }
                                             }
        return water;  
    }
};
