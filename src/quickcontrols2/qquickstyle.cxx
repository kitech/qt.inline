//  header block begin

// /usr/include/qt/QtQuickControls2/qquickstyle.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qquickstyle.h>
#include <QtQuickControls2>
#include "callback_inherit.h"

// QQuickStyle is pure virtual: false false
// QQuickStyle has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQQuickStyle_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQQuickStyle_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQQuickStyle_t qt_meta_stringdata_MyQQuickStyle = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQQuickStyle"
  },
  "MyQQuickStyle"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQQuickStyle[] = {
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
class Q_DECL_EXPORT MyQQuickStyle : public QQuickStyle {
public:
  virtual ~MyQQuickStyle() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qquickstyle(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN11QQuickStyleD2Ev(void *this_)*/ {
  delete (QQuickStyle*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qquickstyle
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
