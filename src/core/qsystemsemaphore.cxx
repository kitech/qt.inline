//  header block begin

// /usr/include/qt/QtCore/qsystemsemaphore.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsystemsemaphore.h>
#include <QtCore>
#include "callback_inherit.h"

// QSystemSemaphore is pure virtual: false false
// QSystemSemaphore has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSystemSemaphore_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSystemSemaphore_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSystemSemaphore_t qt_meta_stringdata_MyQSystemSemaphore = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQSystemSemaphore"
  },
  "MyQSystemSemaphore"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSystemSemaphore[] = {
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
class Q_DECL_EXPORT MyQSystemSemaphore : public QSystemSemaphore {
public:
  virtual ~MyQSystemSemaphore() {}
// void QSystemSemaphore(const QString &, int, QSystemSemaphore::AccessMode)
MyQSystemSemaphore(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode) : QSystemSemaphore(key, initialValue, mode) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsystemsemaphore(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qsystemsemaphore.h:74
// [-2] void QSystemSemaphore(const QString &, int, QSystemSemaphore::AccessMode) 
// (11)qm694823264 (51)_ZN16QSystemSemaphoreC2ERK7QStringiNS_10AccessModeE
/*void* qm694823264(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode)*/{
  const QString & key = *(const QString *)this_; int initialValue = *(int*)this_; QSystemSemaphore::AccessMode mode = *(QSystemSemaphore::AccessMode*)this_;
  this_ =  new QSystemSemaphore(key, initialValue, mode);
  this_ =  new MyQSystemSemaphore(key, initialValue, mode);
}


/*void C_ZN16QSystemSemaphoreD2Ev(void *this_)*/ {
  delete (QSystemSemaphore*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsystemsemaphore
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
