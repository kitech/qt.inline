//  header block begin
// /usr/include/qt/QtCore/qreadwritelock.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qreadwritelock.h>
#include <QtCore>
#include "callback_inherit.h"

// QReadLocker is pure virtual: false
// QReadLocker has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQReadLocker_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQReadLocker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQReadLocker_t qt_meta_stringdata_MyQReadLocker = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQReadLocker"
  },
  "MyQReadLocker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQReadLocker[] = {
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
class Q_DECL_EXPORT MyQReadLocker : public QReadLocker {
public:
  virtual ~MyQReadLocker() {}
// void QReadLocker(QReadWriteLock *)
MyQReadLocker(QReadWriteLock * readWriteLock) : QReadLocker(readWriteLock) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:87
// [-2] void QReadLocker(QReadWriteLock *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QReadLockerC2EP14QReadWriteLock(QReadWriteLock * readWriteLock) {
  return  new QReadLocker(readWriteLock);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:89
// [-2] void ~QReadLocker()
extern "C" Q_DECL_EXPORT
void C_ZN11QReadLockerD2Ev(void *this_) {
  delete (QReadLocker*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:92
// [-2] void unlock()
extern "C" Q_DECL_EXPORT
void C_ZN11QReadLocker6unlockEv(void *this_) {
  ((QReadLocker*)this_)->unlock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:102
// [-2] void relock()
extern "C" Q_DECL_EXPORT
void C_ZN11QReadLocker6relockEv(void *this_) {
  ((QReadLocker*)this_)->relock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:112
// [8] QReadWriteLock * readWriteLock()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QReadLocker13readWriteLockEv(void *this_) {
  return (void*)((QReadLocker*)this_)->readWriteLock();
}

//  main block end
