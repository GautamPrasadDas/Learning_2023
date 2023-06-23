#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void copyFile(FILE *sourceFile, FILE *destinationFile, int caseOption)
{
    char ch;

    while ((ch = fgetc(sourceFile)) != EOF)
    {
        if (caseOption == 1)
        { // -u option: Convert to upper case
            ch = toupper(ch);
        }
        else if (caseOption == 2)
        { // -l option: Convert to lower case
            ch = tolower(ch);
        }
        else if (caseOption == 3)
        { // -s option: Convert to purely upper case
            if (islower(ch))
            {
                ch = toupper(ch);
            }
        }
        fputc(ch, destinationFile);
    }
}

int main(int argc, char *argv[])
{
    FILE *sourceFile, *destinationFile;
    char sourceFileName[100], destinationFileName[100];
    int caseOption = 0;

    if (argc < 3)
    {
        printf("Insufficient arguments.\n");
        printf("Usage: ./cp Options case.txt case1.txt\n");
        printf("Options:\n");
        printf("  -u : Convert file content to upper case\n");
        printf("  -l : Convert file content to lower case\n");
        printf("  -s : Convert file content to purely upper case\n");
        return 1;
    }

    // Get the case option
    if (argv[1][0] == '-')
    {
        switch (argv[1][1])
        {
        case 'u':
            caseOption = 1;
            break;
        case 'l':
            caseOption = 2;
            break;
        case 's':
            caseOption = 3;
            break;
        default:
            printf("Invalid option.\n");
            return 1;
        }
    }

    // Get the source file name
    strcpy(sourceFileName, argv[2]);

    // Open the source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL)
    {
        printf("Failed to open the source file.\n");
        return 1;
    }
    strcpy(destinationFileName, argv[3]);
    destinationFile = fopen(destinationFileName, "w");
    if (destinationFile == NULL)
    {
        printf("Failed to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }
    // Copy the contents of the source file to the destination file with case handling
    copyFile(sourceFile, destinationFile, caseOption);
    printf("File copied successfully.\n");
    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}
