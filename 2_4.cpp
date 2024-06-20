#include <iostream>

using namespace std;
int main() {
    for (int n=1; n <=9; n++){
        if(n<=4){
            for (int i=0; i<(n-1); i++){
                cout << ' ';
            }
            for (int j=0; j<(9-(n-1)*2); j++){
                cout << '*';
            }
        }
        else{
            for(int i=0; i<(9-n); i++){
                cout << ' ';
            }
            for (int j=0; j<(2*n-9); j++){
                cout << '*';
            }
        }
        cout << '\n';
    }
    return 0;
}