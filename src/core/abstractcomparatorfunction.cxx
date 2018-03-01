//  header block begin
// /usr/include/qt/QtCore/qmetatype.h
#ifndef protected
#define protected public
#endif
#include <qmetatype.h>
#include <QtCore>
#include "callback_inherit.h"

// AbstractComparatorFunction is pure virtual: false
// AbstractComparatorFunction has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyAbstractComparatorFunction : public QtPrivate::AbstractComparatorFunction {
public:
  virtual ~MyAbstractComparatorFunction() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN26AbstractComparatorFunctionD2Ev(void *this_) {
  delete (QtPrivate::AbstractComparatorFunction*)(this_);
}
//  main block end
