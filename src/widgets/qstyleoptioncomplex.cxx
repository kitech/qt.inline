//  header block begin
// /usr/include/qt/QtWidgets/qstyleoption.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstyleoption.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QStyleOptionComplex is pure virtual: false
// QStyleOptionComplex has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQStyleOptionComplex_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStyleOptionComplex_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStyleOptionComplex_t qt_meta_stringdata_MyQStyleOptionComplex = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQStyleOptionComplex"
  },
  "MyQStyleOptionComplex"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStyleOptionComplex[] = {
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
class Q_DECL_EXPORT MyQStyleOptionComplex : public QStyleOptionComplex {
public:
  virtual ~MyQStyleOptionComplex() {}
// void QStyleOptionComplex(int, int)
MyQStyleOptionComplex(int version, int type_) : QStyleOptionComplex(version, type_) {}
// void QStyleOptionComplex(const QStyleOptionComplex &)
MyQStyleOptionComplex(const QStyleOptionComplex & other) : QStyleOptionComplex(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:509
// [-2] void QStyleOptionComplex(int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionComplexC2Eii(int version, int type_) {
  return  new QStyleOptionComplex(version, type_);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:510
// [-2] void QStyleOptionComplex(const QStyleOptionComplex &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QStyleOptionComplexC2ERKS_(QStyleOptionComplex* other) {
  return  new QStyleOptionComplex(*other);
}


extern "C" Q_DECL_EXPORT
void C_ZN19QStyleOptionComplexD2Ev(void *this_) {
  delete (QStyleOptionComplex*)(this_);
}
//  main block end
