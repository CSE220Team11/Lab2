#include "common.h"

int main (int argc, const char *argv[])
{
    FILE *source_file;
    char source_name[MAX_FILE_NAME_LENGTH];
    char date[DATE_STRING_LENGTH];
    
    //Amber code starts here
    source_ file = init_lister( argv[1], source_name, date );
    while( get_source_line( source_file, source_name, char date ) == TRUE )
    {
    	get_source_line( source_file, source_name, date );
    }
    
    fclose( source_file );
    return 0;
}
FILE *init_lister(const char *name, char source_file_name[], char dte[])
{
    time_t timer;
    
    //Amber code starts here
    char *time_str;
    
    //Current time functions
    struct tm *current_time;
    time( &timer );
    current_time = localtime( &timer );
    
    //printable time/date information
    time_str = asctime( current_time );
    strcopy( current_time, dte );
    
    //Opening file, passing name info
    FILE *file;
    
    str( source_file_name, name );
    
    file = fopen( name, "r" );
    //end here
    return file;
}
BOOLEAN get_source_line(FILE *src_file, char src_name[], char todays_date[])
{
    char print_buffer[MAX_SOURCE_LINE_LENGTH + 9];
    char source_buffer[MAX_SOURCE_LINE_LENGTH];
    static int line_number = 0;
    
    //Amber code starts here
    fgets( source_buffer[], MAX_SOURCE_LINE_LENGTH, src_file );
    
    //Executes print functions if it is not the end of the file
    if ( !feof( src_file ) ) 
    {
    	line_number++; 
    	
    	sprintf( print_buffer,"%d" line_number, source_buffer );
    	print_line( print_buffer, src_name, todays_date );
    //ends here
    	
        return (TRUE);
    }
    else
    {
        return (FALSE);
    }
}

