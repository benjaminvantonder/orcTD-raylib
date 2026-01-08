#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

int main() {

    ifstream MyReadFile("textures.txt");

    vector<string> arrTextures;
    string myText;

    while(getline(MyReadFile, myText)) {
        arrTextures.push_back(myText);
    }

    MyReadFile.close();

    // Example: print what you loaded
    for(const string& texture : arrTextures) {
        cout << texture << endl;
    }
}
