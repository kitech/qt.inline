//  header block begin
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h
#ifndef protected
#define protected public
#define private public
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
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] QList<QVideoFrame::PixelFormat> supportedBufferFormats()
  virtual QList<QVideoFrame::PixelFormat> supportedBufferFormats() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedBufferFormats", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QVideoFrame::PixelFormat>){};}
    auto prv = (QList<QVideoFrame::PixelFormat>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QVideoFrame::PixelFormat>
    } else {
    return (QList<QVideoFrame::PixelFormat>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QVideoFrame::PixelFormat bufferFormat()
  virtual QVideoFrame::PixelFormat bufferFormat() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bufferFormat", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QVideoFrame::PixelFormat)(int)(irv);
      // Elaborated Enum QVideoFrame::PixelFormat
    } else {
    return (QVideoFrame::PixelFormat){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setBufferFormat(QVideoFrame::PixelFormat)
  virtual void setBufferFormat(QVideoFrame::PixelFormat format)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setBufferFormat", &handled, 1, (uint64_t)format, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QCameraCaptureBufferFormatControl::setBufferFormat(format);
  }
  }

};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:57
// [-2] QList<QVideoFrame::PixelFormat> supportedBufferFormats()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:58
// [4] QVideoFrame::PixelFormat bufferFormat()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:59
// [-2] void setBufferFormat(QVideoFrame::PixelFormat)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:53
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK33QCameraCaptureBufferFormatControl10metaObjectEv(void *this_) {
  return (void*)((QCameraCaptureBufferFormatControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:53
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN33QCameraCaptureBufferFormatControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QCameraCaptureBufferFormatControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:53
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN33QCameraCaptureBufferFormatControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QCameraCaptureBufferFormatControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:53
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN33QCameraCaptureBufferFormatControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraCaptureBufferFormatControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:53
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN33QCameraCaptureBufferFormatControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QCameraCaptureBufferFormatControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:55
// [-2] void ~QCameraCaptureBufferFormatControl()
extern "C" Q_DECL_EXPORT
void C_ZN33QCameraCaptureBufferFormatControlD2Ev(void *this_) {
  delete (QCameraCaptureBufferFormatControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameracapturebufferformatcontrol.h:57
// [-2] QList<QVideoFrame::PixelFormat> supportedBufferFormats()
extern "C" Q_DECL_EXPORT
QList<QVideoFrame::PixelFormat>* C_ZNK33QCameraCaptureBufferFormatControl22supportedBufferFormatsEv(void *this_) {
  auto rv = ((QCameraCaptureBufferFormatControl*)this_)->supportedBufferFormats();
return new QList<QVideoFrame::PixelFormat>(rv);
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
