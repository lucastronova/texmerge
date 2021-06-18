#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
#include <sys/stat.h>


typedef unsigned long long	u128;
typedef unsigned long		u64;
typedef unsigned int		u32;
typedef unsigned short		u16;
typedef unsigned char		u8;

int extract( u128* masks, u8 amount, std::string infile, std::string outfile )
{
	
	
	//1. make new folder with name "outfile
    
    if (!mkdir(outfile, 0777))
    {
        return -1;
    }
    
    //newdir = outfile + /newdir
    
    
    
	//2. make subfolders with proper names
    
    
    
	//3. for each subfolder:
		//a. check the bitmask:
			//i. if 0: create appropriate blank file
			//ii. if 1: copy from source
	

	
	
}


