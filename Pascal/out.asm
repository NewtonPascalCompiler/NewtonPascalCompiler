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
call lu
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


ff:
push ebp
mov ebp, esp
mov esi, ss:[ebp+0]

mov edi, 8
mov eax, ss:[ebp+edi] 
push eax
mov eax, 0
mov ebx, eax
pop eax
cmp eax, ebx
mov eax, 0
setg al

cmp eax, 1
je __CG__label0		; If equal Jump to taken-content; 
jmp __CG__label1		; Jump to NotTake Content
__CG__label0: 
mov edi, 8
mov eax, ss:[ebp+edi] 
push eax
call output
pop  eax


mov edi, -16
mov eax, ss:[esi+edi] 
push eax
;call function
;function parameter start
mov edi, 8
mov eax, ss:[ebp+edi] 
push eax
mov eax, 1
mov ebx, eax
pop eax
sub eax, ebx
push eax		; push the parameter
;function parameter end
call ff
pop ebx		;pop parameter in order to banlance the stack
push eax
mov edi, 8
mov eax, ss:[ebp+edi] 
mov ebx, eax
pop eax
add eax, ebx
mov ebx, eax
pop eax
mov edi, -16
mov eax, ebx
mov ss:[esi+edi], eax

jmp __CG__label2		; Jump to The if exit Label
__CG__label1: 
__CG__label2: 


add esp, 0
pop ebp
ret

lu:
push ebp
mov ebp, esp
mov esi, ss:[ebp+0]
sub esp, 12		;Allocate Varable space

mov edi, -4
mov eax, ss:[ebp+edi] 
push eax
mov eax, 5
mov ebx, eax
pop eax
mov edi, -4
mov eax, ebx
mov ss:[ebp+edi], eax

mov edi, -8
mov eax, ss:[ebp+edi] 
push eax
;call function
;function parameter start
mov edi, -4
mov eax, ss:[ebp+edi] 
push eax		; push the parameter
;function parameter end
call ff
pop ebx		;pop parameter in order to banlance the stack
mov ebx, eax
pop eax
mov edi, -8
mov eax, ebx
mov ss:[ebp+edi], eax

mov edi, -8
mov eax, ss:[ebp+edi] 
push eax
call output
pop  eax


add esp, 12
pop ebp
ret
end    start
