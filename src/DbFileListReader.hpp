#include <string>
#include <vector>

class DbFileListReader {
public:
    DbFileListReader();
    ~DbFileListReader();

private:
    const std::string path{"databases/"};
    std::vector<std::string> dbFileList;
};