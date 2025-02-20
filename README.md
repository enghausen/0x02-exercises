# 0x02-exercises

## Exercise 1
Implement a program that takes a positive integer as user input and returns the sum of all positive integers up to and including the given integer.

Use a `while` loop for calculating the sum.

**Example of input/output:**
```
Input: 5
Output: 15
Explanation: sum of integers from 1 to 5 is 1 + 2 + 3 + 4 + 5 = 15.
```

---

## Exercise 2
Write a program that takes an integer as user input and prints all even integers up to and maybe including the given integer input.

Use a `while` loop for iterating the integers.

**Consideration:** What should happen if the integer is negative?

**Example input/output:**
```
Input: 10
Output: 2 4 6 8 10
```

---

## Exercise 3
Write a program that takes a positive integer as input and prints a triangle of asterisks (`*`), where the height of the triangle is the input number.

Use a `while` loop for iteration corresponding to each row and a `while` loop for each row.

**Example of input/output:**
```
Input: 4
Output:
   *
  ***
 *****
*******
```

---

## Exercise 4: Die Rolls
This assignment is concerned with simulating a die roll.

1. First, investigate how to generate random values in C++.
2. Make the program ask the user for the number of die throws.
3. Create a `vector<int>` and load as many throws as the user specified.
4. Calculate the mean of the die values and print it.
5. Make the mean calculation into a function.

---

## Challenge
Implement a program that finds an approximation to the zero of a continuous monotonous function (a function that is either always increasing or always decreasing).

**Mathematical Consideration:**
- Such a function does not have local extrema. Consider how to determine whether a function has a local extremum (think back to high school mathematics).
- To find a zero of such a function numerically, you can use the **bisection method**, which is a simple and reliable method for finding a zero.

### Steps to Implement:
1. Choose two points in the domain of the function where the function assumes opposite sign values (this guarantees that there is a zero between them).
2. Calculate the midpoint of these two points.
3. Evaluate the function at the midpoint.
4. If the interval is smaller than a specified width, stop and return the value at the midpoint.
5. Otherwise, pick the endpoint that has the opposite sign of the function value at the midpoint and repeat from step 2.

**Additional Tip:** Try implementing this yourself before searching for external solutions.

Use ChatGPT to find out how to define a function in C++. The function could, for example, be:
```
f(x) = x³ + 3x + 5
```

