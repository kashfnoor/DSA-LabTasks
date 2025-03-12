**Priority Queue Implementation in C++**                           
This project implements a Priority Queue in C++ using templates. The priority queue is designed as an array of Queue objects, where each queue represents a different priority level. The project supports inserting and removing elements while maintaining their priority.                     

                                                              
This is designed to handle C-style strings (const char*), making it efficient for managing string-based priority tasks. (you can customize it accordingly)


                        
**Files and Their Purpose**

**1. Queue.h**
This file defines a generic queue using a circular array. It provides operations:

insert(T item): Adds an element to the queue. 

remove(T& item): Removes and returns the front element of the queue. 

isFull(): Checks if the queue is full. 

isEmpty(): Checks if the queue is empty. 

Uses dynamic memory allocation for flexibility. 



**2. PriorityQueue.h**           

This file defines a Priority Queue as an array of Queue objects, where each priority level has its own queue. 

Key Features: 

Multiple priority levels (defined at runtime). 

Insert(const char* item, int priority): Adds an item with a given priority. 

Remove(const char*& item): Removes the highest-priority item available. 

IsFull(): Checks if the priority queue is full. 

IsEmpty(): Checks if the priority queue is empty. 

This implementation specifically supports C-style strings (const char*) for managing priority-based tasks. 

**3. main.cpp**  


This is the driver program that demonstrates the functionality of the priority queue. 

 
**Functionality:** 

Prompts the user to enter the number of priority levels.      

Inserts elements (const char*) with different priority levels.        

Removes elements in order of priority and displays them.        
