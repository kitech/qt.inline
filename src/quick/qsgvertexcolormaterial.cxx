//  header block begin

// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgvertexcolormaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGVertexColorMaterial is pure virtual: false false
// QSGVertexColorMaterial has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGVertexColorMaterial_t {
  QByteArrayData data[1];
  char stringdata0[25];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGVertexColorMaterial_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGVertexColorMaterial_t qt_meta_stringdata_MyQSGVertexColorMaterial = {
   {
  QT_MOC_LITERAL(0, 0, 24), // "MyQSGVertexColorMaterial"
  },
  "MyQSGVertexColorMaterial"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGVertexColorMaterial[] = {
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
class Q_DECL_EXPORT MyQSGVertexColorMaterial : public QSGVertexColorMaterial {
public:
  virtual ~MyQSGVertexColorMaterial() {}
// void QSGVertexColorMaterial()
MyQSGVertexColorMaterial() : QSGVertexColorMaterial() {}
// Protected virtual Direct Visibility=Default Availability=Available
// [8] QSGMaterialType * type()
  virtual QSGMaterialType * type() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"type", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGMaterialType *)(irv);
      // Pointer Pointer QSGMaterialType *
    } else {
    return QSGVertexColorMaterial::type();
  }
  }

// Protected virtual Direct Visibility=Default Availability=Available
// [8] QSGMaterialShader * createShader()
  virtual QSGMaterialShader * createShader() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createShader", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGMaterialShader *)(irv);
      // Pointer Pointer QSGMaterialShader *
    } else {
    return QSGVertexColorMaterial::createShader();
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgvertexcolormaterial(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgvertexcolormaterial.h:50
// [-2] void QSGVertexColorMaterial() 
// (12)qm1413483382 (31)_ZN22QSGVertexColorMaterialC2Ev
/*void* qm1413483382()*/{
  auto _nilp = (MyQSGVertexColorMaterial*)(0);
  ;
  this_ =  new QSGVertexColorMaterial();
  this_ =  new MyQSGVertexColorMaterial();
}


/*void C_ZN22QSGVertexColorMaterialD2Ev(void *this_)*/ {
  delete (QSGVertexColorMaterial*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgvertexcolormaterial
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
