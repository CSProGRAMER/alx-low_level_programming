section .data
    hello db "Hello, Holberton",10,0 ; The string to be printed, followed by a newline character and null terminator

section .text
    global main
    extern printf  ; Declare the printf function as external

main:
    sub rsp, 8     ; Align the stack to a 16-byte boundary
    mov rdi, hello ; Load the address of the format string into rdi
    call printf    ; Call the printf function
    add rsp, 8     ; Restore the stack pointer
    xor rax, rax   ; Clear the return value (rax)
    ret            ; Return to the caller
