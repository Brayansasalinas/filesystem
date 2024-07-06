#ifndef FILE_H
#define FILE_H

#include <string>

class File {
public:
    File(const std::string& name);
    const std::string& getName() const;
    const std::string& getContent() const;
    void setContent(const std::string& content);

private:
    std::string name;
    std::string content;
};

#endif // FILE_H
