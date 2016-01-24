// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtCore/qtextstream.h
// dst-file: /src/core/qtextstream.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextstream.h>


#include <qchar.h>
#include <qlocale.h>
#include <qstring.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qtextstream_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 210, column 10>
//   // proto:  void QTextStreamManipulator::exec(QTextStream & s);
if (true) {
  auto f = [](QTextStreamManipulator flythis, QTextStream & arg1) {
    ((QTextStreamManipulator*)0)->exec(arg1);
    flythis.exec(arg1);
  };
  if (f == nullptr){}
}
// _ZN22QTextStreamManipulator4execER11QTextStream exec(class QTextStream &)
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 208, column 5>
//   // proto:  void QTextStreamManipulator::QTextStreamManipulator(QTSMFI m, int a);
if (true) {
  auto f = [](QTSMFI arg1, int arg2) {
    new QTextStreamManipulator(arg1, arg2);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 209, column 5>
//   // proto:  void QTextStreamManipulator::QTextStreamManipulator(QTSMFC m, QChar c);
if (true) {
  auto f = [](QTSMFC arg1, QChar arg2) {
    new QTextStreamManipulator(arg1, arg2);
  };
  if (f == nullptr){}
}
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextStreamManipulator_Class_Size()
{
  return sizeof(QTextStreamManipulator);
}

extern "C"
int QTextStream_Class_Size()
{
  return sizeof(QTextStream);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 210, column 10>
//   // proto:  void QTextStreamManipulator::exec(QTextStream & s);
// _ZN22QTextStreamManipulator4execER11QTextStream exec(class QTextStream &)
extern "C"
void
C_ZN22QTextStreamManipulator4execER11QTextStream(void *qthis,
QTextStream* arg1) {
  ((QTextStreamManipulator*)qthis)->exec(*((QTextStream*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 98, column 17>
//   // proto:  QTextCodec * QTextStream::codec();
// _ZNK11QTextStream5codecEv codec()
extern "C"
void*
C_ZNK11QTextStream5codecEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->codec();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 88, column 14>
//   // proto:  void QTextStream::QTextStream(QIODevice * device);
extern "C"
QTextStream*
C_ZN11QTextStreamC2EP9QIODevice(QIODevice * arg1) {
  auto ret = new QTextStream(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 105, column 10>
//   // proto:  void QTextStream::setLocale(const QLocale & locale);
// _ZN11QTextStream9setLocaleERK7QLocale setLocale(const class QLocale &)
extern "C"
void
C_ZN11QTextStream9setLocaleERK7QLocale(void *qthis,
const QLocale* arg1) {
  ((QTextStream*)qthis)->setLocale(*((const QLocale*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 87, column 5>
//   // proto:  void QTextStream::QTextStream();
extern "C"
QTextStream*
C_ZN11QTextStreamC2Ev() {
  auto ret = new QTextStream();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 118, column 10>
//   // proto:  bool QTextStream::atEnd();
// _ZNK11QTextStream5atEndEv atEnd()
extern "C"
bool
C_ZNK11QTextStream5atEndEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->atEnd();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 127, column 10>
//   // proto:  bool QTextStream::readLineInto(QString * line, qint64 maxlen);
// _ZN11QTextStream12readLineIntoEP7QStringx readLineInto(class QString *, qint64)
extern "C"
bool
C_ZN11QTextStream12readLineIntoEP7QStringx(void *qthis,
QString * arg1,
qint64 arg2) {
  auto ret =
  ((QTextStream*)qthis)->readLineInto(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 149, column 10>
//   // proto:  void QTextStream::setRealNumberPrecision(int precision);
// _ZN11QTextStream22setRealNumberPrecisionEi setRealNumberPrecision(int)
extern "C"
void
C_ZN11QTextStream22setRealNumberPrecisionEi(void *qthis,
int arg1) {
  ((QTextStream*)qthis)->setRealNumberPrecision(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 108, column 10>
//   // proto:  void QTextStream::setDevice(QIODevice * device);
// _ZN11QTextStream9setDeviceEP9QIODevice setDevice(class QIODevice *)
extern "C"
void
C_ZN11QTextStream9setDeviceEP9QIODevice(void *qthis,
QIODevice * arg1) {
  ((QTextStream*)qthis)->setDevice(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 147, column 24>
//   // proto:  QTextStream::RealNumberNotation QTextStream::realNumberNotation();
// _ZNK11QTextStream18realNumberNotationEv realNumberNotation()
extern "C"
QTextStream::RealNumberNotation
C_ZNK11QTextStream18realNumberNotationEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->realNumberNotation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 119, column 10>
//   // proto:  void QTextStream::reset();
// _ZN11QTextStream5resetEv reset()
extern "C"
void
C_ZN11QTextStream5resetEv(void *qthis) {
  ((QTextStream*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 121, column 10>
//   // proto:  bool QTextStream::seek(qint64 pos);
// _ZN11QTextStream4seekEx seek(qint64)
extern "C"
bool
C_ZN11QTextStream4seekEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QTextStream*)qthis)->seek(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 111, column 10>
//   // proto:  void QTextStream::setString(QString * string, QIODevice::OpenMode openMode);
// _ZN11QTextStream9setStringEP7QString6QFlagsIN9QIODevice12OpenModeFlagEE setString(class QString *, class QIODevice::OpenMode)
extern "C"
void
C_ZN11QTextStream9setStringEP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *qthis,
QString * arg1,
QIODevice::OpenMode* arg2) {
  ((QTextStream*)qthis)->setString(arg1,
*((QIODevice::OpenMode*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 91, column 14>
//   // proto:  void QTextStream::QTextStream(QByteArray * array, QIODevice::OpenMode openMode);
extern "C"
QTextStream*
C_ZN11QTextStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray * arg1,
QIODevice::OpenMode* arg2) {
  auto ret = new QTextStream(arg1,
*((QIODevice::OpenMode*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 112, column 14>
//   // proto:  QString * QTextStream::string();
// _ZNK11QTextStream6stringEv string()
extern "C"
void*
C_ZNK11QTextStream6stringEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->string();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 146, column 10>
//   // proto:  void QTextStream::setRealNumberNotation(QTextStream::RealNumberNotation notation);
// _ZN11QTextStream21setRealNumberNotationENS_18RealNumberNotationE setRealNumberNotation(enum QTextStream::RealNumberNotation)
extern "C"
void
C_ZN11QTextStream21setRealNumberNotationENS_18RealNumberNotationE(void *qthis,
QTextStream::RealNumberNotation arg1) {
  ((QTextStream*)qthis)->setRealNumberNotation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 99, column 10>
//   // proto:  void QTextStream::setAutoDetectUnicode(bool enabled);
// _ZN11QTextStream20setAutoDetectUnicodeEb setAutoDetectUnicode(_Bool)
extern "C"
void
C_ZN11QTextStream20setAutoDetectUnicodeEb(void *qthis,
bool arg1) {
  ((QTextStream*)qthis)->setAutoDetectUnicode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 131, column 10>
//   // proto:  void QTextStream::setFieldAlignment(QTextStream::FieldAlignment alignment);
// _ZN11QTextStream17setFieldAlignmentENS_14FieldAlignmentE setFieldAlignment(enum QTextStream::FieldAlignment)
extern "C"
void
C_ZN11QTextStream17setFieldAlignmentENS_14FieldAlignmentE(void *qthis,
QTextStream::FieldAlignment arg1) {
  ((QTextStream*)qthis)->setFieldAlignment(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 135, column 11>
//   // proto:  QChar QTextStream::padChar();
// _ZNK11QTextStream7padCharEv padChar()
extern "C"
QChar*
C_ZNK11QTextStream7padCharEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->padChar();
  return new QChar(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 115, column 10>
//   // proto:  void QTextStream::setStatus(QTextStream::Status status);
// _ZN11QTextStream9setStatusENS_6StatusE setStatus(enum QTextStream::Status)
extern "C"
void
C_ZN11QTextStream9setStatusENS_6StatusE(void *qthis,
QTextStream::Status arg1) {
  ((QTextStream*)qthis)->setStatus(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 109, column 16>
//   // proto:  QIODevice * QTextStream::device();
// _ZNK11QTextStream6deviceEv device()
extern "C"
void*
C_ZNK11QTextStream6deviceEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->device();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 116, column 10>
//   // proto:  void QTextStream::resetStatus();
// _ZN11QTextStream11resetStatusEv resetStatus()
extern "C"
void
C_ZN11QTextStream11resetStatusEv(void *qthis) {
  ((QTextStream*)qthis)->resetStatus();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 114, column 12>
//   // proto:  QTextStream::Status QTextStream::status();
// _ZNK11QTextStream6statusEv status()
extern "C"
QTextStream::Status
C_ZNK11QTextStream6statusEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->status();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 89, column 14>
//   // proto:  void QTextStream::QTextStream(FILE * fileHandle, QIODevice::OpenMode openMode);
extern "C"
QTextStream*
C_ZN11QTextStreamC2EP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE(FILE * arg1,
QIODevice::OpenMode* arg2) {
  auto ret = new QTextStream(arg1,
*((QIODevice::OpenMode*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 100, column 10>
//   // proto:  bool QTextStream::autoDetectUnicode();
// _ZNK11QTextStream17autoDetectUnicodeEv autoDetectUnicode()
extern "C"
bool
C_ZNK11QTextStream17autoDetectUnicodeEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->autoDetectUnicode();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 138, column 9>
//   // proto:  int QTextStream::fieldWidth();
// _ZNK11QTextStream10fieldWidthEv fieldWidth()
extern "C"
int
C_ZNK11QTextStream10fieldWidthEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->fieldWidth();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 102, column 10>
//   // proto:  bool QTextStream::generateByteOrderMark();
// _ZNK11QTextStream21generateByteOrderMarkEv generateByteOrderMark()
extern "C"
bool
C_ZNK11QTextStream21generateByteOrderMarkEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->generateByteOrderMark();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 101, column 10>
//   // proto:  void QTextStream::setGenerateByteOrderMark(bool generate);
// _ZN11QTextStream24setGenerateByteOrderMarkEb setGenerateByteOrderMark(_Bool)
extern "C"
void
C_ZN11QTextStream24setGenerateByteOrderMarkEb(void *qthis,
bool arg1) {
  ((QTextStream*)qthis)->setGenerateByteOrderMark(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 96, column 10>
//   // proto:  void QTextStream::setCodec(QTextCodec * codec);
// _ZN11QTextStream8setCodecEP10QTextCodec setCodec(class QTextCodec *)
extern "C"
void
C_ZN11QTextStream8setCodecEP10QTextCodec(void *qthis,
QTextCodec * arg1) {
  ((QTextStream*)qthis)->setCodec(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 120, column 10>
//   // proto:  void QTextStream::flush();
// _ZN11QTextStream5flushEv flush()
extern "C"
void
C_ZN11QTextStream5flushEv(void *qthis) {
  ((QTextStream*)qthis)->flush();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 143, column 10>
//   // proto:  void QTextStream::setIntegerBase(int base);
// _ZN11QTextStream14setIntegerBaseEi setIntegerBase(int)
extern "C"
void
C_ZN11QTextStream14setIntegerBaseEi(void *qthis,
int arg1) {
  ((QTextStream*)qthis)->setIntegerBase(arg1);
}
//   // proto:  void QTextStream::~QTextStream();
extern "C"
void C_ZN11QTextStreamD2Ev(void *qthis) {
  delete (QTextStream*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 106, column 13>
//   // proto:  QLocale QTextStream::locale();
// _ZNK11QTextStream6localeEv locale()
extern "C"
QLocale*
C_ZNK11QTextStream6localeEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->locale();
  return new QLocale(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 129, column 13>
//   // proto:  QString QTextStream::read(qint64 maxlen);
// _ZN11QTextStream4readEx read(qint64)
extern "C"
QString*
C_ZN11QTextStream4readEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QTextStream*)qthis)->read(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 134, column 10>
//   // proto:  void QTextStream::setPadChar(QChar ch);
// _ZN11QTextStream10setPadCharE5QChar setPadChar(class QChar)
extern "C"
void
C_ZN11QTextStream10setPadCharE5QChar(void *qthis,
QChar* arg1) {
  ((QTextStream*)qthis)->setPadChar(*((QChar*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 150, column 9>
//   // proto:  int QTextStream::realNumberPrecision();
// _ZNK11QTextStream19realNumberPrecisionEv realNumberPrecision()
extern "C"
int
C_ZNK11QTextStream19realNumberPrecisionEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->realNumberPrecision();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 122, column 12>
//   // proto:  qint64 QTextStream::pos();
// _ZNK11QTextStream3posEv pos()
extern "C"
long long
C_ZNK11QTextStream3posEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->pos();
  return ret; // 0 TypeKind.LONGLONG
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 132, column 20>
//   // proto:  QTextStream::FieldAlignment QTextStream::fieldAlignment();
// _ZNK11QTextStream14fieldAlignmentEv fieldAlignment()
extern "C"
QTextStream::FieldAlignment
C_ZNK11QTextStream14fieldAlignmentEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->fieldAlignment();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 128, column 13>
//   // proto:  QString QTextStream::readAll();
// _ZN11QTextStream7readAllEv readAll()
extern "C"
QString*
C_ZN11QTextStream7readAllEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->readAll();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 124, column 10>
//   // proto:  void QTextStream::skipWhiteSpace();
// _ZN11QTextStream14skipWhiteSpaceEv skipWhiteSpace()
extern "C"
void
C_ZN11QTextStream14skipWhiteSpaceEv(void *qthis) {
  ((QTextStream*)qthis)->skipWhiteSpace();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 137, column 10>
//   // proto:  void QTextStream::setFieldWidth(int width);
// _ZN11QTextStream13setFieldWidthEi setFieldWidth(int)
extern "C"
void
C_ZN11QTextStream13setFieldWidthEi(void *qthis,
int arg1) {
  ((QTextStream*)qthis)->setFieldWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 97, column 10>
//   // proto:  void QTextStream::setCodec(const char * codecName);
// _ZN11QTextStream8setCodecEPKc setCodec(const char *)
extern "C"
void
C_ZN11QTextStream8setCodecEPKc(void *qthis,
const char * arg1) {
  ((QTextStream*)qthis)->setCodec(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 144, column 9>
//   // proto:  int QTextStream::integerBase();
// _ZNK11QTextStream11integerBaseEv integerBase()
extern "C"
int
C_ZNK11QTextStream11integerBaseEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->integerBase();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 140, column 10>
//   // proto:  void QTextStream::setNumberFlags(NumberFlags flags);
// _ZN11QTextStream14setNumberFlagsE6QFlagsINS_10NumberFlagEE setNumberFlags(NumberFlags)
extern "C"
void
C_ZN11QTextStream14setNumberFlagsE6QFlagsINS_10NumberFlagEE(void *qthis,
QTextStream::NumberFlags arg1) {
  ((QTextStream*)qthis)->setNumberFlags(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 90, column 14>
//   // proto:  void QTextStream::QTextStream(QString * string, QIODevice::OpenMode openMode);
extern "C"
QTextStream*
C_ZN11QTextStreamC2EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(QString * arg1,
QIODevice::OpenMode* arg2) {
  auto ret = new QTextStream(arg1,
*((QIODevice::OpenMode*)arg2));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 126, column 13>
//   // proto:  QString QTextStream::readLine(qint64 maxlen);
// _ZN11QTextStream8readLineEx readLine(qint64)
extern "C"
QString*
C_ZN11QTextStream8readLineEx(void *qthis,
qint64 arg1) {
  auto ret =
  ((QTextStream*)qthis)->readLine(arg1);
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 141, column 17>
//   // proto:  NumberFlags QTextStream::numberFlags();
// _ZNK11QTextStream11numberFlagsEv numberFlags()
extern "C"
QFlags<QTextStream::NumberFlag>*
C_ZNK11QTextStream11numberFlagsEv(void *qthis) {
  auto ret =
  ((QTextStream*)qthis)->numberFlags();
  return new QFlags<QTextStream::NumberFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextstream.h', line 92, column 14>
//   // proto:  void QTextStream::QTextStream(const QByteArray & array, QIODevice::OpenMode openMode);
extern "C"
QTextStream*
C_ZN11QTextStreamC2ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(const QByteArray* arg1,
QIODevice::OpenMode* arg2) {
  auto ret = new QTextStream(*((const QByteArray*)arg1),
*((QIODevice::OpenMode*)arg2));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

