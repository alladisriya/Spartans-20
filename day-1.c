#include<stdio.h>
int rev(int a){
    int s=0;
    while(a){
        s=(s*10)+a%10;
        a=a/10;
    }
    return s;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t){
        int a,b;
        scanf("%d %d",&a,&b);
        int p=rev(a)+rev(b);
        printf("%d\n",rev(p));t--;
    }
}