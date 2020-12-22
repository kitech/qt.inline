//  header block begin

// /usr/include/qt/QtCore/qreadwritelock.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qreadwritelock.h>
#include <QtCore>
#include "callback_inherit.h"

// QReadWriteLock is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qreadwritelock(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qreadwritelock.h:57
// [-2] void QReadWriteLock(QReadWriteLock::RecursionMode) 
// (12)qm1512914593 (41)_ZN14QReadWriteLockC2ENS_13RecursionModeE
/*void* qm1512914593(QReadWriteLock::RecursionMode recursionMode)*/{
  QReadWriteLock::RecursionMode recursionMode = *(QReadWriteLock::RecursionMode*)this_;
  this_ =  new QReadWriteLock(recursionMode);
  this_ =  new MyQReadWriteLock(recursionMode);
}


/*void C_ZN14QReadWriteLockD2Ev(void *this_)*/ {
  delete (QReadWriteLock*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qreadwritelock
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
