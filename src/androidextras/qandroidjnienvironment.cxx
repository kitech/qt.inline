//  header block begin

// since 0x050200
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidjnienvironment.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidJniEnvironment is pure virtual: false
// QAndroidJniEnvironment has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAndroidJniEnvironment_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAndroidJniEnvironment_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAndroidJniEnvironment_t qt_meta_stringdata_MyQAndroidJniEnvironment = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQAndroidJniEnvironment"
  },
  "MyQAndroidJniEnvironment"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAndroidJniEnvironment[] = {
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
class Q_DECL_EXPORT MyQAndroidJniEnvironment : public QAndroidJniEnvironment {
public:
  virtual ~MyQAndroidJniEnvironment() {}
// void QAndroidJniEnvironment()
MyQAndroidJniEnvironment() : QAndroidJniEnvironment() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:55
// [-2] void QAndroidJniEnvironment()
extern "C" Q_DECL_EXPORT
void* C_ZN22QAndroidJniEnvironmentC2Ev() {
  return  new QAndroidJniEnvironment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:56
// [-2] void ~QAndroidJniEnvironment()
extern "C" Q_DECL_EXPORT
void C_ZN22QAndroidJniEnvironmentD2Ev(void *this_) {
  delete (QAndroidJniEnvironment*)(this_);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:57
// [8] JavaVM * javaVM()
extern "C" Q_DECL_EXPORT
void* C_ZN22QAndroidJniEnvironment6javaVMEv() {
  return (void*)QAndroidJniEnvironment::javaVM();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:58
// [8] JNIEnv * operator->()
extern "C" Q_DECL_EXPORT
void* C_ZN22QAndroidJniEnvironmentptEv(void *this_) {
  return (void*)((QAndroidJniEnvironment*)this_)->operator->();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
