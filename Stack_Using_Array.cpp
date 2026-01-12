#include <bits/stdc++.h>
using namespace std;
struct MyStack
{
    public:
        vector<int> v;

        void push(int val)
        {
            v.push_back(val);
        }
        void pop()
        {
            v.pop_back();
        }
        int top()
        {
            return v.back();
        }
        int empty()
        {
            return v.empty();
        }
        int size()
        {
            return v.size();
        }
};

int main()
{
    MyStack st;
    int n;
    cin >> n;
    for(int i = 0;i<n;i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    for(int i = 0;i<n;i++)
    {
        cout << st.top() << endl;
        st.pop();
    }
    return 0;
}


/*
Input:
5 
10 20 30 40 50

Output:
50
40
30
20
10


*/