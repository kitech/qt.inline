//  header block begin

// /usr/include/qt/QtNetwork/qtcpsocket.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtcpsocket.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QTcpSocket is pure virtual: false false
// QTcpSocket has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtcpsocket(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:54
// [8] QString tr(const char *, const char *, int) 
// (10)qm52369831 (26)_ZN10QTcpSocket2trEPKcS1_i
//static
/*void qm52369831(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QTcpSocket::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QTcpSocket::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qtcpsocket.h:56
// [-2] void QTcpSocket(QObject *) 
// (11)qm436325764 (27)_ZN10QTcpSocketC2EP7QObject
/*void* qm436325764(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QTcpSocket(parent);
}


/*void C_ZN10QTcpSocketD2Ev(void *this_)*/ {
  delete (QTcpSocket*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtcpsocket
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
