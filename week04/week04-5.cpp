#include <stdio.h>///CPE-0102A
int main(){
    int n,a,b;
    scanf("%d",&n);///��n�����
    for (int i=0; i<n; i++){///�j��]n��
        scanf("%d",&a);///�Ʀra: �٭na�ӼƦr
        int ans = 0;///�j��e��int ans = 0
        for (int j=0; j<a; j++){///Ū��a�ӼƦr
            scanf("%d",&b);///Ū�J�Ʀrb
            ans += b;///�j��̭�ans +=b
        }
        printf("%d\n",ans);///�j��᭱,��ƦrŪ�X��
    }



}

