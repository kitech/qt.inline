//  header block begin

// /usr/include/qt/QtCore/qvariant.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qvariant.h>
#include <QtCore>
#include "callback_inherit.h"

// QVariantComparisonHelper is pure virtual: false false
// QVariantComparisonHelper has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQVariantComparisonHelper_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQVariantComparisonHelper_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQVariantComparisonHelper_t qt_meta_stringdata_MyQVariantComparisonHelper = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQVariantComparisonHelper"
  },
  "MyQVariantComparisonHelper"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQVariantComparisonHelper[] = {
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
class Q_DECL_EXPORT MyQVariantComparisonHelper : public QVariantComparisonHelper {
public:
  virtual ~MyQVariantComparisonHelper() {}
// void QVariantComparisonHelper(const QVariant &)
MyQVariantComparisonHelper(const QVariant & var_) : QVariantComparisonHelper(var_) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qvariantcomparisonhelper(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qvariant.h:604
// [-2] void QVariantComparisonHelper(const QVariant &) 
// (12)qm2450469610 (43)_ZN24QVariantComparisonHelperC2ERK8QVariant
/*void* qm2450469610(const QVariant & var_)*/{
  const QVariant & var_ = *(const QVariant *)this_;
  this_ =  new QVariantComparisonHelper(var_);
}


/*void C_ZN24QVariantComparisonHelperD2Ev(void *this_)*/ {
  delete (QVariantComparisonHelper*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qvariantcomparisonhelper
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
