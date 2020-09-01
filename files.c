#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n1,n2,n3,n4;
   int n5,n6,n7,n8;
   int arr[100000];
   int i = 0, j, n = 0, min, index;
   FILE *fptr;
   FILE *fptr1;
   FILE *fptr2;

   char sourcePath[100];
   char sourcePath1[100];
   char destPath[100];


   char ch;
   char ch1;


   // use appropriate location if you are using MacOS or Linux
   fptr = fopen("program.txt","r");
   fptr1 = fopen("program1.txt","r");

   if(fptr == NULL)
   {
      printf("Error!");
      exit(1);
   }
   if(fptr1 == NULL)
   {
      printf("Error!");
      exit(1);
   }


   printf("Enter nums: ");
   scanf("%d %d %d %d",&n1,&n2,&n3,&n4);

   printf("Enter nums of second file: ");
   scanf("\t %d %d %d %d",&n5,&n6,&n7,&n8);

   fprintf(fptr,"%d %d %d %d",n1,n2,n3,n4);
   fprintf(fptr1,"%d %d %d %d",n5,n6,n7,n8);

   printf("Value of n =%d %d %d %d",n1,n2,n3,n4);
   printf("\n");
   printf("Value of n =%d %d %d %d",n5,n6,n7,n8);
   printf("\n");
    printf("Enter source file path: ");
    scanf("%s", sourcePath);
    printf("\n");
    printf("Enter source file path of second file: ");
    scanf("%s", sourcePath1);
    printf("\n");
    printf("Enter destination file path: ");
    scanf("%s", destPath);

    fptr  = fopen(sourcePath, "r");
    fptr1 = fopen(sourcePath1, "r");
    fptr2 = fopen(destPath,   "w");


    /* fopen() return NULL if unable to open file in given mode. */
    if (fptr == NULL || fptr2 == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_FAILURE);
    }
    if (fptr1 == NULL || fptr2 == NULL)
    {
        /* Unable to open file hence exit */
        printf("\nUnable to open file.\n");
        printf("Please check if file exists and you have read/write privilege.\n");

        exit(EXIT_FAILURE);
    }


    /*
     * Copy file contents character by character.
     */
    ch = fgetc(fptr);
    ch1 = fgetc(fptr1);
    while (ch != EOF)
    {
        /* Write to destination file */
        fputc(ch, fptr2);

        /* Read next character from source file */
        ch = fgetc(fptr);

    }
    while (ch1 != EOF)
    {
        /* Write to destination file */
        fputc(ch1, fptr2);

        /* Read next character from source file */
        ch1 = fgetc(fptr1);

    }
    printf("\nFiles copied successfully.\n");



   fclose(fptr);
   fclose(fptr1);
   fclose(fptr2);

   return 0;
}

