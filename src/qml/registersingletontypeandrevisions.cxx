//  header block begin

// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterSingletonTypeAndRevisions is pure virtual: false false
// RegisterSingletonTypeAndRevisions has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyRegisterSingletonTypeAndRevisions_t {
  QByteArrayData data[1];
  char stringdata0[36];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyRegisterSingletonTypeAndRevisions_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyRegisterSingletonTypeAndRevisions_t qt_meta_stringdata_MyRegisterSingletonTypeAndRevisions = {
   {
  QT_MOC_LITERAL(0, 0, 35), // "MyRegisterSingletonTypeAndRevisions"
  },
  "MyRegisterSingletonTypeAndRevisions"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyRegisterSingletonTypeAndRevisions[] = {
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
class Q_DECL_EXPORT MyRegisterSingletonTypeAndRevisions : public QQmlPrivate::RegisterSingletonTypeAndRevisions {
public:
  virtual ~MyRegisterSingletonTypeAndRevisions() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_registersingletontypeandrevisions(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN33RegisterSingletonTypeAndRevisionsD2Ev(void *this_)*/ {
  delete (QQmlPrivate::RegisterSingletonTypeAndRevisions*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_registersingletontypeandrevisions
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
