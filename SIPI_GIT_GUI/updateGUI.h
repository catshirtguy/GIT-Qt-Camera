#ifndef FRAME_RATE_H
#define FRAME_RATE_H

#include "mainwindow.h"

class updateGUI
{

private:
    CImageFormatConverter formatConverter;                       // me
    CPylonImage PylonImage;                                      // me
    Mat openCvImage;                                             // me
    QImage dest;                                                 // me

public:
    updateGUI();
};

#endif // FRAME_RATE_H
