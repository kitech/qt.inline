//  header block begin
// /usr/include/qt/QtCore/qmutex.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmutex.h>
#include <QtCore>
#include "callback_inherit.h"

// QMutex is pure virtual: false
// QMutex has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQMutex_t {
  QByteArrayData data[1];
  char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMutex_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMutex_t qt_meta_stringdata_MyQMutex = {
   {
  QT_MOC_LITERAL(0, 0, 8), // "MyQMutex"
  },
  "MyQMutex"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMutex[] = {
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
class Q_DECL_EXPORT MyQMutex : public QMutex {
public:
  virtual ~MyQMutex() {}
// void QMutex(QMutex::RecursionMode)
MyQMutex(QMutex::RecursionMode mode) : QMutex(mode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:130
// [-2] void QMutex(QMutex::RecursionMode)
extern "C" Q_DECL_EXPORT
void* C_ZN6QMutexC2ENS_13RecursionModeE(QMutex::RecursionMode mode) {
  return  new QMutex(mode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:131
// [-2] void ~QMutex()
extern "C" Q_DECL_EXPORT
void C_ZN6QMutexD2Ev(void *this_) {
  delete (QMutex*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:134
// [-2] void lock()
extern "C" Q_DECL_EXPORT
void C_ZN6QMutex4lockEv(void *this_) {
  ((QMutex*)this_)->lock();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:135
// [1] bool tryLock(int)
extern "C" Q_DECL_EXPORT
bool C_ZN6QMutex7tryLockEi(void *this_, int timeout) {
  return (bool)((QMutex*)this_)->tryLock(timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:137
// [-2] void unlock()
extern "C" Q_DECL_EXPORT
void C_ZN6QMutex6unlockEv(void *this_) {
  ((QMutex*)this_)->unlock();
}

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qmutex.h:140
// [1] bool try_lock()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
bool C_ZN6QMutex8try_lockEv(void *this_) {
  return (bool)((QMutex*)this_)->try_lock();
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// since 5.7
// /usr/include/qt/QtCore/qmutex.h:161
// [1] bool isRecursive()
#if QT_VERSION >= 0x050700
extern "C" Q_DECL_EXPORT
bool C_ZNK6QMutex11isRecursiveEv(void *this_) {
  return (bool)((QMutex*)this_)->isRecursive();
}
#endif // QT_VERSION >= 0x050700

//  main block end
