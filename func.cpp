#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

#include <boost/filesystem.hpp>

#include "func.h"


void texmerge::Make_Empty_Pack_Folder(std::string packname)
{
    std::string folders[50] = {
         "",
         "/assets",
         "/assets/minecraft",
         "/assets/minecraft/blockstates",
         "/assets/minecraft/models",
         "/assets/minecraft/models/block",
         "/assets/minecraft/models/item",
         "/assets/minecraft/texts",
         "/assets/minecraft/textures",
         "/assets/minecraft/textures/blocks",
         "/assets/minecraft/textures/colormap",
         "/assets/minecraft/textures/effect",
         "/assets/minecraft/textures/entity",
         "/assets/minecraft/textures/entity/armorstand",
         "/assets/minecraft/textures/entity/banner",
         "/assets/minecraft/textures/entity/cat",
         "/assets/minecraft/textures/entity/chest",
         "/assets/minecraft/textures/entity/cow",
         "/assets/minecraft/textures/entity/creeper",
         "/assets/minecraft/textures/entity/endercrystal",
         "/assets/minecraft/textures/entity/enderdragon",
         "/assets/minecraft/textures/entity/enderman",
         "/assets/minecraft/textures/entity/ghast",
         "/assets/minecraft/textures/entity/horse",
         "/assets/minecraft/textures/entity/pig",
         "/assets/minecraft/textures/entity/rabbit",
         "/assets/minecraft/textures/entity/sheep",
         "/assets/minecraft/textures/entity/skeleton",
         "/assets/minecraft/textures/entity/slime",
         "/assets/minecraft/textures/entity/spider",
         "/assets/minecraft/textures/entity/villager",
         "/assets/minecraft/textures/entity/wither",
         "/assets/minecraft/textures/entity/wolf",
         "/assets/minecraft/textures/entity/zombie",
         "/assets/minecraft/textures/environment",
         "/assets/minecraft/textures/font",
         "/assets/minecraft/textures/gui",
         "/assets/minecraft/textures/gui/achievement",
         "/assets/minecraft/textures/gui/container",
         "/assets/minecraft/textures/gui/container/creative_inventory",
         "/assets/minecraft/textures/gui/presets",
         "/assets/minecraft/textures/gui/title",
         "/assets/minecraft/textures/gui/title/background",
         "/assets/minecraft/textures/items",
         "/assets/minecraft/textures/map",
         "/assets/minecraft/textures/misc",
         "/assets/minecraft/textures/models",
         "/assets/minecraft/textures/models/armor",
         "/assets/minecraft/textures/painting",
         "/assets/minecraft/textures/particle",
    };
    for (int i = 0; i < 50; i++)
    {
        fs::create_directory(packname + folders[i]);
    }
}
    


bool texmerge::Copy_Full_Directory(const fs::path& source, const fs::path& destination)
{
    try
    {
        //checks for nonexisting source directory
        if(!fs::exists(source) || !fs::is_directory(source))
        {
            throw std::runtime_error(source.string() + " does not exist or is not a directory" + "\n");
            return false;
        }
        //checks for existin destination directory
        if(fs::exists(destination))
        {
            throw std::runtime_error(destination.string() + " already exists" + "\n");
            return false;
        }
        //creates distination directory, and throws an error on failure
        if(!fs::create_directory(destination))
        {
            throw std::runtime_error(destination.string() + " could not be created" + "\n");
            return false;
        }
    }
    
    catch(fs::filesystem_error const& e)
    {
        std::cerr << e.what() << '\n';
        return false;
    }
    
    //iterates through files in the source directory
    for(fs::directory_iterator file(source);
        file != fs::directory_iterator();
        ++file)
    {
        try {
            //creates a path object "current" which stores the pathname of the current file
            fs::path current(file->path());
            
            //recustive element
            if(fs::is_directory(current))
            {
                //recalls copyDirecory
                //source --> current
                //distination --> destination / current.filename()
                if(!Copy_Full_Directory(current, destination / current.filename()))
                {
                    return false;
                }
            }
            
            //copies the current file
            else
            {
                fs::copy_file(current, destination / current.filename());
            }
        }
        catch( boost::filesystem::filesystem_error const & e )
        {
            std:: cerr << e.what() << '\n';
        }
    }
    return true;
}
    
    



typedef unsigned long long	u128;
typedef unsigned long		u64;
typedef unsigned int		u32;
typedef unsigned short		u16;
typedef unsigned char		u8;

int extract( u128* masks, u8 amount, std::string infile, std::string outfile )
{
    return 0;
};

    
    //newdir = outfile + /newdir
    
    
    
	//2. make subfolders with proper names
    
    
    
	//3. for each subfolder:
		//a. check the bitmask:
			//i. if 0: create appropriate blank file
			//ii. if 1: copy from source
	

int main()
{
	std::cout << extract( NULL, 0, "hi", "cool" ) << std::endl;
	return 0;
}


