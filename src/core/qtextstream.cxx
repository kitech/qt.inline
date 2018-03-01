//  header block begin
// /usr/include/qt/QtCore/qtextstream.h
#ifndef protected
#define protected public
#endif
#include <qtextstream.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextStream is pure virtual: false
// QTextStream has virtual projected: false
//  header block end

//  main block begin

class MyQTextStream : public QTextStream {
public:
  virtual ~MyQTextStream() {}
// void QTextStream()
MyQTextStream() : QTextStream() {}
// void QTextStream(class QIODevice *)
MyQTextStream(QIODevice * device) : QTextStream(device) {}
// void QTextStream(class QString *, class QIODevice::OpenMode)
MyQTextStream(QString * string, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(string, openMode) {}
// void QTextStream(class QByteArray *, class QIODevice::OpenMode)
MyQTextStream(QByteArray * array, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(array, openMode) {}
// void QTextStream(const class QByteArray &, class QIODevice::OpenMode)
MyQTextStream(const QByteArray & array, QFlags<QIODevice::OpenModeFlag> openMode) : QTextStream(array, openMode) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:93
// [-2] void QTextStream()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamC2Ev() {
  return  new QTextStream();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:94
// [-2] void QTextStream(class QIODevice *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamC2EP9QIODevice(QIODevice * device) {
  return  new QTextStream(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:96
// [-2] void QTextStream(class QString *, class QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamC2EP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(QString * string, QFlags<QIODevice::OpenModeFlag> openMode) {
  return  new QTextStream(string, openMode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:97
// [-2] void QTextStream(class QByteArray *, class QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamC2EP10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray * array, QFlags<QIODevice::OpenModeFlag> openMode) {
  return  new QTextStream(array, openMode);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:98
// [-2] void QTextStream(const class QByteArray &, class QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamC2ERK10QByteArray6QFlagsIN9QIODevice12OpenModeFlagEE(QByteArray* array, QFlags<QIODevice::OpenModeFlag> openMode) {
  return  new QTextStream(*array, openMode);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:99
// [-2] void ~QTextStream()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStreamD2Ev(void *this_) {
  delete (QTextStream*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:102
// [-2] void setCodec(class QTextCodec *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream8setCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QTextStream*)this_)->setCodec(codec);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:103
// [-2] void setCodec(const char *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream8setCodecEPKc(void *this_, const char * codecName) {
  ((QTextStream*)this_)->setCodec(codecName);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:104
// [8] QTextCodec * codec()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextStream5codecEv(void *this_) {
  return (void*)((QTextStream*)this_)->codec();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:105
// [-2] void setAutoDetectUnicode(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream20setAutoDetectUnicodeEb(void *this_, bool enabled) {
  ((QTextStream*)this_)->setAutoDetectUnicode(enabled);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:106
// [1] bool autoDetectUnicode()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextStream17autoDetectUnicodeEv(void *this_) {
  return (bool)((QTextStream*)this_)->autoDetectUnicode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:107
// [-2] void setGenerateByteOrderMark(_Bool)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream24setGenerateByteOrderMarkEb(void *this_, bool generate) {
  ((QTextStream*)this_)->setGenerateByteOrderMark(generate);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:108
// [1] bool generateByteOrderMark()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextStream21generateByteOrderMarkEv(void *this_) {
  return (bool)((QTextStream*)this_)->generateByteOrderMark();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:111
// [-2] void setLocale(const class QLocale &)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream9setLocaleERK7QLocale(void *this_, QLocale* locale) {
  ((QTextStream*)this_)->setLocale(*locale);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:112
// [8] QLocale locale()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextStream6localeEv(void *this_) {
  auto rv = ((QTextStream*)this_)->locale();
return new QLocale(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:114
// [-2] void setDevice(class QIODevice *)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QTextStream*)this_)->setDevice(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:115
// [8] QIODevice * device()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextStream6deviceEv(void *this_) {
  return (void*)((QTextStream*)this_)->device();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:117
// [-2] void setString(class QString *, class QIODevice::OpenMode)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream9setStringEP7QString6QFlagsIN9QIODevice12OpenModeFlagEE(void *this_, QString * string, QFlags<QIODevice::OpenModeFlag> openMode) {
  ((QTextStream*)this_)->setString(string, openMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:118
// [8] QString * string()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextStream6stringEv(void *this_) {
  return (void*)((QTextStream*)this_)->string();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:120
// [4] QTextStream::Status status()
extern "C" Q_DECL_EXPORT
QTextStream::Status C_ZNK11QTextStream6statusEv(void *this_) {
  return (QTextStream::Status)((QTextStream*)this_)->status();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:121
// [-2] void setStatus(enum QTextStream::Status)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream9setStatusENS_6StatusE(void *this_, QTextStream::Status status) {
  ((QTextStream*)this_)->setStatus(status);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:122
// [-2] void resetStatus()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream11resetStatusEv(void *this_) {
  ((QTextStream*)this_)->resetStatus();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:124
// [1] bool atEnd()
extern "C" Q_DECL_EXPORT
bool C_ZNK11QTextStream5atEndEv(void *this_) {
  return (bool)((QTextStream*)this_)->atEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:125
// [-2] void reset()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream5resetEv(void *this_) {
  ((QTextStream*)this_)->reset();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:126
// [-2] void flush()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream5flushEv(void *this_) {
  ((QTextStream*)this_)->flush();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:127
// [1] bool seek(qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN11QTextStream4seekEx(void *this_, qint64 pos) {
  return (bool)((QTextStream*)this_)->seek(pos);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:128
// [8] qint64 pos()
extern "C" Q_DECL_EXPORT
qint64 C_ZNK11QTextStream3posEv(void *this_) {
  return (qint64)((QTextStream*)this_)->pos();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:130
// [-2] void skipWhiteSpace()
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream14skipWhiteSpaceEv(void *this_) {
  ((QTextStream*)this_)->skipWhiteSpace();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:132
// [8] QString readLine(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStream8readLineEx(void *this_, qint64 maxlen) {
  auto rv = ((QTextStream*)this_)->readLine(maxlen);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:133
// [1] bool readLineInto(class QString *, qint64)
extern "C" Q_DECL_EXPORT
bool C_ZN11QTextStream12readLineIntoEP7QStringx(void *this_, QString * line, qint64 maxlen) {
  return (bool)((QTextStream*)this_)->readLineInto(line, maxlen);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:134
// [8] QString readAll()
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStream7readAllEv(void *this_) {
  auto rv = ((QTextStream*)this_)->readAll();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:135
// [8] QString read(qint64)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStream4readEx(void *this_, qint64 maxlen) {
  auto rv = ((QTextStream*)this_)->read(maxlen);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:137
// [-2] void setFieldAlignment(enum QTextStream::FieldAlignment)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream17setFieldAlignmentENS_14FieldAlignmentE(void *this_, QTextStream::FieldAlignment alignment) {
  ((QTextStream*)this_)->setFieldAlignment(alignment);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:138
// [4] QTextStream::FieldAlignment fieldAlignment()
extern "C" Q_DECL_EXPORT
QTextStream::FieldAlignment C_ZNK11QTextStream14fieldAlignmentEv(void *this_) {
  return (QTextStream::FieldAlignment)((QTextStream*)this_)->fieldAlignment();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:140
// [-2] void setPadChar(class QChar)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream10setPadCharE5QChar(void *this_, QChar* ch) {
  ((QTextStream*)this_)->setPadChar(*ch);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:141
// [2] QChar padChar()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QTextStream7padCharEv(void *this_) {
  auto rv = ((QTextStream*)this_)->padChar();
return new QChar(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:143
// [-2] void setFieldWidth(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream13setFieldWidthEi(void *this_, int width) {
  ((QTextStream*)this_)->setFieldWidth(width);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:144
// [4] int fieldWidth()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextStream10fieldWidthEv(void *this_) {
  return (int)((QTextStream*)this_)->fieldWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:146
// [-2] void setNumberFlags(QTextStream::NumberFlags)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream14setNumberFlagsE6QFlagsINS_10NumberFlagEE(void *this_, QFlags<QTextStream::NumberFlag> flags) {
  ((QTextStream*)this_)->setNumberFlags(flags);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:147
// [4] QTextStream::NumberFlags numberFlags()
extern "C" Q_DECL_EXPORT
QTextStream::NumberFlags* C_ZNK11QTextStream11numberFlagsEv(void *this_) {
  auto rv = ((QTextStream*)this_)->numberFlags();
return new QTextStream::NumberFlags(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:149
// [-2] void setIntegerBase(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream14setIntegerBaseEi(void *this_, int base) {
  ((QTextStream*)this_)->setIntegerBase(base);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:150
// [4] int integerBase()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextStream11integerBaseEv(void *this_) {
  return (int)((QTextStream*)this_)->integerBase();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:152
// [-2] void setRealNumberNotation(enum QTextStream::RealNumberNotation)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream21setRealNumberNotationENS_18RealNumberNotationE(void *this_, QTextStream::RealNumberNotation notation) {
  ((QTextStream*)this_)->setRealNumberNotation(notation);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:153
// [4] QTextStream::RealNumberNotation realNumberNotation()
extern "C" Q_DECL_EXPORT
QTextStream::RealNumberNotation C_ZNK11QTextStream18realNumberNotationEv(void *this_) {
  return (QTextStream::RealNumberNotation)((QTextStream*)this_)->realNumberNotation();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:155
// [-2] void setRealNumberPrecision(int)
extern "C" Q_DECL_EXPORT
void C_ZN11QTextStream22setRealNumberPrecisionEi(void *this_, int precision) {
  ((QTextStream*)this_)->setRealNumberPrecision(precision);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:156
// [4] int realNumberPrecision()
extern "C" Q_DECL_EXPORT
int C_ZNK11QTextStream19realNumberPrecisionEv(void *this_) {
  return (int)((QTextStream*)this_)->realNumberPrecision();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:158
// [16] QTextStream & operator>>(class QChar &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsER5QChar(void *this_, QChar* ch) {
  auto& rv = ((QTextStream*)this_)->operator>>(*ch);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:159
// [16] QTextStream & operator>>(char &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERc(void *this_, char & ch) {
  auto& rv = ((QTextStream*)this_)->operator>>(ch);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:160
// [16] QTextStream & operator>>(short &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERs(void *this_, short & i) {
  auto& rv = ((QTextStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:161
// [16] QTextStream & operator>>(unsigned short &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERt(void *this_, unsigned short & i) {
  auto& rv = ((QTextStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:162
// [16] QTextStream & operator>>(int &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERi(void *this_, int & i) {
  auto& rv = ((QTextStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:163
// [16] QTextStream & operator>>(unsigned int &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERj(void *this_, unsigned int & i) {
  auto& rv = ((QTextStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:164
// [16] QTextStream & operator>>(long &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERl(void *this_, long & i) {
  auto& rv = ((QTextStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:165
// [16] QTextStream & operator>>(unsigned long &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERm(void *this_, unsigned long & i) {
  auto& rv = ((QTextStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:166
// [16] QTextStream & operator>>(qlonglong &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERx(void *this_, qlonglong & i) {
  auto& rv = ((QTextStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:167
// [16] QTextStream & operator>>(qulonglong &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERy(void *this_, qulonglong & i) {
  auto& rv = ((QTextStream*)this_)->operator>>(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:168
// [16] QTextStream & operator>>(float &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERf(void *this_, float & f) {
  auto& rv = ((QTextStream*)this_)->operator>>(f);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:169
// [16] QTextStream & operator>>(double &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsERd(void *this_, double & f) {
  auto& rv = ((QTextStream*)this_)->operator>>(f);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:170
// [16] QTextStream & operator>>(class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsER7QString(void *this_, QString* s) {
  auto& rv = ((QTextStream*)this_)->operator>>(*s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:171
// [16] QTextStream & operator>>(class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsER10QByteArray(void *this_, QByteArray* array) {
  auto& rv = ((QTextStream*)this_)->operator>>(*array);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:172
// [16] QTextStream & operator>>(char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamrsEPc(void *this_, char * c) {
  auto& rv = ((QTextStream*)this_)->operator>>(c);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:174
// [16] QTextStream & operator<<(class QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsE5QChar(void *this_, QChar* ch) {
  auto& rv = ((QTextStream*)this_)->operator<<(*ch);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:175
// [16] QTextStream & operator<<(char)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEc(void *this_, char ch) {
  auto& rv = ((QTextStream*)this_)->operator<<(ch);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:176
// [16] QTextStream & operator<<(short)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEs(void *this_, short i) {
  auto& rv = ((QTextStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:177
// [16] QTextStream & operator<<(unsigned short)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEt(void *this_, unsigned short i) {
  auto& rv = ((QTextStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:178
// [16] QTextStream & operator<<(int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEi(void *this_, int i) {
  auto& rv = ((QTextStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:179
// [16] QTextStream & operator<<(unsigned int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEj(void *this_, unsigned int i) {
  auto& rv = ((QTextStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:180
// [16] QTextStream & operator<<(long)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEl(void *this_, long i) {
  auto& rv = ((QTextStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:181
// [16] QTextStream & operator<<(unsigned long)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEm(void *this_, unsigned long i) {
  auto& rv = ((QTextStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:182
// [16] QTextStream & operator<<(qlonglong)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEx(void *this_, qlonglong i) {
  auto& rv = ((QTextStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:183
// [16] QTextStream & operator<<(qulonglong)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEy(void *this_, qulonglong i) {
  auto& rv = ((QTextStream*)this_)->operator<<(i);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:184
// [16] QTextStream & operator<<(float)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEf(void *this_, float f) {
  auto& rv = ((QTextStream*)this_)->operator<<(f);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:185
// [16] QTextStream & operator<<(double)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEd(void *this_, double f) {
  auto& rv = ((QTextStream*)this_)->operator<<(f);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:186
// [16] QTextStream & operator<<(const class QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsERK7QString(void *this_, QString* s) {
  auto& rv = ((QTextStream*)this_)->operator<<(*s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:187
// [16] QTextStream & operator<<(class QLatin1String)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsE13QLatin1String(void *this_, QLatin1String* s) {
  auto& rv = ((QTextStream*)this_)->operator<<(*s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:188
// [16] QTextStream & operator<<(const class QStringRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsERK10QStringRef(void *this_, QStringRef* s) {
  auto& rv = ((QTextStream*)this_)->operator<<(*s);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:189
// [16] QTextStream & operator<<(const class QByteArray &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsERK10QByteArray(void *this_, QByteArray* array) {
  auto& rv = ((QTextStream*)this_)->operator<<(*array);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:190
// [16] QTextStream & operator<<(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEPKc(void *this_, const char * c) {
  auto& rv = ((QTextStream*)this_)->operator<<(c);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:191
// [16] QTextStream & operator<<(const void *)
extern "C" Q_DECL_EXPORT
void* C_ZN11QTextStreamlsEPKv(void *this_, const void * ptr) {
  auto& rv = ((QTextStream*)this_)->operator<<(ptr);
return &rv;
}

//  main block end
