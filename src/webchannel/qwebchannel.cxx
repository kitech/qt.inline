//  header block begin

// /usr/include/qt/QtWebChannel/qwebchannel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebchannel.h>
#include <QtWebChannel>
#include "callback_inherit.h"

// QWebChannel is pure virtual: false false
// QWebChannel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebchannel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:56
// [8] QString tr(const char *, const char *, int) 
// (12)qm3691327392 (27)_ZN11QWebChannel2trEPKcS1_i
//static
/*void qm3691327392(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebChannel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebChannel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannel.h:60
// [-2] void QWebChannel(QObject *) 
// (12)qm2226799121 (28)_ZN11QWebChannelC2EP7QObject
/*void* qm2226799121(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QWebChannel(parent);
}


/*void C_ZN11QWebChannelD2Ev(void *this_)*/ {
  delete (QWebChannel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebchannel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
