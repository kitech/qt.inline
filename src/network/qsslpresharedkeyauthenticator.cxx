//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(ssl)
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsslpresharedkeyauthenticator.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QSslPreSharedKeyAuthenticator is pure virtual: false false
// QSslPreSharedKeyAuthenticator has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSslPreSharedKeyAuthenticator_t {
  QByteArrayData data[1];
  char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSslPreSharedKeyAuthenticator_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSslPreSharedKeyAuthenticator_t qt_meta_stringdata_MyQSslPreSharedKeyAuthenticator = {
   {
  QT_MOC_LITERAL(0, 0, 31), // "MyQSslPreSharedKeyAuthenticator"
  },
  "MyQSslPreSharedKeyAuthenticator"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSslPreSharedKeyAuthenticator[] = {
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
class Q_DECL_EXPORT MyQSslPreSharedKeyAuthenticator : public QSslPreSharedKeyAuthenticator {
public:
  virtual ~MyQSslPreSharedKeyAuthenticator() {}
// void QSslPreSharedKeyAuthenticator()
MyQSslPreSharedKeyAuthenticator() : QSslPreSharedKeyAuthenticator() {}
// void QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator &)
MyQSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator & authenticator) : QSslPreSharedKeyAuthenticator(authenticator) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsslpresharedkeyauthenticator(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:57
// [-2] void QSslPreSharedKeyAuthenticator() 
// (12)qm1025614381 (38)_ZN29QSslPreSharedKeyAuthenticatorC2Ev
/*void* qm1025614381()*/{
  ;
  this_ =  new QSslPreSharedKeyAuthenticator();
  this_ =  new MyQSslPreSharedKeyAuthenticator();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:59
// [-2] void QSslPreSharedKeyAuthenticator(const QSslPreSharedKeyAuthenticator &) 
// (11)qm642898451 (41)_ZN29QSslPreSharedKeyAuthenticatorC2ERKS_
/*void* qm642898451(const QSslPreSharedKeyAuthenticator & authenticator)*/{
  const QSslPreSharedKeyAuthenticator & authenticator = *(const QSslPreSharedKeyAuthenticator *)this_;
  this_ =  new QSslPreSharedKeyAuthenticator(authenticator);
  this_ =  new MyQSslPreSharedKeyAuthenticator(authenticator);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:62
// [8] QSslPreSharedKeyAuthenticator & operator=(QSslPreSharedKeyAuthenticator &&) 
// (12)qm4142256600 (40)_ZN29QSslPreSharedKeyAuthenticatoraSEOS_
//static
/*void qm4142256600(QSslPreSharedKeyAuthenticator && other)*/ {
  QSslPreSharedKeyAuthenticator && other =  static_cast<QSslPreSharedKeyAuthenticator &&>(*(QSslPreSharedKeyAuthenticator *)this_);
  (void) ((QSslPreSharedKeyAuthenticator*)this_)->operator=(other);
  // auto xptr = (QSslPreSharedKeyAuthenticator & (QSslPreSharedKeyAuthenticator::*)(QSslPreSharedKeyAuthenticator&&) ) &QSslPreSharedKeyAuthenticator::operator=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:64
// [-2] void swap(QSslPreSharedKeyAuthenticator &) 
// (12)qm1271837588 (43)_ZN29QSslPreSharedKeyAuthenticator4swapERS_
//static
/*void qm1271837588(QSslPreSharedKeyAuthenticator & other)*/ {
  QSslPreSharedKeyAuthenticator & other = *(QSslPreSharedKeyAuthenticator *)this_;
  (void) ((QSslPreSharedKeyAuthenticator*)this_)->swap(other);
   auto xptr = (void (QSslPreSharedKeyAuthenticator::*)(QSslPreSharedKeyAuthenticator&) ) &QSslPreSharedKeyAuthenticator::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN29QSslPreSharedKeyAuthenticatorD2Ev(void *this_)*/ {
  delete (QSslPreSharedKeyAuthenticator*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsslpresharedkeyauthenticator
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(ssl)
#endif // #ifndef QT_MINIMAL
//  footer block end
