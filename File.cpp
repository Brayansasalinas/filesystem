// File.cpp
#include "File.h"

File::File(const std::string& name) : name(name) {}

const std::string& File::getName() const {
    return name;
}

const std::string& File::getContent() const {
    return content;
}

void File::setContent(const std::string& content) {
    this->content = content;
}
