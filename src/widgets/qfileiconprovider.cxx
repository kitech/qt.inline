//  header block begin

// /usr/include/qt/QtWidgets/qfileiconprovider.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfileiconprovider.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QFileIconProvider is pure virtual: false false
// QFileIconProvider has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQFileIconProvider_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFileIconProvider_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFileIconProvider_t qt_meta_stringdata_MyQFileIconProvider = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQFileIconProvider"
  },
  "MyQFileIconProvider"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFileIconProvider[] = {
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
class Q_DECL_EXPORT MyQFileIconProvider : public QFileIconProvider {
public:
  virtual ~MyQFileIconProvider() {}
// void QFileIconProvider()
MyQFileIconProvider() : QFileIconProvider() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qfileiconprovider(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:56
// [-2] void QFileIconProvider() 
// (12)qm2516064825 (26)_ZN17QFileIconProviderC2Ev
/*void* qm2516064825()*/{
  ;
  this_ =  new QFileIconProvider();
  this_ =  new MyQFileIconProvider();
}


/*void C_ZN17QFileIconProviderD2Ev(void *this_)*/ {
  delete (QFileIconProvider*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qfileiconprovider
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
