//  header block begin

// /usr/include/qt/QtCore/qshareddata.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qshareddata.h>
#include <QtCore>
#include "callback_inherit.h"

// QSharedData is pure virtual: false false
// QSharedData has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSharedData_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSharedData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSharedData_t qt_meta_stringdata_MyQSharedData = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSharedData"
  },
  "MyQSharedData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSharedData[] = {
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
class Q_DECL_EXPORT MyQSharedData : public QSharedData {
public:
  virtual ~MyQSharedData() {}
// void QSharedData()
MyQSharedData() : QSharedData() {}
// void QSharedData(const QSharedData &)
MyQSharedData(const QSharedData & arg0) : QSharedData(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qshareddata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:64
// [-2] void QSharedData() 
// (12)qm4068394488 (20)_ZN11QSharedDataC2Ev
/*void* qm4068394488()*/{
  ;
  this_ =  new QSharedData();
  this_ =  new MyQSharedData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:65
// [-2] void QSharedData(const QSharedData &) 
// (12)qm2088475650 (23)_ZN11QSharedDataC2ERKS_
/*void* qm2088475650(const QSharedData & arg0)*/{
  const QSharedData & arg0 = *(const QSharedData *)this_;
  this_ =  new QSharedData(arg0);
  this_ =  new MyQSharedData(arg0);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qshareddata.h:69
// [-2] void ~QSharedData() 
// (12)qm1873411393 (20)_ZN11QSharedDataD2Ev
/*void qm1873411393 (void *this_)*/ {
  delete (QSharedData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qshareddata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
