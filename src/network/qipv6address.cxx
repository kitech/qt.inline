//  header block begin
// /usr/include/qt/QtNetwork/qhostaddress.h
#include <qhostaddress.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QIPv6Address is pure virtual: false
// QIPv6Address has virtual projected: false
//  header block end

//  main block begin

class MyQIPv6Address : public QIPv6Address {
public:
  virtual ~MyQIPv6Address() {}
};


extern "C"
void C_ZN12QIPv6AddressD2Ev(void *this_) {
  delete (QIPv6Address*)(this_);
}
//  main block end
