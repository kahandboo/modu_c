#include <stdio.h>

int reversestr(char *str1,char *str2);
int main(){
    char str1[100];
    char str2[100];

    printf("문자를 입력: ");
    scanf("%s",str1);

    reversestr(str1,str2);

    printf("역순으로 바뀐 문자 : %s",str2);

    return 0;
}
int reversestr(char *str1, char *str2){
    int n = 0;
    while(*str1){
        str1++;
        n++;
    }
    str1--;
    while(n){
        *str2 = *str1;
        n--;
        str1--;
        str2++;
    }
    *str2 = '\0';

    return 0;
}
