/* 
Pattern 17 :-
for n=3;
A
B C
C D E
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=i; j++) {
            char ans = 'A' + i + j - 2;
            cout << ans << " ";
        }
        cout << endl;
    }   
}