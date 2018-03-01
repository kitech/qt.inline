//  header block begin
// /usr/include/qt/QtCore/qtextcodec.h
#ifndef protected
#define protected public
#endif
#include <qtextcodec.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextCodec is pure virtual: true
// QTextCodec has virtual projected: false
//  header block end

//  main block begin

class MyQTextCodec : public QTextCodec {
public:
  virtual ~MyQTextCodec() {}
// void QTextCodec()
MyQTextCodec() : QTextCodec() {}
// Protected virtual Visibility=Default Availability=Available
// void ~QTextCodec()
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:61
// [8] QTextCodec * codecForName(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec12codecForNameERK10QByteArray(QByteArray* name) {
  return (void*)QTextCodec::codecForName(*name);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:62
// [8] QTextCodec * codecForName(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec12codecForNameEPKc(const char * name) {
  return (void*)QTextCodec::codecForName(name);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:63
// [8] QTextCodec * codecForMib(int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec11codecForMibEi(int mib) {
  return (void*)QTextCodec::codecForMib(mib);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:68
// [8] QTextCodec * codecForLocale()
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec14codecForLocaleEv() {
  return (void*)QTextCodec::codecForLocale();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:69
// [-2] void setCodecForLocale(class QTextCodec *)
extern "C" Q_DECL_EXPORT
void C_ZN10QTextCodec17setCodecForLocaleEPS_(QTextCodec * c) {
  QTextCodec::setCodecForLocale(c);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:75
// [8] QTextCodec * codecForHtml(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec12codecForHtmlERK10QByteArray(QByteArray* ba) {
  return (void*)QTextCodec::codecForHtml(*ba);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:76
// [8] QTextCodec * codecForHtml(const class QByteArray &, class QTextCodec *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec12codecForHtmlERK10QByteArrayPS_(QByteArray* ba, QTextCodec * defaultCodec) {
  return (void*)QTextCodec::codecForHtml(*ba, defaultCodec);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:78
// [8] QTextCodec * codecForUtfText(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec15codecForUtfTextERK10QByteArray(QByteArray* ba) {
  return (void*)QTextCodec::codecForUtfText(*ba);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:79
// [8] QTextCodec * codecForUtfText(const class QByteArray &, class QTextCodec *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTextCodec15codecForUtfTextERK10QByteArrayPS_(QByteArray* ba, QTextCodec * defaultCodec) {
  return (void*)QTextCodec::codecForUtfText(*ba, defaultCodec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:81
// [1] bool canEncode(class QChar)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextCodec9canEncodeE5QChar(void *this_, QChar* arg0) {
  return (bool)((QTextCodec*)this_)->canEncode(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:83
// [1] bool canEncode(const class QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextCodec9canEncodeERK7QString(void *this_, QString* arg0) {
  return (bool)((QTextCodec*)this_)->canEncode(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:85
// [1] bool canEncode(class QStringView)
extern "C" Q_DECL_EXPORT
bool C_ZNK10QTextCodec9canEncodeE11QStringView(void *this_, QStringView* arg0) {
  return (bool)((QTextCodec*)this_)->canEncode(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:87
// [8] QString toUnicode(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec9toUnicodeERK10QByteArray(void *this_, QByteArray* arg0) {
  auto rv = ((QTextCodec*)this_)->toUnicode(*arg0);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:88
// [8] QString toUnicode(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec9toUnicodeEPKc(void *this_, const char * chars) {
  auto rv = ((QTextCodec*)this_)->toUnicode(chars);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:90
// [8] QByteArray fromUnicode(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec11fromUnicodeERK7QString(void *this_, QString* uc) {
  auto rv = ((QTextCodec*)this_)->fromUnicode(*uc);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:92
// [8] QByteArray fromUnicode(class QStringView)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec11fromUnicodeE11QStringView(void *this_, QStringView* uc) {
  auto rv = ((QTextCodec*)this_)->fromUnicode(*uc);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:119
// [8] QTextDecoder * makeDecoder(QTextCodec::ConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec11makeDecoderE6QFlagsINS_14ConversionFlagEE(void *this_, QFlags<QTextCodec::ConversionFlag> flags) {
  return (void*)((QTextCodec*)this_)->makeDecoder(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:120
// [8] QTextEncoder * makeEncoder(QTextCodec::ConversionFlags)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec11makeEncoderE6QFlagsINS_14ConversionFlagEE(void *this_, QFlags<QTextCodec::ConversionFlag> flags) {
  return (void*)((QTextCodec*)this_)->makeEncoder(flags);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:122
// [8] QByteArray name()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QTextCodec4nameEv(void *this_) {
  auto rv = ((QTextCodec*)this_)->name();
return new QByteArray(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextcodec.h:124
// [4] int mibEnum()
extern "C" Q_DECL_EXPORT
int C_ZNK10QTextCodec7mibEnumEv(void *this_) {
  return (int)((QTextCodec*)this_)->mibEnum();
}

//  main block end
