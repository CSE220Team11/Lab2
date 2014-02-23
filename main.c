#include "common.h"

int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    
    /* Amber code starts here*/
    init_lister(const char *argv[], char source_name[], char date[] );
    while( get_source_line( FILE *file, char source_name[], char date[] ) == TRUE )
    {
    	get_source_line( FILE *file, char source_name[], char date[] );
    	//Not suure if FILE *file is correct yet, not on a computer that I can test on currently
    }
    return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;
    FILE *file;
    
    /* Missing Code Here */
    return file;
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    
    if (fgets( char *source_buffer[], int MAX_SOURCE_LINE_LENGTH, FILE *src_file) != NULL ) 
    {
    	//Amber code starts here
	fgets( char *source_buffer[], int MAX_SOURCE_LINE_LENGTH, FILE *src_file);
    	line_number++; 
    	sprintf( char *print_buffer, char *source_buffer[], int line_number );
    	//ends here
    	
        return (TRUE);
    }
    else
    {
        return (FALSE);
    }
}

