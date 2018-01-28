//  header block begin
// /usr/include/qt/QtCore/qflags.h
#include <qflags.h>
#include <QtCore>

// QIncompatibleFlag is pure virtual: false
//  header block end

//  main block begin

class MyQIncompatibleFlag : public QIncompatibleFlag {
public:
MyQIncompatibleFlag(int i) : QIncompatibleFlag(i) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:80
// [-2] void QIncompatibleFlag(int)
extern "C"
void* C_ZN17QIncompatibleFlagC1Ei(int i) {
  (MyQIncompatibleFlag*)(0);
  return  new MyQIncompatibleFlag(i);
}
//  main block end
