//  header block begin

// /usr/include/qt/QtNetwork/qsslcertificate.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslcertificate.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslCertificate is pure virtual: false false
// QSslCertificate has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslCertificate_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslCertificate_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslCertificate_t qt_meta_stringdata_MyQSslCertificate = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQSslCertificate"
  },
  "MyQSslCertificate"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslCertificate[] = {
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
class Q_DECL_EXPORT MyQSslCertificate : public QSslCertificate {
public:
  virtual ~MyQSslCertificate() {}
// void QSslCertificate(QIODevice *, QSsl::EncodingFormat)
MyQSslCertificate(QIODevice * device, QSsl::EncodingFormat format) : QSslCertificate(device, format) {}
// void QSslCertificate(const QByteArray &, QSsl::EncodingFormat)
MyQSslCertificate(const QByteArray & data, QSsl::EncodingFormat format) : QSslCertificate(data, format) {}
// void QSslCertificate(const QSslCertificate &)
MyQSslCertificate(const QSslCertificate & other) : QSslCertificate(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslcertificate(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:94
// [-2] void QSslCertificate(QIODevice *, QSsl::EncodingFormat) 
// (12)qm4235676370 (57)_ZN15QSslCertificateC2EP9QIODeviceN4QSsl14EncodingFormatE
/*void* qm4235676370(QIODevice * device, QSsl::EncodingFormat format)*/{
  QIODevice * device = *(QIODevice **)this_; QSsl::EncodingFormat format = *(QSsl::EncodingFormat*)this_;
  this_ =  new QSslCertificate(device, format);
  this_ =  new MyQSslCertificate(device, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:95
// [-2] void QSslCertificate(const QByteArray &, QSsl::EncodingFormat) 
// (11)qm671911435 (60)_ZN15QSslCertificateC2ERK10QByteArrayN4QSsl14EncodingFormatE
/*void* qm671911435(const QByteArray & data, QSsl::EncodingFormat format)*/{
  const QByteArray & data = *(const QByteArray *)this_; QSsl::EncodingFormat format = *(QSsl::EncodingFormat*)this_;
  this_ =  new QSslCertificate(data, format);
  this_ =  new MyQSslCertificate(data, format);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:96
// [-2] void QSslCertificate(const QSslCertificate &) 
// (12)qm3291796427 (27)_ZN15QSslCertificateC2ERKS_
/*void* qm3291796427(const QSslCertificate & other)*/{
  const QSslCertificate & other = *(const QSslCertificate *)this_;
  this_ =  new QSslCertificate(other);
  this_ =  new MyQSslCertificate(other);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:98
// [8] QSslCertificate & operator=(QSslCertificate &&) 
// (11)qm731258129 (26)_ZN15QSslCertificateaSEOS_
//static
/*void qm731258129(QSslCertificate && other)*/ {
  QSslCertificate && other =  static_cast<QSslCertificate &&>(*(QSslCertificate *)this_);
  (void) ((QSslCertificate*)this_)->operator=(other);
  // auto xptr = (QSslCertificate & (QSslCertificate::*)(QSslCertificate&&) ) &QSslCertificate::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:101
// [-2] void swap(QSslCertificate &) 
// (12)qm2079565378 (29)_ZN15QSslCertificate4swapERS_
//static
/*void qm2079565378(QSslCertificate & other)*/ {
  QSslCertificate & other = *(QSslCertificate *)this_;
  (void) ((QSslCertificate*)this_)->swap(other);
   auto xptr = (void (QSslCertificate::*)(QSslCertificate&) ) &QSslCertificate::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:105
// [1] bool operator!=(const QSslCertificate &) const
// (12)qm1331985662 (28)_ZNK15QSslCertificateneERKS_
//static
/*void qm1331985662(const QSslCertificate & other)*/ {
  const QSslCertificate & other = *(const QSslCertificate *)this_;
  (void) ((QSslCertificate*)this_)->operator!=(other);
  // auto xptr = (bool (QSslCertificate::*)(QSslCertificate const&) const ) &QSslCertificate::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN15QSslCertificateD2Ev(void *this_)*/ {
  delete (QSslCertificate*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslcertificate
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
