#include <iostream>
#include <string>
#include <map>

#define Depressed int t; \
cin >> t;                \
while(t--)

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    string s;
    map<string, int> names;
    Depressed{
        cin >> s;
        if(names.count(s))
            names[s]++;
        else
            names.insert(make_pair(s, 0));
        cout << (names[s]? s + to_string(names[s]): "OK") << '\n';
    };
    return 0;
}