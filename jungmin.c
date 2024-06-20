#include <stdio.h>
void change(char word[101]);
int main(){
    char word[101];
    scanf("%100s",word);
    char temp[101] = word[101];
    change(word);

    if (strcmp(word, temp) == 0){
        printf("%d\n", 1);
    }
    else{
        printf("%d\n", 0);
    }
    return 0;
}
void change(char word[101]){
    int len = sizeof(word);

    for (int i = 0; i < len / 2; i++){
        char temp;
        temp = word[i];
        word[i] = word[len-i-1];
        word[len-i-1] = temp;
    }

}