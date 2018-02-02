//  header block begin
// /usr/include/qt/QtCore/qtextcodec.h
#include <qtextcodec.h>
#include <QtCore>

// QTextEncoder is pure virtual: false
// QTextEncoder has virtual projected: false
//  header block end

//  main block begin

class MyQTextEncoder : public QTextEncoder {
public:
  virtual ~MyQTextEncoder() {}
// void QTextEncoder(const class QTextCodec *)
MyQTextEncoder(const QTextCodec * codec) : QTextEncoder(codec) {}
// void QTextEncoder(const class QTextCodec *, class QTextCodec::ConversionFlags)
MyQTextEncoder(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) : QTextEncoder(codec, flags) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:141
// [-2] void QTextEncoder(const class QTextCodec *)
extern "C"
void* C_ZN12QTextEncoderC2EPK10QTextCodec(const QTextCodec * codec) {
  return  new QTextEncoder(codec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:142
// [-2] void QTextEncoder(const class QTextCodec *, class QTextCodec::ConversionFlags)
extern "C"
void* C_ZN12QTextEncoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) {
  return  new QTextEncoder(codec, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:143
// [-2] void ~QTextEncoder()
extern "C"
void C_ZN12QTextEncoderD2Ev(void *this_) {
  delete (QTextEncoder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:145
// [8] QByteArray fromUnicode(const class QString &)
extern "C"
void* C_ZN12QTextEncoder11fromUnicodeERK7QString(void *this_, QString* str) {
  auto rv = ((QTextEncoder*)this_)->fromUnicode(*str);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:147
// [8] QByteArray fromUnicode(class QStringView)
extern "C"
void* C_ZN12QTextEncoder11fromUnicodeE11QStringView(void *this_, QStringView* str) {
  auto rv = ((QTextEncoder*)this_)->fromUnicode(*str);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:148
// [8] QByteArray fromUnicode(const class QChar *, int)
extern "C"
void* C_ZN12QTextEncoder11fromUnicodeEPK5QChari(void *this_, const QChar * uc, int len) {
  auto rv = ((QTextEncoder*)this_)->fromUnicode(uc, len);
return new QByteArray(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:149
// [1] bool hasFailure()
extern "C"
bool C_ZNK12QTextEncoder10hasFailureEv(void *this_) {
  return (bool)((QTextEncoder*)this_)->hasFailure();
}
//  main block end
