// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qtextcodec.h
// dst-file: /src/core/qtextcodec.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextcodec.h>


#include <qbytearray.h>
#include <qstring.h>
#include <qlist.h>
#include <qmetatype.h>
// <= header block end

// main block begin =>
void __keep_qtextcodec_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 129, column 14>
//   // proto:  void QTextEncoder::QTextEncoder(const QTextCodec * codec);
if (true) {
  auto f = [](const QTextCodec * arg1) {
    new QTextEncoder(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 102, column 13>
//   // proto:  QString QTextCodec::toUnicode(const char * in, int length, QTextCodec::ConverterState * state);
if (true) {
  auto f = [](const char * arg1, int arg2, QTextCodec::ConverterState * arg3) {
    ((QTextCodec*)0)->toUnicode(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK10QTextCodec9toUnicodeEPKciPNS_14ConverterStateE toUnicode(const char *, int, struct QTextCodec::ConverterState *)
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 104, column 16>
//   // proto:  QByteArray QTextCodec::fromUnicode(const QChar * in, int length, QTextCodec::ConverterState * state);
if (true) {
  auto f = [](const QChar * arg1, int arg2, QTextCodec::ConverterState * arg3) {
    ((QTextCodec*)0)->fromUnicode(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZNK10QTextCodec11fromUnicodeEPK5QChariPNS_14ConverterStateE fromUnicode(const class QChar *, int, struct QTextCodec::ConverterState *)
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 56, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForName(const char * name);
if (true) {
  auto f = [](const char * arg1) {
    ((QTextCodec*)0)->codecForName(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QTextCodec12codecForNameEPKc codecForName(const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 143, column 14>
//   // proto:  void QTextDecoder::QTextDecoder(const QTextCodec * codec);
if (true) {
  auto f = [](const QTextCodec * arg1) {
    new QTextDecoder(arg1);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextEncoder_Class_Size()
{
  return sizeof(QTextEncoder);
}

extern "C"
int QTextCodec_Class_Size()
{
  return sizeof(QTextCodec);
}

extern "C"
int QTextDecoder_Class_Size()
{
  return sizeof(QTextDecoder);
}

// <= use block end

// ext block begin =>
//   // proto:  void QTextEncoder::~QTextEncoder();
extern "C"
void C_ZN12QTextEncoderD2Ev(void *qthis) {
  delete (QTextEncoder*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 132, column 16>
//   // proto:  QByteArray QTextEncoder::fromUnicode(const QString & str);
// _ZN12QTextEncoder11fromUnicodeERK7QString fromUnicode(const class QString &)
extern "C"
QByteArray*
C_ZN12QTextEncoder11fromUnicodeERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QTextEncoder*)qthis)->fromUnicode(*((const QString*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 130, column 5>
//   // proto:  void QTextEncoder::QTextEncoder(const QTextCodec * codec, QTextCodec::ConversionFlags flags);
extern "C"
QTextEncoder*
C_ZN12QTextEncoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * arg1,
QTextCodec::ConversionFlags* arg2) {
  auto ret = new QTextEncoder(arg1,
*((QTextCodec::ConversionFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 134, column 10>
//   // proto:  bool QTextEncoder::hasFailure();
// _ZNK12QTextEncoder10hasFailureEv hasFailure()
extern "C"
bool
C_ZNK12QTextEncoder10hasFailureEv(void *qthis) {
  auto ret =
  ((QTextEncoder*)qthis)->hasFailure();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 133, column 16>
//   // proto:  QByteArray QTextEncoder::fromUnicode(const QChar * uc, int len);
// _ZN12QTextEncoder11fromUnicodeEPK5QChari fromUnicode(const class QChar *, int)
extern "C"
QByteArray*
C_ZN12QTextEncoder11fromUnicodeEPK5QChari(void *qthis,
const QChar * arg1,
int arg2) {
  auto ret =
  ((QTextEncoder*)qthis)->fromUnicode(arg1,
arg2);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 110, column 24>
//   // proto:  QByteArray QTextCodec::name();
// _ZNK10QTextCodec4nameEv name()
extern "C"
QByteArray*
C_ZNK10QTextCodec4nameEv(void *qthis) {
  auto ret =
  ((QTextCodec*)qthis)->name();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 102, column 13>
//   // proto:  QString QTextCodec::toUnicode(const char * in, int length, QTextCodec::ConverterState * state);
// _ZNK10QTextCodec9toUnicodeEPKciPNS_14ConverterStateE toUnicode(const char *, int, struct QTextCodec::ConverterState *)
extern "C"
QString*
C_ZNK10QTextCodec9toUnicodeEPKciPNS_14ConverterStateE(void *qthis,
const char * arg1,
int arg2,
QTextCodec::ConverterState * arg3) {
  auto ret =
  ((QTextCodec*)qthis)->toUnicode(arg1,
arg2,
arg3);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 78, column 13>
//   // proto:  QString QTextCodec::toUnicode(const QByteArray & );
// _ZNK10QTextCodec9toUnicodeERK10QByteArray toUnicode(const class QByteArray &)
extern "C"
QString*
C_ZNK10QTextCodec9toUnicodeERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QTextCodec*)qthis)->toUnicode(*((const QByteArray*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 80, column 16>
//   // proto:  QByteArray QTextCodec::fromUnicode(const QString & uc);
// _ZNK10QTextCodec11fromUnicodeERK7QString fromUnicode(const class QString &)
extern "C"
QByteArray*
C_ZNK10QTextCodec11fromUnicodeERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QTextCodec*)qthis)->fromUnicode(*((const QString*)arg1));
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 62, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForLocale();
// _ZN10QTextCodec14codecForLocaleEv codecForLocale()
extern "C"
void*
C_ZN10QTextCodec14codecForLocaleEv() {
  auto ret =
  QTextCodec::codecForLocale();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 107, column 19>
//   // proto:  QTextDecoder * QTextCodec::makeDecoder(ConversionFlags flags);
// _ZNK10QTextCodec11makeDecoderE6QFlagsINS_14ConversionFlagEE makeDecoder(ConversionFlags)
extern "C"
void*
C_ZNK10QTextCodec11makeDecoderE6QFlagsINS_14ConversionFlagEE(void *qthis,
QTextCodec::ConversionFlags arg1) {
  auto ret =
  ((QTextCodec*)qthis)->makeDecoder(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 60, column 23>
//   // proto: static QList<int> QTextCodec::availableMibs();
// _ZN10QTextCodec13availableMibsEv availableMibs()
extern "C"
QList<int>*
C_ZN10QTextCodec13availableMibsEv() {
  auto ret =
  QTextCodec::availableMibs();
  return new QList<int>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 69, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForHtml(const QByteArray & ba);
// _ZN10QTextCodec12codecForHtmlERK10QByteArray codecForHtml(const class QByteArray &)
extern "C"
void*
C_ZN10QTextCodec12codecForHtmlERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QTextCodec::codecForHtml(*((const QByteArray*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 63, column 17>
//   // proto: static void QTextCodec::setCodecForLocale(QTextCodec * c);
// _ZN10QTextCodec17setCodecForLocaleEPS_ setCodecForLocale(class QTextCodec *)
extern "C"
void
C_ZN10QTextCodec17setCodecForLocaleEPS_(QTextCodec * arg1) {
  QTextCodec::setCodecForLocale(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 104, column 16>
//   // proto:  QByteArray QTextCodec::fromUnicode(const QChar * in, int length, QTextCodec::ConverterState * state);
// _ZNK10QTextCodec11fromUnicodeEPK5QChariPNS_14ConverterStateE fromUnicode(const class QChar *, int, struct QTextCodec::ConverterState *)
extern "C"
QByteArray*
C_ZNK10QTextCodec11fromUnicodeEPK5QChariPNS_14ConverterStateE(void *qthis,
const QChar * arg1,
int arg2,
QTextCodec::ConverterState * arg3) {
  auto ret =
  ((QTextCodec*)qthis)->fromUnicode(arg1,
arg2,
arg3);
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 72, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForUtfText(const QByteArray & ba);
// _ZN10QTextCodec15codecForUtfTextERK10QByteArray codecForUtfText(const class QByteArray &)
extern "C"
void*
C_ZN10QTextCodec15codecForUtfTextERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QTextCodec::codecForUtfText(*((const QByteArray*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 79, column 13>
//   // proto:  QString QTextCodec::toUnicode(const char * chars);
// _ZNK10QTextCodec9toUnicodeEPKc toUnicode(const char *)
extern "C"
QString*
C_ZNK10QTextCodec9toUnicodeEPKc(void *qthis,
const char * arg1) {
  auto ret =
  ((QTextCodec*)qthis)->toUnicode(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 112, column 17>
//   // proto:  int QTextCodec::mibEnum();
// _ZNK10QTextCodec7mibEnumEv mibEnum()
extern "C"
int
C_ZNK10QTextCodec7mibEnumEv(void *qthis) {
  auto ret =
  ((QTextCodec*)qthis)->mibEnum();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 56, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForName(const char * name);
// _ZN10QTextCodec12codecForNameEPKc codecForName(const char *)
extern "C"
void*
C_ZN10QTextCodec12codecForNameEPKc(const char * arg1) {
  auto ret =
  QTextCodec::codecForName(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 76, column 10>
//   // proto:  bool QTextCodec::canEncode(const QString & );
// _ZNK10QTextCodec9canEncodeERK7QString canEncode(const class QString &)
extern "C"
bool
C_ZNK10QTextCodec9canEncodeERK7QString(void *qthis,
const QString* arg1) {
  auto ret =
  ((QTextCodec*)qthis)->canEncode(*((const QString*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 111, column 31>
//   // proto:  QList<QByteArray> QTextCodec::aliases();
// _ZNK10QTextCodec7aliasesEv aliases()
extern "C"
QList<QByteArray>*
C_ZNK10QTextCodec7aliasesEv(void *qthis) {
  auto ret =
  ((QTextCodec*)qthis)->aliases();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 55, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForName(const QByteArray & name);
// _ZN10QTextCodec12codecForNameERK10QByteArray codecForName(const class QByteArray &)
extern "C"
void*
C_ZN10QTextCodec12codecForNameERK10QByteArray(const QByteArray* arg1) {
  auto ret =
  QTextCodec::codecForName(*((const QByteArray*)arg1));
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 59, column 30>
//   // proto: static QList<QByteArray> QTextCodec::availableCodecs();
// _ZN10QTextCodec15availableCodecsEv availableCodecs()
extern "C"
QList<QByteArray>*
C_ZN10QTextCodec15availableCodecsEv() {
  auto ret =
  QTextCodec::availableCodecs();
  return new QList<QByteArray>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 70, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForHtml(const QByteArray & ba, QTextCodec * defaultCodec);
// _ZN10QTextCodec12codecForHtmlERK10QByteArrayPS_ codecForHtml(const class QByteArray &, class QTextCodec *)
extern "C"
void*
C_ZN10QTextCodec12codecForHtmlERK10QByteArrayPS_(const QByteArray* arg1,
QTextCodec * arg2) {
  auto ret =
  QTextCodec::codecForHtml(*((const QByteArray*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 108, column 19>
//   // proto:  QTextEncoder * QTextCodec::makeEncoder(ConversionFlags flags);
// _ZNK10QTextCodec11makeEncoderE6QFlagsINS_14ConversionFlagEE makeEncoder(ConversionFlags)
extern "C"
void*
C_ZNK10QTextCodec11makeEncoderE6QFlagsINS_14ConversionFlagEE(void *qthis,
QTextCodec::ConversionFlags arg1) {
  auto ret =
  ((QTextCodec*)qthis)->makeEncoder(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 57, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForMib(int mib);
// _ZN10QTextCodec11codecForMibEi codecForMib(int)
extern "C"
void*
C_ZN10QTextCodec11codecForMibEi(int arg1) {
  auto ret =
  QTextCodec::codecForMib(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 73, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForUtfText(const QByteArray & ba, QTextCodec * defaultCodec);
// _ZN10QTextCodec15codecForUtfTextERK10QByteArrayPS_ codecForUtfText(const class QByteArray &, class QTextCodec *)
extern "C"
void*
C_ZN10QTextCodec15codecForUtfTextERK10QByteArrayPS_(const QByteArray* arg1,
QTextCodec * arg2) {
  auto ret =
  QTextCodec::codecForUtfText(*((const QByteArray*)arg1),
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 75, column 10>
//   // proto:  bool QTextCodec::canEncode(QChar );
// _ZNK10QTextCodec9canEncodeE5QChar canEncode(class QChar)
extern "C"
bool
C_ZNK10QTextCodec9canEncodeE5QChar(void *qthis,
QChar* arg1) {
  auto ret =
  ((QTextCodec*)qthis)->canEncode(*((QChar*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 146, column 13>
//   // proto:  QString QTextDecoder::toUnicode(const char * chars, int len);
// _ZN12QTextDecoder9toUnicodeEPKci toUnicode(const char *, int)
extern "C"
QString*
C_ZN12QTextDecoder9toUnicodeEPKci(void *qthis,
const char * arg1,
int arg2) {
  auto ret =
  ((QTextDecoder*)qthis)->toUnicode(arg1,
arg2);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 144, column 5>
//   // proto:  void QTextDecoder::QTextDecoder(const QTextCodec * codec, QTextCodec::ConversionFlags flags);
extern "C"
QTextDecoder*
C_ZN12QTextDecoderC2EPK10QTextCodec6QFlagsINS0_14ConversionFlagEE(const QTextCodec * arg1,
QTextCodec::ConversionFlags* arg2) {
  auto ret = new QTextDecoder(arg1,
*((QTextCodec::ConversionFlags*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 149, column 10>
//   // proto:  bool QTextDecoder::hasFailure();
// _ZNK12QTextDecoder10hasFailureEv hasFailure()
extern "C"
bool
C_ZNK12QTextDecoder10hasFailureEv(void *qthis) {
  auto ret =
  ((QTextDecoder*)qthis)->hasFailure();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QTextDecoder::~QTextDecoder();
extern "C"
void C_ZN12QTextDecoderD2Ev(void *qthis) {
  delete (QTextDecoder*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 147, column 13>
//   // proto:  QString QTextDecoder::toUnicode(const QByteArray & ba);
// _ZN12QTextDecoder9toUnicodeERK10QByteArray toUnicode(const class QByteArray &)
extern "C"
QString*
C_ZN12QTextDecoder9toUnicodeERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QTextDecoder*)qthis)->toUnicode(*((const QByteArray*)arg1));
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 148, column 10>
//   // proto:  void QTextDecoder::toUnicode(QString * target, const char * chars, int len);
// _ZN12QTextDecoder9toUnicodeEP7QStringPKci toUnicode(class QString *, const char *, int)
extern "C"
void
C_ZN12QTextDecoder9toUnicodeEP7QStringPKci(void *qthis,
QString * arg1,
const char * arg2,
int arg3) {
  ((QTextDecoder*)qthis)->toUnicode(arg1,
arg2,
arg3);
}
// <= ext block end

// body block begin =>
// <= body block end

