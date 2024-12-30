/*
    File Handling Read Mode
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *pFile = fopen("23's File.txt", "r"); // Read Mode
    char buffer[1024];
    system("cls");
    if (pFile == NULL)
    {
        printf("[-] File not found!");
    }
    else
    {
        while (fgets(buffer, 1024, pFile) != NULL) // Loop for reading entire file
        {
            printf("%s", buffer);
        }
    }
    fclose(pFile); // Do not de-reference this.
    return 0;
}