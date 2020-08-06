#include "mainwindow.h"
/*
// ---------------------------------------- Capture Image --------------------------------------
void MainWindow::on_pushButtonDisplay_clicked(CBaslerUniversalInstantCamera& camera) {

    string n;

// test
    ui->pushButtonDisplay->setText("Capture");

    // The exit code of the sample application.
    int exitCode = 0;

    try {
        // Get the transport layer factory.
//        CTlFactory& tlFactory = CTlFactory::GetInstance();

        // Get all attached devices and exit application if no device is found.


           // Create an array of instant cameras for the found devices
           // and avoid exceeding a maximum number of devices.

           // Starts grabbing for all cameras starting with index 0. The grabbing
           // is started for one camera after the other. That's why the images of all
           // cameras are not taken at the same time.
           // However, a hardware trigger setup can be used to cause all cameras to grab images synchronously.
           // According to their default configuration, the cameras are
           // set up for free-running continuous acquisition.
           camera.StartGrabbing();

// Test
           ui->pushButtonDisplay->setText("Camera grab");

           // This smart pointer will receive the grab result data.
           CGrabResultPtr ptrGrabResult;

           // Initialize Pylon and OpenCV variables
           CImageFormatConverter formatConverter;                       // me
           formatConverter.OutputPixelFormat = PixelType_BGR8packed;    // me


           // Grab c_countOfImagesToGrab from the cameras.
           for (int i = 0; i < c_countOfImagesToGrab && camera.IsGrabbing(); ++i)
           {
               camera.RetrieveResult(5000, ptrGrabResult, TimeoutHandling_ThrowException);

               intptr_t cameraContextValue = ptrGrabResult->GetCameraContext();

               cout << "Camera " << cameraContextValue << ": " << cameras[cameraContextValue].GetDeviceInfo().GetModelName() << endl;

               // Now, the image data can be processed.
               cout << "GrabSucceeded: " << ptrGrabResult->GrabSucceeded() << endl;
               cout << "SizeX: " << ptrGrabResult->GetWidth() << endl;
               cout << "SizeY: " << ptrGrabResult->GetHeight() << endl;
               const uint8_t* pImageBuffer = (uint8_t*)ptrGrabResult->GetBuffer();
               cout << "Gray value of first pixel: " << (uint32_t)pImageBuffer[0] << endl;
               cout << "Image Number: " << i << endl << endl;

               formatConverter.Convert(PylonImage, ptrGrabResult);       //me
               openCvImage = cv::Mat(ptrGrabResult->GetHeight(), ptrGrabResult->GetWidth(), CV_8UC3, (uint8_t *)PylonImage.GetBuffer());//me
               cv::cvtColor(openCvImage, openCvImage, CV_BGR2RGB);     // invert BGR to RGB
//               imshow("camera", openCvImage);


               if (ui->radioButton->isChecked()){
                   dest = QImage((uchar*)openCvImage.data,  //(uchar*)
                                        openCvImage.cols,
                                        openCvImage.rows,
                                        openCvImage.step,
                                        QImage::Format_Grayscale8);
               }
               else if(ui->radioButton_2->isChecked()){
                   dest = QImage((uchar*)openCvImage.data,  //(uchar*)
                                        openCvImage.cols,
                                        openCvImage.rows,
                                        openCvImage.step,
                                        QImage::Format_Grayscale16);
               }
               else if(ui->radioButton_3->isChecked()){
                   dest = QImage((uchar*)openCvImage.data,  //(uchar*)
                                        openCvImage.cols,
                                        openCvImage.rows,
                                        openCvImage.step,
                                        QImage::Format_BGR888);
               }
               else{
                   dest = QImage((uchar*)openCvImage.data,  //(uchar*)
                                        openCvImage.cols,
                                        openCvImage.rows,
                                        openCvImage.step,
                                        QImage::Format_RGB888);
               }

                                    //QImage::Format_ARGB32);           // no image, may need to rearrange RGB

               QPixmap dest1 = QPixmap::fromImage(dest);
               dest1 = dest1.scaledToWidth(700);
               ui->label_Image->setPixmap(dest1);

// Test
               ui->pushButtonDisplay->setText("Finished");
           }
        }


    catch (GenICam::GenericException & e)
    {
        // Error handling
        //cerr << "An exception occurred." << endl
        //    << e.GetDescription() << endl;
// Test
        ui->pushButtonDisplay->setText("Problem");
        exitCode = 1;
    }

//    PylonTerminate();
}
*/
