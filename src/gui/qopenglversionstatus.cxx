//  header block begin
// /usr/include/qt/QtGui/qopenglversionfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVersionStatus is pure virtual: false
// QOpenGLVersionStatus has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQOpenGLVersionStatus : public QOpenGLVersionStatus {
public:
  virtual ~MyQOpenGLVersionStatus() {}
// void QOpenGLVersionStatus()
MyQOpenGLVersionStatus() : QOpenGLVersionStatus() {}
// void QOpenGLVersionStatus(int, int, QOpenGLVersionStatus::OpenGLStatus)
MyQOpenGLVersionStatus(int majorVersion, int minorVersion, QOpenGLVersionStatus::OpenGLStatus functionStatus) : QOpenGLVersionStatus(majorVersion, minorVersion, functionStatus) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:86
// [-2] void QOpenGLVersionStatus()
extern "C" Q_DECL_EXPORT
void* C_ZN20QOpenGLVersionStatusC2Ev() {
  return  new QOpenGLVersionStatus();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:91
// [-2] void QOpenGLVersionStatus(int, int, QOpenGLVersionStatus::OpenGLStatus)
extern "C" Q_DECL_EXPORT
void* C_ZN20QOpenGLVersionStatusC2EiiNS_12OpenGLStatusE(int majorVersion, int minorVersion, QOpenGLVersionStatus::OpenGLStatus functionStatus) {
  return  new QOpenGLVersionStatus(majorVersion, minorVersion, functionStatus);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QOpenGLVersionStatusD2Ev(void *this_) {
  delete (QOpenGLVersionStatus*)(this_);
}
//  main block end
