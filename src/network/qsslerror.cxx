//  header block begin

// /usr/include/qt/QtNetwork/qsslerror.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslerror.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslError is pure virtual: false false
// QSslError has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslError_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslError_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslError_t qt_meta_stringdata_MyQSslError = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQSslError"
  },
  "MyQSslError"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslError[] = {
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
class Q_DECL_EXPORT MyQSslError : public QSslError {
public:
  virtual ~MyQSslError() {}
// void QSslError()
MyQSslError() : QSslError() {}
// void QSslError(QSslError::SslError)
MyQSslError(QSslError::SslError error) : QSslError(error) {}
// void QSslError(QSslError::SslError, const QSslCertificate &)
MyQSslError(QSslError::SslError error, const QSslCertificate & certificate) : QSslError(error, certificate) {}
// void QSslError(const QSslError &)
MyQSslError(const QSslError & other) : QSslError(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslerror(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:108
// [-2] void swap(QSslError &) 
// (11)qm813483906 (22)_ZN9QSslError4swapERS_
//static
/*void qm813483906(QSslError & other)*/ {
  QSslError & other = *(QSslError *)this_;
  (void) ((QSslError*)this_)->swap(other);
   auto xptr = (void (QSslError::*)(QSslError&) ) &QSslError::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:112
// [8] QSslError & operator=(QSslError &&) 
// (12)qm3481691870 (19)_ZN9QSslErroraSEOS_
//static
/*void qm3481691870(QSslError && other)*/ {
  QSslError && other =  static_cast<QSslError &&>(*(QSslError *)this_);
  (void) ((QSslError*)this_)->operator=(other);
  // auto xptr = (QSslError & (QSslError::*)(QSslError&&) ) &QSslError::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:115
// [1] bool operator!=(const QSslError &) const
// (12)qm4168185255 (21)_ZNK9QSslErrorneERKS_
//static
/*void qm4168185255(const QSslError & other)*/ {
  const QSslError & other = *(const QSslError *)this_;
  (void) ((QSslError*)this_)->operator!=(other);
  // auto xptr = (bool (QSslError::*)(QSslError const&) const ) &QSslError::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN9QSslErrorD2Ev(void *this_)*/ {
  delete (QSslError*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslerror
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
