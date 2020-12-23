//  header block begin

// /usr/include/qt/QtNetwork/qudpsocket.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qudpsocket.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QUdpSocket is pure virtual: false false
// QUdpSocket has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qudpsocket(void* this_) {
  uint64_t fnptrsumval = 0;

// Public static inline Indirect Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:58
// [8] QString tr(const char *, const char *, int) 
// (11)qm742828458 (26)_ZN10QUdpSocket2trEPKcS1_i
//static
/*void qm742828458(const char * s, const char * c, int n)*/ {
  const char * s = *(const char **)this_; const char * c = *(const char **)this_; int n = *(int*)this_;
  (void) QUdpSocket::tr(s, c, n);
   auto xptr = (QString (*)(char const*, char const*, int) ) &QUdpSocket::tr;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:60
// [-2] void QUdpSocket(QObject *) 
// (12)qm1688201353 (27)_ZN10QUdpSocketC2EP7QObject
/*void* qm1688201353(QObject * parent)*/{
  QObject * parent = *(QObject **)this_;
  this_ =  new QUdpSocket(parent);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qudpsocket.h:82
// [8] qint64 writeDatagram(const QByteArray &, const QHostAddress &, quint16) 
// (11)qm669288394 (62)_ZN10QUdpSocket13writeDatagramERK10QByteArrayRK12QHostAddresst
//static
/*void qm669288394(const QByteArray & datagram, const QHostAddress & host, unsigned short port)*/ {
  const QByteArray & datagram = *(const QByteArray *)this_; const QHostAddress & host = *(const QHostAddress *)this_; unsigned short port = *(unsigned short*)this_;
  (void) ((QUdpSocket*)this_)->writeDatagram(datagram, host, port);
   auto xptr = (long long (QUdpSocket::*)(QByteArray const&, QHostAddress const&, unsigned short) ) &QUdpSocket::writeDatagram;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN10QUdpSocketD2Ev(void *this_)*/ {
  delete (QUdpSocket*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qudpsocket
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
