#ifndef FILESMOCK_H
#define FILESMOCK_H

#include "IFiles.h"

class FilesMock : public IFiles
{
public:
    FilesMock():IFiles() {};
}
#endif // FILESMOCK_H