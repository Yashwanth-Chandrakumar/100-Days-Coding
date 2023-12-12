bool isValidParenthesis(string s)
{
    stack<char> st;
    for (char bracket : s) {
        if (bracket == '(' || bracket == '{' || bracket == '[') {
            st.push(bracket);
        } else {
            if (st.empty()) {
                return false;
            }
            char top = st.top();
            st.pop();
            if ((bracket == ')' && top != '(') ||
                (bracket == '}' && top != '{') ||
                (bracket == ']' && top != '[')) {
                return false;
            }
        }
    }
    return st.empty();
}
