.section .data
data_items:
.long 3,67,34,222,45,75,54,34,44,33,22,11,66,255
.section .text
.globl _start
_start:
movl $0,%edi
movl data_items(,%edi,4),%eax
movl %eax,%ebx
movl $12,%ecx
movl data_items(,%ecx,4),%edx

start_loop:
cmpl %edx,%eax
je loop_exit
incl %edi
movl data_items(,%edi,4),%eax
cmpl %ebx,%eax
je start_loop

movl %eax,%ebx
jmp start_loop
loop_exit:
movl $1,%eax
int $0x80
