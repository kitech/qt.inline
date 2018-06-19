//  header block begin
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h
#ifndef protected
#define protected public
#endif
#include <qcameracapturebufferformatcontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QCameraCaptureBufferFormatControl is pure virtual: true
// QCameraCaptureBufferFormatControl has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQCameraCaptureBufferFormatControl : public QCameraCaptureBufferFormatControl {
public:
  virtual ~MyQCameraCaptureBufferFormatControl() {}
// void QCameraCaptureBufferFormatControl(QObject *)
MyQCameraCaptureBufferFormatControl(QObject * parent) : QCameraCaptureBufferFormatControl(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK33QCameraCaptureBufferFormatControl10metaObjectEv(void *this_) {
  return (void*)((QCameraCaptureBufferFormatControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:55
// [-2] void ~QCameraCaptureBufferFormatControl()
extern "C" Q_DECL_EXPORT
void C_ZN33QCameraCaptureBufferFormatControlD2Ev(void *this_) {
  delete (QCameraCaptureBufferFormatControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:58
// [4] QVideoFrame::PixelFormat bufferFormat()
extern "C" Q_DECL_EXPORT
QVideoFrame::PixelFormat C_ZNK33QCameraCaptureBufferFormatControl12bufferFormatEv(void *this_) {
  return (QVideoFrame::PixelFormat)((QCameraCaptureBufferFormatControl*)this_)->bufferFormat();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:59
// [-2] void setBufferFormat(QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
void C_ZN33QCameraCaptureBufferFormatControl15setBufferFormatEN11QVideoFrame11PixelFormatE(void *this_, QVideoFrame::PixelFormat format) {
  ((QCameraCaptureBufferFormatControl*)this_)->setBufferFormat(format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:62
// [-2] void bufferFormatChanged(QVideoFrame::PixelFormat)
extern "C" Q_DECL_EXPORT
void C_ZN33QCameraCaptureBufferFormatControl19bufferFormatChangedEN11QVideoFrame11PixelFormatE(void *this_, QVideoFrame::PixelFormat arg0) {
  ((QCameraCaptureBufferFormatControl*)this_)->bufferFormatChanged(arg0);
}

//  main block end
