#include <stdio.h>
int myAdd(int a,int b){ ///ㄧ计﹚竡
    return a+b; ///秈ㄓ2计 ,1
}
void myPrint(int a){ ///ㄧ计﹚竡 秈ㄓ
    for(int i=1;i<=a; i++) printf("*");
    printf("\n");
}
int main(){ ///main()ㄧΑ
    int ans = myAdd(3, 4); ///ㄧ计㊣
    printf("Hello ans: %d\n",ans);
    myPrint(ans); ///ㄧΑ㊣(叫腊и暗ㄆ)
}
