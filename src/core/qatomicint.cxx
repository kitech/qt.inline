//  header block begin
// since 0x040400
// /usr/include/qt/QtCore/qatomic.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qatomic.h>
#include <QtCore>
#include "callback_inherit.h"

// QAtomicInt is pure virtual: false
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
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qatomic.h:162
// [-2] void QAtomicInt(int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QAtomicIntC2Ei(int value) {
  return  new QAtomicInt(value);
}


extern "C" Q_DECL_EXPORT
void C_ZN10QAtomicIntD2Ev(void *this_) {
  delete (QAtomicInt*)(this_);
}
//  main block end
