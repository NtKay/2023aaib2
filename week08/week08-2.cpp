///week08-2.cpp 要學習字串
#include <stdio.h>
int main(){
    char s[30];
    printf("請輸入你的名字:");
    scanf("%s",s); ///不用加s&因為%s有s了
    printf("%s 你好!",s);
}
