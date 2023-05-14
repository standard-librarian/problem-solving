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

    string s1, s2;
    bool found;
    Depressed{
        found = false;
        int fq[26] = {0};
        cin >> s1 >> s2;
        for (auto c: s1)
            fq[c - 'a'] = 1;
        for (auto c: s2)
            fq[c - 'a'] += (fq[c - 'a'] == 1);
        for(auto i: fq)
            if (i > 1)
                found = true;
        cout << (found? "YES":"NO");
    };


    return 0;
}