//  header block begin
// /usr/include/qt/QtCore/qflags.h
#ifndef protected
#define protected public
#endif
#include <qflags.h>
#include <QtCore>
#include "callback_inherit.h"

// QFlag is pure virtual: false
// QFlag has virtual projected: false
//  header block end

//  main block begin

class MyQFlag : public QFlag {
public:
  virtual ~MyQFlag() {}
// void QFlag(int)
MyQFlag(int ai) : QFlag(ai) {}
// void QFlag(uint)
MyQFlag(uint ai) : QFlag(ai) {}
// void QFlag(short)
MyQFlag(short ai) : QFlag(ai) {}
// void QFlag(ushort)
MyQFlag(ushort ai) : QFlag(ai) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:57
// [-2] void QFlag(int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFlagC2Ei(int ai) {
  return  new QFlag(ai);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:68
// [-2] void QFlag(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFlagC2Ej(uint ai) {
  return  new QFlag(ai);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:69
// [-2] void QFlag(short)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFlagC2Es(short ai) {
  return  new QFlag(ai);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:70
// [-2] void QFlag(ushort)
extern "C" Q_DECL_EXPORT
void* C_ZN5QFlagC2Et(ushort ai) {
  return  new QFlag(ai);
}

extern "C" Q_DECL_EXPORT
void C_ZN5QFlagD2Ev(void *this_) {
  delete (QFlag*)(this_);
}
//  main block end
