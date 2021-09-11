#include <stdio.h>
void target(){
    printf("Oh No! Your Hacker.\n");
}
void uname(){
    char str[16];
    printf("input your name: \n");
    gets(str);
    printf("Hello, %s \n", str);
}
int main(){
    setvbuf(stdin, NULL, _IONBF, 0);
    setvbuf(stdout, NULL, _IONBF, 0);
    uname();
    return 0;
}
