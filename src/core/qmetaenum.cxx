//  header block begin

// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaEnum is pure virtual: false false
// QMetaEnum has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMetaEnum_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMetaEnum_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMetaEnum_t qt_meta_stringdata_MyQMetaEnum = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQMetaEnum"
  },
  "MyQMetaEnum"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMetaEnum[] = {
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
class Q_DECL_EXPORT MyQMetaEnum : public QMetaEnum {
public:
  virtual ~MyQMetaEnum() {}
// void QMetaEnum()
MyQMetaEnum() : QMetaEnum() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmetaenum(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:208
// [-2] void QMetaEnum() 
// (12)qm2934848283 (17)_ZN9QMetaEnumC2Ev
/*void* qm2934848283()*/{
  ;
  this_ =  new QMetaEnum();
  this_ =  new MyQMetaEnum();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:226
// [8] const QMetaObject * enclosingMetaObject() const
// (12)qm3579301467 (37)_ZNK9QMetaEnum19enclosingMetaObjectEv
//static
/*void qm3579301467()*/ {
  ;
  (void) ((QMetaEnum*)this_)->enclosingMetaObject();
   auto xptr = (const QMetaObject * (QMetaEnum::*)() const ) &QMetaEnum::enclosingMetaObject;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:228
// [1] bool isValid() const
// (12)qm1119191723 (24)_ZNK9QMetaEnum7isValidEv
//static
/*void qm1119191723()*/ {
  ;
  (void) ((QMetaEnum*)this_)->isValid();
   auto xptr = (bool (QMetaEnum::*)() const ) &QMetaEnum::isValid;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QMetaEnumD2Ev(void *this_)*/ {
  delete (QMetaEnum*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmetaenum
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
