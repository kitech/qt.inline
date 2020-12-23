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

// QDtlsClientVerifier is pure virtual: false false
// QDtlsClientVerifier has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qdtlsclientverifier(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:78
// [8] QString tr(const char *, const char *, int) 
// (12)qm2811470917 (35)_ZN19QDtlsClientVerifier2trEPKcS1_i
//static
/*void qm2811470917(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QDtlsClientVerifier::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QDtlsClientVerifier::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdtls.h:82
// [-2] void QDtlsClientVerifier(QObject *) 
// (12)qm1419887213 (36)_ZN19QDtlsClientVerifierC2EP7QObject
/*void* qm1419887213(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QDtlsClientVerifier(parent);
}


/*void C_ZN19QDtlsClientVerifierD2Ev(void *this_)*/ {
  delete (QDtlsClientVerifier*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qdtlsclientverifier
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
