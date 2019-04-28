Compile Options to reduce the size of binary and disable security measures for practice

- C\C++ -> Optimization -> Optimization = DISABLED
- C\C++ -> Code Generation -> Security Check = Disable Security Check (/GS-)
- Linker -> Advanced
Randomized Base Address = No (/DYNAMICBASE:NO)
Data Execution Prevention (DEP) = No (/NXCOMPAT:NO)
