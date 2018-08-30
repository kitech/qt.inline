//  header block begin
// /usr/include/qt/QtQuick/qsgtexturematerial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgtexturematerial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGTextureMaterial is pure virtual: false
// QSGTextureMaterial has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGTextureMaterial_t {
  QByteArrayData data[1];
  char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGTextureMaterial_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGTextureMaterial_t qt_meta_stringdata_MyQSGTextureMaterial = {
   {
  QT_MOC_LITERAL(0, 0, 20), // "MyQSGTextureMaterial"
  },
  "MyQSGTextureMaterial"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGTextureMaterial[] = {
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
class Q_DECL_EXPORT MyQSGTextureMaterial : public QSGTextureMaterial {
public:
  virtual ~MyQSGTextureMaterial() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:90
// [8] QSGMaterialType * type()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSGTextureMaterial4typeEv(void *this_) {
  return (void*)((QSGTextureMaterial*)this_)->type();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:91
// [8] QSGMaterialShader * createShader()
extern "C" Q_DECL_EXPORT
void* C_ZNK18QSGTextureMaterial12createShaderEv(void *this_) {
  return (void*)((QSGTextureMaterial*)this_)->createShader();
}


extern "C" Q_DECL_EXPORT
void C_ZN18QSGTextureMaterialD2Ev(void *this_) {
  delete (QSGTextureMaterial*)(this_);
}
//  main block end
