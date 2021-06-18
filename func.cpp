#include <cstdlib>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <string>

typedef unsigned long long	u128;
typedef unsigned long		u64;
typedef unsigned int		u32;
typedef unsigned short		u16;
typedef unsigned char		u8;

int extract( u128* masks, u8 amount, std::string infile, std::string outfile )
{
	
	std::string folders[50] = {
		outfile,
		outfile + "/assets",
		outfile + "/assets/minecraft",
		outfile + "/assets/minecraft/blockstates",
		outfile + "/assets/minecraft/models",
		outfile + "/assets/minecraft/models/block",
		outfile + "/assets/minecraft/models/item",
		outfile + "/assets/minecraft/texts",
		outfile + "/assets/minecraft/textures",
		outfile + "/assets/minecraft/textures/blocks",
		outfile + "/assets/minecraft/textures/colormap",
		outfile + "/assets/minecraft/textures/effect",
		outfile + "/assets/minecraft/textures/entity",
		outfile + "/assets/minecraft/textures/entity/armorstand",
		outfile + "/assets/minecraft/textures/entity/banner",
		outfile + "/assets/minecraft/textures/entity/cat",
		outfile + "/assets/minecraft/textures/entity/chest",
		outfile + "/assets/minecraft/textures/entity/cow",
		outfile + "/assets/minecraft/textures/entity/creeper",
		outfile + "/assets/minecraft/textures/entity/endercrystal",
		outfile + "/assets/minecraft/textures/entity/enderdragon",
		outfile + "/assets/minecraft/textures/entity/enderman",
		outfile + "/assets/minecraft/textures/entity/ghast",
		outfile + "/assets/minecraft/textures/entity/horse",
		outfile + "/assets/minecraft/textures/entity/pig",
		outfile + "/assets/minecraft/textures/entity/rabbit",
		outfile + "/assets/minecraft/textures/entity/sheep",
		outfile + "/assets/minecraft/textures/entity/skeleton",
		outfile + "/assets/minecraft/textures/entity/slime",
		outfile + "/assets/minecraft/textures/entity/spider",
		outfile + "/assets/minecraft/textures/entity/villager",
		outfile + "/assets/minecraft/textures/entity/wither",
		outfile + "/assets/minecraft/textures/entity/wolf",
		outfile + "/assets/minecraft/textures/entity/zombie",
		outfile + "/assets/minecraft/textures/environment",
		outfile + "/assets/minecraft/textures/font",
		outfile + "/assets/minecraft/textures/gui",
		outfile + "/assets/minecraft/textures/gui/achievement",
		outfile + "/assets/minecraft/textures/gui/container",
		outfile + "/assets/minecraft/textures/gui/container/creative_inventory",
		outfile + "/assets/minecraft/textures/gui/presets",
		outfile + "/assets/minecraft/textures/gui/title",
		outfile + "/assets/minecraft/textures/gui/title/background",
		outfile + "/assets/minecraft/textures/items",
		outfile + "/assets/minecraft/textures/map",
		outfile + "/assets/minecraft/textures/misc",
		outfile + "/assets/minecraft/textures/models",
		outfile + "/assets/minecraft/textures/models/armor",
		outfile + "/assets/minecraft/textures/painting",
		outfile + "/assets/minecraft/textures/particle",
	};
	
	for ( int i = 0; i < 50; i++ )
	{
		std::cout << folders[i].c_str() << std::endl;
		if (!mkdir(folders[i].c_str()))
		{
			return -1;
		}
	}
    
    //newdir = outfile + /newdir
    
    
    
	//2. make subfolders with proper names
    
    
    
	//3. for each subfolder:
		//a. check the bitmask:
			//i. if 0: create appropriate blank file
			//ii. if 1: copy from source
	

	return 0;
	
}

int main()
{
	std::cout << extract( NULL, 0, "hi", "cool" ) << std::endl;
	return 0;
}


