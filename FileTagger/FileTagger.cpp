// FileTagger.cpp : Defines the entry point for the application.
//

#include "FileTagger.h"
#include "TagManager.h"


using namespace std;

#include <iostream>

int main() {
    TagManager manager;

    manager.addTags("C:/example/file1.txt", { "work", "cpp", "important" });
    manager.addTags("C:/example/file1.txt", { "urgent", "cpp" }); // make sure duplicates can be dealt with as well 

    auto tags = manager.getTags("C:/example/file1.txt");

    std::cout << "Tags for file1:" << std::endl;
    for (const auto& tag : tags) {
        std::cout << "- " << tag << std::endl;
    }

    return 0;
}