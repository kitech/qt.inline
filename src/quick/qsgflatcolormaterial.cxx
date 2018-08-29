//  header block begin
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgflatcolormaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGFlatColorMaterial is pure virtual: false
// QSGFlatColorMaterial has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGFlatColorMaterial_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGFlatColorMaterial_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGFlatColorMaterial_t qt_meta_stringdata_MyQSGFlatColorMaterial = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQSGFlatColorMaterial"
  },
  "MyQSGFlatColorMaterial"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGFlatColorMaterial[] = {
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
class Q_DECL_EXPORT MyQSGFlatColorMaterial : public QSGFlatColorMaterial {
public:
  virtual ~MyQSGFlatColorMaterial() {}
// void QSGFlatColorMaterial()
MyQSGFlatColorMaterial() : QSGFlatColorMaterial() {}
};
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:51
// [-2] void QSGFlatColorMaterial()
extern "C" Q_DECL_EXPORT
void* C_ZN20QSGFlatColorMaterialC2Ev() {
  return  new QSGFlatColorMaterial();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:52
// [8] QSGMaterialType * type()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGFlatColorMaterial4typeEv(void *this_) {
  return (void*)((QSGFlatColorMaterial*)this_)->type();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:53
// [8] QSGMaterialShader * createShader()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGFlatColorMaterial12createShaderEv(void *this_) {
  return (void*)((QSGFlatColorMaterial*)this_)->createShader();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:55
// [-2] void setColor(const QColor &)
extern "C" Q_DECL_EXPORT
void C_ZN20QSGFlatColorMaterial8setColorERK6QColor(void *this_, QColor* color) {
  ((QSGFlatColorMaterial*)this_)->setColor(*color);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:56
// [16] const QColor & color()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QSGFlatColorMaterial5colorEv(void *this_) {
  auto& rv = ((QSGFlatColorMaterial*)this_)->color();
return new QColor(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:58
// [4] int compare(const QSGMaterial *)
extern "C" Q_DECL_EXPORT
int C_ZNK20QSGFlatColorMaterial7compareEPK11QSGMaterial(void *this_, const QSGMaterial * other) {
  return (int)((QSGFlatColorMaterial*)this_)->compare(other);
}


extern "C" Q_DECL_EXPORT
void C_ZN20QSGFlatColorMaterialD2Ev(void *this_) {
  delete (QSGFlatColorMaterial*)(this_);
}
//  main block end
