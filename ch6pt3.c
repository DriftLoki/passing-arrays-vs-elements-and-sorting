/*
Array NAME = int ht(H_I_A_D)
function call of array = modifyArray (ht, H_I_A_D)

%p outputs addresses as hexadecimal
*/

#include<stdio.h>

int main(void){
    char array[5];
    printf("     array = %p\n&array = %p\n    &array[0] = %p\n", array, &array, &array[0]);  //all print the same address as the output
}
/*
%p starts at array element 0

function modifyArray can be written as prototype
void modifyArray(int b[], int size)


passing ARRAY 
call      modifyArray(a, SIZE)
function      void modifyArray(int b[], size_t size)
b points to the original array and modifies it

passing ELEMENT
call    modifyElement(a[3])
function      void modifyArray(int e)
creates a copy of index 3 but doesnt change it



const int array[3]
CANNOT modify because it is a constant
*/

/*
bubbble sort = low to high
sinking sort = high to low

sorting array in ascending order low to high
check elment 0 and 1 
if element 1 is greater than 0 then stay
if element 0 is greater than 1 then  swap
there are 10 elements, but 9 comparisons made because on 1st pass the largest value sinks to a[9]

sorting is performed by nested for loops
*/