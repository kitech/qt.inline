//  header block begin

// /usr/include/qt/QtQuick/qsgmaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgmaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGMaterial is pure virtual: true true
// QSGMaterial has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGMaterial_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGMaterial_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGMaterial_t qt_meta_stringdata_MyQSGMaterial = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSGMaterial"
  },
  "MyQSGMaterial"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGMaterial[] = {
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
class Q_DECL_EXPORT MyQSGMaterial : public QSGMaterial {
public:
  virtual ~MyQSGMaterial() {}
// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QSGMaterialType * type()
  virtual QSGMaterialType * type() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"type", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGMaterialType *)(irv);
      // Pointer Pointer QSGMaterialType *
    } else {
    return (QSGMaterialType *){};
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QSGMaterialShader * createShader()
  virtual QSGMaterialShader * createShader() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"createShader", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGMaterialShader *)(irv);
      // Pointer Pointer QSGMaterialShader *
    } else {
    return (QSGMaterialShader *){};
  }
  }

// void QSGMaterial()
MyQSGMaterial() : QSGMaterial() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgmaterial(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:74
// [4] QSGMaterial::Flags flags() const
// (11)qm803861947 (25)_ZNK11QSGMaterial5flagsEv
//static
/*void qm803861947()*/ {
  ;
  (void) ((QSGMaterial*)this_)->flags();
   auto xptr = (QFlags<QSGMaterial::Flag> (QSGMaterial::*)() const ) &QSGMaterial::flags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QSGMaterialD2Ev(void *this_)*/ {
  delete (QSGMaterial*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgmaterial
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
