# pwntools-lab


### Prepare


```

sudo apt-get update
sudo apt-get install python3 python3-dev python3-pip git
pip3 install --upgrade git+https://github.com/arthaud/python3-pwntools.git

git clone https://github.com/longld/peda.git ~/peda
echo "source ~/peda/peda.py" >> ~/.gdbinit

```


### Reference

[資訊安全 從毫無基礎開始 Pwn – Buffer Overflow 實作](https://mks.tw/2976/%E8%B3%87%E8%A8%8A%E5%AE%89%E5%85%A8-%E5%BE%9E%E6%AF%AB%E7%84%A1%E5%9F%BA%E7%A4%8E%E9%96%8B%E5%A7%8B-pwn-buffer-overflow)

### Sample Code

```
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


```

### Compile

```
	
gcc demo.c -o demo -fno-stack-protector -no-pie

```