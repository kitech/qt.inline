//  header block begin

// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebchannelabstracttransport.h>
#include <QtWebChannel>
#include "callback_inherit.h"

// QWebChannelAbstractTransport is pure virtual: true true
// QWebChannelAbstractTransport has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebchannelabstracttransport(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtWebChannel/qwebchannelabstracttransport.h:51
// [8] QString tr(const char *, const char *, int) 
// (12)qm3377211050 (44)_ZN28QWebChannelAbstractTransport2trEPKcS1_i
//static
/*void qm3377211050(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QWebChannelAbstractTransport::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QWebChannelAbstractTransport::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN28QWebChannelAbstractTransportD2Ev(void *this_)*/ {
  delete (QWebChannelAbstractTransport*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebchannelabstracttransport
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
