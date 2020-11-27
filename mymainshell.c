#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/wait.h>


// read_command - Should return command and parameters

void read_command( char cmd[], char *par[])

{

	char line[1024];
	int count = 0, i = 0, j = 0;
	char *array[100], *pch;

	// Read one line
	for (;;)
	{
		int c = fgetc (stdin);
		line[count++] = (char) c;

		if ( c == '\n') break;
	}

	if ( count == 1 ) return;

	// we use strtok to break our lines into tokens

	pch = strtok ( line, "\n" );

	// parse the line into words
	while ( pch != NULL)
	{
		array[i++] = strdup (pch);
		pch = strtok ( NULL, "\n");
	}

	//  first word is the command

	strcpy (cmd, array[0] );

	//others are parameters

	for (int i = 0; j < i; i++)
	{
		par[j] = array[j];
	}
	par[i] = NULL; //NULL - terminate the perimeter
}


void type_prompt()

{
        static int first_time = 1;

        if ( first_time)

        {
                // clear screen for the first time

                // e means escaped
                const char* CLEAR_SCREEN_ANSI = " \033[1;1H\033[2J";

                write(STDOUT_FILENO,CLEAR_SCREEN_ANSI,12);

                first_time = 0;
        }

        printf("$"); //display prompt
}



int main()
{

	//We need to have two arrays to hold the commands
	//And array of pointers to hold the parameters

	char cmd[100], command[100], *parameters[20];

	// environment variable
	// We assume that all our commands are in the director /bin

	char *envp[] = { (char *) "PATH=/bin",0};


		/*the while loop
		  1. reads command,
		  2. evaluates the command and
		  3. prints out put*/

	while ( 1 ) {                 //repeat forever
		type_prompt();              //display prompt on screen
		read_command ( command, parameters ); //read input from terminal
		if ( fork() != 0 )          // parent
			wait ( NULL );            //wait for child
		else{

			//copy the bin directory in the array cmd

			strcpy (cmd, "/bin/");

			// concatenate the command the user has entered to cmd

			strcat (cmd, command);

			// then execute to command

			execve ( cmd, parameters, envp ); // execute command
		}

		//if our command is exit we terminate the loop

		if ( strcmp (command, "exit") == 0)
			break;
	}
}
