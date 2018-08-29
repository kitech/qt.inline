//  header block begin
// /usr/include/qt/QtCore/qreadwritelock.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qreadwritelock.h>
#include <QtCore>
#include "callback_inherit.h"

// QWriteLocker is pure virtual: false
// QWriteLocker has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWriteLocker_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWriteLocker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWriteLocker_t qt_meta_stringdata_MyQWriteLocker = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQWriteLocker"
  },
  "MyQWriteLocker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWriteLocker[] = {
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
class Q_DECL_EXPORT MyQWriteLocker : public QWriteLocker {
public:
  virtual ~MyQWriteLocker() {}
// void QWriteLocker(QReadWriteLock *)
MyQWriteLocker(QReadWriteLock * readWriteLock) : QWriteLocker(readWriteLock) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:131
// [-2] void QWriteLocker(QReadWriteLock *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QWriteLockerC2EP14QReadWriteLock(QReadWriteLock * readWriteLock) {
  return  new QWriteLocker(readWriteLock);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:133
// [-2] void ~QWriteLocker()
extern "C" Q_DECL_EXPORT
void C_ZN12QWriteLockerD2Ev(void *this_) {
  delete (QWriteLocker*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:136
// [-2] void unlock()
extern "C" Q_DECL_EXPORT
void C_ZN12QWriteLocker6unlockEv(void *this_) {
  ((QWriteLocker*)this_)->unlock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:146
// [-2] void relock()
extern "C" Q_DECL_EXPORT
void C_ZN12QWriteLocker6relockEv(void *this_) {
  ((QWriteLocker*)this_)->relock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:156
// [8] QReadWriteLock * readWriteLock()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QWriteLocker13readWriteLockEv(void *this_) {
  return (void*)((QWriteLocker*)this_)->readWriteLock();
}

//  main block end
