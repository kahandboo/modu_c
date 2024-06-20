#include <iostream>

using namespace std;

int main() {
    for (int n=1; n<=8; n++){
        if (n<=4){
            for (int i=0; i<(n-1); i++){
                cout << ' ';
            }
            for (int a=0; a<n; a++){
                cout << '#';
            }
            for (int j=0; j<(12-(n-1)*4); j++){
                cout << ' ';
            }
            for (int b=0; b<n; b++){
                cout << '#';
            }
            for (int k=0; k<(n-1); k++){
                cout << ' ';
            }
        }
        else{
            for (int i=0; i<(abs(n-9)-1); i++){
                cout << ' ';
            }
            for (int a=0; a<abs(n-9); a++){
                cout << '#';
            }            
            for (int j=0; j<(12-(abs(n-9)-1)*4); j++){
                cout << ' ';
            }
            for (int b=0; b<abs(n-9); b++){
                cout << '#';
            }            
            for (int k=0; k<(abs(n-9)-1); k++){
                cout << ' ';
            }            
        }
        cout << '\n';
    }
    return 0;
}