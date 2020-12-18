//  header block begin

// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineurlscheme.h>
#include <QtWebEngineCore>
#include "callback_inherit.h"

// QWebEngineUrlScheme is pure virtual: false false
// QWebEngineUrlScheme has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineUrlScheme_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineUrlScheme_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineUrlScheme_t qt_meta_stringdata_MyQWebEngineUrlScheme = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQWebEngineUrlScheme"
  },
  "MyQWebEngineUrlScheme"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineUrlScheme[] = {
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
class Q_DECL_EXPORT MyQWebEngineUrlScheme : public QWebEngineUrlScheme {
public:
  virtual ~MyQWebEngineUrlScheme() {}
// void QWebEngineUrlScheme()
MyQWebEngineUrlScheme() : QWebEngineUrlScheme() {}
// void QWebEngineUrlScheme(const QByteArray &)
MyQWebEngineUrlScheme(const QByteArray & name) : QWebEngineUrlScheme(name) {}
// void QWebEngineUrlScheme(const QWebEngineUrlScheme &)
MyQWebEngineUrlScheme(const QWebEngineUrlScheme & that) : QWebEngineUrlScheme(that) {}
// void QWebEngineUrlScheme(QWebEngineUrlScheme &&)
MyQWebEngineUrlScheme(QWebEngineUrlScheme && that) : QWebEngineUrlScheme(that) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebengineurlscheme(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineCore/qwebengineurlscheme.h:96
// [1] bool operator!=(const QWebEngineUrlScheme &) const
// (12)qm2276525749 (32)_ZNK19QWebEngineUrlSchemeneERKS_
//static
/*void qm2276525749(const QWebEngineUrlScheme & that)*/ {
  const QWebEngineUrlScheme & that = *(const QWebEngineUrlScheme *)this_;
  (void) ((QWebEngineUrlScheme*)this_)->operator!=(that);
  // auto xptr = (bool (QWebEngineUrlScheme::*)(QWebEngineUrlScheme const&) const ) &QWebEngineUrlScheme::operator!=;
  // fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN19QWebEngineUrlSchemeD2Ev(void *this_)*/ {
  delete (QWebEngineUrlScheme*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebengineurlscheme
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
