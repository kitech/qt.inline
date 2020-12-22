//  header block begin

// /usr/include/qt/QtCore/qobjectdefs.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qobjectdefs.h>
#include <QtCore>
#include "callback_inherit.h"

// QGenericReturnArgument is pure virtual: false false
// QGenericReturnArgument has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQGenericReturnArgument_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQGenericReturnArgument_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQGenericReturnArgument_t qt_meta_stringdata_MyQGenericReturnArgument = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQGenericReturnArgument"
  },
  "MyQGenericReturnArgument"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQGenericReturnArgument[] = {
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
class Q_DECL_EXPORT MyQGenericReturnArgument : public QGenericReturnArgument {
public:
  virtual ~MyQGenericReturnArgument() {}
// void QGenericReturnArgument(const char *, void *)
MyQGenericReturnArgument(const char * aName, void * aData) : QGenericReturnArgument(aName, aData) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qgenericreturnargument(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qobjectdefs.h:305
// [-2] void QGenericReturnArgument(const char *, void *) 
// (11)qm685887590 (35)_ZN22QGenericReturnArgumentC2EPKcPv
/*void* qm685887590(const char * aName, void * aData)*/{
  const char * aName = *(const char **)this_; void * aData = *(void **)this_;
  this_ =  new QGenericReturnArgument(aName, aData);
  this_ =  new MyQGenericReturnArgument(aName, aData);
}


/*void C_ZN22QGenericReturnArgumentD2Ev(void *this_)*/ {
  delete (QGenericReturnArgument*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qgenericreturnargument
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
