//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(thread)
// /usr/include/qt/QtCore/qsemaphore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsemaphore.h>
#include <QtCore>
#include "callback_inherit.h"

// QSemaphore is pure virtual: false
// QSemaphore has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSemaphore_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSemaphore_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSemaphore_t qt_meta_stringdata_MyQSemaphore = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQSemaphore"
  },
  "MyQSemaphore"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSemaphore[] = {
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
class Q_DECL_EXPORT MyQSemaphore : public QSemaphore {
public:
  virtual ~MyQSemaphore() {}
// void QSemaphore(int)
MyQSemaphore(int n) : QSemaphore(n) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:54
// [-2] void QSemaphore(int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSemaphoreC2Ei(int n) {
  return  new QSemaphore(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:55
// [-2] void ~QSemaphore()
extern "C" Q_DECL_EXPORT
void C_ZN10QSemaphoreD2Ev(void *this_) {
  delete (QSemaphore*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:57
// [-2] void acquire(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QSemaphore7acquireEi(void *this_, int n) {
  ((QSemaphore*)this_)->acquire(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:58
// [1] bool tryAcquire(int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSemaphore10tryAcquireEi(void *this_, int n) {
  return (bool)((QSemaphore*)this_)->tryAcquire(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:59
// [1] bool tryAcquire(int, int)
extern "C" Q_DECL_EXPORT
bool C_ZN10QSemaphore10tryAcquireEii(void *this_, int n, int timeout) {
  return (bool)((QSemaphore*)this_)->tryAcquire(n, timeout);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:61
// [-2] void release(int)
extern "C" Q_DECL_EXPORT
void C_ZN10QSemaphore7releaseEi(void *this_, int n) {
  ((QSemaphore*)this_)->release(n);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:63
// [4] int available()
extern "C" Q_DECL_EXPORT
int C_ZNK10QSemaphore9availableEv(void *this_) {
  return (int)((QSemaphore*)this_)->available();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(thread)
#endif // #ifndef QT_MINIMAL
//  footer block end
