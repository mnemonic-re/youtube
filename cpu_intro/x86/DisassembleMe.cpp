#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <Windows.h>


void DataTypes()
{
	printf("----------------------------\n");
	printf("DATA TYPES SIZES (MACRO)\n");
	printf("----------------------------\n");
	printf("CHAR_BIT    :   %d\n", CHAR_BIT);
	printf("CHAR_MIN    :   %d\n", CHAR_MIN);
	printf("SCHAR_MIN   :   %d\n", SCHAR_MIN);
	printf("SCHAR_MAX   :   %d\n", SCHAR_MAX);
	printf("UCHAR_MAX   :   %d\n", UCHAR_MAX);
	printf("CHAR_MAX    :   %d\n", CHAR_MAX);
	printf("SHORT_MIN   :  %d\n", SHRT_MIN);
	printf("SHORT_MAX   :  %d\n", SHRT_MAX);
	printf("USHRT_MAX   :   %d\n", (unsigned short)USHRT_MAX);
	printf("INT_MIN     :   %d\n", INT_MIN);
	printf("INT_MAX     :   %d\n", INT_MAX);
	printf("UINT_MAX    :   %u\n", (unsigned int)UINT_MAX);
	printf("LONG_MIN    :   %ld\n", (long)LONG_MIN);
	printf("LONG_MAX    :   %ld\n", (long)LONG_MAX);
	printf("ULONG_MAX   :   %lu\n", (unsigned long)ULONG_MAX);
	printf("\n");
	printf("Storage size for float : %d \n", sizeof(float));
	printf("FLT_MIN     :   %g\n", (float)FLT_MIN);
	printf("FLT_MAX     :   %g\n", (float)FLT_MAX);
	printf("-FLT_MIN    :   %g\n", (float)-FLT_MIN);
	printf("-FLT_MAX    :   %g\n", (float)-FLT_MAX);
	printf("DBL_MIN     :   %g\n", (double)DBL_MIN);
	printf("DBL_MAX     :   %g\n", (double)DBL_MAX);
	printf("Precision value: %d\n", FLT_DIG);

	printf("----------------------------\n");
	printf("\n");
	__asm nop;

	printf("char = D\n");
	char t_char = 'D';
	__asm nop;

	printf("char[14] = DisassembleMe\n");
	char disasembleme[14] = "DisassembleMe";
	__asm nop;

	printf("short int = 320\n");
	short int t_short = 320;
	__asm nop;

	printf("unsigned short = 650\n");
	unsigned short int t_ushort = 650;
	__asm nop;

	printf("int = 2000\n");
	int t_int = 2000;
	__asm nop;

	printf("unsigned int = 4000\n");
	unsigned int t_uint = 4000;
	__asm nop;

	printf("long int = 2000\n");
	long int t_long_int = 2000;
	__asm nop;

	printf("unsigned long int = 4000\n");
	unsigned long int t_unsigned_long = 4000;
	__asm nop;

	printf("long long int = 8000\n");
	long long int t_longlongint = 8000;
	__asm nop;

	printf("unsigned long long int = 10000\n");
	unsigned long long int t_ulonglongint = 10000;
	__asm nop;

	printf("double = 3.14\n");
	double t_double = 3.14;
	__asm nop;

	printf("float = 1.123\n");
	float t_float = 1.123;
	__asm nop;

	printf("long double = 3.14\n");
	long double t_longdouble = 3.14;
	__asm nop;
}

void Comparisons()
{
	__asm nop;
	printf("This is UNCONDITIONAL jump\n");
	goto unconditional;
	printf("CANNOT BE REACHED\n");
	unconditional: 
	printf("ALWAYS REACHED\n");
	__asm nop;

	int a, b;

	if (a == b) printf("a is equal to b");
	__asm nop;
	if (a != b)
		printf("a is not b");
	__asm nop;
	if (a > b)
		printf("a is greater than b");
	__asm nop;
	if (a < b)
		printf("a is less than b");
	__asm nop;
	if (a >= b)
		printf("a is greater than or equal to b");
	__asm nop;
	if (a <= b)
		printf("a is less than or equal to b");

	else
		printf("no comparison");
}

void Decisions()
{
	printf("Decisions (if, else if, else)\n");
	int var1, var2;
	printf("value 1: "); scanf_s("%d", &var1);
	printf("value 2: "); scanf_s("%d", &var2);
	__asm nop;

	if (var1 == var2)
	{
		printf("value1 is same as value2\n");
	}
	else if (var1 < var2)
	{
		printf("value1 is less than value2\n");
	}
	else if(var1 > var2)
	{
		printf("value1 is greater than value2\n");
	}
	else 
	{
		printf("zero\n");
	}

	__asm nop;
	printf("\n");

	printf("This is a Switch Statement\n");

	char language = 'A';

	switch (language)
	{
	case 'A':
		printf("Assembly\n");
		break;
	case 'B':
		printf("C/CPP\n");
		break;
	case 'C':
		printf("Python\n");
		break;
	case 'D':
		printf("Ruby\n");
		break;
	case 'F':
		printf("C#\n");
		break;
	default:
		printf("Invalid language\n");
	}

	printf("Language  %c\n", language);
}

void Loops()
{
	printf("This is a FOR loop\n");
	for (int i = 0; i <= 10; i++)
	{
		printf("%d", i);
	}

	__asm nop;
	printf("\n");

	printf("This is a NESTED FOR loop\n");
	for (int i = 0; i <= 10; i++)
	{
		for (int j = 0; j <= 1; j++)
		{
			printf("%d", i);
		}
	}

	__asm nop;
	printf("\n");

	printf("This is a WHILE loop\n");
	int j = 0;
	while (j <= 10)
	{
		printf("%d", j);
		j++;
	}

	__asm nop;
	printf("\n");

	printf("This is a DO WHILE loop\n");
	int k = 0;
	do
	{
		printf("%d", k);
		k++;
	} while (k <= 10);

	__asm nop;
	printf("\n");

}

void Arrays()
{
	printf("Arrays");
	__asm nop;
	printf("int numbersArray[10]\n");
	int numbersArray[10];
	__asm nop;

	printf("int array1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }\n");
	int arrayTen[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	__asm nop;

	printf("int array2[] = { 1, 2, 3, 4, 5 }\n");
	int arrayFive[] = { 1, 2, 3, 4, 5 };
	__asm nop;

	printf("get 3rd element of an array1\n");
	printf("%d\n", arrayTen[3]);
	__asm nop;

	printf("get 2nd element of an array2\n");
	printf("%d\n", arrayFive[2]);
	__asm nop;

	printf("\n");

	printf("Multidimensional Arrays\n");
	__asm nop;

	printf("int multiArray[5][2] = { { 0,0 },{ 1,2 },{ 2,3 },{ 3,4 },{ 4,5 } }\n");
	int multiArray[5][2] = { { 0,0 },{ 1,2 },{ 2,3 },{ 3,4 },{ 4,5 } };
	for (int i = 0; i < 5; i++) {

		for (int j = 0; j < 2; j++) {
			printf("multiArray[%d][%d] = %d\n", i, j, multiArray[i][j]);
		}
	}
	__asm nop;

	printf("\n");

	printf("char coder[1][7] = { 'd', 'i', 's', 's', 'a', 's', 'm' }\n");
	char coder[1][7] = 
	{
		{ 'd', 'i', 's', 's', 'a', 's', 'm' }
	};
	printf("%s\n", coder);
	__asm nop;
}

void Mathematical()
{
	printf("Calculator (add, sub, mul, div, modulo)\n");
	__asm nop;
	int var1, var2;
	printf("value 1: "); scanf_s("%d", &var1);
	printf("value 2: "); scanf_s("%d", &var2);
	__asm nop;
	printf("Results:\n");
	__asm nop;
	printf("Addition: %d\n", var1 + var2);
	printf("Subtraction: %d\n", var1 - var2);
	printf("Multiplication: %d\n", var1 * var2);
	printf("Division: %d\n", var1 / var2);
	printf("Modulo: %d\n", var1 % var2);
}

void Structures()
{
	printf("This is a struct definition\n");
	__asm nop;
	struct Structure
	{
		char name[25];
		char surname[25];
		int dob;
	} MyStruct;

	__asm nop;
	printf("This is struct data operation start\n");

	strcpy_s(MyStruct.name, "el1te");
	strcpy_s(MyStruct.surname, "hax0r");
	MyStruct.dob = 1337;

	printf("Name: %s\n", MyStruct.name);
	printf("Surname: %s\n", MyStruct.surname);
	printf("DoB: %d\n", MyStruct.dob);

	printf("This is struct data operation end\n");
	__asm nop;
}

void Pointers()
{
	__asm nop;
	printf("Pointers 1\n");
	char part1[32] = "This is ";
	char *part2 = part1;
	lstrcatA(part2, "a Pointer");
	printf("%s", part1);
	__asm nop;

	__asm nop;
	printf("\n");
	printf("Pointers 2\n");
	printf("int var = 10, int *Pointer\n");
	int var = 10;   
	int *Pointer;        

	Pointer = &var;
	printf("Address of var: %x\n", &var);
	printf("Address stored in *Pointer: %x\n", Pointer);
	printf("Value of *Pointer: %d\n", *Pointer);
	__asm nop;
}

void BitWiseBoolean()
{
	__asm nop;
	int var1, var2;
	printf("value 1 (in hex): "); scanf_s("%x", &var1);
	printf("value 2 (in hex): "); scanf_s("%x", &var2);

	__asm nop;
	printf("bitwise AND operation of var1 and var2 is 0x%x\n", var1 & var2);
	__asm nop;
	printf("bitwise OR operation of var1 and var2 is 0x%x\n", var1 | var2);
	__asm nop;
	printf("bitwise XOR operation of var1 and var2 is 0x%x\n", var1 ^ var2);
	__asm nop;
	printf("bitwise NOT operation of var1: 0x%x\n", ~var1);
	printf("bitwise NOT operation of var2: 0x%x\n", ~var2);
	__asm nop;
}

void LogicalBoolean()
{
	__asm nop;
	int var1, var2;
	printf("value 1 (in decimal): "); scanf_s("%d", &var1);
	printf("value 2 (in decimal): "); scanf_s("%d", &var2);

	__asm nop;
	printf("logical AND operation of var1 and var2 is %d\n", var1 && var2);
	__asm nop;
	printf("logical OR operation of var1 and var2 is %d\n", var1 || var2);
	__asm nop;
	printf("logical NOT operation of var1: %d\n", !var1);
	printf("logical NOT operation of var2: %d\n", !var2);
	__asm nop;
}

int main()
{
	char ch;

	printf("--------------------------- \n");
	printf(" Disassembly Menu \n");
	printf("--------------------------- \n");
	//printf("0. \n");
	printf("1. Types\n");
	printf("2. Comparisons (jumps)\n");
	printf("3. Mathematical (calculator)\n");
	printf("4. Decisions\n");
	printf("5. Loops\n");
	printf("6. Arrays\n");
	printf("7. Boolean Bitwise\n");
	printf("8. Boolean Logical\n");
	printf("9. Structures\n");
	printf("10. Pointers\n");
	printf("-------------------------- \n");
	printf("Examine Disassembly: "); scanf_s("%c", &ch);
	printf("-------------------------- \n");

	if (ch == '0') { printf("Nothing here...\n"); }
	else if (ch == '1') { DataTypes(); }
	else if (ch == '2') { Comparisons(); }
	else if (ch == '3') { Mathematical(); }
	else if (ch == '4') { Decisions(); }
	else if (ch == '5') { Loops(); }
	else if (ch == '6') { Arrays(); }
	else if (ch == '7') { BitWiseBoolean(); }
	else if (ch == '8') { LogicalBoolean(); }
	else if (ch == '9') { Structures(); }
	else if (ch == 'a') { Pointers(); }

	else { return 0; }
}


