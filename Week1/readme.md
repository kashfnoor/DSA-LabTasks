This folder contains all the exercises performed for the first week of DSA Lab
--------------------------------------------------------------------------------------------------
Exercise 1.1
-------------- 
The Complex class represents complex numbers and includes: 
  
  Variables: 
re (real part) 
im (imaginary part)    
  Functions:   
Magnitude(): Calculates the magnitude of the complex number. 
Real(), Imag(): Return the real and imaginary parts. 
Operator overloading for +, =, and * to handle complex number operations. 

Example 1.1
--------------

  Variables: 
X, Y: Two numbers to compare. 
Larger: Stores the maximum value. 
  Functions: 
max1(): Returns the larger of X and Y.  
max2(): Stores the larger value in Larger using pass-by-reference.  
max3(): Stores the larger value in Larger using pointers.  

Example 1.3  
--------------  
Template function for finding the maximum of two values:  
  
  Variables: 
a, b: Input values. 
result: Stores the maximum value. 
Function: 
GetMax(): Uses a template to return the maximum of two values. 
 
Example 1.4 
--------------
Template class mypair for storing and comparing two values: 

  Variables: 
a, b: The two stored values. 
  Functions: 
getmax(): Returns the larger of a and b. 

Example 1.4 with Exercise 1.2
--------------

  Functions:  
GetMin(): Returns the smaller value.
GetMax(): Returns the larger value.

Example 1.5 and Exercise 1.3
--------------
Template class MySequence for storing sequences of values:
 
  Variables: 
memblock[]: Array for storing values. 
  Functions:  
setmember(): Sets a value at a specific index. 
getmember(): Retrieves a value at a specific index. 
GetMax(): Returns the maximum value in the array. 
GetMin(): Returns the minimum value in the array. 

Example 1.6 and Exercise 1.4  
--------------
Reads a file and counts:   
 
  Variables: 
ch: Stores each character. 
countch, countwrds, countsent: Store character, word, and sentence counts. 

Exercise 1.5
-------------- 
Class House for managing house data: 

  Variables:  
owner, address: House owner and location. 
Bedrooms: Number of bedrooms. 
price: House price.  
  Functions:  
readData(): Takes user input. 
displayData(): Displays stored data. 


Exercise 1.6
--------------
Class Student for storing student grades:

  Variables:
firstname, lastname: Student name.  
grades[]: Stores student grades.   
  Functions:
readdata(): Reads student data from a file. 
ComputeAverage(): Calculates the student’s average grade. 
displaydata(): Displays student data. 
getaverage(): Returns the student’s average grade. 

