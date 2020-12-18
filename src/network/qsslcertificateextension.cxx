//  header block begin

// /usr/include/qt/QtNetwork/qsslcertificateextension.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslcertificateextension.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslCertificateExtension is pure virtual: false false
// QSslCertificateExtension has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslCertificateExtension_t {
  QByteArrayData data[1];
  char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslCertificateExtension_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslCertificateExtension_t qt_meta_stringdata_MyQSslCertificateExtension = {
   {
  QT_MOC_LITERAL(0, 0, 26), // "MyQSslCertificateExtension"
  },
  "MyQSslCertificateExtension"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslCertificateExtension[] = {
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
class Q_DECL_EXPORT MyQSslCertificateExtension : public QSslCertificateExtension {
public:
  virtual ~MyQSslCertificateExtension() {}
// void QSslCertificateExtension()
MyQSslCertificateExtension() : QSslCertificateExtension() {}
// void QSslCertificateExtension(const QSslCertificateExtension &)
MyQSslCertificateExtension(const QSslCertificateExtension & other) : QSslCertificateExtension(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslcertificateextension(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:58
// [8] QSslCertificateExtension & operator=(QSslCertificateExtension &&) 
// (12)qm2713924081 (35)_ZN24QSslCertificateExtensionaSEOS_
//static
/*void qm2713924081(QSslCertificateExtension && other)*/ {
  QSslCertificateExtension && other =  static_cast<QSslCertificateExtension &&>(*(QSslCertificateExtension *)this_);
  (void) ((QSslCertificateExtension*)this_)->operator=(other);
  // auto xptr = (QSslCertificateExtension & (QSslCertificateExtension::*)(QSslCertificateExtension&&) ) &QSslCertificateExtension::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:62
// [-2] void swap(QSslCertificateExtension &) 
// (12)qm4028741821 (38)_ZN24QSslCertificateExtension4swapERS_
//static
/*void qm4028741821(QSslCertificateExtension & other)*/ {
  QSslCertificateExtension & other = *(QSslCertificateExtension *)this_;
  (void) ((QSslCertificateExtension*)this_)->swap(other);
   auto xptr = (void (QSslCertificateExtension::*)(QSslCertificateExtension&) ) &QSslCertificateExtension::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QSslCertificateExtensionD2Ev(void *this_)*/ {
  delete (QSslCertificateExtension*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslcertificateextension
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
