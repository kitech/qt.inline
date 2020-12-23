//  header block begin

// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValueRefPtr is pure virtual: false false
// QJsonValueRefPtr has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsonvaluerefptr(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:224
// [-2] void QJsonValueRefPtr(QJsonArray *, int) 
// (11)qm525575146 (38)_ZN16QJsonValueRefPtrC2EP10QJsonArrayi
/*void* qm525575146(QJsonArray * array, int idx)*/{
  QJsonArray * array = *(QJsonArray **)this_; int idx = *(int*)this_;
  this_ =  new QJsonValueRefPtr(array, idx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:226
// [-2] void QJsonValueRefPtr(QJsonObject *, int) 
// (11)qm435998553 (39)_ZN16QJsonValueRefPtrC2EP11QJsonObjecti
/*void* qm435998553(QJsonObject * object, int idx)*/{
  QJsonObject * object = *(QJsonObject **)this_; int idx = *(int*)this_;
  this_ =  new QJsonValueRefPtr(object, idx);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:229
// [16] QJsonValueRef & operator*() 
// (12)qm3062777353 (25)_ZN16QJsonValueRefPtrdeEv
//static
/*void qm3062777353()*/ {
  ;
  (void) ((QJsonValueRefPtr*)this_)->operator*();
  // auto xptr = (QJsonValueRef & (QJsonValueRefPtr::*)() ) &QJsonValueRefPtr::operator*;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:230
// [8] QJsonValueRef * operator->() 
// (12)qm1947291526 (25)_ZN16QJsonValueRefPtrptEv
//static
/*void qm1947291526()*/ {
  ;
  (void) ((QJsonValueRefPtr*)this_)->operator->();
  // auto xptr = (QJsonValueRef * (QJsonValueRefPtr::*)() ) &QJsonValueRefPtr::operator->;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QJsonValueRefPtrD2Ev(void *this_)*/ {
  delete (QJsonValueRefPtr*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsonvaluerefptr
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
