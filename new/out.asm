.386
.model flat,stdcall
option casemap:none

include    masm32\include\windows.inc
include    masm32\include\kernel32.inc
include    masm32\include\msvcrt.inc
includelib masm32\lib\msvcrt.lib
includelib masm32\lib\kernel32.lib
include    masm32\include\user32.inc
includelib masm32\lib\user32.lib
includelib masm32\lib\kernel32.lib
includelib masm32\lib\msvcrt.lib
printf PROTO C :ptr sbyte, :vararg
	.data
szInput         db  '%d',  0
szInput_real    db  '%f', 0
szFormat        db  '%d',  0ah, 0dh , 0
szFormat_real   db  '%lf', 0ah, 0dh , 0
tmp			 db 0, 0, 0, 0, 0, 0, 0, 0
    .const
    .code 
start:  
mov esi, ebp
push ebp
mov ebp, esp
call HelloWorld
pop ebp
invoke    ExitProcess,NULL

output:
	push    ebp
	mov     ebp, esp
	push    eax
	mov     ebx, offset szFormat
	push    ebx
	call    printf
	pop		ebx
	pop		ebx
   pop     ebp
   ret
output_real:
   sub esp, 8
   fstp qword ptr [esp]
   push offset szFormat_real
   call printf
   pop eax
   add esp, 8
   ret
input:
   invoke crt_scanf, addr szInput, addr tmp
   mov eax, dword ptr tmp
   ret
input_real:
   invoke crt_scanf, addr szInput_real, addr tmp
   fld dword ptr tmp
   ret







Hello:
push ebp
mov ebp, esp
mov esi, ss:[ebp+0]

mov eax, 5
push eax
call output
pop  eax


add esp, 0
pop ebp
ret



Double2:
push ebp
mov ebp, esp
mov esi, ss:[ebp+0]

mov edi, -16
mov eax, ss:[esi+edi] 
push eax
mov edi, 8
mov eax, ss:[ebp+edi] 
push eax
mov eax, 2
mov ebx, eax
pop eax
xor edx, edx
mul ebx
mov ebx, eax
pop eax
mov edi, -16
mov eax, ebx
mov ss:[esi+edi], eax

add esp, 0
pop ebp
ret

HelloWorld:
push ebp
mov ebp, esp
mov esi, ss:[ebp+0]
sub esp, 12		;Allocate Varable space
sub esp, 8		;Allocate Varable space

mov edi, -16
mov eax, ss:[ebp+edi] 
push eax
call output
pop  eax


add esp, 20
pop ebp
ret
end    start
