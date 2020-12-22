//  header block begin

// /usr/include/qt/QtGui/qopenglversionfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qopenglversionfunctions.h>
#include <QtGui>
#include "callback_inherit.h"

// QOpenGLVersionStatus is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qopenglversionstatus(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:92
// [-2] void QOpenGLVersionStatus() 
// (11)qm560535564 (29)_ZN20QOpenGLVersionStatusC2Ev
/*void* qm560535564()*/{
  ;
  this_ =  new QOpenGLVersionStatus();
  this_ =  new MyQOpenGLVersionStatus();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:97
// [-2] void QOpenGLVersionStatus(int, int, QOpenGLVersionStatus::OpenGLStatus) 
// (12)qm1142934713 (48)_ZN20QOpenGLVersionStatusC2EiiNS_12OpenGLStatusE
/*void* qm1142934713(int majorVersion, int minorVersion, QOpenGLVersionStatus::OpenGLStatus functionStatus)*/{
  int majorVersion = *(int*)this_; int minorVersion = *(int*)this_; QOpenGLVersionStatus::OpenGLStatus functionStatus = *(QOpenGLVersionStatus::OpenGLStatus*)this_;
  this_ =  new QOpenGLVersionStatus(majorVersion, minorVersion, functionStatus);
  this_ =  new MyQOpenGLVersionStatus(majorVersion, minorVersion, functionStatus);
}


/*void C_ZN20QOpenGLVersionStatusD2Ev(void *this_)*/ {
  delete (QOpenGLVersionStatus*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qopenglversionstatus
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
