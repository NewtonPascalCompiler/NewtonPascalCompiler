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
_REALNUM0         dd 1.000000
_REALNUM1         dd 2.000000
_REALNUM2         dd 3.000000
_REALNUM3         dd 4.000000
_REALNUM4         dd 5.000000
_REALNUM5         dd 6.000000
    .const
    .code 
start:  
mov esi, ebp
push ebp
mov ebp, esp
call luo
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
luo:
push ebp
mov ebp, esp
mov esi, ss:[ebp+0]
sub esp, 4		;Allocate Varable space
sub esp, 24		;Allocate Varable space
sub esp, 4		;Allocate Varable space

fld dword ptr[_REALNUM0]
mov eax, 5

sub eax, 5
sal eax,2
mov edi, -8
sub edi, eax
fstp dword ptr [ebp+edi]

fld dword ptr[_REALNUM1]
mov eax, 6

sub eax, 5
sal eax,2
mov edi, -8
sub edi, eax
fstp dword ptr [ebp+edi]

fld dword ptr[_REALNUM2]
mov eax, 7

sub eax, 5
sal eax,2
mov edi, -8
sub edi, eax
fstp dword ptr [ebp+edi]

fld dword ptr[_REALNUM3]
mov eax, 8

sub eax, 5
sal eax,2
mov edi, -8
sub edi, eax
fstp dword ptr [ebp+edi]

fld dword ptr[_REALNUM4]
mov eax, 9

sub eax, 5
sal eax,2
mov edi, -8
sub edi, eax
fstp dword ptr [ebp+edi]

fld dword ptr[_REALNUM5]
mov eax, 10

sub eax, 5
sal eax,2
mov edi, -8
sub edi, eax
fstp dword ptr [ebp+edi]

mov eax, 5

mov ecx, eax 		;ecx = for1
mov edi, -4
mov ss:[ebp+edi], ecx
mov eax, 10

mov edx, eax 		;edx = for2
inc edx
__CG__label0:
 cmp ecx, edx
 je __CG__label1		;for end
push edx		;save for2
push ecx		;save for1
mov edi, -4
mov eax, ss:[ebp+edi] 

sub eax, 5
sal eax,2
mov edi, -8
sub edi, eax
fld dword ptr [ebp+edi]
mov edi, -4
mov eax, ss:[ebp+edi] 

sub eax, 5
sal eax,2
mov edi, -8
sub edi, eax
fld dword ptr [ebp+edi]
fmul
mov edi, -32
fstp dword ptr [ebp+edi]

mov edi, -32
fld dword ptr [ebp+edi]
call output_real


pop ecx		;restore for1
pop edx		;restore for2
inc ecx
mov edi, -4
mov ss:[ebp+edi], ecx
jmp __CG__label0
 __CG__label1:


add esp, 32
pop ebp
ret
end    start
