#include <iostream>
#include <set>
#include <map>

#define Depressed int t; \
cin >> t;                \
while(t--)

using namespace std;

int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string kb = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir; cin >> dir;
    string word; cin >> word;
    for(auto c: word)
        cout << kb[find(kb.begin(), kb.end(), c) - kb.begin() - (dir == 'R') + (dir == 'L')];
    return 0;
}