#include <stdio.h> ///函式裡的變數 pk 外面的變數
int myfuncA(){
    int x=200;
    printf("myfuncA()裡的x是%d\n",x);
}
int main(){
    int x = 100;
    printf("main()裡的x是:%d\n",x);
    myfuncA();
    printf("main()裡的x是:%d\n",x);
}

