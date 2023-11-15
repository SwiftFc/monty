<h1>ALX MONTY PROJECT TASK</h1>

<h2>Monty Bytecode Interpreter using C</h2>

In order to practicalize our knowledge of data structures like stacks and queues in C language,
 we were tasked with building a C program that acts as a Monty bytecode interpreter.

<h2>What is the Monty Bytecode Interpreter</h2>
This is a C program that will take a file as an argument, open the file, and read the instructions in the file, line by line.

For each line read, the interpreter is supposed to execute the instructions on that line.

The Monty bytecode is made up of special instructions and each line contains no or just one instruction.

The instructions are in the form of various operations that can be performed on stacks or queues.

Hence, the interpreter reads each line and performs the specific operation on a given stack or queue.

<h2>How to implement the Monty bytecode interpreter</h2>
This looks very complex to implement, but we can break the whole project into simple parts that will make the implementation easier.

Below are the steps that I used to implement the interpreter
<h2>push.c Function</h2>
<body>
   <h1>push.c Function</h1>

   <h2>In Simple Terms</h2>

   <p>Imagine you have a stack of rooms, where each room can hold a number.</p>
   <p>You want to add a new number to the top of the stack. This is like building a new room, setting it up with the new number, 
   <p>connecting it properly to the existing rooms, and making it the new top room.</p> 
   <p>If something goes wrong (like if you can't build the room), you stop and say there's a problem.</p>

   <p>The push.c function does just that. It takes a number as input and adds it to the top of the stack. 
   If everything goes smoothly, the function returns 1 to indicate success. If something goes wrong, it returns 0 to indicate an error.</p>


<h2> THIS README FILE WILL BE UPDATED</h2>
