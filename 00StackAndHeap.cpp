/* In programming, "stack" and "heap" are two areas of memory where data can be stored during the execution of
a program. Here's a brief overview of each:

Stack: The stack is a region of memory that is used for static memory allocation and is managed by the CPU.
It is typically used to store function call information, such as the return address, parameters, and
local variables. When a function is called, space is allocated on the stack for these items, and when
the function returns, that space is freed. The stack operates in a Last In, First Out (LIFO) manner,
meaning that the last item added to the stack is the first one removed.

Heap: The heap is a region of memory that is used for dynamic memory allocation. Unlike the stack, which has
a fixed size determined at compile time, the heap is more flexible and can grow or shrink as needed during
the execution of a program. Memory allocated on the heap remains allocated until it is explicitly deallocated
by the program, typically using functions like malloc (in C) or new (in C++). Because the heap is more flexible,
it can be slower to allocate and deallocate memory on the heap compared to the stack.

In summary, the stack is used for static memory allocation and manages function call information,
while the heap is used for dynamic memory allocation and allows for more flexible memory management.*/