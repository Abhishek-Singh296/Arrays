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

## __Code-I__
```
//Arrays_Basics
//Array Value at index-i

#include <stdio.h>
int main()
{
	int i;
	printf("Enter the array index number:");
	scanf("%d", &i);
	if(i<5)
	{
	int x[5]={2,10,15,17,21};
	printf("%d", x[i]);
	}
	else
	{
		printf("Enter Value between 0 & 4:");
	}
	return 0;
}
```

---

## __Output-I__
![Screenshot 2023-04-11 152649](https://user-images.githubusercontent.com/113619312/234037470-802e5d09-7343-4257-b27f-f1292b4c4c34.png)

---

## __Code-II__
```
//Arrays_creation
// Program to find the average of n numbers using arrays

#include <stdio.h>

int main() {

  int marks[10], i, n, sum = 0;
  double average;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for(i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &marks[i]);
          
    // adding integers entered by the user to the sum variable
    sum += marks[i];
  }

  // explicitly convert sum to double
  // then calculate average
  average = (double) sum / n;

  printf("Average = %.2lf", average);

  return 0;
}
```

---

## __Output-II__
![Screenshot 2023-04-11 153619](https://user-images.githubusercontent.com/113619312/234039289-bc82b52d-8aa2-43a1-a748-313cc0a29c9b.png)



