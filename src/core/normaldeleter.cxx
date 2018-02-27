//  header block begin
// /usr/include/qt/QtCore/qsharedpointer_impl.h
#ifndef protected
#define protected public
#endif
#include <qsharedpointer.h>
#include <QtCore>
#include "callback_inherit.h"

// NormalDeleter is pure virtual: false
// NormalDeleter has virtual projected: false
//  header block end

//  main block begin

class MyNormalDeleter : public QtSharedPointer::NormalDeleter {
public:
  virtual ~MyNormalDeleter() {}
};


extern "C"
void C_ZN13NormalDeleterD2Ev(void *this_) {
  delete (QtSharedPointer::NormalDeleter*)(this_);
}
//  main block end
