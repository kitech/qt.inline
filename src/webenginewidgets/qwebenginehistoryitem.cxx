//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginehistory.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineHistoryItem is pure virtual: false false
// QWebEngineHistoryItem has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineHistoryItem_t {
  QByteArrayData data[1];
  char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineHistoryItem_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineHistoryItem_t qt_meta_stringdata_MyQWebEngineHistoryItem = {
   {
  QT_MOC_LITERAL(0, 0, 23), // "MyQWebEngineHistoryItem"
  },
  "MyQWebEngineHistoryItem"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineHistoryItem[] = {
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
class Q_DECL_EXPORT MyQWebEngineHistoryItem : public QWebEngineHistoryItem {
public:
  virtual ~MyQWebEngineHistoryItem() {}
// void QWebEngineHistoryItem(const QWebEngineHistoryItem &)
MyQWebEngineHistoryItem(const QWebEngineHistoryItem & other) : QWebEngineHistoryItem(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginehistoryitem(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:59
// [-2] void QWebEngineHistoryItem(const QWebEngineHistoryItem &) 
// (12)qm4233152871 (33)_ZN21QWebEngineHistoryItemC2ERKS_
/*void* qm4233152871(const QWebEngineHistoryItem & other)*/{
  const QWebEngineHistoryItem & other = *(const QWebEngineHistoryItem *)this_;
  this_ =  new QWebEngineHistoryItem(other);
  this_ =  new MyQWebEngineHistoryItem(other);
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:72
// [-2] void swap(QWebEngineHistoryItem &) 
// (12)qm2216924345 (35)_ZN21QWebEngineHistoryItem4swapERS_
//static
/*void qm2216924345(QWebEngineHistoryItem & other)*/ {
  QWebEngineHistoryItem & other = *(QWebEngineHistoryItem *)this_;
  (void) ((QWebEngineHistoryItem*)this_)->swap(other);
   auto xptr = (void (QWebEngineHistoryItem::*)(QWebEngineHistoryItem&) ) &QWebEngineHistoryItem::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN21QWebEngineHistoryItemD2Ev(void *this_)*/ {
  delete (QWebEngineHistoryItem*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginehistoryitem
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
