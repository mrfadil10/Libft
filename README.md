# 42CURSUS
This is my README for my journey in 42_Cursus, i hope that it will useful for readers and also for me, to remember all the things.

## What is "Wildcard" in Makefile ?

The use of wildcard card function in make file is to list all the source files with a particular extension. For example:

    program_C_SRCS:=$(*.c) // In this the variable program_C_SRCS will have all the files with ".c" extension.
    
Suppose if you want to convert .c files to .o files then the following syntax may be useful:

    program_C_OBJS:=$(patsubst %.c,%.o,$(wildcard *.c)).

## Virtual Memory
Virtual memory is a memory management technique where secondary memory can be used as if it were a part of the main memory. Virtual memory is a common technique used in a computer's operating system (OS), and it uses both hardware and software to enable a computer to compensate for physical memory shortages.

## Different Types of Errors

   ###### SEGMENTATION FAULT 
   Segmentation fault occurs when the program tries to access an area of memory that is not allowed to access.
   ###### BUS ERROR
   Bus Error occurs when the program gives a prossesssor instruction with an address does not satisfy its ***Alignment Requirements***.
   
   ###### ERRNO ?
   ERRNO is an integer variable that is set by system calls an some library fonctions to indicates the specifics of an error in the event that one occurs.
   
## Dealing with files 

   - The 'f' that prefixes the file handling fonction usually refers to the fonction being a high level routine as opposed to a low level routine fontion.
   - Low level routine do not using buffering but can take to one minute before data is physically written to the disc (we can use **fsync** to unsure that all data is written to file).
   - EOF is a flag that holds a negative integer value (thogth one should assume the value, it is usually -1) that indicates that a file position has reached the end of file.
