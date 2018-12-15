//  header block begin

// /usr/include/qt/QtCore/qtextcodec.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextcodec.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextEncoder is pure virtual: false
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

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:135
// [-2] void QTextEncoder(const QTextCodec *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextEncoderC2EPK10QTextCodec(const QTextCodec * codec) {
  return  new QTextEncoder(codec);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qtextcodec.h:136
// [-2] void QTextEncoder(const QTextCodec *, QTextCodec::ConversionFlags)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextEncoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) {
  return  new QTextEncoder(codec, flags);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:137
// [-2] void ~QTextEncoder()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextEncoderD2Ev(void *this_) {
  delete (QTextEncoder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:138
// [8] QByteArray fromUnicode(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextEncoder11fromUnicodeERK7QString(void *this_, QString* str) {
  auto rv = ((QTextEncoder*)this_)->fromUnicode(*str);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:139
// [8] QByteArray fromUnicode(const QChar *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextEncoder11fromUnicodeEPK5QChari(void *this_, const QChar * uc, int len_) {
  auto rv = ((QTextEncoder*)this_)->fromUnicode(uc, len_);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:140
// [1] bool hasFailure()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextEncoder10hasFailureEv(void *this_) {
  return (bool)((QTextEncoder*)this_)->hasFailure();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
