org[0x0100]
 
 mov ax,0
 mov bl,0
 mov cx,10
 mov dx,2
 
 div dx
 mov ax,al
 mov bx,ah
 
 int 0x21
