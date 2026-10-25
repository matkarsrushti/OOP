
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

    ifstream fin(source);
    ofstream fout(destination);

    if (!fin)
    {
        cout << "Error opening source file.";
        return 1;
    }
    if (!fout)
    {
        cout << "Error opening destination file.";
        return 1;
    }
    while (fin.get(ch))
    {
        fout.put(ch);
    }

    cout << "File copied successfully.";

    fin.close();
    fout.close();

    return 0;
} 
