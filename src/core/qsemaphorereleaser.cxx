//  header block begin

// since 0x050a00
// /usr/include/qt/QtCore/qsemaphore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsemaphore.h>
#include <QtCore>
#include "callback_inherit.h"

// QSemaphoreReleaser is pure virtual: false
// QSemaphoreReleaser has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSemaphoreReleaser_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSemaphoreReleaser_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSemaphoreReleaser_t qt_meta_stringdata_MyQSemaphoreReleaser = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQSemaphoreReleaser"
  },
  "MyQSemaphoreReleaser"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSemaphoreReleaser[] = {
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
class Q_DECL_EXPORT MyQSemaphoreReleaser : public QSemaphoreReleaser {
public:
  virtual ~MyQSemaphoreReleaser() {}
// void QSemaphoreReleaser()
MyQSemaphoreReleaser() : QSemaphoreReleaser() {}
// void QSemaphoreReleaser(QSemaphore &, int)
MyQSemaphoreReleaser(QSemaphore & sem, int n) : QSemaphoreReleaser(sem, n) {}
// void QSemaphoreReleaser(QSemaphore *, int)
MyQSemaphoreReleaser(QSemaphore * sem, int n) : QSemaphoreReleaser(sem, n) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:75
// [-2] void QSemaphoreReleaser()
extern "C" Q_DECL_EXPORT
void* C_ZN18QSemaphoreReleaserC2Ev() {
  return  new QSemaphoreReleaser();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:76
// [-2] void QSemaphoreReleaser(QSemaphore &, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSemaphoreReleaserC2ER10QSemaphorei(QSemaphore* sem, int n) {
  return  new QSemaphoreReleaser(*sem, n);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:78
// [-2] void QSemaphoreReleaser(QSemaphore *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN18QSemaphoreReleaserC2EP10QSemaphorei(QSemaphore * sem, int n) {
  return  new QSemaphoreReleaser(sem, n);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:86
// [-2] void ~QSemaphoreReleaser()
extern "C" Q_DECL_EXPORT
void C_ZN18QSemaphoreReleaserD2Ev(void *this_) {
  delete (QSemaphoreReleaser*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:92
// [-2] void swap(QSemaphoreReleaser &)
extern "C" Q_DECL_EXPORT
void C_ZN18QSemaphoreReleaser4swapERS_(void *this_, QSemaphoreReleaser* other) {
  ((QSemaphoreReleaser*)this_)->swap(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:98
// [8] QSemaphore * semaphore()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSemaphoreReleaser9semaphoreEv(void *this_) {
  return (void*)((QSemaphoreReleaser*)this_)->semaphore();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsemaphore.h:101
// [8] QSemaphore * cancel()
extern "C" Q_DECL_EXPORT
void* C_ZN18QSemaphoreReleaser6cancelEv(void *this_) {
  return (void*)((QSemaphoreReleaser*)this_)->cancel();
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
