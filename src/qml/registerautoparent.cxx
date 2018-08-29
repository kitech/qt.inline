//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterAutoParent is pure virtual: false
// RegisterAutoParent has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyRegisterAutoParent_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyRegisterAutoParent_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyRegisterAutoParent_t qt_meta_stringdata_MyRegisterAutoParent = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyRegisterAutoParent"
  },
  "MyRegisterAutoParent"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyRegisterAutoParent[] = {
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
class Q_DECL_EXPORT MyRegisterAutoParent : public QQmlPrivate::RegisterAutoParent {
public:
  virtual ~MyRegisterAutoParent() {}
};

extern "C" Q_DECL_EXPORT
void C_ZN18RegisterAutoParentD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterAutoParent*)(this_);
}
//  main block end
