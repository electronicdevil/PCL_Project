/**
 * 
 * 
 */ 
#include <iostream>

#include <pcl_control.h>

int main(int argc, char **argv) {
    std::cout << "PCL | Scene" << std::endl;
    
    scene::get_opt_string(argc,argv);
    
    return 0;
}