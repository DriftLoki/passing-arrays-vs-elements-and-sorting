# passing-arrays-vs-elements-and-sorting

%p outputs addresses as hexadecimal (starts at 0)
array, &array, &array[0] all print the same address


function modifyArray can be written as prototype
void modifyArray(int b[], int size)

passing ARRAY 
call      modifyArray(a, SIZE)
function      void modifyArray(int b[], size_t size)
b points to the original array and modifies it

passing ELEMENT
call    modifyElement(a[3])
function      void modifyArray(int e)
creates a copy of index 3's value. The int e means it takes the value.


bubbble sort = low to high
sinking sort = high to low

sorting array in ascending order low to high
check elment 0 and 1 
if element 1 is greater than 0 then stay
if element 0 is greater than 1 then  swap
there are 10 elements, but 9 comparisons made because on 1st pass the largest value sinks to a[9]

sorting is performed by nested for loops
