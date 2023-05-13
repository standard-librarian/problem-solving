#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <stack>

#define Depressed int t; \
cin >> t;                \
while(t--)

using namespace std;

enum query {
    toFront, front, back, push_back, r
};

bool reversed = false;
query map_to_enum(string const & str) {
    if (str == "front") return (reversed? back: front);
    if (str == "toFront") return (reversed? push_back: toFront);
    if (str == "back") return (reversed? front: back);
    if (str == "push_back") return (reversed? toFront: push_back);
    if (str == "reverse") return r;
}
int main(){
    std::ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    string s;
    int x = 0;
    deque<int> d;

    Depressed{
        cin >> s;
        switch (map_to_enum(s)){
            case toFront:
                d.push_front((cin >> x, x));
                break;
            case front:
                cout << (d.empty()?"No job for Ada?": to_string((x = d.front(), d.pop_front(), x))) << '\n';
                break;
            case back:
                cout << (d.empty()?"No job for Ada?": to_string((x = d.back(), d.pop_back(), x))) << '\n';
                break;
            case r:
                reversed = !reversed;
                break;
            case push_back:
                d.push_back((cin >> x, x));
                break;
        }
    }
    return 0;
}