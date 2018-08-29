//  header block begin
// /usr/include/qt/QtCore/qmutex.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmutex.h>
#include <QtCore>
#include "callback_inherit.h"

// QMutexLocker is pure virtual: false
// QMutexLocker has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMutexLocker_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMutexLocker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMutexLocker_t qt_meta_stringdata_MyQMutexLocker = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQMutexLocker"
  },
  "MyQMutexLocker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMutexLocker[] = {
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
class Q_DECL_EXPORT MyQMutexLocker : public QMutexLocker {
public:
  virtual ~MyQMutexLocker() {}
// void QMutexLocker(QBasicMutex *)
MyQMutexLocker(QBasicMutex * m) : QMutexLocker(m) {}
};
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:199
// [-2] void QMutexLocker(QBasicMutex *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QMutexLockerC2EP11QBasicMutex(QBasicMutex * m) {
  return  new QMutexLocker(m);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:213
// [-2] void ~QMutexLocker()
extern "C" Q_DECL_EXPORT
void C_ZN12QMutexLockerD2Ev(void *this_) {
  delete (QMutexLocker*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:215
// [-2] void unlock()
extern "C" Q_DECL_EXPORT
void C_ZN12QMutexLocker6unlockEv(void *this_) {
  ((QMutexLocker*)this_)->unlock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:223
// [-2] void relock()
extern "C" Q_DECL_EXPORT
void C_ZN12QMutexLocker6relockEv(void *this_) {
  ((QMutexLocker*)this_)->relock();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:238
// [8] QMutex * mutex()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QMutexLocker5mutexEv(void *this_) {
  return (void*)((QMutexLocker*)this_)->mutex();
}

//  main block end
