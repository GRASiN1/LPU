#include <bits/stdc++.h>
using namespace std;
int main(){
    
    ofstream newFile;
    ifstream oldFile;
    oldFile.open("Name.txt");
    newFile.open("NewName.txt");
    string str;
    while(oldFile >> str) newFile << str << endl;
    newFile.close();
    oldFile.close();
    cout << "File Copied" << endl;

    //remove(<filename>) to remove a file;

    return 0;
}