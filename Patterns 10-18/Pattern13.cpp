/* 
Pattern 13 :-
for n=3;
1 2 3 
2 3 4
3 4 5
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << i+j-1 << " ";
        }
        cout << endl;
    }
}