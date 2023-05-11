#include <iostream>
#include <queue>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long t; cin >> t;
    int q; long long n;
    queue<long long> qu;
    while(t--){
        cin >> q;
        if(q == 1){
            cin >> n;
            qu.push(n);
        }
        if(q == 2 && !qu.empty())
            qu.pop();
        if(q == 3)
            if (!qu.empty()) {
                cout << qu.front() << '\n';
            } else {
                cout << "Empty!" << '\n';
            }
    }

    return 0;
}
