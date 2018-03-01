//  header block begin
// /usr/include/qt/QtQml/qjsvalueiterator.h
#ifndef protected
#define protected public
#endif
#include <qjsvalueiterator.h>
#include <QtQml>
#include "callback_inherit.h"

// QJSValueIterator is pure virtual: false
// QJSValueIterator has virtual projected: false
//  header block end

//  main block begin

class MyQJSValueIterator : public QJSValueIterator {
public:
  virtual ~MyQJSValueIterator() {}
// void QJSValueIterator(const class QJSValue &)
MyQJSValueIterator(const QJSValue & value) : QJSValueIterator(value) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQml/qjsvalueiterator.h:56
// [-2] void QJSValueIterator(const class QJSValue &)
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
// [8] QJSValueIterator & operator=(class QJSValue &)
extern "C" Q_DECL_EXPORT
void* C_ZN16QJSValueIteratoraSER8QJSValue(void *this_, QJSValue* value) {
  auto& rv = ((QJSValueIterator*)this_)->operator=(*value);
return &rv;
}

//  main block end
