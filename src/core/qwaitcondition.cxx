//  header block begin
// /usr/include/qt/QtCore/qwaitcondition.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwaitcondition.h>
#include <QtCore>
#include "callback_inherit.h"

// QWaitCondition is pure virtual: false
// QWaitCondition has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQWaitCondition_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWaitCondition_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWaitCondition_t qt_meta_stringdata_MyQWaitCondition = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQWaitCondition"
  },
  "MyQWaitCondition"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWaitCondition[] = {
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
class Q_DECL_EXPORT MyQWaitCondition : public QWaitCondition {
public:
  virtual ~MyQWaitCondition() {}
// void QWaitCondition()
MyQWaitCondition() : QWaitCondition() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:59
// [-2] void QWaitCondition()
extern "C" Q_DECL_EXPORT
void* C_ZN14QWaitConditionC2Ev() {
  return  new QWaitCondition();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:60
// [-2] void ~QWaitCondition()
extern "C" Q_DECL_EXPORT
void C_ZN14QWaitConditionD2Ev(void *this_) {
  delete (QWaitCondition*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:62
// [1] bool wait(QMutex *, unsigned long)
extern "C" Q_DECL_EXPORT
bool C_ZN14QWaitCondition4waitEP6QMutexm(void *this_, QMutex * lockedMutex, unsigned long time) {
  return (bool)((QWaitCondition*)this_)->wait(lockedMutex, time);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qwaitcondition.h:63
// [1] bool wait(QReadWriteLock *, unsigned long)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
bool C_ZN14QWaitCondition4waitEP14QReadWriteLockm(void *this_, QReadWriteLock * lockedReadWriteLock, unsigned long time) {
  return (bool)((QWaitCondition*)this_)->wait(lockedReadWriteLock, time);
}
#endif // QT_VERSION >= 0x040400

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:65
// [-2] void wakeOne()
extern "C" Q_DECL_EXPORT
void C_ZN14QWaitCondition7wakeOneEv(void *this_) {
  ((QWaitCondition*)this_)->wakeOne();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qwaitcondition.h:66
// [-2] void wakeAll()
extern "C" Q_DECL_EXPORT
void C_ZN14QWaitCondition7wakeAllEv(void *this_) {
  ((QWaitCondition*)this_)->wakeAll();
}

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qwaitcondition.h:68
// [-2] void notify_one()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN14QWaitCondition10notify_oneEv(void *this_) {
  ((QWaitCondition*)this_)->notify_one();
}
#endif // QT_VERSION >= 0x050800

// Public inline Visibility=Default Availability=Available
// since 5.8
// /usr/include/qt/QtCore/qwaitcondition.h:69
// [-2] void notify_all()
#if QT_VERSION >= 0x050800
extern "C" Q_DECL_EXPORT
void C_ZN14QWaitCondition10notify_allEv(void *this_) {
  ((QWaitCondition*)this_)->notify_all();
}
#endif // QT_VERSION >= 0x050800

//  main block end
