#include <iostream>
using namespace std;
void square_pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void traingle_pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void traingle_pattern_1_12_123(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void traingle_pattern_1_22_333(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << i << " ";
        }
        cout << endl;
    }
}
void inverted_traingle_pattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j < n-i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}
void inverted_traingle_pattern_1234_123_12_1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j <= n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
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
void traingle_pattern_1_23_456_78910(int n){
    int num = 1;
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout << num++ << " ";
        }
        cout << endl;
    }
}
void traingle_pattern_A_AB_ABC(int n){
    for(int i=1; i<=n; i++){
        for(char j='A'; j<'A'+i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
void traingle_pattern_ABC_AB_A(int n){
    for(int i=1; i<=n; i++){
        for(char j='A'; j<='A'+(n-i); j++){
            cout << j << " ";
        }
        cout << endl;
    }
}
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