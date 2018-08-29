//  header block begin
// /usr/include/qt/QtCore/qchar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qchar.h>
#include <QtCore>
#include "callback_inherit.h"

// QLatin1Char is pure virtual: false
// QLatin1Char has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQLatin1Char_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQLatin1Char_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQLatin1Char_t qt_meta_stringdata_MyQLatin1Char = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQLatin1Char"
  },
  "MyQLatin1Char"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQLatin1Char[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
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
