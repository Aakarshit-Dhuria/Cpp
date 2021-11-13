Uses of const:
--> To make the code more readable.
--> To avoid making accidental changes.

Applications of References:
1. Function Parameters and references -    (Program 20 and 21)
   i)  Helps in changing the value of original variable using functions
   ii) Saves memory and boosts performance when large objects or strings are passed to the function.

2. Range Based for loops-    		(Program 22 and 23)
   Range based for loops are used to traverse through large containers like arrays ,vectors ,etc.(STL library) .
Here, references are used to traverse through the original container so that changes made in the for loop get reflected in the original array. 
	Problems with normal loop variables:
		i)  Cannot change elements.
		ii) Performance issues.
	Auto keyword:
		--> Auto keyword is usually used in range based for loops in complex cases to avoid specifying the wrong datatype.
		--> Mostly used in STL Library.

--> All the references so far have been L value references

CONST and R Value References: 

R values are literals and results of expressions .
We cannot pass these using the single ampersand reference like,
int &x = 3; and string &s = "gfg" are both invalid statements
--> For this purpose we use const and r value references
Using const :-
const int &x  = 3;
const string &s  = "gfg";
These are both valid statements.
But If we use const we cannot further modify the value once stored like,
s = "Hi" + s;  this will give compilation error as const keyword doesn't allow modifications.

This is possible using R value references.
--> R value references are done using double ampersand (&&) .
int &&x  = 3;
string &&s = "gfg";
Now s = "Hi" + s; will compile without any error. 

ADDRESS AND DEREFERENCE OPERATORS IN C++:
& operator (ampersand or address of operator) : When we use ampersand before a variable (except during declaration), we get the address of the variable.
Note:- When we use ampersand during declaration, it creates a reference variable(it has nothing to do with the ampersand operator used here)

* operator (Dereference Operator) : When we use the star before an address (except during declaration), we get the value at that address.
--> When we use * during declaration, it creates a pointer variable. 

POINTERS : 
--> Pointers are variables that store the address of other variables.\
--> Size of pointer is same for all datatypes (4 bytes on 32 bit and 8 bytes on 64 bit).
--> When declaring multiple pointer variables in a single line , we have to use * with each name.
	e.g. int *p1, x , *p2; here only p1 and p2 are pointer variables.

APPLICATIONS OF POINTERS:
1. Changing Passed Parameters (Pass by reference to functions).
2. Passing Large objects (can be done using pointers but normally done using references).
3. Dynamic Memory Allocation
4. Implementing data structures like linked list,tree,BST,etc.
5. To do system level programming (- as pointers store the actual address of the variables)
6. To return multiple values from a function.
7. Used for accessing array elements.
8. To pass array arguments.

FUNCTION PARAMETERS USING POINTERS:
Benefits:-
	i) To change original values.
	ii) To avoid copying large objects.

ARRAY PARAMETERS AND POINTERS:
Arrays are always passed as pointers to functions.
Note:- sizeof operator should never be used to compute the number of elements of an array in functions because sizeof(arr) will give the size of pointer not the actual array.
'sizeof' on array function parameter 'arr' will return size of 'int*'.
To solve this problem, we pass n as a function parameter only.

NULL POINTER : 
Null is used to initialise a pointer whose value we dont have at that time. It is done so that the pointer dosnt store any random value.
--> It is typically defined as 0 in C++ although it is not a standard.
--> Cant be initialised with any other random integer value.

Applications of Null:
1. For pointer with no valid memory address.
2. Functions use NULL to return invalid input.
3. In data structures like linked list, trees,etc.

Important Points about NULL : 
	i) A null pointer converts to bool value false. and all other pointers convert to true.
	ii) NULL can be used for any data type. 
	e.g. double*ptr = NULL;   char*ptr = NULL;

NULLPTR: 
nullptr is added as a replacement to NULL because as NULL is defined as 0 therefore it can also be assigned to an integer
// int x = NULL is allowed
// int x = nullptr is not allowed
// The type of  null ptr is nullptr_t.

// NULL can always be used except in a few exception cases like where there is function overloading,etc.








