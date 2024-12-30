/*
    File Handling Write Mode!
*/

#include <stdio.h>

int main()
{
    FILE *pFile = fopen("23's File.txt", "w"); // Write mode
    // FILE *pFile = fopen("23's File.txt", "a"); // Append mode
    //  FILE *pFile = fopen("E:\\Users\\sahil\\Desktop\\23's File.txt", "w"); // Hard Coded Location
    fprintf(pFile, "Hello World, it's me Sahil Bhandari");

    /* Helps to delete file if created
    if (remove("23's File.txt") == 0)
    {
        printf("[+] The file was deleted successfully");
    }
    else
    {
        printf("[-] Either file not found or already deleted!");
    }
    */
    fclose(pFile); // Do not de-reference this.
    return 0;
}