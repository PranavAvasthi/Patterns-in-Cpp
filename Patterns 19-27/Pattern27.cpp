/* 
Pattern 27 :-
for n=3;
123321
12**21
1****1
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=(n-i+1); j++) {
            cout << j;
        }

        for(int k=1; k<=(i-1); k++) {
            cout << "*";
        }

        for(int l=(i-1); l>=1; l--) {
            cout << "*";
        }

        for(int m=(n-i+1); m>=1; m--) {
            cout << m;
        }
        cout << endl;
    }
}