#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    char source[100], destination[100];
    char ch;

    cout << "Enter source file name: ";
    cin >> source;

    cout << "Enter destination file name: ";
    cin >> destination;

    // Create and write text into source file
    ofstream fout1(source);

    if (!fout1)
    {
        cout << "Error creating source file.";
        return 1;
    }

    fout1 << "Hello! Welcome to File Handling in C++.\n";
    fout1 << "This is my first file copying program.\n";
    fout1 << "Files are used to store data permanently.";

    fout1.close();

    // Open source and destination files
    ifstream fin(source);
    ofstream fout2(destination);

    if (!fin || !fout2)
    {
        cout << "Error opening files.";
        return 1;
    }

    // Copy contents
    while (fin.get(ch))
    {
        fout2.put(ch);
    }

    fin.close();
    fout2.close();

    // Display destination file contents
    ifstream display(destination);

    cout << "\nFile copied successfully!";
    cout << "\n\nContents of destination file:\n\n";

    while (display.get(ch))
    {
        cout << ch;
    }

    display.close();

    return 0;
}
