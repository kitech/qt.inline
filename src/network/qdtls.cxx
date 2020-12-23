//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(dtls)
// /usr/include/qt/QtNetwork/qdtls.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdtls.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QDtls is pure virtual: false false
// QDtls has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdtls(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:118
// [8] QString tr(const char *, const char *, int) 
// (12)qm2755075027 (20)_ZN5QDtls2trEPKcS1_i
//static
/*void qm2755075027(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDtls::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDtls::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:130
// [-2] void QDtls(QSslSocket::SslMode, QObject *) 
// (12)qm3137421052 (43)_ZN5QDtlsC2EN10QSslSocket7SslModeEP7QObject
/*void* qm3137421052(QSslSocket::SslMode mode, QObject * parent)*/{
  QSslSocket::SslMode mode = *(QSslSocket::SslMode*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QDtls(mode, parent);
}


/*void C_ZN5QDtlsD2Ev(void *this_)*/ {
  delete (QDtls*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdtls
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(dtls)
#endif // #ifndef QT_MINIMAL
//  footer block end
