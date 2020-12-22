//  header block begin

// /usr/include/qt/QtCore/qmetaobject.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmetaobject.h>
#include <QtCore>
#include "callback_inherit.h"

// QMetaClassInfo is pure virtual: false false
// QMetaClassInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMetaClassInfo_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMetaClassInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMetaClassInfo_t qt_meta_stringdata_MyQMetaClassInfo = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQMetaClassInfo"
  },
  "MyQMetaClassInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMetaClassInfo[] = {
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
class Q_DECL_EXPORT MyQMetaClassInfo : public QMetaClassInfo {
public:
  virtual ~MyQMetaClassInfo() {}
// void QMetaClassInfo()
MyQMetaClassInfo() : QMetaClassInfo() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmetaclassinfo(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:308
// [-2] void QMetaClassInfo() 
// (12)qm2695292227 (23)_ZN14QMetaClassInfoC2Ev
/*void* qm2695292227()*/{
  ;
  this_ =  new QMetaClassInfo();
  this_ =  new MyQMetaClassInfo();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmetaobject.h:311
// [8] const QMetaObject * enclosingMetaObject() const
// (11)qm575665439 (43)_ZNK14QMetaClassInfo19enclosingMetaObjectEv
//static
/*void qm575665439()*/ {
  ;
  (void) ((QMetaClassInfo*)this_)->enclosingMetaObject();
   auto xptr = (const QMetaObject * (QMetaClassInfo::*)() const ) &QMetaClassInfo::enclosingMetaObject;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN14QMetaClassInfoD2Ev(void *this_)*/ {
  delete (QMetaClassInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmetaclassinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
