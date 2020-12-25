// Types:

// Storage Class		KeyWord			Default Value		Storage			Scope				Life
// -----------------------------------------------------------------------------------------------------------------------------------------------------------
// Automatic			auto			Garbage				RAM				Function,Block		Till the execution of block or function in which it is declared
// Register				register		Garbage				Register		Function,Block		Till the execution of block or function in which it is declared				
// Static				static			0(zero)				RAM				Function,Block		Till the end of program
// External				extern			0(zero)				RAM				Global				Till the end of program

#include<stdio.h>
//Storage class of global variable is External.
int a;  //External storage class //don't need to write extern int a . It will give compile error.
int main()
{
	int a;  //default storage class of local variable is Automatic.
	auto int b; //same as int a.
	register int c;
	// Register storage class is same as Automatic Storage class. But it takes less time in code execution compared to Automatic.
	// But we can not declare all varible as Register variables. Because size of register is small . 
	static int d;
	printf("%d",d);
}