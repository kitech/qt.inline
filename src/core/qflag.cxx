//  header block begin
// /usr/include/qt/QtCore/qflags.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qflags.h>
#include <QtCore>
#include "callback_inherit.h"

// QFlag is pure virtual: false
// QFlag has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFlag_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFlag_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFlag_t qt_meta_stringdata_MyQFlag = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQFlag"
  },
  "MyQFlag"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFlag[] = {
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
class Q_DECL_EXPORT MyQFlag : public QFlag {
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
// since 5.3
// /usr/include/qt/QtCore/qflags.h:68
// [-2] void QFlag(uint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN5QFlagC2Ej(uint ai) {
  return  new QFlag(ai);
}
#endif // QT_VERSION >= 0x050300

// Public inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qflags.h:69
// [-2] void QFlag(short)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN5QFlagC2Es(short ai) {
  return  new QFlag(ai);
}
#endif // QT_VERSION >= 0x050300

// Public inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qflags.h:70
// [-2] void QFlag(ushort)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
void* C_ZN5QFlagC2Et(ushort ai) {
  return  new QFlag(ai);
}
#endif // QT_VERSION >= 0x050300


extern "C" Q_DECL_EXPORT
void C_ZN5QFlagD2Ev(void *this_) {
  delete (QFlag*)(this_);
}
//  main block end
