#include<stdio.h>
    char s[20];
    char d[20];
    int zkcsk(char*s,char*d){
    int len1=0;
    int len2=0;
    int i=0;
    printf("输入字符串");
    scanf("%s\n",s);
    scanf("%s",d);
    while(s[len1]!='\0'){
        len1++;
    }
    while(d[len2]!='\0'){
        len2++;
    }
    if (s[i]==d[i]){
        return 0;
    }
    for(int i=0;i<len1;i++){
        if(s[i]!=d[len2-i-1]){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a;
    switch (zkcsk(s,d))
    {
    case 0:printf("0"); 
    break;
    case 1:printf("1");
    break;
    }
    return 0;
}