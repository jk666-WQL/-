#include <stdio.h>
typedef struct LL
{
    int x;
    int y;
}J;
J a={0,0};
int const k=12;
int const s=20;
J*p(int x,int y){
    J*p=&a;
    p->x=k*x;
    p->y=s*y;
    return p;
}
int main(){
    int r,t;
    printf("输入x的值");
    scanf("%d",&r);
    printf("输入y的值");
    scanf("%d",&t);
    J*f=p(r,t);
    printf("%d\n%d",f->x,f->y);
    return 0;
}
