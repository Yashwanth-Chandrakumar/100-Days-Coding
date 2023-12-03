int n = ratings.size();
    vector<int> result(n, -1);
    stack<int> st;

    for (int i = 0; i < n; ++i) {
        while (!st.empty() && ratings[st.top()] >= ratings[i]) {
            st.pop();
        }

        if (!st.empty()) {
            result[i] = ratings[st.top()];
        }

        st.push(i);
    }

    return result;
