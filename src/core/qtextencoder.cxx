//  header block begin
// /usr/include/qt/QtCore/qtextcodec.h
#ifndef protected
#define protected public
#endif
#include <qtextcodec.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextEncoder is pure virtual: false
// QTextEncoder has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQTextEncoder : public QTextEncoder {
public:
  virtual ~MyQTextEncoder() {}
// void QTextEncoder(const QTextCodec *)
MyQTextEncoder(const QTextCodec * codec) : QTextEncoder(codec) {}
// void QTextEncoder(const QTextCodec *, QTextCodec::ConversionFlags)
MyQTextEncoder(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) : QTextEncoder(codec, flags) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:141
// [-2] void QTextEncoder(const QTextCodec *)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextEncoderC2EPK10QTextCodec(const QTextCodec * codec) {
  return  new QTextEncoder(codec);
}

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtCore/qtextcodec.h:142
// [-2] void QTextEncoder(const QTextCodec *, QTextCodec::ConversionFlags)
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextEncoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) {
  return  new QTextEncoder(codec, flags);
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:143
// [-2] void ~QTextEncoder()
extern "C" Q_DECL_EXPORT
void C_ZN12QTextEncoderD2Ev(void *this_) {
  delete (QTextEncoder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:145
// [8] QByteArray fromUnicode(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextEncoder11fromUnicodeERK7QString(void *this_, QString* str) {
  auto rv = ((QTextEncoder*)this_)->fromUnicode(*str);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qtextcodec.h:147
// [8] QByteArray fromUnicode(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextEncoder11fromUnicodeE11QStringView(void *this_, QStringView* str) {
  auto rv = ((QTextEncoder*)this_)->fromUnicode(*str);
return new QByteArray(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:148
// [8] QByteArray fromUnicode(const QChar *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN12QTextEncoder11fromUnicodeEPK5QChari(void *this_, const QChar * uc, int len_) {
  auto rv = ((QTextEncoder*)this_)->fromUnicode(uc, len_);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:149
// [1] bool hasFailure()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QTextEncoder10hasFailureEv(void *this_) {
  return (bool)((QTextEncoder*)this_)->hasFailure();
}

//  main block end
