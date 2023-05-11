#include <iostream>
#include <deque>

using namespace std;

int main()
{
    int n, d, x;
    deque<int> dq;
    cin >> n; cin >> d;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        dq.push_back(x);
    }

    for (int i = 0; i < d; ++i) {
        dq.push_back(dq.front());
        dq.pop_front();
    }

    for(auto e: dq) cout << e << ' ';

    return 0;
}