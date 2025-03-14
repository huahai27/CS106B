/*
 * CS106B Section Handout Test Harness: Section 2
 * ----------------------------------------------
 * These problems have been galvanized from years of
 * section handouts that have been worked on by numerous
 * instructors and TA's. Codified for Qt and Ed by Neel
 * Kishnani for Winter 2022.
 *
 * A huge thank you to Keith Schwarz and Julie Zelenski
 * for creating an amazing testing harness!
 */

#include "testing/SimpleTest.h"
#include "set.h"
using namespace std;

/*
 * See Stanford library's promptUserForFile function to get
 * a file into a stream format:
 * https://web.stanford.edu/dept/cs_edu/resources/cslib_docs/filelib.html#Function:promptUserForFile
 */
Set<string> wordsIn(istream& input) {
    Set<string> listOfWords;
    for (string word; input >> word;) {
        listOfWords.add(word);
    }

    return listOfWords;
}

string getFilename(string& filename) {
    cout << "Please enter the name of the file: ";
    cin >> filename;
    cout << endl;

    return filename;
}

int main() {
    int k = 0;
    cout << "Please choose the k-gram: ";
    cin >> k;
    cout << endl;

    string filename1, filename2;
    filename1 = getFilename(filename1);
    filename2 = getFilename(filename2);
    ifstream file1(filename1);
    ifstream file2(filename2);


}

