//  header block begin

// /usr/include/qt/QtQuick/qsgflatcolormaterial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgflatcolormaterial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGFlatColorMaterial is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgflatcolormaterial(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgflatcolormaterial.h:56
// [16] const QColor & color() const
// (11)qm903602358 (34)_ZNK20QSGFlatColorMaterial5colorEv
//static
/*void qm903602358()*/ {
  ;
  (void) ((QSGFlatColorMaterial*)this_)->color();
   auto xptr = (const QColor & (QSGFlatColorMaterial::*)() const ) &QSGFlatColorMaterial::color;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN20QSGFlatColorMaterialD2Ev(void *this_)*/ {
  delete (QSGFlatColorMaterial*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgflatcolormaterial
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
