//  header block begin
// /usr/include/qt/QtGui/qbrush.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qbrush.h>
#include <QtGui>
#include "callback_inherit.h"

// QBrushData is pure virtual: false
// QBrushData has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQBrushData_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQBrushData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQBrushData_t qt_meta_stringdata_MyQBrushData = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQBrushData"
  },
  "MyQBrushData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQBrushData[] = {
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
class Q_DECL_EXPORT MyQBrushData : public QBrushData {
public:
  virtual ~MyQBrushData() {}
};

extern "C" Q_DECL_EXPORT
void C_ZN10QBrushDataD2Ev(void *this_) {
  delete (QBrushData*)(this_);
}
//  main block end
