//  header block begin

#ifndef QT_MINIMAL
#include <QtNetwork/qtnetworkglobal.h>
#if QT_CONFIG(http)
// /usr/include/qt/QtNetwork/qhttp2configuration.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qhttp2configuration.h>
#include <QtNetwork>
#include "callback_inherit.h"

// QHttp2Configuration is pure virtual: false false
// QHttp2Configuration has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQHttp2Configuration_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQHttp2Configuration_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQHttp2Configuration_t qt_meta_stringdata_MyQHttp2Configuration = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQHttp2Configuration"
  },
  "MyQHttp2Configuration"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQHttp2Configuration[] = {
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
class Q_DECL_EXPORT MyQHttp2Configuration : public QHttp2Configuration {
public:
  virtual ~MyQHttp2Configuration() {}
// void QHttp2Configuration()
MyQHttp2Configuration() : QHttp2Configuration() {}
// void QHttp2Configuration(const QHttp2Configuration &)
MyQHttp2Configuration(const QHttp2Configuration & other) : QHttp2Configuration(other) {}
// void QHttp2Configuration(QHttp2Configuration &&)
MyQHttp2Configuration(QHttp2Configuration && other) : QHttp2Configuration(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qhttp2configuration(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN19QHttp2ConfigurationD2Ev(void *this_)*/ {
  delete (QHttp2Configuration*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qhttp2configuration
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(http)
#endif // #ifndef QT_MINIMAL
//  footer block end
