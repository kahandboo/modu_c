#include <iostream>

using namespace std;

int main(){
    for (int n = 1; n <=8; n++){
        if (n<=4){
            for (int i=0; i<(4-n); i++){
                cout << ' ';
            }
            for (int j=0; j<(2*n); j++){
                cout << '#';
            }
        }
        else {
            for (int i=0; i<(n-5); i++){
                cout << ' ';
            }
            for (int j=0; j<(8-2*(n-5)); j++){
                cout << '#';
            }
        }
        cout << '\n';
        }
    return 0;
    }
