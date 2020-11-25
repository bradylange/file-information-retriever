#include <stdlib.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>

/*
 * Brady Lange
 * 4/16/18
 * File name: file-info.c
 * This program gives information about a file like the name, i-node number, and the size of the file in bytes.
 */
 
 //Main function
 int main()
 {
	char input[10];
	char file[15];
	struct stat buffer;
	
	printf("What file would you like to know more about?\n");
	scanf("%s", file);
	stat(file, &buffer);
	

	
	while(strcmp(input, "Exit") != 0)
	{
		//Asking the user for input
		printf("What would you like to know about the following file: %s\n", file);
		printf("Your options are:\n- File_Name\n- I-Node_Number\n- File_Size (in bytes)\n- Exit (to exit the program)\n");

		//Grabbing user input with scanf
		scanf("%s", input);
		
		//Executing the users input
		if(strcmp(input, "File_Name") == 0)
			printf("File Name: %s\n\n", file);
		else
			if(strcmp(input, "I-Node_Number") == 0)
				printf("I-Node Number: %ld\n\n", buffer.st_ino);
			else
				if(strcmp(input, "File_Size") == 0)
					printf("File Size: %ld\n\n", buffer.st_size);
				else
					if(strcmp(input, "Exit") == 0)
						break;
	}

	return 0;
 }