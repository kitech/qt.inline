//  header block begin

// /usr/include/qt/QtQml/qjsvalueiterator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsvalueiterator.h>
#include <QtQml>
#include "callback_inherit.h"

// QJSValueIterator is pure virtual: false false
// QJSValueIterator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJSValueIterator_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJSValueIterator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJSValueIterator_t qt_meta_stringdata_MyQJSValueIterator = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQJSValueIterator"
  },
  "MyQJSValueIterator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJSValueIterator[] = {
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
class Q_DECL_EXPORT MyQJSValueIterator : public QJSValueIterator {
public:
  virtual ~MyQJSValueIterator() {}
// void QJSValueIterator(const QJSValue &)
MyQJSValueIterator(const QJSValue & value) : QJSValueIterator(value) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsvalueiterator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalueiterator.h:56
// [-2] void QJSValueIterator(const QJSValue &) 
// (11)qm958807065 (35)_ZN16QJSValueIteratorC2ERK8QJSValue
/*void* qm958807065(const QJSValue & value)*/{
  const QJSValue & value = *(const QJSValue *)this_;
  this_ =  new QJSValueIterator(value);
  this_ =  new MyQJSValueIterator(value);
}


/*void C_ZN16QJSValueIteratorD2Ev(void *this_)*/ {
  delete (QJSValueIterator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsvalueiterator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
