//  header block begin
// /usr/include/qt/QtCore/qtextstream.h
#include <qtextstream.h>
#include <QtCore>

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
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:93
// [-2] void QTextStream()
extern "C"
void* C_ZN11QTextStreamC2Ev() {
  return  new QTextStream();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:94
// [-2] void QTextStream(class QIODevice *)
extern "C"
void* C_ZN11QTextStreamC2EP9QIODevice(QIODevice * device) {
  return  new QTextStream(device);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:99
// [-2] void ~QTextStream()
extern "C"
void C_ZN11QTextStreamD2Ev(void *this_) {
  delete (QTextStream*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:102
// [-2] void setCodec(class QTextCodec *)
extern "C"
void C_ZN11QTextStream8setCodecEP10QTextCodec(void *this_, QTextCodec * codec) {
  ((QTextStream*)this_)->setCodec(codec);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:103
// [-2] void setCodec(const char *)
extern "C"
void C_ZN11QTextStream8setCodecEPKc(void *this_, const char * codecName) {
  ((QTextStream*)this_)->setCodec(codecName);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:104
// [8] QTextCodec * codec()
extern "C"
void* C_ZNK11QTextStream5codecEv(void *this_) {
  return (void*)((QTextStream*)this_)->codec();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:105
// [-2] void setAutoDetectUnicode(_Bool)
extern "C"
void C_ZN11QTextStream20setAutoDetectUnicodeEb(void *this_, bool enabled) {
  ((QTextStream*)this_)->setAutoDetectUnicode(enabled);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:106
// [1] bool autoDetectUnicode()
extern "C"
bool C_ZNK11QTextStream17autoDetectUnicodeEv(void *this_) {
  return (bool)((QTextStream*)this_)->autoDetectUnicode();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:107
// [-2] void setGenerateByteOrderMark(_Bool)
extern "C"
void C_ZN11QTextStream24setGenerateByteOrderMarkEb(void *this_, bool generate) {
  ((QTextStream*)this_)->setGenerateByteOrderMark(generate);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:108
// [1] bool generateByteOrderMark()
extern "C"
bool C_ZNK11QTextStream21generateByteOrderMarkEv(void *this_) {
  return (bool)((QTextStream*)this_)->generateByteOrderMark();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:111
// [-2] void setLocale(const class QLocale &)
extern "C"
void C_ZN11QTextStream9setLocaleERK7QLocale(void *this_, QLocale* locale) {
  ((QTextStream*)this_)->setLocale(*locale);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:112
// [8] QLocale locale()
extern "C"
void* C_ZNK11QTextStream6localeEv(void *this_) {
  auto rv = ((QTextStream*)this_)->locale();
return new QLocale(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:114
// [-2] void setDevice(class QIODevice *)
extern "C"
void C_ZN11QTextStream9setDeviceEP9QIODevice(void *this_, QIODevice * device) {
  ((QTextStream*)this_)->setDevice(device);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:115
// [8] QIODevice * device()
extern "C"
void* C_ZNK11QTextStream6deviceEv(void *this_) {
  return (void*)((QTextStream*)this_)->device();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:118
// [8] QString * string()
extern "C"
void* C_ZNK11QTextStream6stringEv(void *this_) {
  return (void*)((QTextStream*)this_)->string();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:120
// [4] QTextStream::Status status()
extern "C"
QTextStream::Status C_ZNK11QTextStream6statusEv(void *this_) {
  return (QTextStream::Status)((QTextStream*)this_)->status();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:121
// [-2] void setStatus(enum QTextStream::Status)
extern "C"
void C_ZN11QTextStream9setStatusENS_6StatusE(void *this_, QTextStream::Status status) {
  ((QTextStream*)this_)->setStatus(status);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:122
// [-2] void resetStatus()
extern "C"
void C_ZN11QTextStream11resetStatusEv(void *this_) {
  ((QTextStream*)this_)->resetStatus();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:124
// [1] bool atEnd()
extern "C"
bool C_ZNK11QTextStream5atEndEv(void *this_) {
  return (bool)((QTextStream*)this_)->atEnd();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:125
// [-2] void reset()
extern "C"
void C_ZN11QTextStream5resetEv(void *this_) {
  ((QTextStream*)this_)->reset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:126
// [-2] void flush()
extern "C"
void C_ZN11QTextStream5flushEv(void *this_) {
  ((QTextStream*)this_)->flush();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:127
// [1] bool seek(qint64)
extern "C"
bool C_ZN11QTextStream4seekEx(void *this_, qint64 pos) {
  return (bool)((QTextStream*)this_)->seek(pos);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:128
// [8] qint64 pos()
extern "C"
qint64 C_ZNK11QTextStream3posEv(void *this_) {
  return (qint64)((QTextStream*)this_)->pos();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:130
// [-2] void skipWhiteSpace()
extern "C"
void C_ZN11QTextStream14skipWhiteSpaceEv(void *this_) {
  ((QTextStream*)this_)->skipWhiteSpace();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:132
// [8] QString readLine(qint64)
extern "C"
void* C_ZN11QTextStream8readLineEx(void *this_, qint64 maxlen) {
  auto rv = ((QTextStream*)this_)->readLine(maxlen);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:133
// [1] bool readLineInto(class QString *, qint64)
extern "C"
bool C_ZN11QTextStream12readLineIntoEP7QStringx(void *this_, QString * line, qint64 maxlen) {
  return (bool)((QTextStream*)this_)->readLineInto(line, maxlen);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:134
// [8] QString readAll()
extern "C"
void* C_ZN11QTextStream7readAllEv(void *this_) {
  auto rv = ((QTextStream*)this_)->readAll();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:135
// [8] QString read(qint64)
extern "C"
void* C_ZN11QTextStream4readEx(void *this_, qint64 maxlen) {
  auto rv = ((QTextStream*)this_)->read(maxlen);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:137
// [-2] void setFieldAlignment(enum QTextStream::FieldAlignment)
extern "C"
void C_ZN11QTextStream17setFieldAlignmentENS_14FieldAlignmentE(void *this_, QTextStream::FieldAlignment alignment) {
  ((QTextStream*)this_)->setFieldAlignment(alignment);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:138
// [4] QTextStream::FieldAlignment fieldAlignment()
extern "C"
QTextStream::FieldAlignment C_ZNK11QTextStream14fieldAlignmentEv(void *this_) {
  return (QTextStream::FieldAlignment)((QTextStream*)this_)->fieldAlignment();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:140
// [-2] void setPadChar(class QChar)
extern "C"
void C_ZN11QTextStream10setPadCharE5QChar(void *this_, QChar* ch) {
  ((QTextStream*)this_)->setPadChar(*ch);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:141
// [2] QChar padChar()
extern "C"
void* C_ZNK11QTextStream7padCharEv(void *this_) {
  auto rv = ((QTextStream*)this_)->padChar();
return new QChar(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:143
// [-2] void setFieldWidth(int)
extern "C"
void C_ZN11QTextStream13setFieldWidthEi(void *this_, int width) {
  ((QTextStream*)this_)->setFieldWidth(width);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:144
// [4] int fieldWidth()
extern "C"
int C_ZNK11QTextStream10fieldWidthEv(void *this_) {
  return (int)((QTextStream*)this_)->fieldWidth();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:146
// [-2] void setNumberFlags(QTextStream::NumberFlags)
extern "C"
void C_ZN11QTextStream14setNumberFlagsE6QFlagsINS_10NumberFlagEE(void *this_, QFlags<QTextStream::NumberFlag> flags) {
  ((QTextStream*)this_)->setNumberFlags(flags);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:147
// [4] QTextStream::NumberFlags numberFlags()
extern "C"
void C_ZNK11QTextStream11numberFlagsEv(void *this_) {
  auto rv = ((QTextStream*)this_)->numberFlags();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:149
// [-2] void setIntegerBase(int)
extern "C"
void C_ZN11QTextStream14setIntegerBaseEi(void *this_, int base) {
  ((QTextStream*)this_)->setIntegerBase(base);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:150
// [4] int integerBase()
extern "C"
int C_ZNK11QTextStream11integerBaseEv(void *this_) {
  return (int)((QTextStream*)this_)->integerBase();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:152
// [-2] void setRealNumberNotation(enum QTextStream::RealNumberNotation)
extern "C"
void C_ZN11QTextStream21setRealNumberNotationENS_18RealNumberNotationE(void *this_, QTextStream::RealNumberNotation notation) {
  ((QTextStream*)this_)->setRealNumberNotation(notation);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:153
// [4] QTextStream::RealNumberNotation realNumberNotation()
extern "C"
QTextStream::RealNumberNotation C_ZNK11QTextStream18realNumberNotationEv(void *this_) {
  return (QTextStream::RealNumberNotation)((QTextStream*)this_)->realNumberNotation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:155
// [-2] void setRealNumberPrecision(int)
extern "C"
void C_ZN11QTextStream22setRealNumberPrecisionEi(void *this_, int precision) {
  ((QTextStream*)this_)->setRealNumberPrecision(precision);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextstream.h:156
// [4] int realNumberPrecision()
extern "C"
int C_ZNK11QTextStream19realNumberPrecisionEv(void *this_) {
  return (int)((QTextStream*)this_)->realNumberPrecision();
}
//  main block end
