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

struct qt_meta_stringdata_MyQOpenGLVersionStatus_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQOpenGLVersionStatus_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQOpenGLVersionStatus_t qt_meta_stringdata_MyQOpenGLVersionStatus = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQOpenGLVersionStatus"
  },
  "MyQOpenGLVersionStatus"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQOpenGLVersionStatus[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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
