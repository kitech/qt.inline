//  header block begin

// /usr/include/qt/QtWidgets/qwidget.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwidget.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWidgetData is pure virtual: false
// QWidgetData has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWidgetData_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWidgetData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWidgetData_t qt_meta_stringdata_MyQWidgetData = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQWidgetData"
  },
  "MyQWidgetData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWidgetData[] = {
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
class Q_DECL_EXPORT MyQWidgetData : public QWidgetData {
public:
  virtual ~MyQWidgetData() {}
};


extern "C" Q_DECL_EXPORT
void C_ZN11QWidgetDataD2Ev(void *this_) {
  delete (QWidgetData*)(this_);
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
