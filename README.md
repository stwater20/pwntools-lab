# pwntools-lab



```

sudo apt-get update
sudo apt-get install python3 python3-dev python3-pip git
pip3 install --upgrade git+https://github.com/arthaud/python3-pwntools.git

git clone https://github.com/longld/peda.git ~/peda
echo "source ~/peda/peda.py" >> ~/.gdbinit

```


### Buffer Overflow

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

### compile

```
	
gcc demo.c -o demo -fno-stack-protector -no-pie

```