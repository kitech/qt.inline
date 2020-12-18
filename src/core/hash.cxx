//  header block begin

// /usr/include/qt/QtCore/qhashfunctions.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhashfunctions.h>
#include <QtCore>
#include "callback_inherit.h"

// hash is pure virtual: false false
// hash has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_Myhash_t {
  QByteArrayData data[1];
  char stringdata0[7];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_Myhash_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_Myhash_t qt_meta_stringdata_Myhash = {
   {
  QT_MOC_LITERAL(0, 0, 6), // "Myhash"
  },
  "Myhash"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_Myhash[] = {
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
class Q_DECL_EXPORT Myhash : public std::hash< ::QBitArray> {
public:
  virtual ~Myhash() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_hash(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN4hashD2Ev(void *this_)*/ {
  delete (std::hash< ::QBitArray>*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_hash
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
