
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream fin("source.txt");
    ofstream fout("destination.txt");

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

    fout << fin.rdbuf();

    fin.close();
    fout.close();

    cout << "File copied successfully.";

    return 0;
}

