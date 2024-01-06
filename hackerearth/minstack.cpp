class minStack

{

// Write your code here.

stack<pair<int,int>>st;

public:

// Constructor

minStack()

{

}

// Function to add another element equal to num at the top of stack.

void push(int num)

{

if(st.empty() || num<st.top().second)st.push({num,num});

else st.push({num,st.top().second});

}

// Function to remove the top element of the stack.

int pop()

{

if(st.size()){

int ans = st.top().first;

st.pop();

return ans;

}

return -1;

}

// Function to return the top element of stack if it is present. Otherwise return -1.

int top()

{

if(st.size()) return st.top().first;

return -1;

}

// Function to return minimum element of stack if it is present. Otherwise return -1.

int getMin()

{

if(st.size())return st.top().second;

return -1;

}

};
