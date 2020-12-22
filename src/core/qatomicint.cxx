//  header block begin

// /usr/include/qt/QtCore/qatomic.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qatomic.h>
#include <QtCore>
#include "callback_inherit.h"

// QAtomicInt is pure virtual: false false
// QAtomicInt has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQAtomicInt_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAtomicInt_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAtomicInt_t qt_meta_stringdata_MyQAtomicInt = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQAtomicInt"
  },
  "MyQAtomicInt"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAtomicInt[] = {
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
class Q_DECL_EXPORT MyQAtomicInt : public QAtomicInt {
public:
  virtual ~MyQAtomicInt() {}
// void QAtomicInt(int)
MyQAtomicInt(int value) : QAtomicInt(value) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qatomicint(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qatomic.h:168
// [-2] void QAtomicInt(int) 
// (12)qm2182123644 (19)_ZN10QAtomicIntC2Ei
/*void* qm2182123644(int value)*/{
  int value = *(int*)this_;
  this_ =  new QAtomicInt(value);
  this_ =  new MyQAtomicInt(value);
}


/*void C_ZN10QAtomicIntD2Ev(void *this_)*/ {
  delete (QAtomicInt*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qatomicint
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
