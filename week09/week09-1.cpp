#include <stdio.h>
int myAdd(int a,int b){ ///��Ʃw�q
    return a+b; ///�i��2�Ӽ� ,�X�h1��
}
void myPrint(int a){ ///��Ʃw�q �i�Ӥ@��
    for(int i=1;i<=a; i++) printf("*");
    printf("\n");
}
int main(){ ///main()�禡
    int ans = myAdd(3, 4); ///��ƩI�s
    printf("Hello ans: %d\n",ans);
    myPrint(ans); ///�禡�I�s(�ХL���ڰ���)
}
