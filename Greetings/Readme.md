 -- 
 Name Input and Greeting 
 --

---------------------------------------------
---------------------------------------------
This code prompts the user to enter their name, then greets them by displaying "Hello" followed by their name. It is a simple C program using input/output functions.
---------------------------------------------
---------------------------------------------

---------------------------------------------------------------------------------------------------
--------------------------------------------- Details ---------------------------------------------
---------------------------------------------------------------------------------------------------
The code begins by including two standard libraries: <stdio.h> and <stdlib.h>. These libraries provide functions for input/output operations and memory management, respectively.

The main() function is the entry point of the program. It's where the execution starts.

Inside the main() function, I declared a variable called name of type char array with a size of 20. This array will be used to store the name entered by the user.

The printf() function is used to display the message "Enter your name : " on the console, prompting the user to input their name.

The scanf() function is used to read the input from the user. It takes two arguments: the format specifier %s, which indicates that we expect a string input, and the variable name where the input will be stored. The %s format specifier is used for reading strings without spaces. If the user enters a name with spaces, it will only capture the characters before the first space.

After reading the name, the code uses another printf() function to display a greeting message, "Hello, " followed by the name entered by the user.

Finally, the return 0; statement indicates that the program has executed successfully, and the value 0 is returned to the operating system.

Conclusion ::


This program asks the user to input their name, and then it greets them by displaying "Hello" followed by their name on the console.
---------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------
---------------------------------------------------------------------------------------------------
