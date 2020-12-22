//  header block begin

// /usr/include/qt/QtNetwork/qnetworkinterface.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qnetworkinterface.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QNetworkInterface is pure virtual: false false
// QNetworkInterface has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQNetworkInterface_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQNetworkInterface_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQNetworkInterface_t qt_meta_stringdata_MyQNetworkInterface = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQNetworkInterface"
  },
  "MyQNetworkInterface"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQNetworkInterface[] = {
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
class Q_DECL_EXPORT MyQNetworkInterface : public QNetworkInterface {
public:
  virtual ~MyQNetworkInterface() {}
// void QNetworkInterface()
MyQNetworkInterface() : QNetworkInterface() {}
// void QNetworkInterface(const QNetworkInterface &)
MyQNetworkInterface(const QNetworkInterface & other) : QNetworkInterface(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qnetworkinterface(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:141
// [-2] void QNetworkInterface() 
// (12)qm2885798098 (26)_ZN17QNetworkInterfaceC2Ev
/*void* qm2885798098()*/{
  ;
  this_ =  new QNetworkInterface();
  this_ =  new MyQNetworkInterface();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:142
// [-2] void QNetworkInterface(const QNetworkInterface &) 
// (12)qm1018514826 (29)_ZN17QNetworkInterfaceC2ERKS_
/*void* qm1018514826(const QNetworkInterface & other)*/{
  const QNetworkInterface & other = *(const QNetworkInterface *)this_;
  this_ =  new QNetworkInterface(other);
  this_ =  new MyQNetworkInterface(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:143
// [8] QNetworkInterface & operator=(QNetworkInterface &&) 
// (12)qm3366335948 (28)_ZN17QNetworkInterfaceaSEOS_
//static
/*void qm3366335948(QNetworkInterface && other)*/ {
  QNetworkInterface && other =  static_cast<QNetworkInterface &&>(*(QNetworkInterface *)this_);
  (void) ((QNetworkInterface*)this_)->operator=(other);
  // auto xptr = (QNetworkInterface & (QNetworkInterface::*)(QNetworkInterface&&) ) &QNetworkInterface::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:147
// [-2] void swap(QNetworkInterface &) 
// (12)qm2233900740 (31)_ZN17QNetworkInterface4swapERS_
//static
/*void qm2233900740(QNetworkInterface & other)*/ {
  QNetworkInterface & other = *(QNetworkInterface *)this_;
  (void) ((QNetworkInterface*)this_)->swap(other);
   auto xptr = (void (QNetworkInterface::*)(QNetworkInterface&) ) &QNetworkInterface::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN17QNetworkInterfaceD2Ev(void *this_)*/ {
  delete (QNetworkInterface*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qnetworkinterface
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
