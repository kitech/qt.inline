//  header block begin

// /usr/include/qt/QtCore/qflags.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qflags.h>
#include <QtCore>
#include "callback_inherit.h"

// QFlag is pure virtual: false false
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
MyQFlag(int value) : QFlag(value) {}
// void QFlag(uint)
MyQFlag(uint value) : QFlag(value) {}
// void QFlag(short)
MyQFlag(short value) : QFlag(value) {}
// void QFlag(ushort)
MyQFlag(ushort value) : QFlag(value) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qflag(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:55
// [-2] void QFlag(int) 
// (12)qm3296659139 (13)_ZN5QFlagC2Ei
/*void* qm3296659139(int value)*/{
  int value = *(int*)this_;
  this_ =  new QFlag(value);
  this_ =  new MyQFlag(value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:66
// [-2] void QFlag(uint) 
// (12)qm1568036729 (13)_ZN5QFlagC2Ej
/*void* qm1568036729(unsigned int value)*/{
  unsigned int value = *(unsigned int*)this_;
  this_ =  new QFlag(value);
  this_ =  new MyQFlag(value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:67
// [-2] void QFlag(short) 
// (11)qm958267321 (13)_ZN5QFlagC2Es
/*void* qm958267321(short value)*/{
  short value = *(short*)this_;
  this_ =  new QFlag(value);
  this_ =  new MyQFlag(value);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:68
// [-2] void QFlag(ushort) 
// (12)qm2809752090 (13)_ZN5QFlagC2Et
/*void* qm2809752090(unsigned short value)*/{
  unsigned short value = *(unsigned short*)this_;
  this_ =  new QFlag(value);
  this_ =  new MyQFlag(value);
}


/*void C_ZN5QFlagD2Ev(void *this_)*/ {
  delete (QFlag*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qflag
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
