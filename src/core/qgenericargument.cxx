//  header block begin

// /usr/include/qt/QtCore/qobjectdefs.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobjectdefs.h>
#include <QtCore>
#include "callback_inherit.h"

// QGenericArgument is pure virtual: false false
// QGenericArgument has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGenericArgument_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGenericArgument_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGenericArgument_t qt_meta_stringdata_MyQGenericArgument = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQGenericArgument"
  },
  "MyQGenericArgument"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGenericArgument[] = {
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
class Q_DECL_EXPORT MyQGenericArgument : public QGenericArgument {
public:
  virtual ~MyQGenericArgument() {}
// void QGenericArgument(const char *, const void *)
MyQGenericArgument(const char * aName, const void * aData) : QGenericArgument(aName, aData) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgenericargument(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:292
// [-2] void QGenericArgument(const char *, const void *) 
// (12)qm1379378773 (30)_ZN16QGenericArgumentC2EPKcPKv
/*void* qm1379378773(const char * aName, const void * aData)*/{
  const char * aName = *(const char **)this_; const void * aData = *(const void **)this_;
  this_ =  new QGenericArgument(aName, aData);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:294
// [8] void * data() const
// (11)qm976349730 (29)_ZNK16QGenericArgument4dataEv
//static
/*void qm976349730()*/ {
  ;
  (void) ((QGenericArgument*)this_)->data();
   auto xptr = (void * (QGenericArgument::*)() const ) &QGenericArgument::data;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:295
// [8] const char * name() const
// (12)qm2981263757 (29)_ZNK16QGenericArgument4nameEv
//static
/*void qm2981263757()*/ {
  ;
  (void) ((QGenericArgument*)this_)->name();
   auto xptr = (const char * (QGenericArgument::*)() const ) &QGenericArgument::name;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QGenericArgumentD2Ev(void *this_)*/ {
  delete (QGenericArgument*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgenericargument
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
