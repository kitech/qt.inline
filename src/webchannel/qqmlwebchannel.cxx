//  header block begin

// /usr/include/qt/QtWebChannel/qqmlwebchannel.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qqmlwebchannel.h>
#include <QtWebChannel>
#include "callback_inherit.h"

// QQmlWebChannel is pure virtual: false false
// QQmlWebChannel has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qqmlwebchannel(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:55
// [8] QString tr(const char *, const char *, int) 
// (11)qm705966674 (30)_ZN14QQmlWebChannel2trEPKcS1_i
//static
/*void qm705966674(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QQmlWebChannel::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QQmlWebChannel::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qqmlwebchannel.h:62
// [-2] void QQmlWebChannel(QObject *) 
// (12)qm3623862332 (31)_ZN14QQmlWebChannelC2EP7QObject
/*void* qm3623862332(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QQmlWebChannel(parent);
}


/*void C_ZN14QQmlWebChannelD2Ev(void *this_)*/ {
  delete (QQmlWebChannel*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qqmlwebchannel
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
