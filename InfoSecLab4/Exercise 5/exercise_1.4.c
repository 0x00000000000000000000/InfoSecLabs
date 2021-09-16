#include <stdio.h>
#include <string.h>
void not_called()
{
        printf("Shell created\n");
}

int main() 
{
        not_called();
        FILE *filePointer ;
        char dataToBeWritten[50] = "some text";
        filePointer = fopen("abc.txt", "w") ;
        if ( filePointer == NULL )
        {
                printf( "abc.txt file failed to open." ) ;
        }
        else
        {
                printf("The file is now opened.\n") ;
                if ( strlen ( dataToBeWritten ) > 0 )
                {
                        fputs(dataToBeWritten, filePointer) ;
                        fputs("\n", filePointer) ;
                }
                fclose(filePointer) ;
                printf("Data successfully written in file GfgTest.c\n");
                printf("The file is now closed.") ;
        }
        return 0;
}



