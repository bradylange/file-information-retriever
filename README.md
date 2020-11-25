# file-information-retriever
Displays file information about the file input.

Brady Lange

04/16/18

Op Sys Programming

Assignment 4

## `src/file_info.c`
This program allows the user to learn information about a file of their choice like the name,
I-Node number, and size due to the struct and stat function. A string compare function is used 
to determine which option was selected by the user to determine which print statement will execute

Input:

`a.out`

`file_info.c`

`File_Name`

Output:

`File Name: sample.c`

`What file would you like to know more about?`

```
What would you like to know about the following file: file_info.c`
Your options are:
- File_Name
- I-Node_Number
- File_Size (in bytes)
- Exit (to exit the program)
```

`File Name: file_info.c`
