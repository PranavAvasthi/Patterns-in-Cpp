/* 
Pattern 3 :-
for n=3;
1 2 3
1 2 3 
1 2 3 
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++) {
            cout << j << " ";   
        }
        cout << endl;
    }
}