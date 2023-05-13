#include <iostream>
#include <string>
#include <set>

#define Depressed int t; \
cin >> t;                \
while(t--)

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s;
    set<char> u;
    cin >> s;
    for (auto c: s){
        if(c >= 'a' && c <= 'z')
            u.insert(c);
    }

    cout << u.size() ;

    return 0;
}