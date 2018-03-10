//  header block begin
// /usr/include/qt/QtCore/qchar.h
#ifndef protected
#define protected public
#endif
#include <qchar.h>
#include <QtCore>
#include "callback_inherit.h"

// QLatin1Char is pure virtual: false
// QLatin1Char has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQLatin1Char : public QLatin1Char {
public:
  virtual ~MyQLatin1Char() {}
// void QLatin1Char(char)
MyQLatin1Char(char c) : QLatin1Char(c) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:53
// [-2] void QLatin1Char(char)
extern "C" Q_DECL_EXPORT
void* C_ZN11QLatin1CharC2Ec(char c) {
  return  new QLatin1Char(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:54
// [1] char toLatin1()
extern "C" Q_DECL_EXPORT
char C_ZNK11QLatin1Char8toLatin1Ev(void *this_) {
  return (char)((QLatin1Char*)this_)->toLatin1();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:55
// [2] ushort unicode()
extern "C" Q_DECL_EXPORT
ushort C_ZNK11QLatin1Char7unicodeEv(void *this_) {
  return (ushort)((QLatin1Char*)this_)->unicode();
}


extern "C" Q_DECL_EXPORT
void C_ZN11QLatin1CharD2Ev(void *this_) {
  delete (QLatin1Char*)(this_);
}
//  main block end
