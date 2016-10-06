#include <memory>
#include <string>

class IFiles
{ 
public:
    ~IFiles(){};

    virtual bool mkdir(std::string dirName) = 0;
    virtual bool cd(std::string path) = 0;
    virtual bool rmdir(std::string dirName) = 0;
    virtual std::string pwd() = 0;
    virtual bool pathExist(std::string path) = 0;

    virtual bool createFile(std::string filename, std:: string contents) = 0;
    virtual bool rm(std::string filename) = 0;
    virtual bool updateFile(std::string filename, std::string contents) = 0;

protected:
    IFiles(){};
}