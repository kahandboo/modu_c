#include <iostream>

using namespace std;

int main() {
    char digitisbn;
    int evennum = 0;
    int oddnum = 0;
    for (int position = 1; position <= 12; position++) {
        digitisbn = cin.get();
        if (digitisbn == '\n') // 개행 문자를 만나면 입력 종료
            break;
        int digit = digitisbn - '0';
        if (position % 2 == 1) {
            oddnum += digit;
        } else {
            evennum += digit * 3;
        }
    }
    int result = 10 - ((evennum + oddnum) % 10);
    if (result == 10)
        result = 0;
    cout << result;

    return 0;
}
