#ifndef IMAGECONVERT_H
#define IMAGECONVERT_H

#include <QMainWindow>

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

///////////////////////////////////////////////////////////////////////////////////////////////////
namespace Ui {
    class imageConvert;
}

///////////////////////////////////////////////////////////////////////////////////////////////////
class imageConvert : public QMainWindow {
    Q_OBJECT

public:
    explicit imageConvert(QWidget *parent = 0);
    ~imageConvert();

private slots:
//    void on_btnOpenFile_clicked();

private:
    Ui::imageConvert *ui;

    QImage imageConvert::convertOpenCVMatToQtQImage(cv::Mat mat);           // function prototype
};

#endif // IMAGECONVERT_H
