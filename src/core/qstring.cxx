#include <qglobal.h>
#include <qchar.h>
#include <qbytearray.h>
// auto generated, do not modify.
// created: Fri Jan 15 23:52:53 2016
// src-file: /QtCore/qstring.h
// dst-file: /src/core/qstring.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>

extern "C" {

int QStringDataPtr_Class_Size()
{
  return sizeof(QStringDataPtr);
}

int QString_Class_Size()
{
  return sizeof(QString);
}

int QLatin1String_Class_Size()
{
  return sizeof(QLatin1String);
}

int QCharRef_Class_Size()
{
  return sizeof(QCharRef);
}

int QStringRef_Class_Size()
{
  return sizeof(QStringRef);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qstring_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 431, column 21>
//   // proto:  QString & QString::prepend(QLatin1String s);
if (false) {
  auto f = [](QLatin1String arg1) {
    ((QString*)0)->prepend(arg1);
  };
}
// _ZN7QString7prependE13QLatin1String prepend(class QLatin1String)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 736, column 25>
//   // proto:  std::wstring QString::toStdWString();
if (false) {
  auto f = []() {
    ((QString*)0)->toStdWString();
  };
}
// _ZNK7QString12toStdWStringEv toStdWString()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 758, column 17>
//   // proto:  bool QString::isNull();
if (false) {
  auto f = []() {
    ((QString*)0)->isNull();
  };
}
// _ZNK7QString6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 429, column 21>
//   // proto:  QString & QString::prepend(QChar c);
if (false) {
  auto f = [](QChar arg1) {
    ((QString*)0)->prepend(arg1);
  };
}
// _ZN7QString7prependE5QChar prepend(class QChar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 734, column 24>
//   // proto:  std::string QString::toStdString();
if (false) {
  auto f = []() {
    ((QString*)0)->toStdString();
  };
}
// _ZNK7QString11toStdStringEv toStdString()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 663, column 40>
//   // proto:  QString & QString::prepend(const char * s);
if (false) {
  auto f = [](const char * arg1) {
    ((QString*)0)->prepend(arg1);
  };
}
// _ZN7QString7prependEPKc prepend(const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 730, column 17>
//   // proto:  void QString::push_front(QChar c);
if (false) {
  auto f = [](QChar arg1) {
    ((QString*)0)->push_front(arg1);
  };
}
// _ZN7QString10push_frontE5QChar push_front(class QChar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 213, column 12>
//   // proto:  void QString::QString();
if (false) {
  auto f = []() {
    new QString();
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 294, column 13>
//   // proto:  QString QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7, const QString & a8);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2, const QString & arg3, const QString & arg4, const QString & arg5, const QString & arg6, const QString & arg7, const QString & arg8) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8);
  };
}
// _ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_S1_ arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 605, column 14>
//   // proto:  QString & QString::setNum(short , int base);
if (false) {
  auto f = [](short arg1, int arg2) {
    ((QString*)0)->setNum(arg1, arg2);
  };
}
// _ZN7QString6setNumEsi setNum(short, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 353, column 13>
//   // proto:  QString QString::section(QChar sep, int start, int end, SectionFlags flags);
if (false) {
  auto f = [](QChar arg1, int arg2, int arg3, QString::SectionFlags arg4) {
    ((QString*)0)->section(arg1, arg2, arg3, arg4);
  };
}
// _ZNK7QString7sectionE5QCharii6QFlagsINS_11SectionFlagEE section(class QChar, int, int, SectionFlags)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 248, column 17>
//   // proto:  void QString::detach();
if (false) {
  auto f = []() {
    ((QString*)0)->detach();
  };
}
// _ZN7QString6detachEv detach()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 285, column 13>
//   // proto:  QString QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2, const QString & arg3, const QString & arg4) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4);
  };
}
// _ZNK7QString3argERKS_S1_S1_S1_ arg(const class QString &, const class QString &, const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 224, column 12>
//   // proto:  void QString::QString(QString && other);
if (false) {
  auto f = [](QString && arg1) {
    new QString(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 263, column 13>
//   // proto:  QString QString::arg(long a, int fieldwidth, int base, QChar fillChar);
if (false) {
  auto f = [](long arg1, int arg2, int arg3, QChar arg4) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4);
  };
}
// _ZNK7QString3argElii5QChar arg(long, int, int, class QChar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 230, column 16>
//   // proto:  int QString::count();
if (false) {
  auto f = []() {
    ((QString*)0)->count();
  };
}
// _ZNK7QString5countEv count()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 392, column 13>
//   // proto:  QString QString::toUpper();
if (false) {
  auto f = []() {
    ((QString*)0)->toUpper();
  };
}
// _ZNKR7QString7toUpperEv toUpper()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 735, column 27>
//   // proto: static QString QString::fromStdWString(const std::wstring & s);
if (false) {
  auto f = [](const std::wstring & arg1) {
    ((QString*)0)->fromStdWString(arg1);
  };
}
// _ZN7QString14fromStdWStringERKi fromStdWString(const std::wstring &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 728, column 17>
//   // proto:  void QString::push_back(QChar c);
if (false) {
  auto f = [](QChar arg1) {
    ((QString*)0)->push_back(arg1);
  };
}
// _ZN7QString9push_backE5QChar push_back(class QChar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 400, column 13>
//   // proto:  QString QString::trimmed();
if (false) {
  auto f = []() {
    ((QString*)0)->trimmed();
  };
}
// _ZNKR7QString7trimmedEv trimmed()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 716, column 20>
//   // proto:  const_iterator QString::end();
if (false) {
  auto f = []() {
    ((QString*)0)->end();
  };
}
// _ZNK7QString3endEv end()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 613, column 14>
//   // proto:  QString & QString::setNum(float , char f, int prec);
if (false) {
  auto f = [](float arg1, char arg2, int arg3) {
    ((QString*)0)->setNum(arg1, arg2, arg3);
  };
}
// _ZN7QString6setNumEfci setNum(float, char, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 396, column 13>
//   // proto:  QString QString::toCaseFolded();
if (false) {
  auto f = []() {
    ((QString*)0)->toCaseFolded();
  };
}
// _ZNKR7QString12toCaseFoldedEv toCaseFolded()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 229, column 16>
//   // proto:  int QString::size();
if (false) {
  auto f = []() {
    ((QString*)0)->size();
  };
}
// _ZNK7QString4sizeEv size()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 404, column 13>
//   // proto:  QString QString::simplified();
if (false) {
  auto f = []() {
    ((QString*)0)->simplified();
  };
}
// _ZNKR7QString10simplifiedEv simplified()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 402, column 13>
//   // proto:  QString QString::trimmed();
if (false) {
  auto f = []() {
    ((QString*)0)->trimmed();
  };
}
// _ZNO7QString7trimmedEv trimmed()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 422, column 21>
//   // proto:  QString & QString::insert(int i, const QString & s);
if (false) {
  auto f = [](int arg1, const QString & arg2) {
    ((QString*)0)->insert(arg1, arg2);
  };
}
// _ZN7QString6insertEiRKS_ insert(int, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 287, column 13>
//   // proto:  QString QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2, const QString & arg3, const QString & arg4, const QString & arg5) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4, arg5);
  };
}
// _ZNK7QString3argERKS_S1_S1_S1_S1_ arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 217, column 12>
//   // proto:  void QString::QString(QLatin1String latin1);
if (false) {
  auto f = [](QLatin1String arg1) {
    new QString(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 430, column 21>
//   // proto:  QString & QString::prepend(const QString & s);
if (false) {
  auto f = [](const QString & arg1) {
    ((QString*)0)->prepend(arg1);
  };
}
// _ZN7QString7prependERKS_ prepend(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 511, column 16>
//   // proto:  QByteArray QString::toLocal8Bit();
if (false) {
  auto f = []() {
    ((QString*)0)->toLocal8Bit();
  };
}
// _ZNKR7QString11toLocal8BitEv toLocal8Bit()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 249, column 17>
//   // proto:  bool QString::isDetached();
if (false) {
  auto f = []() {
    ((QString*)0)->isDetached();
  };
}
// _ZNK7QString10isDetachedEv isDetached()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 532, column 27>
//   // proto: static QString QString::fromLocal8Bit(const char * str, int size);
if (false) {
  auto f = [](const char * arg1, int arg2) {
    ((QString*)0)->fromLocal8Bit(arg1, arg2);
  };
}
// _ZN7QString13fromLocal8BitEPKci fromLocal8Bit(const char *, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 228, column 17>
//   // proto:  void QString::swap(QString & other);
if (false) {
  auto f = [](QString & arg1) {
    ((QString*)0)->swap(arg1);
  };
}
// _ZN7QString4swapERS_ swap(class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 538, column 27>
//   // proto: static QString QString::fromUtf8(const QByteArray & str);
if (false) {
  auto f = [](const QByteArray & arg1) {
    ((QString*)0)->fromUtf8(arg1);
  };
}
// _ZN7QString8fromUtf8ERK10QByteArray fromUtf8(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 549, column 20>
//   // proto: static QString QString::fromUcs4(const char32_t * str, int size);
if (false) {
  auto f = [](const char32_t * arg1, int arg2) {
    ((QString*)0)->fromUcs4(arg1, arg2);
  };
}
// _ZN7QString8fromUcs4EPKDii fromUcs4(const char32_t *, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 729, column 17>
//   // proto:  void QString::push_back(const QString & s);
if (false) {
  auto f = [](const QString & arg1) {
    ((QString*)0)->push_back(arg1);
  };
}
// _ZN7QString9push_backERKS_ push_back(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 284, column 13>
//   // proto:  QString QString::arg(const QString & a1, const QString & a2, const QString & a3);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2, const QString & arg3) {
    ((QString*)0)->arg(arg1, arg2, arg3);
  };
}
// _ZNK7QString3argERKS_S1_S1_ arg(const class QString &, const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 509, column 16>
//   // proto:  QByteArray QString::toUtf8();
if (false) {
  auto f = []() {
    ((QString*)0)->toUtf8();
  };
}
// _ZNO7QString6toUtf8Ev toUtf8()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 244, column 19>
//   // proto:  QChar * QString::data();
if (false) {
  auto f = []() {
    ((QString*)0)->data();
  };
}
// _ZN7QString4dataEv data()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 398, column 13>
//   // proto:  QString QString::toCaseFolded();
if (false) {
  auto f = []() {
    ((QString*)0)->toCaseFolded();
  };
}
// _ZNO7QString12toCaseFoldedEv toCaseFolded()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 608, column 14>
//   // proto:  QString & QString::setNum(uint , int base);
if (false) {
  auto f = [](uint arg1, int arg2) {
    ((QString*)0)->setNum(arg1, arg2);
  };
}
// _ZN7QString6setNumEji setNum(uint, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 587, column 16>
//   // proto: static int QString::localeAwareCompare(const QString & s1, const QString & s2);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2) {
    ((QString*)0)->localeAwareCompare(arg1, arg2);
  };
}
// _ZN7QString18localeAwareCompareERKS_S1_ localeAwareCompare(const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 317, column 17>
//   // proto:  bool QString::contains(QLatin1String s, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](QLatin1String arg1, Qt::CaseSensitivity arg2) {
    ((QString*)0)->contains(arg1, arg2);
  };
}
// _ZNK7QString8containsE13QLatin1StringN2Qt15CaseSensitivityE contains(class QLatin1String, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 649, column 31>
//   // proto:  void QString::QString(const char * ch);
if (false) {
  auto f = [](const char * arg1) {
    new QString(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 547, column 20>
//   // proto: static QString QString::fromUtf16(const char16_t * str, int size);
if (false) {
  auto f = [](const char16_t * arg1, int arg2) {
    ((QString*)0)->fromUtf16(arg1, arg2);
  };
}
// _ZN7QString9fromUtf16EPKDsi fromUtf16(const char16_t *, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 390, column 13>
//   // proto:  QString QString::toLower();
if (false) {
  auto f = []() {
    ((QString*)0)->toLower();
  };
}
// _ZNO7QString7toLowerEv toLower()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 578, column 23>
//   // proto: static int QString::compare(QLatin1String s1, const QString & s2, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](QLatin1String arg1, const QString & arg2, Qt::CaseSensitivity arg3) {
    ((QString*)0)->compare(arg1, arg2, arg3);
  };
}
// _ZN7QString7compareE13QLatin1StringRKS_N2Qt15CaseSensitivityE compare(class QLatin1String, const class QString &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 567, column 21>
//   // proto:  QString & QString::setUtf16(const ushort * utf16, int size);
if (false) {
  auto f = [](const ushort * arg1, int arg2) {
    ((QString*)0)->setUtf16(arg1, arg2);
  };
}
// _ZN7QString8setUtf16EPKti setUtf16(const ushort *, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 741, column 27>
//   // proto: static QString QString::fromStdU32String(const std::u32string & s);
if (false) {
  auto f = [](const std::u32string & arg1) {
    ((QString*)0)->fromStdU32String(arg1);
  };
}
// _ZN7QString16fromStdU32StringERKi fromStdU32String(const std::u32string &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 251, column 10>
//   // proto:  void QString::clear();
if (false) {
  auto f = []() {
    ((QString*)0)->clear();
  };
}
// _ZN7QString5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 326, column 17>
//   // proto:  bool QString::contains(const QRegExp & rx);
if (false) {
  auto f = [](const QRegExp & arg1) {
    ((QString*)0)->contains(arg1);
  };
}
// _ZNK7QString8containsERK7QRegExp contains(const class QRegExp &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 250, column 17>
//   // proto:  bool QString::isSharedWith(const QString & other);
if (false) {
  auto f = [](const QString & arg1) {
    ((QString*)0)->isSharedWith(arg1);
  };
}
// _ZNK7QString12isSharedWithERKS_ isSharedWith(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 536, column 27>
//   // proto: static QString QString::fromLatin1(const QByteArray & str);
if (false) {
  auto f = [](const QByteArray & arg1) {
    ((QString*)0)->fromLatin1(arg1);
  };
}
// _ZN7QString10fromLatin1ERK10QByteArray fromLatin1(const class QByteArray &)
//   // proto:  void QString::~QString();
if (false) {
  delete ((QString*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 468, column 21>
//   // proto:  QString & QString::remove(const QRegularExpression & re);
if (false) {
  auto f = [](const QRegularExpression & arg1) {
    ((QString*)0)->remove(arg1);
  };
}
// _ZN7QString6removeERK18QRegularExpression remove(const class QRegularExpression &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 607, column 14>
//   // proto:  QString & QString::setNum(int , int base);
if (false) {
  auto f = [](int arg1, int arg2) {
    ((QString*)0)->setNum(arg1, arg2);
  };
}
// _ZN7QString6setNumEii setNum(int, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 717, column 20>
//   // proto:  const_iterator QString::cend();
if (false) {
  auto f = []() {
    ((QString*)0)->cend();
  };
}
// _ZNK7QString4cendEv cend()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 318, column 17>
//   // proto:  bool QString::contains(const QStringRef & s, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QStringRef & arg1, Qt::CaseSensitivity arg2) {
    ((QString*)0)->contains(arg1, arg2);
  };
}
// _ZNK7QString8containsERK10QStringRefN2Qt15CaseSensitivityE contains(const class QStringRef &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 669, column 40>
//   // proto:  QString & QString::append(const QByteArray & s);
if (false) {
  auto f = [](const QByteArray & arg1) {
    ((QString*)0)->append(arg1);
  };
}
// _ZN7QString6appendERK10QByteArray append(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 523, column 27>
//   // proto: static QString QString::fromLatin1(const char * str, int size);
if (false) {
  auto f = [](const char * arg1, int arg2) {
    ((QString*)0)->fromLatin1(arg1, arg2);
  };
}
// _ZN7QString10fromLatin1EPKci fromLatin1(const char *, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 582, column 9>
//   // proto:  int QString::compare(const QStringRef & s, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QStringRef & arg1, Qt::CaseSensitivity arg2) {
    ((QString*)0)->compare(arg1, arg2);
  };
}
// _ZNK7QString7compareERK10QStringRefN2Qt15CaseSensitivityE compare(const class QStringRef &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 712, column 20>
//   // proto:  const_iterator QString::begin();
if (false) {
  auto f = []() {
    ((QString*)0)->begin();
  };
}
// _ZNK7QString5beginEv begin()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 562, column 16>
//   // proto:  int QString::toWCharArray(wchar_t * array);
if (false) {
  auto f = [](wchar_t * arg1) {
    ((QString*)0)->toWCharArray(arg1);
  };
}
// _ZNK7QString12toWCharArrayEPw toWCharArray(wchar_t *)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 713, column 20>
//   // proto:  const_iterator QString::cbegin();
if (false) {
  auto f = []() {
    ((QString*)0)->cbegin();
  };
}
// _ZNK7QString6cbeginEv cbegin()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 665, column 40>
//   // proto:  QString & QString::prepend(const QByteArray & s);
if (false) {
  auto f = [](const QByteArray & arg1) {
    ((QString*)0)->prepend(arg1);
  };
}
// _ZN7QString7prependERK10QByteArray prepend(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 733, column 27>
//   // proto: static QString QString::fromStdString(const std::string & s);
if (false) {
  auto f = [](const std::string & arg1) {
    ((QString*)0)->fromStdString(arg1);
  };
}
// _ZN7QString13fromStdStringERKi fromStdString(const std::string &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 291, column 13>
//   // proto:  QString QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2, const QString & arg3, const QString & arg4, const QString & arg5, const QString & arg6, const QString & arg7) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4, arg5, arg6, arg7);
  };
}
// _ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_ arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 563, column 27>
//   // proto: static QString QString::fromWCharArray(const wchar_t * string, int size);
if (false) {
  auto f = [](const wchar_t * arg1, int arg2) {
    ((QString*)0)->fromWCharArray(arg1, arg2);
  };
}
// _ZN7QString14fromWCharArrayEPKwi fromWCharArray(const wchar_t *, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 575, column 23>
//   // proto: static int QString::compare(const QString & s1, QLatin1String s2, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QString & arg1, QLatin1String arg2, Qt::CaseSensitivity arg3) {
    ((QString*)0)->compare(arg1, arg2, arg3);
  };
}
// _ZN7QString7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE compare(const class QString &, class QLatin1String, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 246, column 25>
//   // proto:  const QChar * QString::constData();
if (false) {
  auto f = []() {
    ((QString*)0)->constData();
  };
}
// _ZNK7QString9constDataEv constData()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 394, column 13>
//   // proto:  QString QString::toUpper();
if (false) {
  auto f = []() {
    ((QString*)0)->toUpper();
  };
}
// _ZNO7QString7toUpperEv toUpper()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 718, column 20>
//   // proto:  const_iterator QString::constEnd();
if (false) {
  auto f = []() {
    ((QString*)0)->constEnd();
  };
}
// _ZNK7QString8constEndEv constEnd()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 231, column 16>
//   // proto:  int QString::length();
if (false) {
  auto f = []() {
    ((QString*)0)->length();
  };
}
// _ZNK7QString6lengthEv length()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 528, column 27>
//   // proto: static QString QString::fromUtf8(const char * str, int size);
if (false) {
  auto f = [](const char * arg1, int arg2) {
    ((QString*)0)->fromUtf8(arg1, arg2);
  };
}
// _ZN7QString8fromUtf8EPKci fromUtf8(const char *, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 742, column 27>
//   // proto:  std::u32string QString::toStdU32String();
if (false) {
  auto f = []() {
    ((QString*)0)->toStdU32String();
  };
}
// _ZNK7QString14toStdU32StringEv toStdU32String()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 406, column 13>
//   // proto:  QString QString::simplified();
if (false) {
  auto f = []() {
    ((QString*)0)->simplified();
  };
}
// _ZNO7QString10simplifiedEv simplified()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 756, column 12>
//   // proto:  void QString::QString(const QString::Null & );
if (false) {
  auto f = [](const QString::Null & arg1) {
    new QString(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 609, column 14>
//   // proto:  QString & QString::setNum(long , int base);
if (false) {
  auto f = [](long arg1, int arg2) {
    ((QString*)0)->setNum(arg1, arg2);
  };
}
// _ZN7QString6setNumEli setNum(long, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 283, column 13>
//   // proto:  QString QString::arg(const QString & a1, const QString & a2);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2) {
    ((QString*)0)->arg(arg1, arg2);
  };
}
// _ZNK7QString3argERKS_S1_ arg(const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 331, column 17>
//   // proto:  bool QString::contains(QRegExp & rx);
if (false) {
  auto f = [](QRegExp & arg1) {
    ((QString*)0)->contains(arg1);
  };
}
// _ZNK7QString8containsER7QRegExp contains(class QRegExp &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 714, column 20>
//   // proto:  const_iterator QString::constBegin();
if (false) {
  auto f = []() {
    ((QString*)0)->constBegin();
  };
}
// _ZNK7QString10constBeginEv constBegin()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 243, column 25>
//   // proto:  const QChar * QString::unicode();
if (false) {
  auto f = []() {
    ((QString*)0)->unicode();
  };
}
// _ZNK7QString7unicodeEv unicode()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 591, column 16>
//   // proto: static int QString::localeAwareCompare(const QString & s1, const QStringRef & s2);
if (false) {
  auto f = [](const QString & arg1, const QStringRef & arg2) {
    ((QString*)0)->localeAwareCompare(arg1, arg2);
  };
}
// _ZN7QString18localeAwareCompareERKS_RK10QStringRef localeAwareCompare(const class QString &, const class QStringRef &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 297, column 13>
//   // proto:  QString QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6, const QString & a7, const QString & a8, const QString & a9);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2, const QString & arg3, const QString & arg4, const QString & arg5, const QString & arg6, const QString & arg7, const QString & arg8, const QString & arg9) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4, arg5, arg6, arg7, arg8, arg9);
  };
}
// _ZNK7QString3argERKS_S1_S1_S1_S1_S1_S1_S1_S1_ arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 590, column 9>
//   // proto:  int QString::localeAwareCompare(const QStringRef & s);
if (false) {
  auto f = [](const QStringRef & arg1) {
    ((QString*)0)->localeAwareCompare(arg1);
  };
}
// _ZNK7QString18localeAwareCompareERK10QStringRef localeAwareCompare(const class QStringRef &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 765, column 29>
//   // proto:  void QString::QString(QStringDataPtr dd);
if (false) {
  auto f = [](QStringDataPtr arg1) {
    new QString(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 843, column 21>
//   // proto:  DataPtr & QString::data_ptr();
if (false) {
  auto f = []() {
    ((QString*)0)->data_ptr();
  };
}
// _ZN7QString8data_ptrEv data_ptr()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 540, column 27>
//   // proto: static QString QString::fromLocal8Bit(const QByteArray & str);
if (false) {
  auto f = [](const QByteArray & arg1) {
    ((QString*)0)->fromLocal8Bit(arg1);
  };
}
// _ZN7QString13fromLocal8BitERK10QByteArray fromLocal8Bit(const class QByteArray &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 253, column 24>
//   // proto:  const QChar QString::at(int i);
if (false) {
  auto f = [](int arg1) {
    ((QString*)0)->at(arg1);
  };
}
// _ZNK7QString2atEi at(int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 388, column 13>
//   // proto:  QString QString::toLower();
if (false) {
  auto f = []() {
    ((QString*)0)->toLower();
  };
}
// _ZNKR7QString7toLowerEv toLower()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 505, column 16>
//   // proto:  QByteArray QString::toLatin1();
if (false) {
  auto f = []() {
    ((QString*)0)->toLatin1();
  };
}
// _ZNO7QString8toLatin1Ev toLatin1()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 610, column 14>
//   // proto:  QString & QString::setNum(ulong , int base);
if (false) {
  auto f = [](ulong arg1, int arg2) {
    ((QString*)0)->setNum(arg1, arg2);
  };
}
// _ZN7QString6setNumEmi setNum(ulong, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 731, column 17>
//   // proto:  void QString::push_front(const QString & s);
if (false) {
  auto f = [](const QString & arg1) {
    ((QString*)0)->push_front(arg1);
  };
}
// _ZN7QString10push_frontERKS_ push_front(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 740, column 27>
//   // proto:  std::u16string QString::toStdU16String();
if (false) {
  auto f = []() {
    ((QString*)0)->toStdU16String();
  };
}
// _ZNK7QString14toStdU16StringEv toStdU16String()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 289, column 13>
//   // proto:  QString QString::arg(const QString & a1, const QString & a2, const QString & a3, const QString & a4, const QString & a5, const QString & a6);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2, const QString & arg3, const QString & arg4, const QString & arg5, const QString & arg6) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4, arg5, arg6);
  };
}
// _ZNK7QString3argERKS_S1_S1_S1_S1_S1_ arg(const class QString &, const class QString &, const class QString &, const class QString &, const class QString &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 711, column 14>
//   // proto:  iterator QString::begin();
if (false) {
  auto f = []() {
    ((QString*)0)->begin();
  };
}
// _ZN7QString5beginEv begin()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 715, column 14>
//   // proto:  iterator QString::end();
if (false) {
  auto f = []() {
    ((QString*)0)->end();
  };
}
// _ZN7QString3endEv end()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 739, column 27>
//   // proto: static QString QString::fromStdU16String(const std::u16string & s);
if (false) {
  auto f = [](const std::u16string & arg1) {
    ((QString*)0)->fromStdU16String(arg1);
  };
}
// _ZN7QString16fromStdU16StringERKi fromStdU16String(const std::u16string &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 269, column 13>
//   // proto:  QString QString::arg(uint a, int fieldWidth, int base, QChar fillChar);
if (false) {
  auto f = [](uint arg1, int arg2, int arg3, QChar arg4) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4);
  };
}
// _ZNK7QString3argEjii5QChar arg(uint, int, int, class QChar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 315, column 17>
//   // proto:  bool QString::contains(QChar c, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](QChar arg1, Qt::CaseSensitivity arg2) {
    ((QString*)0)->contains(arg1, arg2);
  };
}
// _ZNK7QString8containsE5QCharN2Qt15CaseSensitivityE contains(class QChar, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 606, column 14>
//   // proto:  QString & QString::setNum(ushort , int base);
if (false) {
  auto f = [](ushort arg1, int arg2) {
    ((QString*)0)->setNum(arg1, arg2);
  };
}
// _ZN7QString6setNumEti setNum(ushort, int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 245, column 25>
//   // proto:  const QChar * QString::data();
if (false) {
  auto f = []() {
    ((QString*)0)->data();
  };
}
// _ZNK7QString4dataEv data()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 513, column 16>
//   // proto:  QByteArray QString::toLocal8Bit();
if (false) {
  auto f = []() {
    ((QString*)0)->toLocal8Bit();
  };
}
// _ZNO7QString11toLocal8BitEv toLocal8Bit()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 273, column 13>
//   // proto:  QString QString::arg(ushort a, int fieldWidth, int base, QChar fillChar);
if (false) {
  auto f = [](ushort arg1, int arg2, int arg3, QChar arg4) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4);
  };
}
// _ZNK7QString3argEtii5QChar arg(ushort, int, int, class QChar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 218, column 12>
//   // proto:  void QString::QString(const QString & );
if (false) {
  auto f = [](const QString & arg1) {
    new QString(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 271, column 13>
//   // proto:  QString QString::arg(short a, int fieldWidth, int base, QChar fillChar);
if (false) {
  auto f = [](short arg1, int arg2, int arg3, QChar arg4) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4);
  };
}
// _ZNK7QString3argEsii5QChar arg(short, int, int, class QChar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 507, column 16>
//   // proto:  QByteArray QString::toUtf8();
if (false) {
  auto f = []() {
    ((QString*)0)->toUtf8();
  };
}
// _ZNKR7QString6toUtf8Ev toUtf8()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 652, column 31>
//   // proto:  void QString::QString(const QByteArray & a);
if (false) {
  auto f = [](const QByteArray & arg1) {
    new QString(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 667, column 40>
//   // proto:  QString & QString::append(const char * s);
if (false) {
  auto f = [](const char * arg1) {
    ((QString*)0)->append(arg1);
  };
}
// _ZN7QString6appendEPKc append(const char *)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 583, column 16>
//   // proto: static int QString::compare(const QString & s1, const QStringRef & s2, Qt::CaseSensitivity );
if (false) {
  auto f = [](const QString & arg1, const QStringRef & arg2, Qt::CaseSensitivity arg3) {
    ((QString*)0)->compare(arg1, arg2, arg3);
  };
}
// _ZN7QString7compareERKS_RK10QStringRefN2Qt15CaseSensitivityE compare(const class QString &, const class QStringRef &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 239, column 9>
//   // proto:  int QString::capacity();
if (false) {
  auto f = []() {
    ((QString*)0)->capacity();
  };
}
// _ZNK7QString8capacityEv capacity()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 241, column 17>
//   // proto:  void QString::squeeze();
if (false) {
  auto f = []() {
    ((QString*)0)->squeeze();
  };
}
// _ZN7QString7squeezeEv squeeze()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 572, column 23>
//   // proto: static int QString::compare(const QString & s1, const QString & s2, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QString & arg1, const QString & arg2, Qt::CaseSensitivity arg3) {
    ((QString*)0)->compare(arg1, arg2, arg3);
  };
}
// _ZN7QString7compareERKS_S1_N2Qt15CaseSensitivityE compare(const class QString &, const class QString &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 267, column 13>
//   // proto:  QString QString::arg(int a, int fieldWidth, int base, QChar fillChar);
if (false) {
  auto f = [](int arg1, int arg2, int arg3, QChar arg4) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4);
  };
}
// _ZNK7QString3argEiii5QChar arg(int, int, int, class QChar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 463, column 21>
//   // proto:  QString & QString::remove(const QRegExp & rx);
if (false) {
  auto f = [](const QRegExp & arg1) {
    ((QString*)0)->remove(arg1);
  };
}
// _ZN7QString6removeERK7QRegExp remove(const class QRegExp &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 503, column 16>
//   // proto:  QByteArray QString::toLatin1();
if (false) {
  auto f = []() {
    ((QString*)0)->toLatin1();
  };
}
// _ZNKR7QString8toLatin1Ev toLatin1()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 232, column 17>
//   // proto:  bool QString::isEmpty();
if (false) {
  auto f = []() {
    ((QString*)0)->isEmpty();
  };
}
// _ZNK7QString7isEmptyEv isEmpty()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 316, column 17>
//   // proto:  bool QString::contains(const QString & s, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QString & arg1, Qt::CaseSensitivity arg2) {
    ((QString*)0)->contains(arg1, arg2);
  };
}
// _ZNK7QString8containsERKS_N2Qt15CaseSensitivityE contains(const class QString &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 240, column 17>
//   // proto:  void QString::reserve(int size);
if (false) {
  auto f = [](int arg1) {
    ((QString*)0)->reserve(arg1);
  };
}
// _ZN7QString7reserveEi reserve(int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 265, column 13>
//   // proto:  QString QString::arg(ulong a, int fieldwidth, int base, QChar fillChar);
if (false) {
  auto f = [](ulong arg1, int arg2, int arg3, QChar arg4) {
    ((QString*)0)->arg(arg1, arg2, arg3, arg4);
  };
}
// _ZNK7QString3argEmii5QChar arg(ulong, int, int, class QChar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 91, column 24>
//   // proto:  const char * QLatin1String::data();
if (false) {
  auto f = []() {
    ((QLatin1String*)0)->data();
  };
}
// _ZNK13QLatin1String4dataEv data()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 85, column 38>
//   // proto:  void QLatin1String::QLatin1String(const char * s);
if (false) {
  auto f = [](const char * arg1) {
    new QLatin1String(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 90, column 16>
//   // proto:  int QLatin1String::size();
if (false) {
  auto f = []() {
    ((QLatin1String*)0)->size();
  };
}
// _ZNK13QLatin1String4sizeEv size()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 87, column 21>
//   // proto:  void QLatin1String::QLatin1String(const QByteArray & s);
if (false) {
  auto f = [](const QByteArray & arg1) {
    new QLatin1String(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 89, column 24>
//   // proto:  const char * QLatin1String::latin1();
if (false) {
  auto f = []() {
    ((QLatin1String*)0)->latin1();
  };
}
// _ZNK13QLatin1String6latin1Ev latin1()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 86, column 38>
//   // proto:  void QLatin1String::QLatin1String(const char * s, int sz);
if (false) {
  auto f = [](const char * arg1, int arg2) {
    new QLatin1String(arg1, arg2);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 995, column 17>
//   // proto:  bool QCharRef::isLetterOrNumber();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isLetterOrNumber();
  };
}
// _ZN8QCharRef16isLetterOrNumberEv isLetterOrNumber()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1007, column 22>
//   // proto:  QChar::Direction QCharRef::direction();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->direction();
  };
}
// _ZNK8QCharRef9directionEv direction()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 996, column 17>
//   // proto:  bool QCharRef::isDigit();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isDigit();
  };
}
// _ZNK8QCharRef7isDigitEv isDigit()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1041, column 10>
//   // proto:  char QCharRef::toLatin1();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->toLatin1();
  };
}
// _ZNK8QCharRef8toLatin1Ev toLatin1()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1035, column 17>
//   // proto:  void QCharRef::setCell(uchar cell);
if (false) {
  auto f = [](uchar arg1) {
    ((QCharRef*)0)->setCell(arg1);
  };
}
// _ZN8QCharRef7setCellEh setCell(uchar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 992, column 17>
//   // proto:  bool QCharRef::isMark();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isMark();
  };
}
// _ZNK8QCharRef6isMarkEv isMark()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1008, column 24>
//   // proto:  QChar::JoiningType QCharRef::joiningType();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->joiningType();
  };
}
// _ZNK8QCharRef11joiningTypeEv joiningType()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1001, column 16>
//   // proto:  int QCharRef::digitValue();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->digitValue();
  };
}
// _ZNK8QCharRef10digitValueEv digitValue()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 993, column 17>
//   // proto:  bool QCharRef::isLetter();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isLetter();
  };
}
// _ZNK8QCharRef8isLetterEv isLetter()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 994, column 17>
//   // proto:  bool QCharRef::isNumber();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isNumber();
  };
}
// _ZNK8QCharRef8isNumberEv isNumber()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 989, column 17>
//   // proto:  bool QCharRef::isPrint();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isPrint();
  };
}
// _ZNK8QCharRef7isPrintEv isPrint()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1002, column 11>
//   // proto:  QChar QCharRef::toLower();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->toLower();
  };
}
// _ZNK8QCharRef7toLowerEv toLower()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1006, column 21>
//   // proto:  QChar::Category QCharRef::category();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->category();
  };
}
// _ZNK8QCharRef8categoryEv category()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1036, column 17>
//   // proto:  void QCharRef::setRow(uchar row);
if (false) {
  auto f = [](uchar arg1) {
    ((QCharRef*)0)->setRow(arg1);
  };
}
// _ZN8QCharRef6setRowEh setRow(uchar)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 988, column 17>
//   // proto:  bool QCharRef::isNull();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isNull();
  };
}
// _ZNK8QCharRef6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1004, column 11>
//   // proto:  QChar QCharRef::toTitleCase();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->toTitleCase();
  };
}
// _ZNK8QCharRef11toTitleCaseEv toTitleCase()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1023, column 10>
//   // proto:  bool QCharRef::hasMirrored();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->hasMirrored();
  };
}
// _ZNK8QCharRef11hasMirroredEv hasMirrored()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1034, column 18>
//   // proto:  uchar QCharRef::row();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->row();
  };
}
// _ZNK8QCharRef3rowEv row()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1010, column 34>
//   // proto:  QChar::Joining QCharRef::joining();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->joining();
  };
}
// _ZNK8QCharRef7joiningEv joining()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1029, column 26>
//   // proto:  QChar::Script QCharRef::script();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->script();
  };
}
// _ZNK8QCharRef6scriptEv script()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1031, column 27>
//   // proto:  QChar::UnicodeVersion QCharRef::unicodeVersion();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->unicodeVersion();
  };
}
// _ZNK8QCharRef14unicodeVersionEv unicodeVersion()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1043, column 13>
//   // proto:  ushort & QCharRef::unicode();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->unicode();
  };
}
// _ZN8QCharRef7unicodeEv unicode()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 999, column 17>
//   // proto:  bool QCharRef::isTitleCase();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isTitleCase();
  };
}
// _ZNK8QCharRef11isTitleCaseEv isTitleCase()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 998, column 17>
//   // proto:  bool QCharRef::isUpper();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isUpper();
  };
}
// _ZNK8QCharRef7isUpperEv isUpper()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1033, column 18>
//   // proto:  uchar QCharRef::cell();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->cell();
  };
}
// _ZNK8QCharRef4cellEv cell()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1042, column 12>
//   // proto:  ushort QCharRef::unicode();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->unicode();
  };
}
// _ZNK8QCharRef7unicodeEv unicode()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1025, column 13>
//   // proto:  QString QCharRef::decomposition();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->decomposition();
  };
}
// _ZNK8QCharRef13decompositionEv decomposition()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1027, column 11>
//   // proto:  uchar QCharRef::combiningClass();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->combiningClass();
  };
}
// _ZNK8QCharRef14combiningClassEv combiningClass()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1024, column 11>
//   // proto:  QChar QCharRef::mirroredChar();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->mirroredChar();
  };
}
// _ZNK8QCharRef12mirroredCharEv mirroredChar()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 991, column 17>
//   // proto:  bool QCharRef::isSpace();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isSpace();
  };
}
// _ZNK8QCharRef7isSpaceEv isSpace()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 990, column 17>
//   // proto:  bool QCharRef::isPunct();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isPunct();
  };
}
// _ZNK8QCharRef7isPunctEv isPunct()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1003, column 11>
//   // proto:  QChar QCharRef::toUpper();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->toUpper();
  };
}
// _ZNK8QCharRef7toUpperEv toUpper()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 997, column 17>
//   // proto:  bool QCharRef::isLower();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->isLower();
  };
}
// _ZNK8QCharRef7isLowerEv isLower()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1026, column 26>
//   // proto:  QChar::Decomposition QCharRef::decompositionTag();
if (false) {
  auto f = []() {
    ((QCharRef*)0)->decompositionTag();
  };
}
// _ZNK8QCharRef16decompositionTagEv decompositionTag()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1348, column 12>
//   // proto:  void QStringRef::QStringRef(const QString * string);
if (false) {
  auto f = [](const QString * arg1) {
    new QStringRef(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1428, column 17>
//   // proto:  void QStringRef::clear();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->clear();
  };
}
// _ZN10QStringRef5clearEv clear()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1449, column 9>
//   // proto:  int QStringRef::compare(const QStringRef & s, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QStringRef & arg1, Qt::CaseSensitivity arg2) {
    ((QStringRef*)0)->compare(arg1, arg2);
  };
}
// _ZNK10QStringRef7compareERKS_N2Qt15CaseSensitivityE compare(const class QStringRef &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1358, column 16>
//   // proto:  int QStringRef::position();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->position();
  };
}
// _ZNK10QStringRef8positionEv position()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1451, column 16>
//   // proto: static int QStringRef::compare(const QStringRef & s1, const QString & s2, Qt::CaseSensitivity );
if (false) {
  auto f = [](const QStringRef & arg1, const QString & arg2, Qt::CaseSensitivity arg3) {
    ((QStringRef*)0)->compare(arg1, arg2, arg3);
  };
}
// _ZN10QStringRef7compareERKS_RK7QStringN2Qt15CaseSensitivityE compare(const class QStringRef &, const class QString &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1450, column 9>
//   // proto:  int QStringRef::compare(QLatin1String s, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](QLatin1String arg1, Qt::CaseSensitivity arg2) {
    ((QStringRef*)0)->compare(arg1, arg2);
  };
}
// _ZNK10QStringRef7compareE13QLatin1StringN2Qt15CaseSensitivityE compare(class QLatin1String, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1415, column 25>
//   // proto:  const QChar * QStringRef::cbegin();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->cbegin();
  };
}
// _ZNK10QStringRef6cbeginEv cbegin()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1430, column 17>
//   // proto:  bool QStringRef::isEmpty();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->isEmpty();
  };
}
// _ZNK10QStringRef7isEmptyEv isEmpty()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1458, column 9>
//   // proto:  int QStringRef::localeAwareCompare(const QString & s);
if (false) {
  auto f = [](const QString & arg1) {
    ((QStringRef*)0)->localeAwareCompare(arg1);
  };
}
// _ZNK10QStringRef18localeAwareCompareERK7QString localeAwareCompare(const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1377, column 17>
//   // proto:  bool QStringRef::contains(const QString & str, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QString & arg1, Qt::CaseSensitivity arg2) {
    ((QStringRef*)0)->contains(arg1, arg2);
  };
}
// _ZNK10QStringRef8containsERK7QStringN2Qt15CaseSensitivityE contains(const class QString &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1359, column 16>
//   // proto:  int QStringRef::size();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->size();
  };
}
// _ZNK10QStringRef4sizeEv size()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1413, column 25>
//   // proto:  const QChar * QStringRef::constData();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->constData();
  };
}
// _ZNK10QStringRef9constDataEv constData()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1351, column 12>
//   // proto:  void QStringRef::QStringRef(const QStringRef & other);
if (false) {
  auto f = [](const QStringRef & arg1) {
    new QStringRef(arg1);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1448, column 9>
//   // proto:  int QStringRef::compare(const QString & s, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QString & arg1, Qt::CaseSensitivity arg2) {
    ((QStringRef*)0)->compare(arg1, arg2);
  };
}
// _ZNK10QStringRef7compareERK7QStringN2Qt15CaseSensitivityE compare(const class QString &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1360, column 16>
//   // proto:  int QStringRef::count();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->count();
  };
}
// _ZNK10QStringRef5countEv count()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1347, column 12>
//   // proto:  void QStringRef::QStringRef(const QString * string, int position, int size);
if (false) {
  auto f = [](const QString * arg1, int arg2, int arg3) {
    new QStringRef(arg1, arg2, arg3);
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1346, column 12>
//   // proto:  void QStringRef::QStringRef();
if (false) {
  auto f = []() {
    new QStringRef();
  };
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1435, column 24>
//   // proto:  const QChar QStringRef::at(int i);
if (false) {
  auto f = [](int arg1) {
    ((QStringRef*)0)->at(arg1);
  };
}
// _ZNK10QStringRef2atEi at(int)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1459, column 9>
//   // proto:  int QStringRef::localeAwareCompare(const QStringRef & s);
if (false) {
  auto f = [](const QStringRef & arg1) {
    ((QStringRef*)0)->localeAwareCompare(arg1);
  };
}
// _ZNK10QStringRef18localeAwareCompareERKS_ localeAwareCompare(const class QStringRef &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1431, column 17>
//   // proto:  bool QStringRef::isNull();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->isNull();
  };
}
// _ZNK10QStringRef6isNullEv isNull()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1412, column 25>
//   // proto:  const QChar * QStringRef::data();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->data();
  };
}
// _ZNK10QStringRef4dataEv data()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1414, column 25>
//   // proto:  const QChar * QStringRef::begin();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->begin();
  };
}
// _ZNK10QStringRef5beginEv begin()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1407, column 25>
//   // proto:  const QChar * QStringRef::unicode();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->unicode();
  };
}
// _ZNK10QStringRef7unicodeEv unicode()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1453, column 16>
//   // proto: static int QStringRef::compare(const QStringRef & s1, const QStringRef & s2, Qt::CaseSensitivity );
if (false) {
  auto f = [](const QStringRef & arg1, const QStringRef & arg2, Qt::CaseSensitivity arg3) {
    ((QStringRef*)0)->compare(arg1, arg2, arg3);
  };
}
// _ZN10QStringRef7compareERKS_S1_N2Qt15CaseSensitivityE compare(const class QStringRef &, const class QStringRef &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1460, column 16>
//   // proto: static int QStringRef::localeAwareCompare(const QStringRef & s1, const QString & s2);
if (false) {
  auto f = [](const QStringRef & arg1, const QString & arg2) {
    ((QStringRef*)0)->localeAwareCompare(arg1, arg2);
  };
}
// _ZN10QStringRef18localeAwareCompareERKS_RK7QString localeAwareCompare(const class QStringRef &, const class QString &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1357, column 27>
//   // proto:  const QString * QStringRef::string();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->string();
  };
}
// _ZNK10QStringRef6stringEv string()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1461, column 16>
//   // proto: static int QStringRef::localeAwareCompare(const QStringRef & s1, const QStringRef & s2);
if (false) {
  auto f = [](const QStringRef & arg1, const QStringRef & arg2) {
    ((QStringRef*)0)->localeAwareCompare(arg1, arg2);
  };
}
// _ZN10QStringRef18localeAwareCompareERKS_S1_ localeAwareCompare(const class QStringRef &, const class QStringRef &)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1378, column 17>
//   // proto:  bool QStringRef::contains(QChar ch, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](QChar arg1, Qt::CaseSensitivity arg2) {
    ((QStringRef*)0)->contains(arg1, arg2);
  };
}
// _ZNK10QStringRef8containsE5QCharN2Qt15CaseSensitivityE contains(class QChar, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1417, column 25>
//   // proto:  const QChar * QStringRef::cend();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->cend();
  };
}
// _ZNK10QStringRef4cendEv cend()
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1379, column 17>
//   // proto:  bool QStringRef::contains(QLatin1String str, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](QLatin1String arg1, Qt::CaseSensitivity arg2) {
    ((QStringRef*)0)->contains(arg1, arg2);
  };
}
// _ZNK10QStringRef8containsE13QLatin1StringN2Qt15CaseSensitivityE contains(class QLatin1String, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1361, column 16>
//   // proto:  int QStringRef::length();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->length();
  };
}
// _ZNK10QStringRef6lengthEv length()
//   // proto:  void QStringRef::~QStringRef();
if (false) {
  delete ((QStringRef*)0);
}
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1380, column 17>
//   // proto:  bool QStringRef::contains(const QStringRef & str, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QStringRef & arg1, Qt::CaseSensitivity arg2) {
    ((QStringRef*)0)->contains(arg1, arg2);
  };
}
// _ZNK10QStringRef8containsERKS_N2Qt15CaseSensitivityE contains(const class QStringRef &, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1455, column 16>
//   // proto: static int QStringRef::compare(const QStringRef & s1, QLatin1String s2, Qt::CaseSensitivity cs);
if (false) {
  auto f = [](const QStringRef & arg1, QLatin1String arg2, Qt::CaseSensitivity arg3) {
    ((QStringRef*)0)->compare(arg1, arg2, arg3);
  };
}
// _ZN10QStringRef7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE compare(const class QStringRef &, class QLatin1String, Qt::CaseSensitivity)
// <SourceLocation file '/usr/include/qt/QtCore/qstring.h', line 1416, column 25>
//   // proto:  const QChar * QStringRef::end();
if (false) {
  auto f = []() {
    ((QStringRef*)0)->end();
  };
}
// _ZNK10QStringRef3endEv end()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

