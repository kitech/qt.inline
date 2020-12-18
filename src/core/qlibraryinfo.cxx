//  header block begin

// /usr/include/qt/QtCore/qlibraryinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qlibraryinfo.h>
#include <QtCore>
#include "callback_inherit.h"

// QLibraryInfo is pure virtual: false false
// QLibraryInfo has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQLibraryInfo_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLibraryInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLibraryInfo_t qt_meta_stringdata_MyQLibraryInfo = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQLibraryInfo"
  },
  "MyQLibraryInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLibraryInfo[] = {
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
class Q_DECL_EXPORT MyQLibraryInfo : public QLibraryInfo {
public:
  virtual ~MyQLibraryInfo() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qlibraryinfo(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN12QLibraryInfoD2Ev(void *this_)*/ {
  delete (QLibraryInfo*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qlibraryinfo
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
