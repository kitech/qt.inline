//  header block begin
// /usr/include/qt/QtQml/qqmlprivate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlprivate.h>
#include <QtQml>
#include "callback_inherit.h"

// RegisterCompositeType is pure virtual: false
// RegisterCompositeType has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyRegisterCompositeType_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyRegisterCompositeType_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyRegisterCompositeType_t qt_meta_stringdata_MyRegisterCompositeType = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyRegisterCompositeType"
  },
  "MyRegisterCompositeType"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyRegisterCompositeType[] = {
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
class Q_DECL_EXPORT MyRegisterCompositeType : public QQmlPrivate::RegisterCompositeType {
public:
  virtual ~MyRegisterCompositeType() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN21RegisterCompositeTypeD2Ev(void *this_) {
  delete (QQmlPrivate::RegisterCompositeType*)(this_);
}
//  main block end
