/* 

turn computer's power ON ///////////////////////////////////////////////////////////////////////////////////

first of all we have to know about what happend when we turn computer's power ON?
when we turn computer's power ON, The computer's hardware, including the processor, memory(RAM),
graphic card (external GPU), and hard drive (storage) are initialized and checked
by BIOS/UEFI (new version of BIOS) or firmware.

what does BIOS/UEFI do after initialize and check computer's hardware?
The BIOS/UEFI locates and loads or runs the boot loader, which is a small program stored in
the boot sector of the hard drive. The boot loader then loads the operating system (OS) into memory
to enable CPU execute. it is called boot process (Boot is process load OS to RAM).

what does OS do after OS is runned by CPU?
after OS is runned, 'kernel' is the core part of the OS, it takes over control from BIOS/UEFI.
The kernel initializes the rest of the system's hardware, and software environment,
setting up drivers, system services, and user interfaces, allowing the system to be fully operational
for the user to interact with it by using windows's UI(user interface).



how computer is working ////////////////////////////////////////////////////////////////////////////////////

before we are going further to know how computer is working we have to know about 'computer'.

what is 'computer'? 
computer is a machine used to help a user by using available instructuions in 'software'.

what is 'software'?
software is a program contains instruction sets relate with computer.

how can computer's instructions reach computer machine?
there is a role of 'API' acts as carrier or intermediary for user's instructions in computer.


what is API passed through whe API is carrying user's instructions in computer?
we will talk about a graphical API (such as directx, opengl) for example.

- When you start to run a program or app, the kernel is part of operating system loads
the program's executable file from disk into memory (RAM).

- Once the program is loaded into memory, the CPU (central processing unit) begins executing
its instructions by fetching instructions from the app's code in RAM, then
decodes(convertion process to original format) what actions to perform, and then executes those instructions.
// encode(convertion process of original format to another format).
// decode(convertion process to original format).

- after CPU execute the program, the program's instructions are already in binary form. program needs
to display graphics, it uses a graphics API (such as DirectX or OpenGL) as instructions/program carrier to
communicate with the GPU/graphic card through graphic driver.

- The graphics driver's role is to translate these program's instructions that the GPU/graphic card
can understand and execute. but the driver doesn't need to translate high-level language to binary because
the program's instructions are already in binary form when they are passed to the driver through
the OpenGL API as instructions/program carrier.

- The driver's job is to translate these binary instructions into GPU-specific commands and then after
pass through driver process, API passes/continues instructions to GPU/graphic card through GPU's firmware (as
instructions reciver and GPU trigger to start execute programs and instructions) to describe instructions
to be graphics objects to be rendered and how they should be rendered (e.g., position, size, color).

- then GPU renders the graphics into a frame buffer, which is a GPU's memory that holds the pixel data
for the current frame. and then GPU sends the contents of the frame buffer to the display hardware.
The display hardware updates the actual display based on the pixel data received from the GPU.
This may involve refreshing the screen with new content.

- The user can then see the rendered graphics on the display and interact with them as needed.


what is 'driver'?
'driver' is software that allows the operating system to communicate with hardware devices.
They act as a intermediary, translating high-level operating system commands into
binary commands that the hardware's firmware can understand. a driver cannot directly communicate with
hardware if there is no firmware.

what is 'firmware'?
'embedded software/ firmware' is Software specifically designed to control hardware devices and systems.
It's often found in mouse, keyword, appliances, cars, consumer, and electronics.
example firmware is BIOS/ UEFI(new version of BIOS).


how cpu executes string as value of parameter when user changing a parameter at runtime?
Basically cpu does not understand string value of parameter.

- program/app might have a function that takes a string as a parameter and then performs some operations
based on the contents of that string. then the program/app sends code instructions to CPU through
platform(windows/OS) APIs. The CPU executes the machine code instructions of the program, which includes
executing the program's logic (a smart way to make CPU understand without translate binary)
for handling the string parameter.

- So, while the CPU doesn't understand strings directly, the program running on the CPU has the logic to
interpret and use string parameters as needed.


Now we are talking about mouse. How mouse driver works after we click mouse's button, does mouse
communicate with driver through firmware and API carry mouse instructions from mouse hardware to driver?

- When you click a mouse button, the mouse hardware sends a signal to the computer indicating
which button was clicked (left, right, or middle button).

-  The mouse driver receives this signal from hardware's firmware without through API in this context
Instead, the driver interacts with the operating system's input subsystem, which is responsible for
managing input devices such as mice, keyboards, and touchscreens. firmware get electric signal from
mouse hardware that generates an electrical signal that is interpreted by the mouse's microcontroller
and processes it. The driver determines the type of click (single click, double click, etc.).

- The mouse driver communicates this information to the operating system through an API
(Application Programming Interface).

- The operating system receives the mouse input from the driver and determines how to respond based on
the current context.

- The application responds to the mouse click event based on its programming. For example, if you
click on a button, the application may perform a specific action associated with that button.

- The operating system may provide visual or auditory feedback to indicate that the click was registered
and the action was performed.


summary :
computer cannot run app without OS, OS cannot communicate with hardware without driver,
driver cannot communicate directly with hardware through firmware without API, API cannot
serve as a carrier of user's instructions without kernel of OS, which plays a role in controling and
managing all of software's instructions.



recognize computer's components ////////////////////////////////////////////////////////////////////////////

in this section we have to know about computer's main components/hardware.
in computer there are some components/hardware including:
- CPU is a computer component used to computing and executing data.
- storage is a computer component used to storing data information.
- RAM(random access memory)/ memory is a computer component used to load program data when program is running.
- GPU(graphic processing unit)/ graphic card is a computer component used to renders graphics and images by performing rapid mathematical calculations. or display image in monitor.
- motherboard/ mainboard is a computer component used to connects all of the internal components, like the memory, processor, graphics card and other hardware.
// GPU can exist in CPU is called internal GPU and external GPU is graphic card.
// there is term VGA(video graphic adaptor) is a port in graphic card used to connect in monitor.

detail summary :
we cannot run app without 'OS'. so what is OS?

'operating system' (OS) is system software that manages computer hardware and software resources,
and provides common services for computer programs. there are types of OS such as Windows software,
macOS software, Linux software, etc.

we can't run computer if there are no 'software/app'. so what is software?

software is programs contain instruction sets realte with computer.
There are two main types of software that is 'System Software', 'Application Software', 'Utility Software',
'Programming Software', 'Embedded Software/ firmware'.

'operating system' (OS) is system software that manages computer hardware and software resources,
and provides common services for computer programs. there are types of OS
such as Windows software, macOS software, Linux software, etc.

'Application Software' is Programs designed to perform specific tasks or solve particular problems for users.
Examples include word processors, web browsers, game, and graphic design software.

'Utility Software' is software that help manage, maintain, or control computer resources, such as
antivirus programs, disk cleaners, and backup software.

'Programming Software' is sofware used by developers to create, debug, maintain, and support other software.
Examples include compilers, debuggers, and integrated development environments (IDEs).

'framework software' is software provides structure to enable user to build software. framework is
not libraries, libraries on the other hand is tool sets make easly to help developer to build programs.
analogi of framework sounds like this we use 'food' as framework "we are using food for cooking".

'embedded software/ firmware' is Software specifically designed to control hardware devices and systems.
It's often found in mouse, keyword, appliances, cars, consumer, and electronics.
example firmware is BIOS/ UEFI(new version of BIOS).

'driver software' is Software that allows the operating system to communicate with hardware devices.
They act as a intermediary, translating high-level operating system commands into
binary commands that the hardware's firmware can understand. a driver cannot directly communicate with
hardware if there is no firmware.

OS cannot communicate with hardware without 'driver'. so what is driver?

'driver software' is Software that allows the operating system to communicate with hardware devices.
They act as a intermediary, translating high-level operating system commands into
binary commands that the hardware's firmware can understand. a driver cannot directly communicate with
hardware if there is no firmware(as instructions reciver and GPU trigger to start execute programs and
instructions).

driver cannot communicate directly with hardware through firmware without 'API'. so what is API?

API is an interface that allows software components like app, os, driver, firmware to communicate and
interact with each other. API is as instructions/program carrier.
we can make analogy 'API' as 'waiter' in restaurant. that means we communicate with chef we
have to pass through 'waiter'.

API cannot serve as a carrier of user's instructions without 'kernel' of OS. so what is kernel?

kernel is core part of operating system which plays a role in controling and managing all of
software's instructions. and also loads the program's executable file from disk into memory (RAM).
when we start to run a program or app.

now we have already know about what is computer, computer's components, software, API, and types of those.

*/