//  header block begin
// /usr/include/qt/QtCore/qbytearray.h
#include <qbytearray.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteRef is pure virtual: false
// QByteRef has virtual projected: false
//  header block end

//  main block begin

class MyQByteRef : public QByteRef {
public:
  virtual ~MyQByteRef() {}
};


extern "C"
void C_ZN8QByteRefD2Ev(void *this_) {
  delete (QByteRef*)(this_);
}
//  main block end
