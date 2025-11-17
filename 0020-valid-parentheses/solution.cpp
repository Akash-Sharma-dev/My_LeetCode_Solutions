class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        char c, top;
        int n = s.length();
        if(n==0 || n== 1){
            return false;
        }
        st.push('a');
        for(int i = 0;i<n;i++)
        {
            c = s[i];
            top = st.top();
            if(c == '(' || c == '{' || c == '[')
            {
                st.push(c);
            }
            else
            {
               if((c == ')' && top == '(') || (c == '}' && top == '{') || (c == ']' && top == '['))
               {
                  st.pop();
               }
               else
               {
                   return false;
               }
            }
        }
        if(st.top() == 'a'){
            return true;
        }else{
            return false;
        }
    }
};
