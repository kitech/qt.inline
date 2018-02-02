//  header block begin
// /usr/include/qt/QtCore/qflags.h
#include <qflags.h>
#include <QtCore>

// QIncompatibleFlag is pure virtual: false
// QIncompatibleFlag has virtual projected: false
//  header block end

//  main block begin

class MyQIncompatibleFlag : public QIncompatibleFlag {
public:
  virtual ~MyQIncompatibleFlag() {}
// void QIncompatibleFlag(int)
MyQIncompatibleFlag(int i) : QIncompatibleFlag(i) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:80
// [-2] void QIncompatibleFlag(int)
extern "C"
void* C_ZN17QIncompatibleFlagC2Ei(int i) {
  return  new QIncompatibleFlag(i);
}

extern "C"
void C_ZN17QIncompatibleFlagD2Ev(void *this_) {
  delete (QIncompatibleFlag*)(this_);
}
//  main block end
