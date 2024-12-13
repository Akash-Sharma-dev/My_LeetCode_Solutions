class Solution {
public:
    string convert(string s, int numRows) {
       if(numRows==1 || numRows>=int(s.length())){
                return s;
                    }    vector<string>rows(min(numRows,int(s.length())));
                        int current_r = 0;
                            bool goingDown = false;
                                string final_string = "";
                                    for(char c : s){
                                           rows[current_r]+=c;
                                                  if(current_r == 0 || current_r == numRows-1){
                                                             goingDown = !(goingDown);
                                                                    }
                                                                           current_r += goingDown?1:-1;
                                                                               }
                                                                                   for(string row_str : rows){
                                                                                           final_string +=row_str;
                                                                                               }
                                                                                                   return final_string;
       
    }
};
