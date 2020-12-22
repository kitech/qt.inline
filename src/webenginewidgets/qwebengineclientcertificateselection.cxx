//  header block begin

// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qwebengineclientcertificateselection.h>
#include <QtWebEngineWidgets>
#include "callback_inherit.h"

// QWebEngineClientCertificateSelection is pure virtual: false false
// QWebEngineClientCertificateSelection has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQWebEngineClientCertificateSelection_t {
  QByteArrayData data[1];
  char stringdata0[39];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQWebEngineClientCertificateSelection_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQWebEngineClientCertificateSelection_t qt_meta_stringdata_MyQWebEngineClientCertificateSelection = {
   {
  QT_MOC_LITERAL(0, 0, 38), // "MyQWebEngineClientCertificateSelection"
  },
  "MyQWebEngineClientCertificateSelection"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQWebEngineClientCertificateSelection[] = {
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
class Q_DECL_EXPORT MyQWebEngineClientCertificateSelection : public QWebEngineClientCertificateSelection {
public:
  virtual ~MyQWebEngineClientCertificateSelection() {}
// void QWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection &)
MyQWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection & arg0) : QWebEngineClientCertificateSelection(arg0) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qwebengineclientcertificateselection(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebengineclientcertificateselection.h:57
// [-2] void QWebEngineClientCertificateSelection(const QWebEngineClientCertificateSelection &) 
// (11)qm767051356 (48)_ZN36QWebEngineClientCertificateSelectionC2ERKS_
/*void* qm767051356(const QWebEngineClientCertificateSelection & arg0)*/{
  const QWebEngineClientCertificateSelection & arg0 = *(const QWebEngineClientCertificateSelection *)this_;
  this_ =  new QWebEngineClientCertificateSelection(arg0);
  this_ =  new MyQWebEngineClientCertificateSelection(arg0);
}


/*void C_ZN36QWebEngineClientCertificateSelectionD2Ev(void *this_)*/ {
  delete (QWebEngineClientCertificateSelection*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qwebengineclientcertificateselection
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
