//  header block begin

// /usr/include/qt/QtCore/qreadwritelock.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qreadwritelock.h>
#include <QtCore>
#include "callback_inherit.h"

// QReadWriteLock is pure virtual: false
// QReadWriteLock has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQReadWriteLock_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQReadWriteLock_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQReadWriteLock_t qt_meta_stringdata_MyQReadWriteLock = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQReadWriteLock"
  },
  "MyQReadWriteLock"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQReadWriteLock[] = {
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
class Q_DECL_EXPORT MyQReadWriteLock : public QReadWriteLock {
public:
  virtual ~MyQReadWriteLock() {}
// void QReadWriteLock(QReadWriteLock::RecursionMode)
MyQReadWriteLock(QReadWriteLock::RecursionMode recursionMode) : QReadWriteLock(recursionMode) {}
};

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qreadwritelock.h:57
// [-2] void QReadWriteLock(QReadWriteLock::RecursionMode)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void* C_ZN14QReadWriteLockC2ENS_13RecursionModeE(QReadWriteLock::RecursionMode recursionMode) {
  return  new QReadWriteLock(recursionMode);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:58
// [-2] void ~QReadWriteLock()
extern "C" Q_DECL_EXPORT
void C_ZN14QReadWriteLockD2Ev(void *this_) {
  delete (QReadWriteLock*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:60
// [-2] void lockForRead()
extern "C" Q_DECL_EXPORT
void C_ZN14QReadWriteLock11lockForReadEv(void *this_) {
  ((QReadWriteLock*)this_)->lockForRead();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:61
// [1] bool tryLockForRead()
extern "C" Q_DECL_EXPORT
bool C_ZN14QReadWriteLock14tryLockForReadEv(void *this_) {
  return (bool)((QReadWriteLock*)this_)->tryLockForRead();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:62
// [1] bool tryLockForRead(int)
extern "C" Q_DECL_EXPORT
bool C_ZN14QReadWriteLock14tryLockForReadEi(void *this_, int timeout) {
  return (bool)((QReadWriteLock*)this_)->tryLockForRead(timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:64
// [-2] void lockForWrite()
extern "C" Q_DECL_EXPORT
void C_ZN14QReadWriteLock12lockForWriteEv(void *this_) {
  ((QReadWriteLock*)this_)->lockForWrite();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:65
// [1] bool tryLockForWrite()
extern "C" Q_DECL_EXPORT
bool C_ZN14QReadWriteLock15tryLockForWriteEv(void *this_) {
  return (bool)((QReadWriteLock*)this_)->tryLockForWrite();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:66
// [1] bool tryLockForWrite(int)
extern "C" Q_DECL_EXPORT
bool C_ZN14QReadWriteLock15tryLockForWriteEi(void *this_, int timeout) {
  return (bool)((QReadWriteLock*)this_)->tryLockForWrite(timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:68
// [-2] void unlock()
extern "C" Q_DECL_EXPORT
void C_ZN14QReadWriteLock6unlockEv(void *this_) {
  ((QReadWriteLock*)this_)->unlock();
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
