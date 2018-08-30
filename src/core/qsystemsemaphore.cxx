//  header block begin
// since 0x040400
// /usr/include/qt/QtCore/qsystemsemaphore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsystemsemaphore.h>
#include <QtCore>
#include "callback_inherit.h"

// QSystemSemaphore is pure virtual: false
// QSystemSemaphore has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSystemSemaphore_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSystemSemaphore_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSystemSemaphore_t qt_meta_stringdata_MyQSystemSemaphore = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQSystemSemaphore"
  },
  "MyQSystemSemaphore"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSystemSemaphore[] = {
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
class Q_DECL_EXPORT MyQSystemSemaphore : public QSystemSemaphore {
public:
  virtual ~MyQSystemSemaphore() {}
// void QSystemSemaphore(const QString &, int, QSystemSemaphore::AccessMode)
MyQSystemSemaphore(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode) : QSystemSemaphore(key, initialValue, mode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:74
// [-2] void QSystemSemaphore(const QString &, int, QSystemSemaphore::AccessMode)
extern "C" Q_DECL_EXPORT
void* C_ZN16QSystemSemaphoreC2ERK7QStringiNS_10AccessModeE(QString* key, int initialValue, QSystemSemaphore::AccessMode mode) {
  return  new QSystemSemaphore(*key, initialValue, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:75
// [-2] void ~QSystemSemaphore()
extern "C" Q_DECL_EXPORT
void C_ZN16QSystemSemaphoreD2Ev(void *this_) {
  delete (QSystemSemaphore*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:77
// [-2] void setKey(const QString &, int, QSystemSemaphore::AccessMode)
extern "C" Q_DECL_EXPORT
void C_ZN16QSystemSemaphore6setKeyERK7QStringiNS_10AccessModeE(void *this_, QString* key, int initialValue, QSystemSemaphore::AccessMode mode) {
  ((QSystemSemaphore*)this_)->setKey(*key, initialValue, mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:78
// [8] QString key()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QSystemSemaphore3keyEv(void *this_) {
  auto rv = ((QSystemSemaphore*)this_)->key();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:80
// [1] bool acquire()
extern "C" Q_DECL_EXPORT
bool C_ZN16QSystemSemaphore7acquireEv(void *this_) {
  return (bool)((QSystemSemaphore*)this_)->acquire();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:81
// [1] bool release(int)
extern "C" Q_DECL_EXPORT
bool C_ZN16QSystemSemaphore7releaseEi(void *this_, int n) {
  return (bool)((QSystemSemaphore*)this_)->release(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:83
// [4] QSystemSemaphore::SystemSemaphoreError error()
extern "C" Q_DECL_EXPORT
QSystemSemaphore::SystemSemaphoreError C_ZNK16QSystemSemaphore5errorEv(void *this_) {
  return (QSystemSemaphore::SystemSemaphoreError)((QSystemSemaphore*)this_)->error();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:84
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QSystemSemaphore11errorStringEv(void *this_) {
  auto rv = ((QSystemSemaphore*)this_)->errorString();
return new QString(rv);
}

//  main block end
