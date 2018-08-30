//  header block begin
// /usr/include/qt/QtCore/qstringbuilder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstringbuilder.h>
#include <QtCore>
#include "callback_inherit.h"

// QAbstractConcatenable is pure virtual: true
// QAbstractConcatenable has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQAbstractConcatenable_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQAbstractConcatenable_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQAbstractConcatenable_t qt_meta_stringdata_MyQAbstractConcatenable = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQAbstractConcatenable"
  },
  "MyQAbstractConcatenable"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQAbstractConcatenable[] = {
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
class Q_DECL_EXPORT MyQAbstractConcatenable : public QAbstractConcatenable {
public:
  virtual ~MyQAbstractConcatenable() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN21QAbstractConcatenableD2Ev(void *this_) {
  delete (QAbstractConcatenable*)(this_);
}
//  main block end
