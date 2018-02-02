//  header block begin
// /usr/include/qt/QtCore/qbytearray.h
#include <qbytearray.h>
#include <QtCore>

// QByteArrayDataPtr is pure virtual: false
// QByteArrayDataPtr has virtual projected: false
//  header block end

//  main block begin

class MyQByteArrayDataPtr : public QByteArrayDataPtr {
public:
  virtual ~MyQByteArrayDataPtr() {}
};


extern "C"
void C_ZN17QByteArrayDataPtrD2Ev(void *this_) {
  delete (QByteArrayDataPtr*)(this_);
}
//  main block end
