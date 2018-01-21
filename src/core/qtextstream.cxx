//  header block begin
// /usr/include/qt/QtCore/qtextstream.h
#include <qtextstream.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qtextstream.h:93
// void QTextStream()
extern "C"
void* C_ZN11QTextStreamC1Ev() {
  return new QTextStream();
}
// /usr/include/qt/QtCore/qtextstream.h:94
// void QTextStream(class QIODevice *)
extern "C"
void* C_ZN11QTextStreamC1EP9QIODevice(QIODevice * device) {
  return new QTextStream(device);
}
// /usr/include/qt/QtCore/qtextstream.h:95
// void QTextStream(FILE *, class QIODevice::OpenMode)
extern "C"
void* C_ZN11QTextStreamC1EP8_IO_FILE6QFlagsIN9QIODevice12OpenModeFlagEE(FILE * fileHandle, QFlags<QIODevice::OpenModeFlag> openMode) {
  return new QTextStream(fileHandle, openMode);
}
// /usr/include/qt/QtCore/qtextstream.h:96
// void QTextStream(class QString *, class QIODevice::OpenMode)
extern "C"
void* C_ZN11QTextStreamC1EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(QString * string, QFlags<QIODevice::OpenModeFlag> openMode) {
  return new QTextStream(string, openMode);
}
// /usr/include/qt/QtCore/qtextstream.h:97
// void QTextStream(class QByteArray *, class QIODevice::OpenMode)
extern "C"
void* C_ZN11QTextStreamC1EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray * array, QFlags<QIODevice::OpenModeFlag> openMode) {
  return new QTextStream(array, openMode);
}
// /usr/include/qt/QtCore/qtextstream.h:98
// void QTextStream(const class QByteArray &, class QIODevice::OpenMode)
extern "C"
void* C_ZN11QTextStreamC1ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(const QByteArray & array, QFlags<QIODevice::OpenModeFlag> openMode) {
  return new QTextStream(array, openMode);
}
// virtual
// /usr/include/qt/QtCore/qtextstream.h:99
// void ~QTextStream()
extern "C"
void C_ZN11QTextStreamD1Ev(void *this_) {
  delete (QTextStream*)(this_);
}
// /usr/include/qt/QtCore/qtextstream.h:102
// void setCodec(class QTextCodec *)
extern "C"
void C_ZN11QTextStream8setCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QTextStream*)this_)->setCodec(codec);
}
// /usr/include/qt/QtCore/qtextstream.h:103
// void setCodec(const char *)
extern "C"
void C_ZN11QTextStream8setCodecEPKc(void *this_, const char * codecName) {
  ((QTextStream*)this_)->setCodec(codecName);
}
// /usr/include/qt/QtCore/qtextstream.h:104
// QTextCodec * codec()
extern "C"
void C_ZNK11QTextStream5codecEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->codec();
}
// /usr/include/qt/QtCore/qtextstream.h:105
// void setAutoDetectUnicode(_Bool)
extern "C"
void C_ZN11QTextStream20setAutoDetectUnicodeEb(void *this_, bool enabled) {
  ((QTextStream*)this_)->setAutoDetectUnicode(enabled);
}
// /usr/include/qt/QtCore/qtextstream.h:106
// bool autoDetectUnicode()
extern "C"
void C_ZNK11QTextStream17autoDetectUnicodeEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->autoDetectUnicode();
}
// /usr/include/qt/QtCore/qtextstream.h:107
// void setGenerateByteOrderMark(_Bool)
extern "C"
void C_ZN11QTextStream24setGenerateByteOrderMarkEb(void *this_, bool generate) {
  ((QTextStream*)this_)->setGenerateByteOrderMark(generate);
}
// /usr/include/qt/QtCore/qtextstream.h:108
// bool generateByteOrderMark()
extern "C"
void C_ZNK11QTextStream21generateByteOrderMarkEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->generateByteOrderMark();
}
// /usr/include/qt/QtCore/qtextstream.h:111
// void setLocale(const class QLocale &)
extern "C"
void C_ZN11QTextStream9setLocaleERK7QLocale(void *this_, const QLocale & locale) {
  ((QTextStream*)this_)->setLocale(locale);
}
// /usr/include/qt/QtCore/qtextstream.h:112
// QLocale locale()
extern "C"
void C_ZNK11QTextStream6localeEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->locale();
}
// /usr/include/qt/QtCore/qtextstream.h:114
// void setDevice(class QIODevice *)
extern "C"
void C_ZN11QTextStream9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QTextStream*)this_)->setDevice(device);
}
// /usr/include/qt/QtCore/qtextstream.h:115
// QIODevice * device()
extern "C"
void C_ZNK11QTextStream6deviceEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->device();
}
// /usr/include/qt/QtCore/qtextstream.h:117
// void setString(class QString *, class QIODevice::OpenMode)
extern "C"
void C_ZN11QTextStream9setStringEP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QString * string, QFlags<QIODevice::OpenModeFlag> openMode) {
  ((QTextStream*)this_)->setString(string, openMode);
}
// /usr/include/qt/QtCore/qtextstream.h:118
// QString * string()
extern "C"
void C_ZNK11QTextStream6stringEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->string();
}
// /usr/include/qt/QtCore/qtextstream.h:120
// QTextStream::Status status()
extern "C"
void C_ZNK11QTextStream6statusEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->status();
}
// /usr/include/qt/QtCore/qtextstream.h:121
// void setStatus(enum QTextStream::Status)
extern "C"
void C_ZN11QTextStream9setStatusENS_6StatusE(void *this_, QTextStream::Status status) {
  ((QTextStream*)this_)->setStatus(status);
}
// /usr/include/qt/QtCore/qtextstream.h:122
// void resetStatus()
extern "C"
void C_ZN11QTextStream11resetStatusEv(void *this_) {
  ((QTextStream*)this_)->resetStatus();
}
// /usr/include/qt/QtCore/qtextstream.h:124
// bool atEnd()
extern "C"
void C_ZNK11QTextStream5atEndEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->atEnd();
}
// /usr/include/qt/QtCore/qtextstream.h:125
// void reset()
extern "C"
void C_ZN11QTextStream5resetEv(void *this_) {
  ((QTextStream*)this_)->reset();
}
// /usr/include/qt/QtCore/qtextstream.h:126
// void flush()
extern "C"
void C_ZN11QTextStream5flushEv(void *this_) {
  ((QTextStream*)this_)->flush();
}
// /usr/include/qt/QtCore/qtextstream.h:127
// bool seek(qint64)
extern "C"
void C_ZN11QTextStream4seekEx(void *this_, qint64 pos) {
  /*return*/ ((QTextStream*)this_)->seek(pos);
}
// /usr/include/qt/QtCore/qtextstream.h:128
// qint64 pos()
extern "C"
void C_ZNK11QTextStream3posEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->pos();
}
// /usr/include/qt/QtCore/qtextstream.h:130
// void skipWhiteSpace()
extern "C"
void C_ZN11QTextStream14skipWhiteSpaceEv(void *this_) {
  ((QTextStream*)this_)->skipWhiteSpace();
}
// /usr/include/qt/QtCore/qtextstream.h:132
// QString readLine(qint64)
extern "C"
void C_ZN11QTextStream8readLineEx(void *this_, qint64 maxlen) {
  /*return*/ ((QTextStream*)this_)->readLine(maxlen);
}
// /usr/include/qt/QtCore/qtextstream.h:133
// bool readLineInto(class QString *, qint64)
extern "C"
void C_ZN11QTextStream12readLineIntoEP7QStringx(void *this_, QString * line, qint64 maxlen) {
  /*return*/ ((QTextStream*)this_)->readLineInto(line, maxlen);
}
// /usr/include/qt/QtCore/qtextstream.h:134
// QString readAll()
extern "C"
void C_ZN11QTextStream7readAllEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->readAll();
}
// /usr/include/qt/QtCore/qtextstream.h:135
// QString read(qint64)
extern "C"
void C_ZN11QTextStream4readEx(void *this_, qint64 maxlen) {
  /*return*/ ((QTextStream*)this_)->read(maxlen);
}
// /usr/include/qt/QtCore/qtextstream.h:137
// void setFieldAlignment(enum QTextStream::FieldAlignment)
extern "C"
void C_ZN11QTextStream17setFieldAlignmentENS_14FieldAlignmentE(void *this_, QTextStream::FieldAlignment alignment) {
  ((QTextStream*)this_)->setFieldAlignment(alignment);
}
// /usr/include/qt/QtCore/qtextstream.h:138
// QTextStream::FieldAlignment fieldAlignment()
extern "C"
void C_ZNK11QTextStream14fieldAlignmentEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->fieldAlignment();
}
// /usr/include/qt/QtCore/qtextstream.h:140
// void setPadChar(class QChar)
extern "C"
void C_ZN11QTextStream10setPadCharE5QChar(void *this_, QChar ch) {
  ((QTextStream*)this_)->setPadChar(ch);
}
// /usr/include/qt/QtCore/qtextstream.h:141
// QChar padChar()
extern "C"
void C_ZNK11QTextStream7padCharEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->padChar();
}
// /usr/include/qt/QtCore/qtextstream.h:143
// void setFieldWidth(int)
extern "C"
void C_ZN11QTextStream13setFieldWidthEi(void *this_, int width) {
  ((QTextStream*)this_)->setFieldWidth(width);
}
// /usr/include/qt/QtCore/qtextstream.h:144
// int fieldWidth()
extern "C"
void C_ZNK11QTextStream10fieldWidthEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->fieldWidth();
}
// /usr/include/qt/QtCore/qtextstream.h:146
// void setNumberFlags(NumberFlags)
extern "C"
void C_ZN11QTextStream14setNumberFlagsE6QFlagsINS_10NumberFlagEE(void *this_, QFlags<QTextStream::NumberFlag> flags) {
  ((QTextStream*)this_)->setNumberFlags(flags);
}
// /usr/include/qt/QtCore/qtextstream.h:147
// NumberFlags numberFlags()
extern "C"
void C_ZNK11QTextStream11numberFlagsEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->numberFlags();
}
// /usr/include/qt/QtCore/qtextstream.h:149
// void setIntegerBase(int)
extern "C"
void C_ZN11QTextStream14setIntegerBaseEi(void *this_, int base) {
  ((QTextStream*)this_)->setIntegerBase(base);
}
// /usr/include/qt/QtCore/qtextstream.h:150
// int integerBase()
extern "C"
void C_ZNK11QTextStream11integerBaseEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->integerBase();
}
// /usr/include/qt/QtCore/qtextstream.h:152
// void setRealNumberNotation(enum QTextStream::RealNumberNotation)
extern "C"
void C_ZN11QTextStream21setRealNumberNotationENS_18RealNumberNotationE(void *this_, QTextStream::RealNumberNotation notation) {
  ((QTextStream*)this_)->setRealNumberNotation(notation);
}
// /usr/include/qt/QtCore/qtextstream.h:153
// QTextStream::RealNumberNotation realNumberNotation()
extern "C"
void C_ZNK11QTextStream18realNumberNotationEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->realNumberNotation();
}
// /usr/include/qt/QtCore/qtextstream.h:155
// void setRealNumberPrecision(int)
extern "C"
void C_ZN11QTextStream22setRealNumberPrecisionEi(void *this_, int precision) {
  ((QTextStream*)this_)->setRealNumberPrecision(precision);
}
// /usr/include/qt/QtCore/qtextstream.h:156
// int realNumberPrecision()
extern "C"
void C_ZNK11QTextStream19realNumberPrecisionEv(void *this_) {
  /*return*/ ((QTextStream*)this_)->realNumberPrecision();
}
//  main block end
