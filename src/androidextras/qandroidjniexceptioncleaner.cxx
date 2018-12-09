//  header block begin

// since 0x050a00
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qandroidjnienvironment.h>
#include <QtAndroidExtras>
#include "callback_inherit.h"

// QAndroidJniExceptionCleaner is pure virtual: false
// QAndroidJniExceptionCleaner has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAndroidJniExceptionCleaner_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAndroidJniExceptionCleaner_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAndroidJniExceptionCleaner_t qt_meta_stringdata_MyQAndroidJniExceptionCleaner = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQAndroidJniExceptionCleaner"
  },
  "MyQAndroidJniExceptionCleaner"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAndroidJniExceptionCleaner[] = {
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
class Q_DECL_EXPORT MyQAndroidJniExceptionCleaner : public QAndroidJniExceptionCleaner {
public:
  virtual ~MyQAndroidJniExceptionCleaner() {}
// void QAndroidJniExceptionCleaner(QAndroidJniExceptionCleaner::OutputMode)
MyQAndroidJniExceptionCleaner(QAndroidJniExceptionCleaner::OutputMode outputMode) : QAndroidJniExceptionCleaner(outputMode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:75
// [-2] void QAndroidJniExceptionCleaner(QAndroidJniExceptionCleaner::OutputMode)
extern "C" Q_DECL_EXPORT
void* C_ZN27QAndroidJniExceptionCleanerC2ENS_10OutputModeE(QAndroidJniExceptionCleaner::OutputMode outputMode) {
  return  new QAndroidJniExceptionCleaner(outputMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:76
// [-2] void ~QAndroidJniExceptionCleaner()
extern "C" Q_DECL_EXPORT
void C_ZN27QAndroidJniExceptionCleanerD2Ev(void *this_) {
  delete (QAndroidJniExceptionCleaner*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtAndroidExtras/qandroidjnienvironment.h:78
// [-2] void clean()
extern "C" Q_DECL_EXPORT
void C_ZN27QAndroidJniExceptionCleaner5cleanEv(void *this_) {
  ((QAndroidJniExceptionCleaner*)this_)->clean();
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
