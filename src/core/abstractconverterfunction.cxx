//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#include <qmetatype.h>
#include <QtCore>
#include "callback_inherit.h"

// AbstractConverterFunction is pure virtual: false
// AbstractConverterFunction has virtual projected: false
//  header block end

//  main block begin

class MyAbstractConverterFunction : public QtPrivate::AbstractConverterFunction {
public:
  virtual ~MyAbstractConverterFunction() {}
};


extern "C"
void C_ZN25AbstractConverterFunctionD2Ev(void *this_) {
  delete (QtPrivate::AbstractConverterFunction*)(this_);
}
//  main block end