//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterType is pure virtual: false
// RegisterType has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyRegisterType_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyRegisterType_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyRegisterType_t qt_meta_stringdata_MyRegisterType = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyRegisterType"
  },
  "MyRegisterType"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyRegisterType[] = {
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
class Q_DECL_EXPORT MyRegisterType : public QQmlPrivate::RegisterType {
public:
  virtual ~MyRegisterType() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN12RegisterTypeD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterType*)(this_);
}
//  main block end
