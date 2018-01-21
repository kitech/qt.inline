//  header block begin
// /usr/include/qt/QtCore/qtextcodec.h
#include <qtextcodec.h>
#include <QtCore>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtCore/qtextcodec.h:149
// void QTextDecoder(const class QTextCodec *)
extern "C"
void* C_ZN12QTextDecoderC1EPK10QTextCodec(const QTextCodec * codec) {
  return new QTextDecoder(codec);
}
// /usr/include/qt/QtCore/qtextcodec.h:150
// void QTextDecoder(const class QTextCodec *, class QTextCodec::ConversionFlags)
extern "C"
void* C_ZN12QTextDecoderC1EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) {
  return new QTextDecoder(codec, flags);
}
// /usr/include/qt/QtCore/qtextcodec.h:151
// void ~QTextDecoder()
extern "C"
void C_ZN12QTextDecoderD1Ev(void *this_) {
  delete (QTextDecoder*)(this_);
}
// /usr/include/qt/QtCore/qtextcodec.h:152
// QString toUnicode(const char *, int)
extern "C"
void C_ZN12QTextDecoder9toUnicodeEPKci(void *this_, const char * chars, int len) {
  /*return*/ ((QTextDecoder*)this_)->toUnicode(chars, len);
}
// /usr/include/qt/QtCore/qtextcodec.h:153
// QString toUnicode(const class QByteArray &)
extern "C"
void C_ZN12QTextDecoder9toUnicodeERK10QByteArray(void *this_, const QByteArray & ba) {
  /*return*/ ((QTextDecoder*)this_)->toUnicode(ba);
}
// /usr/include/qt/QtCore/qtextcodec.h:154
// void toUnicode(class QString *, const char *, int)
extern "C"
void C_ZN12QTextDecoder9toUnicodeEP7QStringPKci(void *this_, QString * target, const char * chars, int len) {
  ((QTextDecoder*)this_)->toUnicode(target, chars, len);
}
// /usr/include/qt/QtCore/qtextcodec.h:155
// bool hasFailure()
extern "C"
void C_ZNK12QTextDecoder10hasFailureEv(void *this_) {
  /*return*/ ((QTextDecoder*)this_)->hasFailure();
}
//  main block end
