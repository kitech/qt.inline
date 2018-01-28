//  header block begin
// /usr/include/qt/QtCore/qflags.h
#include <qflags.h>
#include <QtCore>

// QFlag is pure virtual: false
//  header block end

//  main block begin

class MyQFlag : public QFlag {
public:
MyQFlag(int ai) : QFlag(ai) {}
MyQFlag(uint ai) : QFlag(ai) {}
MyQFlag(short ai) : QFlag(ai) {}
MyQFlag(ushort ai) : QFlag(ai) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:57
// [-2] void QFlag(int)
extern "C"
void* C_ZN5QFlagC1Ei(int ai) {
  (MyQFlag*)(0);
  return  new MyQFlag(ai);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:68
// [-2] void QFlag(uint)
extern "C"
void* C_ZN5QFlagC1Ej(uint ai) {
  (MyQFlag*)(0);
  return  new MyQFlag(ai);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:69
// [-2] void QFlag(short)
extern "C"
void* C_ZN5QFlagC1Es(short ai) {
  (MyQFlag*)(0);
  return  new MyQFlag(ai);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:70
// [-2] void QFlag(ushort)
extern "C"
void* C_ZN5QFlagC1Et(ushort ai) {
  (MyQFlag*)(0);
  return  new MyQFlag(ai);
}
//  main block end
