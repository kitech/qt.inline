//  header block begin

// /usr/include/qt/QtCore/qjsonvalue.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qjsonvalue.h>
#include <QtCore>
#include "callback_inherit.h"

// QJsonValuePtr is pure virtual: false false
// QJsonValuePtr has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQJsonValuePtr_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQJsonValuePtr_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQJsonValuePtr_t qt_meta_stringdata_MyQJsonValuePtr = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQJsonValuePtr"
  },
  "MyQJsonValuePtr"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQJsonValuePtr[] = {
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
class Q_DECL_EXPORT MyQJsonValuePtr : public QJsonValuePtr {
public:
  virtual ~MyQJsonValuePtr() {}
// void QJsonValuePtr(const QJsonValue &)
MyQJsonValuePtr(const QJsonValue & val) : QJsonValuePtr(val) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qjsonvalueptr(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:213
// [-2] void QJsonValuePtr(const QJsonValue &) 
// (12)qm2927635405 (35)_ZN13QJsonValuePtrC2ERK10QJsonValue
/*void* qm2927635405(const QJsonValue & val)*/{
  const QJsonValue & val = *(const QJsonValue *)this_;
  this_ =  new QJsonValuePtr(val);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:216
// [24] QJsonValue & operator*() 
// (12)qm1170458371 (22)_ZN13QJsonValuePtrdeEv
//static
/*void qm1170458371()*/ {
  ;
  (void) ((QJsonValuePtr*)this_)->operator*();
  // auto xptr = (QJsonValue & (QJsonValuePtr::*)() ) &QJsonValuePtr::operator*;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qjsonvalue.h:217
// [8] QJsonValue * operator->() 
// (12)qm2271006348 (22)_ZN13QJsonValuePtrptEv
//static
/*void qm2271006348()*/ {
  ;
  (void) ((QJsonValuePtr*)this_)->operator->();
  // auto xptr = (QJsonValue * (QJsonValuePtr::*)() ) &QJsonValuePtr::operator->;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN13QJsonValuePtrD2Ev(void *this_)*/ {
  delete (QJsonValuePtr*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qjsonvalueptr
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
