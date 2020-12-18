//  header block begin

// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qssldiffiehellmanparameters.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslDiffieHellmanParameters is pure virtual: false false
// QSslDiffieHellmanParameters has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslDiffieHellmanParameters_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslDiffieHellmanParameters_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslDiffieHellmanParameters_t qt_meta_stringdata_MyQSslDiffieHellmanParameters = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQSslDiffieHellmanParameters"
  },
  "MyQSslDiffieHellmanParameters"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslDiffieHellmanParameters[] = {
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
class Q_DECL_EXPORT MyQSslDiffieHellmanParameters : public QSslDiffieHellmanParameters {
public:
  virtual ~MyQSslDiffieHellmanParameters() {}
// void QSslDiffieHellmanParameters()
MyQSslDiffieHellmanParameters() : QSslDiffieHellmanParameters() {}
// void QSslDiffieHellmanParameters(const QSslDiffieHellmanParameters &)
MyQSslDiffieHellmanParameters(const QSslDiffieHellmanParameters & other) : QSslDiffieHellmanParameters(other) {}
// void QSslDiffieHellmanParameters(QSslDiffieHellmanParameters &&)
MyQSslDiffieHellmanParameters(QSslDiffieHellmanParameters && other) : QSslDiffieHellmanParameters(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qssldiffiehellmanparameters(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:86
// [-2] void QSslDiffieHellmanParameters(QSslDiffieHellmanParameters &&) 
// (12)qm1277510715 (38)_ZN27QSslDiffieHellmanParametersC2EOS_
/*void* qm1277510715(QSslDiffieHellmanParameters && other)*/{
  QSslDiffieHellmanParameters && other =  static_cast<QSslDiffieHellmanParameters &&>(*(QSslDiffieHellmanParameters *)this_);
  this_ =  new QSslDiffieHellmanParameters(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:90
// [8] QSslDiffieHellmanParameters & operator=(QSslDiffieHellmanParameters &&) 
// (12)qm2719203067 (38)_ZN27QSslDiffieHellmanParametersaSEOS_
//static
/*void qm2719203067(QSslDiffieHellmanParameters && other)*/ {
  QSslDiffieHellmanParameters && other =  static_cast<QSslDiffieHellmanParameters &&>(*(QSslDiffieHellmanParameters *)this_);
  (void) ((QSslDiffieHellmanParameters*)this_)->operator=(other);
  // auto xptr = (QSslDiffieHellmanParameters & (QSslDiffieHellmanParameters::*)(QSslDiffieHellmanParameters&&) ) &QSslDiffieHellmanParameters::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:92
// [-2] void swap(QSslDiffieHellmanParameters &) 
// (12)qm3346950968 (41)_ZN27QSslDiffieHellmanParameters4swapERS_
//static
/*void qm3346950968(QSslDiffieHellmanParameters & other)*/ {
  QSslDiffieHellmanParameters & other = *(QSslDiffieHellmanParameters *)this_;
  (void) ((QSslDiffieHellmanParameters*)this_)->swap(other);
   auto xptr = (void (QSslDiffieHellmanParameters::*)(QSslDiffieHellmanParameters&) ) &QSslDiffieHellmanParameters::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN27QSslDiffieHellmanParametersD2Ev(void *this_)*/ {
  delete (QSslDiffieHellmanParameters*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qssldiffiehellmanparameters
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
