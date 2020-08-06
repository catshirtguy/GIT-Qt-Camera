QT       += multimedia multimediawidgets

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    grab.cpp \
    main.cpp \
    mainwindow.cpp \
    updateGUI.cpp

HEADERS += \
    Camera_Param.h \
    imageConvert.h \
    mainwindow.h \
    updateGUI.h

FORMS += \
    mainwindow.ui

# ----------------------------------- Pylon ------------------------------------------
INCLUDEPATH += G:\\Qt_Projects\\SIPI_GIT\\include

#LIBS += "G:\Qt_Projects/SIPI_GIT/lib/x64/GCBase_MD_VC141_v3_1_Basler_pylon.lib"
#LIBS += "G:\Qt_Projects/SIPI_GIT/lib/x64/GenApi_MD_VC141_v3_1_Basler_pylon.lib"
#LIBS += "G:\Qt_Projects/SIPI_GIT/lib/x64/PylonBase_v6_0.lib"
#LIBS += "G:\Qt_Projects/SIPI_GIT/lib/x64/PylonC.lib"
#LIBS += "G:\Qt_Projects/SIPI_GIT/lib/x64/PylonGUI_v6_0.lib"
#LIBS += "G:\Qt_Projects/SIPI_GIT/lib/x64/PylonUtility_v6_0.lib"

LIBS += -LG:\\Qt_Projects\\SIPI_GIT\\lib\\x64 \
    -lGCBase_MD_VC141_v3_1_Basler_pylon \
    -lGenApi_MD_VC141_v3_1_Basler_pylon \
    -lPylonBase_v6_0 \
    -lPylonC \
    -lPylonGUI_v6_0 \
    -lPylonUtility_v6_0

# --------------------------------- OpenCV ---------------------------------------------
INCLUDEPATH += G:\\Qt_Projects\\SIPI_GIT\\OpenCV\\build\\install\\include              #opencv-4.3.0\\include

LIBS += -LG:\\Qt_Projects\\SIPI_GIT\\OpenCV\\build\\lib\\Debug \
    -lopencv_aruco430d \
    -lopencv_bgsegm430d \
    -lopencv_bioinspired430d \
    -lopencv_calib3d430d \
    -lopencv_ccalib430d \
    -lopencv_core430d \
    -lopencv_cvv430d \
    -lopencv_datasets430d \
    -lopencv_dnn_objdetect430d \
    -lopencv_dnn_superres430d \
    -lopencv_dnn430d \
    -lopencv_dpm430d \
    -lopencv_face430d \
    -lopencv_features2d430d \
    -lopencv_flann430d \
    -lopencv_fuzzy430d \
    -lopencv_gapi430d \
    -lopencv_hfs430d \
    -lopencv_highgui430d \
    -lopencv_img_hash430d \
    -lopencv_imgcodecs430d \
    -lopencv_imgproc430d \
    -lopencv_intensity_transform430d \
    -lopencv_line_descriptor430d \
    -lopencv_ml430d \
    -lopencv_objdetect430d \
    -lopencv_optflow430d \
    -lopencv_phase_unwrapping430d \
    -lopencv_photo430d \
    -lopencv_plot430d \
    -lopencv_quality430d \
    -lopencv_rapid430d \
    -lopencv_reg430d \
    -lopencv_rgbd430d \
    -lopencv_saliency430d \
    -lopencv_shape430d \
    -lopencv_stereo430d \
    -lopencv_stitching430d \
    -lopencv_structured_light430d \
    -lopencv_superres430d \
    -lopencv_surface_matching430d \
    -lopencv_text430d \
    -lopencv_tracking430d \
    -lopencv_ts430d \
    -lopencv_video430d \
    -lopencv_videoio430d \
    -lopencv_videostab430d \
    -lopencv_xfeatures2d430d \
    -lopencv_ximgproc430d \
    -lopencv_xobjdetect430d \
    -lopencv_xphoto430d

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
