//  header block begin
// /usr/include/qt/QtCore/qbytearray.h
#ifndef protected
#define protected public
#endif
#include <qbytearray.h>
#include <QtCore>
#include "callback_inherit.h"

// QByteArrayDataPtr is pure virtual: false
// QByteArrayDataPtr has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQByteArrayDataPtr : public QByteArrayDataPtr {
public:
  virtual ~MyQByteArrayDataPtr() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN17QByteArrayDataPtrD2Ev(void *this_) {
  delete (QByteArrayDataPtr*)(this_);
}
//  main block end
