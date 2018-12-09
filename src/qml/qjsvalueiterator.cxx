//  header block begin

// /usr/include/qt/QtQml/qjsvalueiterator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsvalueiterator.h>
#include <QtQml>
#include "callback_inherit.h"

// QJSValueIterator is pure virtual: false
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

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalueiterator.h:56
// [-2] void QJSValueIterator(const QJSValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QJSValueIteratorC2ERK8QJSValue(QJSValue* value) {
  return  new QJSValueIterator(*value);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalueiterator.h:57
// [-2] void ~QJSValueIterator()
extern "C" Q_DECL_EXPORT
void C_ZN16QJSValueIteratorD2Ev(void *this_) {
  delete (QJSValueIterator*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalueiterator.h:59
// [1] bool hasNext()
extern "C" Q_DECL_EXPORT
bool C_ZNK16QJSValueIterator7hasNextEv(void *this_) {
  return (bool)((QJSValueIterator*)this_)->hasNext();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalueiterator.h:60
// [1] bool next()
extern "C" Q_DECL_EXPORT
bool C_ZN16QJSValueIterator4nextEv(void *this_) {
  return (bool)((QJSValueIterator*)this_)->next();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalueiterator.h:62
// [8] QString name()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QJSValueIterator4nameEv(void *this_) {
  auto rv = ((QJSValueIterator*)this_)->name();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalueiterator.h:64
// [8] QJSValue value()
extern "C" Q_DECL_EXPORT
void* C_ZNK16QJSValueIterator5valueEv(void *this_) {
  auto rv = ((QJSValueIterator*)this_)->value();
return new QJSValue(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalueiterator.h:65
// [8] QJSValueIterator & operator=(QJSValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QJSValueIteratoraSER8QJSValue(void *this_, QJSValue* value) {
  auto& rv = ((QJSValueIterator*)this_)->operator=(*value);
return &rv;
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
