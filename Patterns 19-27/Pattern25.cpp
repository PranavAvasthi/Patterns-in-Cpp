/* 
Pattern 25 :-
for n=3;
  1
 23
456
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int value = 1;

    for(int i=1; i<=n; i++) {
        for(int k=1; k<=(n-i); k++) {
            cout << " ";
        }
        for(int j=1; j<=i; j++) {
            cout << value;
            value++;
        }
        cout << endl;
    }
}