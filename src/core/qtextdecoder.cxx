//  header block begin
// /usr/include/qt/QtCore/qtextcodec.h
#include <qtextcodec.h>
#include <QtCore>

// QTextDecoder is pure virtual: false
//  header block end

//  main block begin

class MyQTextDecoder : public QTextDecoder {
public:
MyQTextDecoder(const QTextCodec * codec) : QTextDecoder(codec) {}
MyQTextDecoder(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) : QTextDecoder(codec, flags) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:158
// [-2] void QTextDecoder(const class QTextCodec *)
extern "C"
void* C_ZN12QTextDecoderC1EPK10QTextCodec(const QTextCodec * codec) {
  (MyQTextDecoder*)(0);
  return  new MyQTextDecoder(codec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:159
// [-2] void QTextDecoder(const class QTextCodec *, class QTextCodec::ConversionFlags)
extern "C"
void* C_ZN12QTextDecoderC1EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * codec, QFlags<QTextCodec::ConversionFlag> flags) {
  (MyQTextDecoder*)(0);
  return  new MyQTextDecoder(codec, flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:160
// [-2] void ~QTextDecoder()
extern "C"
void C_ZN12QTextDecoderD1Ev(void *this_) {
  delete (QTextDecoder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:161
// [8] QString toUnicode(const char *, int)
extern "C"
void* C_ZN12QTextDecoder9toUnicodeEPKci(void *this_, const char * chars, int len) {
  auto rv = ((QTextDecoder*)this_)->toUnicode(chars, len);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:162
// [8] QString toUnicode(const class QByteArray &)
extern "C"
void* C_ZN12QTextDecoder9toUnicodeERK10QByteArray(void *this_, const QByteArray & ba) {
  auto rv = ((QTextDecoder*)this_)->toUnicode(ba);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:163
// [-2] void toUnicode(class QString *, const char *, int)
extern "C"
void C_ZN12QTextDecoder9toUnicodeEP7QStringPKci(void *this_, QString * target, const char * chars, int len) {
  ((QTextDecoder*)this_)->toUnicode(target, chars, len);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:164
// [1] bool hasFailure()
extern "C"
bool C_ZNK12QTextDecoder10hasFailureEv(void *this_) {
  return (bool)((QTextDecoder*)this_)->hasFailure();
}
//  main block end
