#include "TagManager.h"

void TagManager::addTags(const std::string& filePath, const std::vector<std::string>& tags) {
    // Insert each tag into the set mapped to this file path
    for (const auto& tag : tags) {
        fileTagMap[filePath].insert(tag);
    }
}

void TagManager::removeTag(const std::string& filePath, const std::string& tag) {
    // TODO: Implement tag removal logic
}

std::vector<std::string> TagManager::getTags(const std::string& filePath) const {
    std::vector<std::string> result;

    // Check if the file exists in the map
    auto it = fileTagMap.find(filePath);
    if (it != fileTagMap.end()) {
        // Convert set<string> to vector<string>
        result.assign(it->second.begin(), it->second.end());
    }

    return result;
}

std::vector<std::string> TagManager::searchByTags(const std::vector<std::string>& tags) const {
    // TODO: Implement basic AND logic
    return {};
}

