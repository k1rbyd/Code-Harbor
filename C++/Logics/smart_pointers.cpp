/*

==> Need for Smart pointers / Issues with raw pointers

--> C++ provides absolute flexibility with memory management
    i. allocation
    ii. deallocation
    iii. lifetime management

--> but however this come with lots of complexities

--> it also has some potentially serious problems
    i. uninitialized (wild) pointers
    ii. memory leaks
    iii. dangling pointers
    iv. not exception safe

--> Ownership issues

==> smart pointers help us with helping us avoid these issues

==> SMART POINTERS
===================

--> smart pointers are objects

--> they can only point to heap-allocated memory

--> they automatically call delete when no longer needed

--> they adhere to RAII principokes

--> C++ smart pointers
    i. Unique pointers          unique_ptr
    ii. Shared pointers         shared_ptr
    iii. Weak pointers          weak_ptr
    iv. Auto pointers           auto_ptr

==> Creating a smart pointer

--> we need to include memory,
#include <memory>

--> Defined by class templates
    i. wrapped around a raw pointer
    ii. overloaded operators
    {
        Dereference     *
        Member Selection  ->
        Pointer arithmetic not supported (++,--,etc)
    }
    iii. can have custom deleters

eg:

{
    smart_pointer <Some_class> ptr = . . . . . 

    ptr->method();

    cout<<(*ptr)<<endl;
}

--> smart pointers delete automatically and takes care of deallocating any heap storage that was used

--> they can prevent memory leaks, make your code easier to read, write and maintain with less errors

==> Common idiom or pattern used in software design based on container object lifetime

RAII : Resource Acquisition is Initialization

--> RAII objects are allocated on the stack

--> Resource Acquisition
    i. Open a file
    ii. Allocate memory
    iii. Acquire a lock

--> is Initialization
    -> the resource is acquired in a constructor

--> Resource relinquishing
    -> happens in the destructor
        i. close the file
        ii. deallocate the memory
        iii. release the lock

--> smart pointer are examples of RAII classes

==> UNIQUE POINTER
===================

--> unique_ptr<T>
--> it points to an object of type T on the heap
--> its unique and there can be only one
--> can be moved
--> when the pointer gets destroyed, it automatically gets destroyed






*/