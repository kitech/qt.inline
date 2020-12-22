//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginecontextmenudata.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineContextMenuData is pure virtual: false false
// QWebEngineContextMenuData has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineContextMenuData_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineContextMenuData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineContextMenuData_t qt_meta_stringdata_MyQWebEngineContextMenuData = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQWebEngineContextMenuData"
  },
  "MyQWebEngineContextMenuData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineContextMenuData[] = {
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
class Q_DECL_EXPORT MyQWebEngineContextMenuData : public QWebEngineContextMenuData {
public:
  virtual ~MyQWebEngineContextMenuData() {}
// void QWebEngineContextMenuData()
MyQWebEngineContextMenuData() : QWebEngineContextMenuData() {}
// void QWebEngineContextMenuData(const QWebEngineContextMenuData &)
MyQWebEngineContextMenuData(const QWebEngineContextMenuData & other) : QWebEngineContextMenuData(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginecontextmenudata(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:58
// [-2] void QWebEngineContextMenuData() 
// (12)qm2498260231 (34)_ZN25QWebEngineContextMenuDataC2Ev
/*void* qm2498260231()*/{
  ;
  this_ =  new QWebEngineContextMenuData();
  this_ =  new MyQWebEngineContextMenuData();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginecontextmenudata.h:59
// [-2] void QWebEngineContextMenuData(const QWebEngineContextMenuData &) 
// (12)qm3176245273 (37)_ZN25QWebEngineContextMenuDataC2ERKS_
/*void* qm3176245273(const QWebEngineContextMenuData & other)*/{
  const QWebEngineContextMenuData & other = *(const QWebEngineContextMenuData *)this_;
  this_ =  new QWebEngineContextMenuData(other);
  this_ =  new MyQWebEngineContextMenuData(other);
}


/*void C_ZN25QWebEngineContextMenuDataD2Ev(void *this_)*/ {
  delete (QWebEngineContextMenuData*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginecontextmenudata
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
