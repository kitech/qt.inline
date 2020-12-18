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

// QTextDecoder is pure virtual: false false
// QTextDecoder has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextDecoder_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextDecoder_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextDecoder_t qt_meta_stringdata_MyQTextDecoder = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQTextDecoder"
  },
  "MyQTextDecoder"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextDecoder[] = {
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
class Q_DECL_EXPORT MyQTextDecoder : public QTextDecoder {
public:
  virtual ~MyQTextDecoder() {}
// void QTextDecoder(const QTextCodec *)
MyQTextDecoder(const QTextCodec * codec) : QTextDecoder(codec) {}
// void QTextDecoder(const QTextCodec *, QTextCodec::ConversionFlags)
MyQTextDecoder(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) : QTextDecoder(codec, flags) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qtextdecoder(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:157
// [-2] void QTextDecoder(const QTextCodec *) 
// (12)qm2985853780 (34)_ZN12QTextDecoderC2EPK10QTextCodec
/*void* qm2985853780(const QTextCodec * codec)*/{
  const QTextCodec * codec = *(const QTextCodec **)this_;
  this_ =  new QTextDecoder(codec);
}


/*void C_ZN12QTextDecoderD2Ev(void *this_)*/ {
  delete (QTextDecoder*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qtextdecoder
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
