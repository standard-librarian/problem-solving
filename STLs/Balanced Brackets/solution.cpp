#include <iostream>
#include <stack>
#include <queue>
#include <deque>

#define Depressed int t; \
cin >> t;                \
while(t--)

using namespace std;

bool isBalanced(string expr)
{
    stack<char> s;

    for (auto c: expr){
        if( c == '{' ||  c == '('  ||  c == '[' ){
            s.push(c);
            continue;
        }
        if (s.empty())
            return false;
        if(!((c == '}' && s.top() == '{')||(c == ']' && s.top() == '[')||(c == ')' && s.top() == '(')))
            return false;
        s.pop();
    }
    return (s.empty());
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string w;
    Depressed{
        cin >> w;
        cout << (isBalanced(w)?"YES":"NO") << '\n';
    };

    return 0;
}
