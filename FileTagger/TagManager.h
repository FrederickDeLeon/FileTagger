#ifndef TAGMANAGER_H
#define TAGMANAGER_H

#include <string>
#include <unordered_map>
#include <vector>
#include <set>

class TagManager {
public:
    // Adds one or more tags to a file path
    void addTags(const std::string& filePath, const std::vector<std::string>& tags);

    // Removes a specific tag from a file
    void removeTag(const std::string& filePath, const std::string& tag);

    // Retrieves all tags for a file
    std::vector<std::string> getTags(const std::string& filePath) const;

    // Searches for files that contain ALL specified tags (AND behavior)
    std::vector<std::string> searchByTags(const std::vector<std::string>& tags) const;

private:
    // Map: file path -> set of tags
    std::unordered_map<std::string, std::set<std::string>> fileTagMap;
};

#endif // TAGMANAGER_H