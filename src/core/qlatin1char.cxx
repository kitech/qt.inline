//  header block begin
// /usr/include/qt/QtCore/qchar.h
#include <qchar.h>
#include <QtCore>

// QLatin1Char is pure virtual: false
//  header block end

//  main block begin

class MyQLatin1Char : public QLatin1Char {
public:
MyQLatin1Char(char c) : QLatin1Char(c) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:53
// [-2] void QLatin1Char(char)
extern "C"
void* C_ZN11QLatin1CharC1Ec(char c) {
  (MyQLatin1Char*)(0);
  return  new MyQLatin1Char(c);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:54
// [1] char toLatin1()
extern "C"
char C_ZNK11QLatin1Char8toLatin1Ev(void *this_) {
  return (char)((QLatin1Char*)this_)->toLatin1();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:55
// [2] ushort unicode()
extern "C"
ushort C_ZNK11QLatin1Char7unicodeEv(void *this_) {
  return (ushort)((QLatin1Char*)this_)->unicode();
}
//  main block end
