/* 
Pattern 14 :-
for n=3;
A B C
B C D 
C D E 
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            char ans = 'A' + i + j - 2;
            cout << ans << " ";
            ans++;
        }
        cout << endl;
    }
}