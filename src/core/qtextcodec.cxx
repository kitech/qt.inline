#include <qbytearray.h>
#include <qstring.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qtextcodec.h
// dst-file: /src/core/qtextcodec.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qtextcodec.h>

extern "C" {

int QTextEncoder_Class_Size()
{
  return sizeof(QTextEncoder);
}

int QTextCodec_Class_Size()
{
  return sizeof(QTextCodec);
}

int QTextDecoder_Class_Size()
{
  return sizeof(QTextDecoder);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qtextcodec_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 129, column 14>
//   // proto:  void QTextEncoder::QTextEncoder(const QTextCodec * codec);
if (false) {
  auto f = [](const QTextCodec * arg1) {
    new QTextEncoder(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 102, column 13>
//   // proto:  QString QTextCodec::toUnicode(const char * in, int length, QTextCodec::ConverterState * state);
if (false) {
  auto f = [](const char * arg1, int arg2, QTextCodec::ConverterState * arg3) {
    ((QTextCodec*)0)->toUnicode(arg1, arg2, arg3);
  };
}
// _ZNK10QTextCodec9toUnicodeEPKciPNS_14ConverterStateE toUnicode(const char *, int, struct QTextCodec::ConverterState *)
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 104, column 16>
//   // proto:  QByteArray QTextCodec::fromUnicode(const QChar * in, int length, QTextCodec::ConverterState * state);
if (false) {
  auto f = [](const QChar * arg1, int arg2, QTextCodec::ConverterState * arg3) {
    ((QTextCodec*)0)->fromUnicode(arg1, arg2, arg3);
  };
}
// _ZNK10QTextCodec11fromUnicodeEPK5QChariPNS_14ConverterStateE fromUnicode(const class QChar *, int, struct QTextCodec::ConverterState *)
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 56, column 24>
//   // proto: static QTextCodec * QTextCodec::codecForName(const char * name);
if (false) {
  auto f = [](const char * arg1) {
    ((QTextCodec*)0)->codecForName(arg1);
  };
}
// _ZN10QTextCodec12codecForNameEPKc codecForName(const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qtextcodec.h', line 143, column 14>
//   // proto:  void QTextDecoder::QTextDecoder(const QTextCodec * codec);
if (false) {
  auto f = [](const QTextCodec * arg1) {
    new QTextDecoder(arg1);
  };
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

