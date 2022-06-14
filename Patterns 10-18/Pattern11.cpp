/* 
Pattern 11 :-
for n=3;
A A A 
B B B 
C C C 
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            char ans =  'A' + i - 1;
            cout << ans << " ";
        }
        cout << endl;
    }
}