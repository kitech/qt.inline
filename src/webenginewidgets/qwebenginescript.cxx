//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebenginescript.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineScript is pure virtual: false false
// QWebEngineScript has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineScript_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineScript_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineScript_t qt_meta_stringdata_MyQWebEngineScript = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQWebEngineScript"
  },
  "MyQWebEngineScript"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineScript[] = {
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
class Q_DECL_EXPORT MyQWebEngineScript : public QWebEngineScript {
public:
  virtual ~MyQWebEngineScript() {}
// void QWebEngineScript()
MyQWebEngineScript() : QWebEngineScript() {}
// void QWebEngineScript(const QWebEngineScript &)
MyQWebEngineScript(const QWebEngineScript & other) : QWebEngineScript(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebenginescript(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:92
// [1] bool operator!=(const QWebEngineScript &) const
// (12)qm3478098857 (29)_ZNK16QWebEngineScriptneERKS_
//static
/*void qm3478098857(const QWebEngineScript & other)*/ {
  const QWebEngineScript & other = *(const QWebEngineScript *)this_;
  (void) ((QWebEngineScript*)this_)->operator!=(other);
  // auto xptr = (bool (QWebEngineScript::*)(QWebEngineScript const&) const ) &QWebEngineScript::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:94
// [-2] void swap(QWebEngineScript &) 
// (12)qm3128756314 (30)_ZN16QWebEngineScript4swapERS_
//static
/*void qm3128756314(QWebEngineScript & other)*/ {
  QWebEngineScript & other = *(QWebEngineScript *)this_;
  (void) ((QWebEngineScript*)this_)->swap(other);
   auto xptr = (void (QWebEngineScript::*)(QWebEngineScript&) ) &QWebEngineScript::swap;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN16QWebEngineScriptD2Ev(void *this_)*/ {
  delete (QWebEngineScript*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebenginescript
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
