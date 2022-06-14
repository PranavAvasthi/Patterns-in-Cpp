/* 
Pattern 15 :-
for n=3;
A
B B 
C C C
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            char ans = 'A' + i - 1;
            cout << ans << " ";
        }
        cout << endl;
    }
}