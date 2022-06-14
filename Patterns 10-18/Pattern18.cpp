/* 
Pattern 18 :-
for n=3;
C
B C
A B C
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        char ans = 'A' + n - i;
        for(int j=1; j<=i; j++) {
            cout << ans << " ";
            ans++;
        }
        cout << endl;
    }    
}