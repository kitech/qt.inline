//  header block begin

// /usr/include/qt/QtCore/qtextcodec.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextcodec.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextDecoder is pure virtual: false
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

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:158
// [-2] void QTextDecoder(const QTextCodec *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextDecoderC2EPK10QTextCodec(const QTextCodec * codec) {
  return  new QTextDecoder(codec);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qtextcodec.h:159
// [-2] void QTextDecoder(const QTextCodec *, QTextCodec::ConversionFlags)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextDecoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) {
  return  new QTextDecoder(codec, flags);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:160
// [-2] void ~QTextDecoder()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextDecoderD2Ev(void *this_) {
  delete (QTextDecoder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:161
// [8] QString toUnicode(const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextDecoder9toUnicodeEPKci(void *this_, const char * chars, int len_) {
  auto rv = ((QTextDecoder*)this_)->toUnicode(chars, len_);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:162
// [8] QString toUnicode(const QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextDecoder9toUnicodeERK10QByteArray(void *this_, QByteArray* ba) {
  auto rv = ((QTextDecoder*)this_)->toUnicode(*ba);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:163
// [-2] void toUnicode(QString *, const char *, int)
extern "C" Q_DECL_EXPORT
void C_ZN12QTextDecoder9toUnicodeEP7QStringPKci(void *this_, QString * target, const char * chars, int len_) {
  ((QTextDecoder*)this_)->toUnicode(target, chars, len_);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:164
// [1] bool hasFailure()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextDecoder10hasFailureEv(void *this_) {
  return (bool)((QTextDecoder*)this_)->hasFailure();
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
