//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#include <qmetatype.h>
#include <QtCore>

// AbstractComparatorFunction is pure virtual: false
// AbstractComparatorFunction has virtual projected: false
//  header block end

//  main block begin

class MyAbstractComparatorFunction : public QtPrivate::AbstractComparatorFunction {
public:
  virtual ~MyAbstractComparatorFunction() {}
};


extern "C"
void C_ZN26AbstractComparatorFunctionD2Ev(void *this_) {
  delete (QtPrivate::AbstractComparatorFunction*)(this_);
}
//  main block end
