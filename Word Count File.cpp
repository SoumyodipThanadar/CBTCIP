#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char fname[100];//Storing the file Name.
    FILE *f;//File Pointer.
    char c;
    int l = 0, w = 0, ch = 0, iw = 0;

    printf("Enter the Name of the Text File: ");
    scanf("%s", fname);

    f = fopen(fname, "r");//Opening the File for Reading.

    if (f == NULL) 
	{
        printf("Could not open the File.\n");
        exit(1);
    }

    while ((c = fgetc(f)) != EOF)//While Loop Used.
	{
        ch++;

        if (c == ' ' || c == '\t' || c == '\n') 
		{
            if (iw) 
			{
                iw = 0;
                w++;
            }
            if (c == '\n') 
			{
                l++;
            }
        } 
		else 
		{
            iw = 1;
        }
    }

    fclose(f);//Closing the File for Reading.

    if (iw) 
	{
        w++;
        l++;
    }
    
    
    //Printing of the Total Counts.
    printf("Total Lines: %d\n", l);
    printf("Total Words: %d\n", w);
    printf("Total Characters: %d\n", ch);

    return 0;
}

