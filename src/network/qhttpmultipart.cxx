//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(http)
// /usr/include/qt/QtNetwork/qhttpmultipart.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhttpmultipart.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHttpMultiPart is pure virtual: false false
// QHttpMultiPart has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhttpmultipart(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:90
// [8] QString tr(const char *, const char *, int) 
// (12)qm1114408600 (30)_ZN14QHttpMultiPart2trEPKcS1_i
//static
/*void qm1114408600(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QHttpMultiPart::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QHttpMultiPart::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:101
// [-2] void QHttpMultiPart(QObject *) 
// (12)qm2888209190 (31)_ZN14QHttpMultiPartC2EP7QObject
/*void* qm2888209190(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QHttpMultiPart(parent);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:102
// [-2] void QHttpMultiPart(QHttpMultiPart::ContentType, QObject *) 
// (12)qm3114438703 (48)_ZN14QHttpMultiPartC2ENS_11ContentTypeEP7QObject
/*void* qm3114438703(QHttpMultiPart::ContentType contentType, QObject * parent)*/{
  QHttpMultiPart::ContentType contentType = *(QHttpMultiPart::ContentType*)this_; QObject * parent = *(QObject **)this_;
  this_ =  new QHttpMultiPart(contentType, parent);
}


/*void C_ZN14QHttpMultiPartD2Ev(void *this_)*/ {
  delete (QHttpMultiPart*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhttpmultipart
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(http)
#endif // #ifndef QT_MINIMAL
//  footer block end
