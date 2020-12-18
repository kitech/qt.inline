//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginescriptcollection.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineScriptCollection is pure virtual: false false
// QWebEngineScriptCollection has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineScriptCollection_t {
  QByteArrayData data[1];
  char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineScriptCollection_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineScriptCollection_t qt_meta_stringdata_MyQWebEngineScriptCollection = {
   {
  QT_MOC_LITERAL(0, 0, 28), // "MyQWebEngineScriptCollection"
  },
  "MyQWebEngineScriptCollection"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineScriptCollection[] = {
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
class Q_DECL_EXPORT MyQWebEngineScriptCollection : public QWebEngineScriptCollection {
public:
  virtual ~MyQWebEngineScriptCollection() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginescriptcollection(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:56
// [1] bool isEmpty() const
// (11)qm765006046 (42)_ZNK26QWebEngineScriptCollection7isEmptyEv
//static
/*void qm765006046()*/ {
  ;
  (void) ((QWebEngineScriptCollection*)this_)->isEmpty();
   auto xptr = (bool (QWebEngineScriptCollection::*)() const ) &QWebEngineScriptCollection::isEmpty;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescriptcollection.h:58
// [4] int size() const
// (12)qm4206576209 (39)_ZNK26QWebEngineScriptCollection4sizeEv
//static
/*void qm4206576209()*/ {
  ;
  (void) ((QWebEngineScriptCollection*)this_)->size();
   auto xptr = (int (QWebEngineScriptCollection::*)() const ) &QWebEngineScriptCollection::size;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN26QWebEngineScriptCollectionD2Ev(void *this_)*/ {
  delete (QWebEngineScriptCollection*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginescriptcollection
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
