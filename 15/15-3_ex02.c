#include <stdio.h>

int change(char *str1,char *str2);
int main(){
    char str1[100];
    char str2[100];

    printf("문자를 입력하세요 : ");
    scanf("%s", str1);

    change(str1, str2);

    printf("대소문자 변경 결과 : %s",str2);
    return 0;
}
int change(char *str1,char *str2){
    while(*str1){
        if(*str1 < 100){
            *str2 = *str1 + 32;
        }
        else{
            *str2 = *str1 - 32;
        }
        str2++;
        str1++;
    }
    *str2 = '\0';
    return 0;
}
