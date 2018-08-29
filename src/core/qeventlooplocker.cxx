//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qeventloop.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qeventloop.h>
#include <QtCore>
#include "callback_inherit.h"

// QEventLoopLocker is pure virtual: false
// QEventLoopLocker has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQEventLoopLocker_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQEventLoopLocker_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQEventLoopLocker_t qt_meta_stringdata_MyQEventLoopLocker = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQEventLoopLocker"
  },
  "MyQEventLoopLocker"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQEventLoopLocker[] = {
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
class Q_DECL_EXPORT MyQEventLoopLocker : public QEventLoopLocker {
public:
  virtual ~MyQEventLoopLocker() {}
// void QEventLoopLocker()
MyQEventLoopLocker() : QEventLoopLocker() {}
// void QEventLoopLocker(QEventLoop *)
MyQEventLoopLocker(QEventLoop * loop) : QEventLoopLocker(loop) {}
// void QEventLoopLocker(QThread *)
MyQEventLoopLocker(QThread * thread) : QEventLoopLocker(thread) {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:93
// [-2] void QEventLoopLocker()
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventLoopLockerC2Ev() {
  return  new QEventLoopLocker();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:94
// [-2] void QEventLoopLocker(QEventLoop *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventLoopLockerC2EP10QEventLoop(QEventLoop * loop) {
  return  new QEventLoopLocker(loop);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:95
// [-2] void QEventLoopLocker(QThread *)
extern "C" Q_DECL_EXPORT
void* C_ZN16QEventLoopLockerC2EP7QThread(QThread * thread) {
  return  new QEventLoopLocker(thread);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qeventloop.h:96
// [-2] void ~QEventLoopLocker()
extern "C" Q_DECL_EXPORT
void C_ZN16QEventLoopLockerD2Ev(void *this_) {
  delete (QEventLoopLocker*)(this_);
}
//  main block end
