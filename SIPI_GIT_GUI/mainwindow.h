#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

//
#include <QMediaRecorder>

// Needed for Camera
#include <QCameraViewfinder>

//
#include <QApplication>
#include <QLabel>
#include <QString>
#include <QtCore>
#include <QImage>
#include <QPixmap>

/// Needed for OpenCV
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/imgproc/types_c.h>

/// Added for Pylon
#include <pylon/PylonIncludes.h>
#include <pylon/BaslerUniversalInstantCamera.h>

/// C++ library
#include <iostream>
#include <iomanip>

/// Local headers
//#include "Camera_Param.h"
//#include "imageConvert.h"

/// namespaces are grouped here to get rid of errors
/// Multiply namespaces in different areas will cause an error
using namespace Pylon;
using namespace GenApi;
using namespace std;
using namespace cv;

// Added for opnCV
//using namespace cv;

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    // choose number of images to capture
    uint32_t c_countOfImagesToGrab = 1;
    // Choose number of cameras
    size_t c_maxCamerasToUse = 1;



private:
    Ui::MainWindow *ui;

    QTimer* timer;
    bool startUp = true;

//    CBaslerUniversalInstantCamera camera;

    CImageFormatConverter formatConverter;                       // me
    CPylonImage PylonImage;                                      // me
    Mat openCvImage;                                             // me
    QImage dest;                                                 // me



public slots:

    void on_pushButtonDisplay_clicked();
    void Capture();
    //void on_pushButtonDisplay_clicked();


private slots:

    void label_Camera_Info();

    void on_pushButton_Camera_Reconnect_clicked(bool checked);

    void on_pushButton_clicked();

};
#endif // MAINWINDOW_H
