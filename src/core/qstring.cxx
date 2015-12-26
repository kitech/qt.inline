// auto generated, do not modify.
// created: Sat Dec 26 09:13:20 2015
// src-file: /QtCore/qstring.h
// dst-file: /src/core/qstring.cxx
//

// header block begin =>
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

// QString(class QChar)
QString* dector_ZN7QStringC1E5QChar(QChar c)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(c);
  return rthis;
}

// QString()
QString* dector_ZN7QStringC1Ev()
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString();
  return rthis;
}

// QString(int, Qt::Initialization)
QString* dector_ZN7QStringC1EiN2Qt14InitializationE(int size, Qt::Initialization arg2)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(size, arg2);
  return rthis;
}

// QString(const class QChar *, int)
QString* dector_ZN7QStringC1EPK5QChari(const QChar * unicode, int size)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(unicode, size);
  return rthis;
}

// QString(class QLatin1String)
QString* dector_ZN7QStringC1E13QLatin1String(QLatin1String latin1)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(latin1);
  return rthis;
}

// ~QString()
void dedtor_ZN7QStringD0Ev(QString* that)
{
  QString* rthis = (QString*)that;
  delete rthis;
}

// QString(int, class QChar)
QString* dector_ZN7QStringC1Ei5QChar(int size, QChar c)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(size, c);
  return rthis;
}

// QString(const class QString &)
QString* dector_ZN7QStringC1ERKS_(const QString & arg1)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(arg1);
  return rthis;
}

  // proto:  bool QString::isEmpty();
bool _ZNK7QString7isEmptyEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->isEmpty();
}

  // proto:  void QString::QString();
void _ZN7QStringC1Ev(void *that)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString();
}

  // proto:  void QString::detach();
void _ZN7QString6detachEv(void *that)
{
  QString *cthat = (QString *)that;
   cthat->detach();
}

  // proto: static QString QString::fromStdWString(const std::wstring & s);
QString* _ZN7QString14fromStdWStringERKi(void *that, const std::wstring & s)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromStdWString(s);
  return new QString(recret);
}

  // proto:  void QString::QString(QLatin1String latin1);
void _ZN7QStringC1E13QLatin1String(void *that, QLatin1String latin1)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString(latin1);
}

  // proto:  bool QString::isDetached();
bool _ZNK7QString10isDetachedEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->isDetached();
}

  // proto:  QChar * QString::data();
QChar * _ZN7QString4dataEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->data();
}

  // proto:  bool QString::contains(QLatin1String s, Qt::CaseSensitivity cs);
bool _ZNK7QString8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *that, QLatin1String s, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->contains(s, cs);
}

  // proto:  QString & QString::setUtf16(const ushort * utf16, int size);
QString * _ZN7QString8setUtf16EPKti(void *that, const ushort * utf16, int size)
{
  QString *cthat = (QString *)that;
  return &cthat->setUtf16(utf16, size);
}

  // proto: static QString QString::fromStdU32String(const std::u32string & s);
QString* _ZN7QString16fromStdU32StringERKi(void *that, const std::u32string & s)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromStdU32String(s);
  return new QString(recret);
}

  // proto:  void QString::~QString();
void _ZN7QStringD0Ev(void *that)
{
  QString *cthat = (QString *)that;
   cthat->~QString();
}

  // proto:  bool QString::contains(const QStringRef & s, Qt::CaseSensitivity cs);
bool _ZNK7QString8containsERK10QStringRefN2Qt15CaseSensitivityE(void *that, const QStringRef & s, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->contains(s, cs);
}

  // proto:  int QString::toWCharArray(wchar_t * array);
int _ZNK7QString12toWCharArrayEPw(void *that, wchar_t * array)
{
  QString *cthat = (QString *)that;
  return cthat->toWCharArray(array);
}

  // proto: static QString QString::fromStdString(const std::string & s);
QString* _ZN7QString13fromStdStringERKi(void *that, const std::string & s)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromStdString(s);
  return new QString(recret);
}

  // proto: static QString QString::fromWCharArray(const wchar_t * string, int size);
QString* _ZN7QString14fromWCharArrayEPKwi(void *that, const wchar_t * string, int size)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromWCharArray(string, size);
  return new QString(recret);
}

  // proto:  const QChar * QString::constData();
const QChar * _ZNK7QString9constDataEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->constData();
}

  // proto:  int QString::length();
int _ZNK7QString6lengthEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->length();
}

  // proto:  const QChar * QString::unicode();
const QChar * _ZNK7QString7unicodeEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->unicode();
}

  // proto:  const QChar QString::at(int i);
const QChar* _ZNK7QString2atEi(void *that, int i)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->at(i);
  return new const QChar(recret);
}

  // proto: static QString QString::fromStdU16String(const std::u16string & s);
QString* _ZN7QString16fromStdU16StringERKi(void *that, const std::u16string & s)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromStdU16String(s);
  return new QString(recret);
}

  // proto:  bool QString::contains(QChar c, Qt::CaseSensitivity cs);
bool _ZNK7QString8containsE5QCharN2Qt15CaseSensitivityE(void *that, QChar c, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->contains(c, cs);
}

  // proto:  const QChar * QString::data();
const QChar * _ZNK7QString4dataEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->data();
}

  // proto:  void QString::QString(const QString & );
void _ZN7QStringC1ERKS_(void *that, const QString & arg1)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString(arg1);
}

  // proto:  void QString::squeeze();
void _ZN7QString7squeezeEv(void *that)
{
  QString *cthat = (QString *)that;
   cthat->squeeze();
}

  // proto:  bool QString::contains(const QString & s, Qt::CaseSensitivity cs);
bool _ZNK7QString8containsERKS_N2Qt15CaseSensitivityE(void *that, const QString & s, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->contains(s, cs);
}

  // proto:  void QString::reserve(int size);
void _ZN7QString7reserveEi(void *that, int size)
{
  QString *cthat = (QString *)that;
   cthat->reserve(size);
}

int QLatin1String_Class_Size()
{
  return sizeof(QLatin1String);
}

int QCharRef_Class_Size()
{
  return sizeof(QCharRef);
}

  // proto:  void QCharRef::setCell(uchar cell);
void _ZN8QCharRef7setCellEh(void *that, unsigned char cell)
{
  QCharRef *cthat = (QCharRef *)that;
   cthat->setCell(cell);
}

  // proto:  void QCharRef::setRow(uchar row);
void _ZN8QCharRef6setRowEh(void *that, unsigned char row)
{
  QCharRef *cthat = (QCharRef *)that;
   cthat->setRow(row);
}

int QStringRef_Class_Size()
{
  return sizeof(QStringRef);
}

// QStringRef(const class QString *)
QStringRef* dector_ZN10QStringRefC1EPK7QString(const QString * string)
{
  // static_assert(sizeof(QStringRef) == 32, "tyszerr");
  QStringRef* rthis = new QStringRef(string);
  return rthis;
}

// QStringRef(const class QString *, int, int)
QStringRef* dector_ZN10QStringRefC1EPK7QStringii(const QString * string, int position, int size)
{
  // static_assert(sizeof(QStringRef) == 32, "tyszerr");
  QStringRef* rthis = new QStringRef(string, position, size);
  return rthis;
}

  // proto:  void QStringRef::QStringRef(const QString * string);
void _ZN10QStringRefC1EPK7QString(void *that, const QString * string)
{
  QStringRef *cthat = (QStringRef *)that;
  auto _o = new(that) QStringRef(string);
}

  // proto:  bool QStringRef::contains(const QString & str, Qt::CaseSensitivity cs);
bool _ZNK10QStringRef8containsERK7QStringN2Qt15CaseSensitivityE(void *that, const QString & str, Qt::CaseSensitivity cs)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->contains(str, cs);
}

  // proto:  void QStringRef::QStringRef(const QString * string, int position, int size);
void _ZN10QStringRefC1EPK7QStringii(void *that, const QString * string, int position, int size)
{
  QStringRef *cthat = (QStringRef *)that;
  auto _o = new(that) QStringRef(string, position, size);
}

  // proto:  bool QStringRef::contains(QChar ch, Qt::CaseSensitivity cs);
bool _ZNK10QStringRef8containsE5QCharN2Qt15CaseSensitivityE(void *that, QChar ch, Qt::CaseSensitivity cs)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->contains(ch, cs);
}

  // proto:  bool QStringRef::contains(QLatin1String str, Qt::CaseSensitivity cs);
bool _ZNK10QStringRef8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *that, QLatin1String str, Qt::CaseSensitivity cs)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->contains(str, cs);
}

  // proto:  bool QStringRef::contains(const QStringRef & str, Qt::CaseSensitivity cs);
bool _ZNK10QStringRef8containsERKS_N2Qt15CaseSensitivityE(void *that, const QStringRef & str, Qt::CaseSensitivity cs)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->contains(str, cs);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

