This Fibonacci Number Generator is written in the C programming language. 
It is limited to calculating up to the 47th number in the Fibonacci Sequence, using 1-based indexing, due to the type limitation of int (32 bits). 
The script takes no command line arguments. 
Upon running it, the user is presented with a list of menu options to choose from. 

Each option performs a different operation: 
0. Exit - Exits the Program 
1. Specific Index - Will print the Nth term of the Fibonacci Sequence (between 1 and 47)
2. Up to an Index - Will print all the numbers of the Fibonacci Sequence from the 1st up to the Nth term (between 1 and 47)
3. All possible with type int - Prints the first 47 numbers of the Fibonacci sequence. 

The script contains four functions besides main():
int fibonacci_generator(int index): Responsible for allocating space for and calculating the Fibonacci Sequence up to the requested index.
void Specific_Index(void): Responsible for the 1st menu option
void Up_to_Index(void): Responsible for the 2nd menu option
void All_Possible(void): Responsible for the 3rd menu option

Each of the void functions calls fibonacci_generator to generate the numbers. 
After receiving the pointer to the array of Fibonacci numbers, each of the void functions prints the results as described previously. 

The script was made using dynamic memory allocation, specifically with the malloc() and free() functions, such that it only allocates memory for and calculates as many Fibonacci numbers as are required by the user. 

The creator of this script is aware that for a sequence of 47 numbers, this is irrelevant as the calculation is nearly instant. However, in more complex situations, such an approach may prove necessary. 
