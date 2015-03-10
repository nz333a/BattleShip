// Author: hijiri
// Last Modified: 03-11-2015

#include <QApplication>
#include <QWidget>


int main(int argc, char* argv[])
{
    QApplication app(argc, argv);

    QWidget frame;

    frame.resize(300, 200);
    frame.setWindowTitle("Battle Ship");
    frame.show();

    return app.exec();
}
