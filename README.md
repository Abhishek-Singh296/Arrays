# Arrays
An array in C is a fixed-size collection of similar data items stored in contiguous memory locations. It can be used to store the collection of primitive data types such as int, char, float, etc., and also derived and user-defined data types such as pointers, structures, etc.Instead of declaring individual variables, such as number0, number1, ..., and number99, you declare one array variable such as numbers and use numbers[0], numbers[1], and ..., numbers[99] to represent individual variables. A specific element in an array is accessed by an index.
![Screenshot 2023-04-24 202912](https://user-images.githubusercontent.com/113619312/234036150-b4d04c6c-e0eb-4e29-942a-0599344d9df0.png)

---

## __Syntax__
In C, we have to declare the array like any other variable before using it. We can declare an array by specifying its name, the type of its elements, and the size of its dimensions. When we declare an array in C, the compiler allocates the memory block of the specified size to the array name.
```
data_type array_name [size];
         or
data_type array_name [size1] [size2]...[sizeN];
```

---

## __Example__
```
// C Program to illustrate the array declaration
#include <stdio.h>
 
int main()
{
 
    // declaring array of integers
    int arr_int[5];
    // declaring array of characters
    char arr_char[5];
 
    return 0;
}
```

---

## __Code-1__
```
