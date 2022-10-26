<h1 align="center" ><strong>42CURSUS</strong></h1>
This is my README for my journey in 42_Cursus, i hope that it will useful for readers and also for me, to remember all the things.

## **What is "Wildcard" in Makefile ?**

The use of wildcard card function in make file is to list all the source files with a particular extension. For example:

    program_C_SRCS:=$(*.c) // In this the variable program_C_SRCS will have all the files with ".c" extension.
    
Suppose if you want to convert .c files to .o files then the following syntax may be useful:

    program_C_OBJS:=$(patsubst %.c,%.o,$(wildcard *.c)).

## **Virtual Memory**
Virtual memory is a memory management technique where secondary memory can be used as if it were a part of the main memory. Virtual memory is a common technique used in a computer's operating system (OS), and it uses both hardware and software to enable a computer to compensate for physical memory shortages.

## **Different Types of Errors**

   ###### SEGMENTATION FAULT 
   Segmentation fault occurs when the program tries to access an area of memory that is not allowed to access.
   ###### BUS ERROR
   Bus Error occurs when the program gives a prossesssor instruction with an address does not satisfy its ***Alignment Requirements***.
   
   ###### ERRNO ?
   ERRNO is an integer variable that is set by system calls an some library fonctions to indicates the specifics of an error in the event that one occurs.
   
#### **Dealing with files**

   - The 'f' that prefixes the file handling fonction usually refers to the fonction being a high level routine as opposed to a `low level routine fontion`.
   - `Low level routine` do not using buffering but can take to one minute before data is physically written to the disc (we can use `fsync` to unsure that all data is written to file).
   - #### **EOF** is a flag that holds a negative integer value (thogth one should assume the value, it is usually -1) that indicates that a `file position` has reached the end of file.
   - #### **File Position** is a character count in the opened file that started at 0.
   
      **Ex :** file position 40 mean that character that is currently in being read from or written to the 41th position in the file (**ftell** is a high           level function that takes in a stream as input and outputs an integer representing the file position).
   - #### **A Streams** is a flow of data from src to dest within GNU System (mostly used in high level routines).
       - Streams are represented by the type FILE\*. 
   - #### **File Descriptors**
        - A file descriptor is an integer that represents the connection opened between a source and a destination (mostly used in low level routines).

#### **Makefile**

   - We can use variables in a makefile using the conventional assignement operator and then calling the variable's value using $(variable).
-  If a command isn't indented with a tabulation (specifically using tab and not spaces) the command will not work.
-  Targets are file names.
-  Variable calling is done either using `${}` or `$()`.
-  Make has a huge list of implicit rules that will run by default unless you override them.
-  
