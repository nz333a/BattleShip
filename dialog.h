// Author: hijiri
// Last Modified: 03-12-2015

#ifndef DIALOG_H
#define DIALOG_H

#include <QtGui>
#include <string>

class Dialog : public QDialog
{
    Q_OBJECT
 
    public:
        Dialog(QWidget *parent = 0);
        ~Dialog();

    private:
        QGridLayout* gridLayout;
        QImage* inputImg;
        QLabel* imgDisplayLabel;
        QScrollArea* scrollArea;

};

std::string getAssetDir();

#endif /* dialog.h */
