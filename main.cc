// Author: hijiri
// Last Modified: 03-11-2015

#include <QtGui>
#include "dialog.h"

/* Main function */
int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    Dialog w;
    w.show();
    return app.exec();
}

