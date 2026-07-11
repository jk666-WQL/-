#include <stdio.h>
struct student
{
    char name[20];
    int age[6];
    int id[20];
}j,i;
void print_struct(struct student j){
    printf("%s\n",j.name);
    printf("%d\n",j.age);
    printf("%d",j.id);}
void print_piont(struct student *p){
    printf("%d\n",(*p).id);
}
typedef struct student a;
typedef int* structj;

int main(){

     a j={"yangjian",21,5235416};//整体初始化
     a*p=&j;
    print_struct(j);
    print_piont(&j);
    printf("%s\n",j.name);
    printf("%d\n",j.age);
    printf("%d\n",j.id);
    printf("%d\n",(*p).id);
    printf("%d",j.age);
    return 0;
}