//  header block begin

// /usr/include/qt/QtCore/qbytearraymatcher.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbytearraymatcher.h>
#include <QtCore>
#include "callback_inherit.h"

// QStaticByteArrayMatcherBase is pure virtual: false
// QStaticByteArrayMatcherBase has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStaticByteArrayMatcherBase_t {
  QByteArrayData data[1];
  char stringdata0[30];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStaticByteArrayMatcherBase_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStaticByteArrayMatcherBase_t qt_meta_stringdata_MyQStaticByteArrayMatcherBase = {
   {
  QT_MOC_LITERAL(0, 0, 29), // "MyQStaticByteArrayMatcherBase"
  },
  "MyQStaticByteArrayMatcherBase"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStaticByteArrayMatcherBase[] = {
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
class Q_DECL_EXPORT MyQStaticByteArrayMatcherBase : public QStaticByteArrayMatcherBase {
public:
  virtual ~MyQStaticByteArrayMatcherBase() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN27QStaticByteArrayMatcherBaseD2Ev(void *this_) {
  delete (QStaticByteArrayMatcherBase*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
