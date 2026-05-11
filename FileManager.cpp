#include "FileManager.h"
#include <fstream>

void FileManager::saveRecord(string data) {
    ofstream file("data.txt", ios::app);
    file << data << endl;
    file.close();
}