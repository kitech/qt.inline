//  header block begin

#ifndef QT_MINIMAL
#include <QtCore/qglobal.h>
#if QT_CONFIG(textcodec)
// /usr/include/qt/QtCore/qtextcodec.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextcodec.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextEncoder is pure virtual: false false
// QTextEncoder has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextEncoder_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextEncoder_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextEncoder_t qt_meta_stringdata_MyQTextEncoder = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQTextEncoder"
  },
  "MyQTextEncoder"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextEncoder[] = {
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
class Q_DECL_EXPORT MyQTextEncoder : public QTextEncoder {
public:
  virtual ~MyQTextEncoder() {}
// void QTextEncoder(const QTextCodec *)
MyQTextEncoder(const QTextCodec * codec) : QTextEncoder(codec) {}
// void QTextEncoder(const QTextCodec *, QTextCodec::ConversionFlags)
MyQTextEncoder(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) : QTextEncoder(codec, flags) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextencoder(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:140
// [-2] void QTextEncoder(const QTextCodec *) 
// (12)qm1182899304 (34)_ZN12QTextEncoderC2EPK10QTextCodec
/*void* qm1182899304(const QTextCodec * codec)*/{
  const QTextCodec * codec = *(const QTextCodec **)this_;
  this_ =  new QTextEncoder(codec);
  this_ =  new MyQTextEncoder(codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:141
// [-2] void QTextEncoder(const QTextCodec *, QTextCodec::ConversionFlags) 
// (12)qm2442542204 (64)_ZN12QTextEncoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE
/*void* qm2442542204(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags)*/{
  const QTextCodec * codec = *(const QTextCodec **)this_; QFlags<QTextCodec::ConversionFlag> flags = *(QFlags<QTextCodec::ConversionFlag>*)this_;
  this_ =  new QTextEncoder(codec, flags);
  this_ =  new MyQTextEncoder(codec, flags);
}


/*void C_ZN12QTextEncoderD2Ev(void *this_)*/ {
  delete (QTextEncoder*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextencoder
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

#endif // #if QT_CONFIG(textcodec)
#endif // #ifndef QT_MINIMAL
//  footer block end
