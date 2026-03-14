#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        int N;
        string S;
        cin >> N;
        cin >> S;

        int alice = 0, bob = 0;
        char server = 'A'; // Alice starts serving

        for(char c : S) {
            if(c == server) {
                if(server == 'A')
                    alice++;
                else
                    bob++;
            } else {
                server = c; // receiver becomes server
            }
        }

        cout << alice << " " << bob << endl;
    }

    return 0;
}
