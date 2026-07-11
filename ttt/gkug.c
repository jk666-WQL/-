#include <stdio.h>
#include <ctype.h>
int main() {
   char chars[] = "a1 B?\n";
   for (int i = 0; chars[i] != '\0'; i++) {
       unsigned char ch = chars[i];
       printf("字符: '%c'\n", ch);
       if (isalpha(ch)) printf(" - 字母\n");
       if (isdigit(ch)) printf(" - 数字\n");
       if (isspace(ch)) printf(" - 空白\n");
       if (ispunct(ch)) printf(" - 标点\n");
   }
   printf("tolower('A') = '%c'\n", tolower('A'));
   printf("toupper('a') = '%c'\n", toupper('a'));
   return 0;
}