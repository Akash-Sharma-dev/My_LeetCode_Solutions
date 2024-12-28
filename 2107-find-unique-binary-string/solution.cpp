class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string,int>mpp;
            int n = nums.size();
                int carry = 0;
                    int digit = 0;
                        string binary = "0";
                            int l = binary.length();
                                while(l!=n){
                                        binary = "0" + binary;
                                                l = binary.length();
                                                    }
                                                        for(int i = 0;i<n;i++){
                                                                mpp[nums[i]] = 1;
                                                                    }
                                                                        for(int i =0;i<=n;i++){
                                                                                if(mpp.find(binary) == mpp.end()){
                                                                                            return binary;
                                                                                                    }
                                                                                                            int j = 1;
                                                                                                                    carry = 0;
                                                                                                                            digit = binary[l-j]-'0'+1;
                                                                                                                                    binary[l-j] = digit + '0';
                                                                                                                                            if(binary[l-j]=='2'){
                                                                                                                                                        binary[l-j] = '0';
                                                                                                                                                                    carry = 1;
                                                                                                                                                                            }
                                                                                                                                                                                    while(carry!=0){
                                                                                                                                                                                               j++;
                                                                                                                                                                                                          digit = binary[l-j]-'0'+carry;
                                                                                                                                                                                                                     binary[l-j] = digit + '0';
                                                                                                                                                                                                                                if(binary[l-j]=='2'){
                                                                                                                                                                                                                                              binary[l-j] = '0';
                                                                                                                                                                                                                                                            carry = 1;
                                                                                                                                                                                                                                                                       }else{
                                                                                                                                                                                                                                                                                      carry = 0;
                                                                                                                                                                                                                                                                                                 }
                                                                                                                                                                                                                                                                                                         }
                                                                                                                                                                                                                                                                                                             }    
                                                                                                                                                                                                                                                                                                                 return binary;
    }
};
