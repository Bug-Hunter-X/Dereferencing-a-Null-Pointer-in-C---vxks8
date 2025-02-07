# Dereferencing a Null Pointer in C++

This repository demonstrates a common but dangerous error in C++: dereferencing a null pointer.  The provided code attempts to write to memory pointed to by a null pointer which leads to undefined behavior. The solution shows the correct way to handle null pointers.

## Bug
The `bug.cpp` file contains a simple program that attempts to dereference a null pointer. This will typically result in a segmentation fault or program crash.

## Solution
The `bugSolution.cpp` file demonstrates the correct way to handle null pointers using a simple check before dereferencing.