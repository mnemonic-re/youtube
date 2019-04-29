> DisassembleMe is a program to help learn how common high level C\CPP code looks like when disassembled and then 
> represented in low level assembly code.

> What it is: Easiest way to learn 32bit or 64bit instructions and how program behaves in memory. 
> You are in complete control since you have the source code!

> What it is NOT: While it can help, this is not meant to teach you how to code in assembly!

> There is much more that can be added or changed here and played with to learn how to read assembly code 
> and how that code behaves in memory!

### You can compile it as a 32bit binary and 64bit binary so you can see the difference!

### Compile 

This was written in Visual Studio on windows but it will compile on Linux. 

1. Create new EMPTY project (VC++ Console Application).
- Source Files -> "Add -> Existing File" and import DisassembleMe.cpp
OR
- Source Files -> "Add -> New File" and select new C++ file, name it and paste the code.

Compile help for easier reading and debugging. Smaller file, removes a lot of unnecessary compiler code, remove security measures...

2. Right click on the PROJECT properties and change the following 
- C\C++ -> Optimization -> Optimization = DISABLED
- C\C++ -> Code Generation -> Security Check = Disable Security Check (/GS-)
- Linker -> Advanced Randomized Base Address = No (/DYNAMICBASE:NO)
- Linker -> Data Execution Prevention (DEP) = No (/NXCOMPAT:NO)
You can also disable SafeSEH but isn't really important...
