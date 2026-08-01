class CustomStack {
public:
    deque<int> st;
    int len = 0;
    int curr = 0;
    CustomStack(int maxSize) {
        len = maxSize;
    }
    
    void push(int x) {
        if(curr >= len) {
            return;
        }
        curr++;
        st.push_back(x);

    }
    
    int pop() {
        if(curr == 0) {
            return -1;
        }
        curr--;
        int temp = st.back();
        st.pop_back();
        return temp;
    }
    
    void increment(int k, int val) {
        int ind = k;
        if(k > curr) {
            ind = curr;
        }
        for(int i = 0; i < ind; i++) {
            st[i] += val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */