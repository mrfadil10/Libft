# 42CURSUS

This is my README for my journey in 42_Cursus, i hope that it will useful for readers and also for me, to remember all the things.

## What is "Wildcard" in Makefile ?

The use of wildcard card function in make file is to list all the source files with a particular extension. For example:

    program_C_SRCS:=$(*.c) // In this the variable program_C_SRCS will have all the files with ".c" extension.
    
Suppose if you want to convert .c files to .o files then the following syntax may be useful:

    program_C_OBJS:=$(patsubst %.c,%.o,$(wildcard *.c)).

## Virtual Memory :
Virtual memory is a memory management technique where secondary memory can be used as if it were a part of the main memory. Virtual memory is a common technique used in a computer's operating system (OS), and it uses both hardware and software to enable a computer to compensate for physical memory shortages.
