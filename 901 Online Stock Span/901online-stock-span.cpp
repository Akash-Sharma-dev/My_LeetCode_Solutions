class StockSpanner {
public:
    int i = 0;
    stack<int> span;
    stack<int> st;
    StockSpanner() {
        
    }
    int next(int price) {
        span.push(1);
        int sp;
        while (!st.empty() && st.top() <= price) {
            st.pop();
            sp = span.top();
            span.pop();
            sp += span.top();
            span.pop();
            span.push(sp);
        }
        st.push(price);
        return span.top();
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */