//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#ifndef protected
#define protected public
#endif
#include <qmetatype.h>
#include <QtCore>
#include "callback_inherit.h"

// AbstractDebugStreamFunction is pure virtual: false
// AbstractDebugStreamFunction has virtual projected: false
//  header block end

//  main block begin

class MyAbstractDebugStreamFunction : public QtPrivate::AbstractDebugStreamFunction {
public:
  virtual ~MyAbstractDebugStreamFunction() {}
};


extern "C"
void C_ZN27AbstractDebugStreamFunctionD2Ev(void *this_) {
  delete (QtPrivate::AbstractDebugStreamFunction*)(this_);
}
//  main block end
