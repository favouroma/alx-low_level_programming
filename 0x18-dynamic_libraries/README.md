# Dynamic_Libraries
## Neccessary Commands;
## For the last advanced task. 🐋
- Go to your root
- Clone the required repository
- cd into the cloned repository 
- get current error message ### ./gm 9 8 10 24 75 9
- get the function calls used to develop the program about to tampered with. ### ltrace ./gm 9 8 10 24 75 9
- Having seen it, we use printf to inject our new command(feel free to pick any function call of choice)
- To see how printf prototypes works  - ### man 3 printf
- NB: how to know what correct message to print 🤔 ### string gm | less
- The above  displays the messages required
### Man 2 write(using this we learn how to use write and what libraries to call)
- Okay 🙂
- Now create a C file and call printf (check the image below for clarity)
- Using the correct prototypes for printf and write...  
- Now write the required code. 🐋
- Now to inject the printf function to alter the result of the program 

### gcc -fPIC  -c file.c
### gcc -shared -o file.so file.o
##### LD_PRELOAD=/"where-gm-islocated"/file.so ./gm 9 8 10 24 75 - 9
- NB under normal circumstances the required output should print.

9 8 10 24 75 - 9
Congratulations, you win the Jackpot!

- If not then an error message would occur like 'cannot be preload' or 'cannot open object file'

Don't worry.
- Not go back to the 0x018-dynamic_libraries
- Create a C file and repeat number 10 an image will be sent below
- Now make that file a dynamic Library 

- Now create the required .sh file for the last advanced task you can Google about how to write the shell script to link to your GitHub and access the  dynamic Library. an image will be sent below too to see what you're expected to do. 👍```
