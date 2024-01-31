#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int countWordsInFile(const string& fileName) {
    ifstream inputFile(fileName);
    if (!inputFile.is_open()) {
        cerr << "Error: Unable to open file '" << fileName << "'.\n";
        return -1; // Return -1 to indicate an error
    }

    int wordCount = 0;
    string word;

    while (inputFile >> word) {
        wordCount++;
    }

    inputFile.close();
    return wordCount;
}

int main() {
    string fileName;

    // Prompt user to enter the file name
    cout << "Enter the name of the text file: ";
    cin >> fileName;

    // Count words in the file
    int wordCount = countWordsInFile(fileName);

    if (wordCount != -1) {
        cout << "Total word count in file '" << fileName << "': " << wordCount << endl;
    }

    return 0;
}
