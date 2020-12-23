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
