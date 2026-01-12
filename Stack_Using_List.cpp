#include <bits/stdc++.h>
using namespace std;
class MyStack
{
    public:
        list<int> l;

        void push(int val)
        {
            l.push_back(val);
        }
        void pop()
        {
            l.pop_back();
        }
        int top()
        {
            return l.back();
        }
        int empty()
        {
            return l.empty();
        }
        int size()
        {
            return l.size();
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
10 20 30 40 50 60

Output:
60
50
40
30
20
10

*/