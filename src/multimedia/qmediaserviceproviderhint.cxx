//  header block begin

// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceProviderHint is pure virtual: false false
// QMediaServiceProviderHint has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaServiceProviderHint_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceProviderHint_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceProviderHint_t qt_meta_stringdata_MyQMediaServiceProviderHint = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQMediaServiceProviderHint"
  },
  "MyQMediaServiceProviderHint"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceProviderHint[] = {
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
class Q_DECL_EXPORT MyQMediaServiceProviderHint : public QMediaServiceProviderHint {
public:
  virtual ~MyQMediaServiceProviderHint() {}
// void QMediaServiceProviderHint()
MyQMediaServiceProviderHint() : QMediaServiceProviderHint() {}
// void QMediaServiceProviderHint(const QString &, const QStringList &)
MyQMediaServiceProviderHint(const QString & mimeType, const QStringList & codecs) : QMediaServiceProviderHint(mimeType, codecs) {}
// void QMediaServiceProviderHint(const QByteArray &)
MyQMediaServiceProviderHint(const QByteArray & device) : QMediaServiceProviderHint(device) {}
// void QMediaServiceProviderHint(QCamera::Position)
MyQMediaServiceProviderHint(QCamera::Position position) : QMediaServiceProviderHint(position) {}
// void QMediaServiceProviderHint(QMediaServiceProviderHint::Features)
MyQMediaServiceProviderHint(QFlags<QMediaServiceProviderHint::Feature> features) : QMediaServiceProviderHint(features) {}
// void QMediaServiceProviderHint(const QMediaServiceProviderHint &)
MyQMediaServiceProviderHint(const QMediaServiceProviderHint & other) : QMediaServiceProviderHint(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaserviceproviderhint(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN25QMediaServiceProviderHintD2Ev(void *this_)*/ {
  delete (QMediaServiceProviderHint*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaserviceproviderhint
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
