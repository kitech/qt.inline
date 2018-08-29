//  header block begin
// /usr/include/qt/QtQuick/qsgmaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgmaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGMaterialType is pure virtual: false
// QSGMaterialType has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGMaterialType_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGMaterialType_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGMaterialType_t qt_meta_stringdata_MyQSGMaterialType = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQSGMaterialType"
  },
  "MyQSGMaterialType"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGMaterialType[] = {
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
class Q_DECL_EXPORT MyQSGMaterialType : public QSGMaterialType {
public:
  virtual ~MyQSGMaterialType() {}
};

extern "C" Q_DECL_EXPORT
void C_ZN15QSGMaterialTypeD2Ev(void *this_) {
  delete (QSGMaterialType*)(this_);
}
//  main block end
