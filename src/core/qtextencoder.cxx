//  header block begin
// /usr/include/qt/QtCore/qtextcodec.h
#include <qtextcodec.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qtextcodec.h:135
// void QTextEncoder(const class QTextCodec *)
extern "C"
void* C_ZN12QTextEncoderC1EPK10QTextCodec(const QTextCodec * codec) {
  return new QTextEncoder(codec);
}
// /usr/include/qt/QtCore/qtextcodec.h:136
// void QTextEncoder(const class QTextCodec *, class QTextCodec::ConversionFlags)
extern "C"
void* C_ZN12QTextEncoderC1EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) {
  return new QTextEncoder(codec, flags);
}
// /usr/include/qt/QtCore/qtextcodec.h:137
// void ~QTextEncoder()
extern "C"
void C_ZN12QTextEncoderD1Ev(void *this_) {
  delete (QTextEncoder*)(this_);
}
// /usr/include/qt/QtCore/qtextcodec.h:138
// QByteArray fromUnicode(const class QString &)
extern "C"
void C_ZN12QTextEncoder11fromUnicodeERK7QString(void *this_, const QString & str) {
  /*return*/ ((QTextEncoder*)this_)->fromUnicode(str);
}
// /usr/include/qt/QtCore/qtextcodec.h:139
// QByteArray fromUnicode(const class QChar *, int)
extern "C"
void C_ZN12QTextEncoder11fromUnicodeEPK5QChari(void *this_, const QChar * uc, int len) {
  /*return*/ ((QTextEncoder*)this_)->fromUnicode(uc, len);
}
// /usr/include/qt/QtCore/qtextcodec.h:140
// bool hasFailure()
extern "C"
void C_ZNK12QTextEncoder10hasFailureEv(void *this_) {
  /*return*/ ((QTextEncoder*)this_)->hasFailure();
}
//  main block end
