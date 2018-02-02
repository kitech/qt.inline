//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#include <qmetatype.h>
#include <QtCore>

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
