#include <iostream>
using namespace std;
// Time: O(n^2), Space: O(1) - Prints n x n grid of stars.
// Logic: Generates a square pattern of asterisks.
void square_pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints right-angled triangle of stars.
// Logic: Generates a right-angled triangle pattern of asterisks.
void traingle_pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints triangle with numbers 1 to row number.
// Logic: Generates a triangle pattern with increasing numbers per row.
void traingle_pattern_1_12_123(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints triangle with repeated row numbers.
// Logic: Generates a triangle pattern with repeated row number per row.
void traingle_pattern_1_22_333(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints inverted right-angled triangle of stars.
// Logic: Generates an inverted right-angled triangle pattern of asterisks.
void inverted_traingle_pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j < n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints inverted triangle with decreasing numbers.
// Logic: Generates an inverted triangle pattern with numbers from 1 to decreasing count.
void inverted_traingle_pattern_1234_123_12_1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j <= n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints centered pyramid of stars.
// Logic: Generates a centered pyramid pattern of asterisks with spaces.
void pyramid_pattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints inverted centered pyramid of stars.
// Logic: Generates an inverted centered pyramid pattern of asterisks.
void Inverted_pyramid_pattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "  ";
        }
        for(int j=1; j<=2*n-(2*i-1); j++){
            cout << "* ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints diamond/star pattern of stars.
// Logic: Generates a diamond pattern combining pyramid and inverted pyramid.
void star(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << "  ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "  ";
        }
        for(int j=1; j<=2*n-(2*i-1); j++){
            cout << "* ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints half diamond pattern of stars.
// Logic: Generates a half diamond pattern with increasing then decreasing stars.
void half_star(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for(int i=1; i<n; i++){
        for(int j=0; j < n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints triangle with alternating 1 and 0.
// Logic: Generates a triangle pattern with alternating binary digits.
void traingle_1_10_101(int n){
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            if(count == 0){
                count = 1;
                cout << count << " ";
            }else{
                count = 0;
                cout << count << " ";
            }
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints mirrored number pattern.
// Logic: Generates a mirrored pattern with numbers and spaces.
void mirror(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        for(int j=1; j<=2*(n-i); j++){
            cout << "  ";
        }
        for(int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints triangle with continuous numbers.
// Logic: Generates a triangle pattern with continuous incrementing numbers.
void traingle_pattern_1_23_456_78910(int n){
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << num++ << " ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints triangle with increasing alphabets.
// Logic: Generates a triangle pattern with increasing alphabet sequences.
void traingle_pattern_A_AB_ABC(int n){
    for(int i=1; i<=n; i++){
        for(char j='A'; j<'A'+i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints inverted triangle with decreasing alphabets.
// Logic: Generates an inverted triangle pattern with decreasing alphabet sequences.
void traingle_pattern_ABC_AB_A(int n){
    for(int i=1; i<=n; i++){
        for(char j='A'; j<='A'+(n-i); j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
// Time: O(n^2), Space: O(1) - Prints triangle with repeated alphabets.
// Logic: Generates a triangle pattern with repeated alphabets per row.
void traingle_pattern_A_BB_CCC(int n){
    for(int i = 0; i < n; i++){
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
int main(){
    traingle_pattern_ABC_AB_A(5);
}