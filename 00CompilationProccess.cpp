/*

before read this please read how computer work.

// binary by the way is only a way of notation. you can write anything as binary, hex, octal, decimal, ascii
// it's just how data is represented

before we do compilation first of all we prepare tools to do compilation.
there are tools to do compilation that are:
- IDE or code editor (visual studio code).
- compiler (g++) in this case i use 'g++' to compile c++ programming language.

how compilation proccess work. before programs we have written to be compiled/encoded as
.exe file(execution file) or machine codes or binary data they have to pass through some steps.
// before we go further we have to know about machine codes or binary data.
// 'machine codes' is a 'binary' data directly understood by the computer's hardware. convertions of intructions such as functions, keywords, operations, manipulations, etc.
// 'machine codes and binary data' are represented '0' and '1'.

before programs we have written to be compiled/encoded as .exe file(execution file) or
machine codes and binary codes they have to pass through some steps. first, 'assembler'(is part of compiler)
convert programs from programming language to be assembly/opcode/mnemonic (a technique used to aid memory).
then 'compiler' convert 'assembly' to be 'machine code' or '.exe file(execution file)'.
// before we go further we have to know about opcode and mnemonic example.
// 'assembly' is the lowest level programming language.
// 'opcode' short for operation code is an instruction in machine language which tells the hardware what operation needs to be performed with this instruction.
// 'mnemonic' example, "ROY G. BIV" is a mnemonic for remembering the colors of the rainbow (Red, Orange, Yellow, Green, Blue, Indigo, Violet).
// 'assembly', 'opcode', 'mnemonic' is equal.

first, assembler(is part of compiler) convert programs from programming language to be
assembly/opcode/mnemonic. for example:

this is assembly intructions of arithmatic operation such as '+', '-', 'x', '/'.
    ADD(addition/'+'), SUB(subtraction/'-'), MUL(multiplication/'x'), DIV(division/'/'), etc.

Here's an example of adding two numbers and storing the result in a register:
    programming language:
        int a = 5;
        int b = 3;
        int result = a + b;
    instructions that might look something like this (simplified for clarity):
        assign the value of 'a' into a 'X1' register
        assign the value of 'b' into a 'X2' register
        assign the 'result' into a 'X0' register
        // registers are assembly used to hold data temporarily during program execution.
        // different architecture has different 'register sign'(assembly), that why every .exe file or program
        // is uncertain be able to run on other architecture.
    assembly:
        ADD X0, X1, X2;
        ADD X0(a + b), X1(a = 5), X2(b = 3);
        ADD(assembly intruction) X0, X1, X2 (assembly register of value);
        Add the value in register X1 to the value in register X2 and store the result in register X0
        ADD X0 (X2 (5, 3(X1)) );

after assembler(is part of compiler) convert programs from programming language to be
assembly/opcode/mnemonic then 'linker' will link/integrate all programs that have converted to be
assembly to compiled/encoded by compiler be .exe file that contains instructuions and values represented
by machine codes or binary data.

maybe something like this 'ADD X0 (X2 (5, 3(X1)) );'
be 'bin bin(bin (00000101, 00000011(bin)) );' or .exe file. 'bin'(binary).

/////////////////////////////////////////////////////////////////////////////////////////////////////

this section there are questions and answers.

Machine code usually is binary. binary by the way is only a way of notation.
you can write anything as binary, hex, octal, decimal, ascii. it's just how data is represented.
When you have a Program you usually have "High Level Programming Language" → "Assembly Language" → "Machine Code"

Your compiler just converts your High Level Programming Language to Machine Code.
But, if you are really good, you can also write all programs in assembly or machine code.
Then you don't even need a compiler. It doesn't make any sense to do that, but it's possible.

Also assembly is different for different architecture. assembly something like this 'ADD X0, X1, X2' as mnemonic.
assembly is different for different architectures for example in general ARM does not support
as many commands as X86 and some commands are different.

But if you want to code in assembly and not use a programming language you have to write
a different program for each architecture. thats one reason why you use a programming language.
the programming language removes most specialities of the different architectures.

Also platform is not the same as architecture. When you talk about platform you usually talk about
the operating system. For example you can have a Windows computer running on X86 / X64 and
a Windows Computer running on ARM And you can have a Linux Computer running on X86 / X64 or running on ARM.

why encoded programs is represented '0' and '1'?
because CPU only can understand binary to execute, not low and high level languages.

If we have converted programs to be binary is .exe file, what is usage of driver for?
when we have converted to .exe file, so role of driver is useless because they no longer
do to encode high level language to be machine code. but Drivers are still essential for the functioning of
hardware devices, as they enable the OS to communicate with and control hardware.

when driver is useful in when situation which they have to encode high level language to be machine code?
- driver is useful when printing a document, the operating system sends commands to the printer driver to
initialize the printing process, set printing options (like paper size or quality), and send the actual data
to be printed. The printer driver then translates these high-level commands into the specific language or
protocol understood by the printer.
- Similarly, for a graphics card, the operating system might send commands to the graphics driver to
render a 3D scene, adjust display settings, or allocate memory for graphics operations.
The graphics driver translates these commands into instructions that the graphics card can execute.

what is ISA?
Instruction Set Architecture (ISA) or as assembly represent the machine instructions.

what is register?
Registers are tiny storage locations within the CPU itself that hold data being processed or
intermediate results of calculations. Registers are very fast to access compared to other types of storage,
like RAM (random-access memory). which makes them ideal for storing data that the CPU needs to
work with immediately.

Think of the CPU like a chef working in a kitchen. The registers are the chef's immediate workspace or
the cutting board and bowls where ingredients (data) are prepared and mixed (processed).
Having multiple "workspaces" (registers) and specialized tools (specialized registers)
makes the chef (CPU) more efficient at preparing meals (executing instructions and operations).

there are specifice register that is EAX, EBX, ECX, and EDX. each has had
specific uses (e.g., EAX for accumulative operations, ECX for counts in loops).
CPU can't execute programs if they don't have specifice register(assembly/mnemonic) because CPU
don't know what have to do. every different CPU architectures have different registers(assembly/mnemonic).

what are types of architecture model?
x86, ARM, etc.

what are types of computer architecture?
- CISC (Complex Instruction Set Computing) is processors have a rich set of complex instructions
that can perform multiple operations in a single instruction. These instructions often include
memory access, arithmetic, and logical operations. Examples of CISC architectures include
x86 (used in most personal computers) and ARM (used in mobile devices).
- RISC (Reduced Instruction Set Computing) is processors have a smaller set of simpler instructions
that perform basic operations. These instructions are designed to execute in a single clock cycle,
which can lead to faster and more efficient execution. Examples of RISC architectures include
ARM (also used in some devices as a RISC architecture) and MIPS.

how to make be able run on different architechture?
You tell your compiler to compile for a different architecture. Each type of CPU has its own ISA or
different assembly.

why there are software can't run different os/platform?
Operating systems have different file formats and system libraries, which means that
software developed for one operating system may not be able to run on another without modification or
additional software. For example, Windows uses the .exe file format for executables,
while Linux usesthe ELF format.

how to make be able to run software on different os?
Use cross-platform libraries: Utilize libraries that abstract away OS-specific details and provide
a common interface. Examples include Qt, Boost, and SDL for C++ development, or libraries like
React Native and Flutter for mobile app development.

*/