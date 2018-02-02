//  header block begin
// /usr/include/qt/QtCore/qhashfunctions.h
#include <qhashfunctions.h>
#include <QtCore>

// QHashCombineCommutative is pure virtual: false
// QHashCombineCommutative has virtual projected: false
//  header block end

//  main block begin

class MyQHashCombineCommutative : public QtPrivate::QHashCombineCommutative {
public:
  virtual ~MyQHashCombineCommutative() {}
};


extern "C"
void C_ZN23QHashCombineCommutativeD2Ev(void *this_) {
  delete (QtPrivate::QHashCombineCommutative*)(this_);
}
//  main block end
