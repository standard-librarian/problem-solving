#include <iostream>
#include <stack>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    int q; int n;
    stack<int> s;
    while(t--){
        cin >> q;
        if(q == 1){
            cin >> n;
            s.push(n);
        }
        if(q == 2 && !s.empty())
            s.pop();
        if(q == 3)
            if (!s.empty()) {
                cout << s.top() << '\n';
            } else {
                cout << "Empty!\n";
            }
    }

    return 0;
}
