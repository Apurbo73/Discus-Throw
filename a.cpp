#include <iostream>
#include <algorithm> 
using namespace std;

int main() {
    int T;
    cin >> T; 

    while (T--) {
        int A, B, C;
        cin >> A >> B >> C; 

        int finalScore = max({A, B, C}); 
        cout << finalScore << endl; 
    }

    return 0;
}
