//  header block begin
// /usr/include/qt/QtCore/qflags.h
#ifndef protected
#define protected public
#endif
#include <qflags.h>
#include <QtCore>
#include "callback_inherit.h"

// QIncompatibleFlag is pure virtual: false
// QIncompatibleFlag has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQIncompatibleFlag : public QIncompatibleFlag {
public:
  virtual ~MyQIncompatibleFlag() {}
// void QIncompatibleFlag(int)
MyQIncompatibleFlag(int i) : QIncompatibleFlag(i) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:80
// [-2] void QIncompatibleFlag(int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QIncompatibleFlagC2Ei(int i) {
  return  new QIncompatibleFlag(i);
}

extern "C" Q_DECL_EXPORT
void C_ZN17QIncompatibleFlagD2Ev(void *this_) {
  delete (QIncompatibleFlag*)(this_);
}
//  main block end
