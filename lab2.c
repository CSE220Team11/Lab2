
#include <stdio.h>

/*This number can change to whatever we need it to be,
or change it to be dynamic */
#define MAX_LINES_PER_PAGE = 100

//Define for boolean operation
#define FALSE = 0
#define TRUE = 1

void init_lister(){

}

//Returns either TRUE or FALSE which have int values
int get_source_line(){

}

void print_line( int print_buffer[] ){
        int line_count; //How many lines have been printed on current page
        if( line_count > MAX_LINES_PER_PAGE ){
                print_page_header();
        }
}

void print_page_header(){

}

int main(){

        FILE * input_file;

        char source_buffer[100];

        while( fgets( source_buffer, 100, input_file ) != NULL ){
                get_source_line();
        }

}
