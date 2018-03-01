//  header block begin
// /usr/include/qt/QtCore/qarraydata.h
#ifndef protected
#define protected public
#endif
#include <qarraydata.h>
#include <QtCore>
#include "callback_inherit.h"

// QContainerImplHelper is pure virtual: false
// QContainerImplHelper has virtual projected: false
//  header block end

//  main block begin

class MyQContainerImplHelper : public QtPrivate::QContainerImplHelper {
public:
  virtual ~MyQContainerImplHelper() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qarraydata.h:373
// [4] QtPrivate::QContainerImplHelper::CutResult mid(int, int *, int *)
extern "C" Q_DECL_EXPORT
QtPrivate::QContainerImplHelper::CutResult C_ZN9QtPrivate20QContainerImplHelper3midEiPiS1_(int originalLength, int * position, int * length) {
  return (QtPrivate::QContainerImplHelper::CutResult)QtPrivate::QContainerImplHelper::mid(originalLength, position, length);
}

extern "C" Q_DECL_EXPORT
void C_ZN20QContainerImplHelperD2Ev(void *this_) {
  delete (QtPrivate::QContainerImplHelper*)(this_);
}
//  main block end
