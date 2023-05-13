#include <iostream>
#include <set>

#define Depressed int t; \
cin >> t;                \
while(t--)

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int n, m, x;
    Depressed{
        cin >> n >> m;
        set<int> s;
        for (int i = 0; i < n + m; ++i)
            s.insert((cin >> x, x));
        cout << n + m - s.size() << '\n';
    };

    return 0;
}