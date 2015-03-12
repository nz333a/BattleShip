// Author: hijiri
// Last Modified: 03-12-2015

#include "dialog.h"
#include <iostream>
#include <cstdlib>
#include <unistd.h>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    gridLayout = new QGridLayout();

    inputImg = new QImage(":/image/test.png");

    imgDisplayLabel = new QLabel("");
    imgDisplayLabel->setPixmap(QPixmap::fromImage(*inputImg));
    imgDisplayLabel->adjustSize();

    scrollArea = new QScrollArea();
    scrollArea->setWidget(imgDisplayLabel);
    scrollArea->setMinimumSize(256,256);
    scrollArea->setMaximumSize(512,512);

    gridLayout->addWidget(scrollArea,0,0);
    setLayout(gridLayout);
}
 
Dialog::~Dialog()
{
    delete inputImg;
    delete imgDisplayLabel;
    delete scrollArea;
    delete gridLayout;
}


std::string getAssetDir()
{
    char cwd[PATH_MAX];
    getcwd(cwd, PATH_MAX);
    return std::string(cwd);
}
