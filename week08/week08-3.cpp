///week08-3.cpp �n�ǲߦr��
#include <stdio.h>
#include <string.h>
int main(){
    char s1[30];
    printf("�п�J�A���^��W�r:");
    scanf("%s",s1);
    char s2[30]="�A�n";
    printf("%s %s", s1 ,s2);

    s1[0]='A';
    printf("�A���W�r�Q�令 %s\n", s1);

    printf("�A���^��W�r�����׬O %d\n",strlen(s1));
}
