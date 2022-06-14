/* 
Pattern 24 :-
for n=3;
123
 23
  3
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        int value = i;
        for(int k=1; k<=i; k++) {
            cout << " ";
        }
        for(int j=n; j>=i; j--) {
            cout << value;
            value++;
        }
        cout << endl;
    }
}