//  header block begin

// /usr/include/qt/QtCore/qmutex.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmutex.h>
#include <QtCore>
#include "callback_inherit.h"

// QRecursiveMutex is pure virtual: false false
// QRecursiveMutex has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRecursiveMutex_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRecursiveMutex_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRecursiveMutex_t qt_meta_stringdata_MyQRecursiveMutex = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQRecursiveMutex"
  },
  "MyQRecursiveMutex"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRecursiveMutex[] = {
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
class Q_DECL_EXPORT MyQRecursiveMutex : public QRecursiveMutex {
public:
  virtual ~MyQRecursiveMutex() {}
// void QRecursiveMutex()
MyQRecursiveMutex() : QRecursiveMutex() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qrecursivemutex(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmutex.h:209
// [-2] void QRecursiveMutex() 
// (12)qm2574190847 (24)_ZN15QRecursiveMutexC2Ev
/*void* qm2574190847()*/{
  ;
  this_ =  new QRecursiveMutex();
  this_ =  new MyQRecursiveMutex();
}


/*void C_ZN15QRecursiveMutexD2Ev(void *this_)*/ {
  delete (QRecursiveMutex*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qrecursivemutex
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
