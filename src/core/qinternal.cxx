//  header block begin

// /usr/include/qt/QtCore/qnamespace.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnamespace.h>
#include <QtCore>
#include "callback_inherit.h"

// QInternal is pure virtual: false false
// QInternal has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQInternal_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQInternal_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQInternal_t qt_meta_stringdata_MyQInternal = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQInternal"
  },
  "MyQInternal"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQInternal[] = {
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
class Q_DECL_EXPORT MyQInternal : public QInternal {
public:
  virtual ~MyQInternal() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qinternal(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN9QInternalD2Ev(void *this_)*/ {
  delete (QInternal*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qinternal
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
