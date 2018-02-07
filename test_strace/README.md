# Tracing the System's Calls

## Compile and Run hello world
```
gcc -Wall -o test_strace test.c 

[vkhriste@deep-cc7 test_strace]$ strace ./test_strace 
execve("./test_strace", ["./test_strace"], [/* 54 vars */]) = 0
brk(NULL)                               = 0x12cf000
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f19fbb36000
access("/etc/ld.so.preload", R_OK)      = -1 ENOENT (No such file or directory)
open("/etc/ld.so.cache", O_RDONLY|O_CLOEXEC) = 3
fstat(3, {st_mode=S_IFREG|0644, st_size=48763, ...}) = 0
mmap(NULL, 48763, PROT_READ, MAP_PRIVATE, 3, 0) = 0x7f19fbb2a000
close(3)                                = 0
open("/lib64/libc.so.6", O_RDONLY|O_CLOEXEC) = 3
read(3, "\177ELF\2\1\1\3\0\0\0\0\0\0\0\0\3\0>\0\1\0\0\0\20\35\2\0\0\0\0\0"..., 832) = 832
fstat(3, {st_mode=S_IFREG|0755, st_size=2127336, ...}) = 0
mmap(NULL, 3940800, PROT_READ|PROT_EXEC, MAP_PRIVATE|MAP_DENYWRITE, 3, 0) = 0x7f19fb553000
mprotect(0x7f19fb70b000, 2097152, PROT_NONE) = 0
mmap(0x7f19fb90b000, 24576, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_DENYWRITE, 3, 0x1b8000) = 0x7f19fb90b000
mmap(0x7f19fb911000, 16832, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_FIXED|MAP_ANONYMOUS, -1, 0) = 0x7f19fb911000
close(3)                                = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f19fbb29000
mmap(NULL, 8192, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f19fbb27000
arch_prctl(ARCH_SET_FS, 0x7f19fbb27740) = 0
mprotect(0x7f19fb90b000, 16384, PROT_READ) = 0
mprotect(0x600000, 4096, PROT_READ)     = 0
mprotect(0x7f19fbb37000, 4096, PROT_READ) = 0
munmap(0x7f19fbb2a000, 48763)           = 0
fstat(1, {st_mode=S_IFCHR|0620, st_rdev=makedev(136, 0), ...}) = 0
mmap(NULL, 4096, PROT_READ|PROT_WRITE, MAP_PRIVATE|MAP_ANONYMOUS, -1, 0) = 0x7f19fbb35000
write(1, "hello\n", 6hello
     )                  = 6
exit_group(0)                           = ?
+++ exited with 0 +++
```
