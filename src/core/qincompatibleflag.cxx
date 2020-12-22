//  header block begin

// /usr/include/qt/QtCore/qflags.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qflags.h>
#include <QtCore>
#include "callback_inherit.h"

// QIncompatibleFlag is pure virtual: false false
// QIncompatibleFlag has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQIncompatibleFlag_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQIncompatibleFlag_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQIncompatibleFlag_t qt_meta_stringdata_MyQIncompatibleFlag = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQIncompatibleFlag"
  },
  "MyQIncompatibleFlag"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQIncompatibleFlag[] = {
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
class Q_DECL_EXPORT MyQIncompatibleFlag : public QIncompatibleFlag {
public:
  virtual ~MyQIncompatibleFlag() {}
// void QIncompatibleFlag(int)
MyQIncompatibleFlag(int i) : QIncompatibleFlag(i) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qincompatibleflag(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qflags.h:78
// [-2] void QIncompatibleFlag(int) 
// (12)qm1089776055 (26)_ZN17QIncompatibleFlagC2Ei
/*void* qm1089776055(int i)*/{
  int i = *(int*)this_;
  this_ =  new QIncompatibleFlag(i);
  this_ =  new MyQIncompatibleFlag(i);
}


/*void C_ZN17QIncompatibleFlagD2Ev(void *this_)*/ {
  delete (QIncompatibleFlag*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qincompatibleflag
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
