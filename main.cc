// Author: hijiri
// Last Modified: 03-11-2015

//#include <QtGui>
//#include "dialog.h"
#include <iostream>
#include <string>
#include <unistd.h>

std::string getAssetDir()
{   
    char cwd[PATH_MAX];
    getcwd(cwd, PATH_MAX);
    return std::string(cwd);
}


/* Main function */
int main(int argc, char* argv[])
{
    /*QApplication app(argc, argv);
    Dialog w;
    w.show();
    return app.exec();*/

    std::cout << getAssetDir() << std::endl;
    std::cout << "Check" << std::endl;
    return 0;
}

