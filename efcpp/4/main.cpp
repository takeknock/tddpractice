#include "Directory.h"

class FileSystem {
public:
    int numDisks() const;
    FileSystem& tfs() const;
};


FileSystem& tfs() 
{
    static FileSystem fs;
    return fs;
}

//extern FileSystem tfs;


class Directory {
public:
    Directory(int params);

};

Directory::Directory(int params)
{
    int disks = tfs().numDisks();
}

Directory& tempDir()
{
    static Directory td(int params);
    return td;
}

int main() {
    int params = 4;
    Directory td = tempDir(params);
    return 0;
}
