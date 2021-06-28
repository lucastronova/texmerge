
#ifndef TEXMERGE_H
#define TEXMERGE_H

namespace fs = boost::filesystem;

class texmerge
{
public:
    //creates an empty folder at given pathname inside working directory
    void Make_Empty_Folder(std::string pathname);
    
    //creates an empty 1.8 texture pack folder
    void Make_Empty_Pack_Folder(std::string packname);
    
    //recursively copies the contents of a source folder to a generated destination folder
    bool Copy_Full_Directory(const fs::path& source, const fs::path& destination);
    
private:

    
    
};

#endif
