#include<stdio.h>
typedef struct LL{
    int x;
    int y;
}K;
K a={0,0};
const int k=10;
const int s=20;
K*v(int x,int y){
    K*v=&a;
    v->x=k*x;
    v->y=s*y;
    return v;
}
int main(){
int a;
int b;
printf("请输入x的值");
scanf("%d",&a);
printf("请输入y的值");
scanf("%d",&b);
K*g=v(a,b);
printf("%d\n%d",g->x,g->y);
}
