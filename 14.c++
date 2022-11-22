#include <iostream>
using namespace std;

// program to copy contents of one file to another
int main()
{
    char ch;
    FILE *source, *target;

    source = fopen("file1.txt", "r");

    if (source == NULL)
    {
        cout << "Press any key to exit..." << endl;
        exit(EXIT_FAILURE);
    }

    target = fopen("file2.txt", "w");

    if (target == NULL)
    {
        fclose(source);
        cout << "Press any key to exit..." << endl;
        exit(EXIT_FAILURE);
    }

    while ((ch = fgetc(source)) != EOF)
        fputc(ch, target);

    cout << "File copied successfully." << endl;

    fclose(source);

    fclose(target);

    return 0;
}