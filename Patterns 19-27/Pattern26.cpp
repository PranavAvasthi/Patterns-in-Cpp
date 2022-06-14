/* 
Pattern 26 :-
for n=3;
  1
 121
12321
*/
# include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++) {
        // for Space 
        int space = n - i;
        while(space) {
            cout << " ";
            space--;
        }

        // for 1st Triangle
        for(int j=1; j<=i; j++) {
            cout << j;
        }

        // for 2nd Triangle
        int start = i - 1;
        while(start) {
            cout << start;
            start--;
        }
        
        cout << endl;
    }
}