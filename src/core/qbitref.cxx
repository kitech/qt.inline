//  header block begin
// /usr/include/qt/QtCore/qbitarray.h
#include <qbitarray.h>
#include <QtCore>

// QBitRef is pure virtual: false
// QBitRef has virtual projected: false
//  header block end

//  main block begin

class MyQBitRef : public QBitRef {
public:
  virtual ~MyQBitRef() {}
};


extern "C"
void C_ZN7QBitRefD2Ev(void *this_) {
  delete (QBitRef*)(this_);
}
//  main block end
