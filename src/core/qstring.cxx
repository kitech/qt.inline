// auto generated, do not modify.
// created: Sat Dec 26 12:03:58 2015
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

// QString(const class QChar *, int)
QString* dector_ZN7QStringC1EPK5QChari(const QChar * unicode, int size)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(unicode, size);
  return rthis;
}

// QString(int, Qt::Initialization)
QString* dector_ZN7QStringC1EiN2Qt14InitializationE(int size, Qt::Initialization arg2)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(size, arg2);
  return rthis;
}

// QString(class QString &&)
QString* dector_ZN7QStringC1EOS_(QString && other)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(other);
  return rthis;
}

// QString(class QLatin1String)
QString* dector_ZN7QStringC1E13QLatin1String(QLatin1String latin1)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(latin1);
  return rthis;
}

// QString(const char *)
QString* dector_ZN7QStringC1EPKc(const char * ch)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(ch);
  return rthis;
}

// ~QString()
void dedtor_ZN7QStringD0Ev(QString* that)
{
  QString* rthis = (QString*)that;
  delete rthis;
}

// QString(const struct QString::Null &)
QString* dector_ZN7QStringC1ERKNS_4NullE(const QString::Null & arg1)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(arg1);
  return rthis;
}

// QString(struct QStringDataPtr)
QString* dector_ZN7QStringC1E14QStringDataPtr(QStringDataPtr dd)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(dd);
  return rthis;
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

// QString(const class QByteArray &)
QString* dector_ZN7QStringC1ERK10QByteArray(const QByteArray & a)
{
  // static_assert(sizeof(QString) == 32, "tyszerr");
  QString* rthis = new QString(a);
  return rthis;
}

  // proto:  QString & QString::prepend(QLatin1String s);
QString * demth_ZN7QString7prependE13QLatin1String(void *that, QLatin1String s)
{
  QString *cthat = (QString *)that;
  return &cthat->prepend(s);
}

  // proto:  bool QString::isNull();
bool demth_ZNK7QString6isNullEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->isNull();
}

  // proto:  QString & QString::prepend(QChar c);
QString * demth_ZN7QString7prependE5QChar(void *that, QChar c)
{
  QString *cthat = (QString *)that;
  return &cthat->prepend(c);
}

  // proto:  QString & QString::prepend(const char * s);
QString * demth_ZN7QString7prependEPKc(void *that, const char * s)
{
  QString *cthat = (QString *)that;
  return &cthat->prepend(s);
}

  // proto:  void QString::push_front(QChar c);
void demth_ZN7QString10push_frontE5QChar(void *that, QChar c)
{
  QString *cthat = (QString *)that;
   cthat->push_front(c);
}

  // proto:  void QString::QString();
void demth_ZN7QStringC1Ev(void *that)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString();
}

  // proto:  void QString::detach();
void demth_ZN7QString6detachEv(void *that)
{
  QString *cthat = (QString *)that;
   cthat->detach();
}

  // proto:  void QString::QString(QString && other);
void demth_ZN7QStringC1EOS_(void *that, QString && other)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString(other);
}

  // proto:  int QString::count();
int demth_ZNK7QString5countEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->count();
}

  // proto: static QString QString::fromStdWString(const std::wstring & s);
QString* demth_ZN7QString14fromStdWStringERKi(void *that, const std::wstring & s)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromStdWString(s);
  return new QString(recret);
}

  // proto:  void QString::push_back(QChar c);
void demth_ZN7QString9push_backE5QChar(void *that, QChar c)
{
  QString *cthat = (QString *)that;
   cthat->push_back(c);
}

  // proto:  int QString::size();
int demth_ZNK7QString4sizeEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->size();
}

  // proto:  QString & QString::insert(int i, const QString & s);
QString * demth_ZN7QString6insertEiRKS_(void *that, int i, const QString & s)
{
  QString *cthat = (QString *)that;
  return &cthat->insert(i, s);
}

  // proto:  void QString::QString(QLatin1String latin1);
void demth_ZN7QStringC1E13QLatin1String(void *that, QLatin1String latin1)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString(latin1);
}

  // proto:  QString & QString::prepend(const QString & s);
QString * demth_ZN7QString7prependERKS_(void *that, const QString & s)
{
  QString *cthat = (QString *)that;
  return &cthat->prepend(s);
}

  // proto:  bool QString::isDetached();
bool demth_ZNK7QString10isDetachedEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->isDetached();
}

  // proto: static QString QString::fromLocal8Bit(const char * str, int size);
QString* demth_ZN7QString13fromLocal8BitEPKci(void *that, const char * str, int size)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromLocal8Bit(str, size);
  return new QString(recret);
}

  // proto:  void QString::swap(QString & other);
void demth_ZN7QString4swapERS_(void *that, QString & other)
{
  QString *cthat = (QString *)that;
   cthat->swap(other);
}

  // proto: static QString QString::fromUtf8(const QByteArray & str);
QString* demth_ZN7QString8fromUtf8ERK10QByteArray(void *that, const QByteArray & str)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromUtf8(str);
  return new QString(recret);
}

  // proto:  void QString::push_back(const QString & s);
void demth_ZN7QString9push_backERKS_(void *that, const QString & s)
{
  QString *cthat = (QString *)that;
   cthat->push_back(s);
}

  // proto:  QChar * QString::data();
QChar * demth_ZN7QString4dataEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->data();
}

  // proto:  bool QString::contains(QLatin1String s, Qt::CaseSensitivity cs);
bool demth_ZNK7QString8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *that, QLatin1String s, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->contains(s, cs);
}

  // proto:  void QString::QString(const char * ch);
void demth_ZN7QStringC1EPKc(void *that, const char * ch)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString(ch);
}

  // proto: static int QString::compare(QLatin1String s1, const QString & s2, Qt::CaseSensitivity cs);
int demth_ZN7QString7compareE13QLatin1StringRKS_N2Qt15CaseSensitivityE(void *that, QLatin1String s1, const QString & s2, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->compare(s1, s2, cs);
}

  // proto:  QString & QString::setUtf16(const ushort * utf16, int size);
QString * demth_ZN7QString8setUtf16EPKti(void *that, const ushort * utf16, int size)
{
  QString *cthat = (QString *)that;
  return &cthat->setUtf16(utf16, size);
}

  // proto: static QString QString::fromStdU32String(const std::u32string & s);
QString* demth_ZN7QString16fromStdU32StringERKi(void *that, const std::u32string & s)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromStdU32String(s);
  return new QString(recret);
}

  // proto:  bool QString::contains(const QRegExp & rx);
bool demth_ZNK7QString8containsERK7QRegExp(void *that, const QRegExp & rx)
{
  QString *cthat = (QString *)that;
  return cthat->contains(rx);
}

  // proto:  bool QString::isSharedWith(const QString & other);
bool demth_ZNK7QString12isSharedWithERKS_(void *that, const QString & other)
{
  QString *cthat = (QString *)that;
  return cthat->isSharedWith(other);
}

  // proto: static QString QString::fromLatin1(const QByteArray & str);
QString* demth_ZN7QString10fromLatin1ERK10QByteArray(void *that, const QByteArray & str)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromLatin1(str);
  return new QString(recret);
}

  // proto:  void QString::~QString();
void demth_ZN7QStringD0Ev(void *that)
{
  QString *cthat = (QString *)that;
   cthat->~QString();
}

  // proto:  QString & QString::remove(const QRegularExpression & re);
QString * demth_ZN7QString6removeERK18QRegularExpression(void *that, const QRegularExpression & re)
{
  QString *cthat = (QString *)that;
  return &cthat->remove(re);
}

  // proto:  bool QString::contains(const QStringRef & s, Qt::CaseSensitivity cs);
bool demth_ZNK7QString8containsERK10QStringRefN2Qt15CaseSensitivityE(void *that, const QStringRef & s, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->contains(s, cs);
}

  // proto:  QString & QString::append(const QByteArray & s);
QString * demth_ZN7QString6appendERK10QByteArray(void *that, const QByteArray & s)
{
  QString *cthat = (QString *)that;
  return &cthat->append(s);
}

  // proto: static QString QString::fromLatin1(const char * str, int size);
QString* demth_ZN7QString10fromLatin1EPKci(void *that, const char * str, int size)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromLatin1(str, size);
  return new QString(recret);
}

  // proto:  int QString::toWCharArray(wchar_t * array);
int demth_ZNK7QString12toWCharArrayEPw(void *that, wchar_t * array)
{
  QString *cthat = (QString *)that;
  return cthat->toWCharArray(array);
}

  // proto:  QString & QString::prepend(const QByteArray & s);
QString * demth_ZN7QString7prependERK10QByteArray(void *that, const QByteArray & s)
{
  QString *cthat = (QString *)that;
  return &cthat->prepend(s);
}

  // proto: static QString QString::fromStdString(const std::string & s);
QString* demth_ZN7QString13fromStdStringERKi(void *that, const std::string & s)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromStdString(s);
  return new QString(recret);
}

  // proto: static QString QString::fromWCharArray(const wchar_t * string, int size);
QString* demth_ZN7QString14fromWCharArrayEPKwi(void *that, const wchar_t * string, int size)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromWCharArray(string, size);
  return new QString(recret);
}

  // proto: static int QString::compare(const QString & s1, QLatin1String s2, Qt::CaseSensitivity cs);
int demth_ZN7QString7compareERKS_13QLatin1StringN2Qt15CaseSensitivityE(void *that, const QString & s1, QLatin1String s2, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->compare(s1, s2, cs);
}

  // proto:  const QChar * QString::constData();
const QChar * demth_ZNK7QString9constDataEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->constData();
}

  // proto:  int QString::length();
int demth_ZNK7QString6lengthEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->length();
}

  // proto: static QString QString::fromUtf8(const char * str, int size);
QString* demth_ZN7QString8fromUtf8EPKci(void *that, const char * str, int size)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromUtf8(str, size);
  return new QString(recret);
}

  // proto:  void QString::QString(const QString::Null & );
void demth_ZN7QStringC1ERKNS_4NullE(void *that, const QString::Null & arg1)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString(arg1);
}

  // proto:  bool QString::contains(QRegExp & rx);
bool demth_ZNK7QString8containsER7QRegExp(void *that, QRegExp & rx)
{
  QString *cthat = (QString *)that;
  return cthat->contains(rx);
}

  // proto:  const QChar * QString::unicode();
const QChar * demth_ZNK7QString7unicodeEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->unicode();
}

  // proto: static QString QString::fromLocal8Bit(const QByteArray & str);
QString* demth_ZN7QString13fromLocal8BitERK10QByteArray(void *that, const QByteArray & str)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromLocal8Bit(str);
  return new QString(recret);
}

  // proto:  const QChar QString::at(int i);
const QChar* demth_ZNK7QString2atEi(void *that, int i)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->at(i);
  return new const QChar(recret);
}

  // proto:  void QString::push_front(const QString & s);
void demth_ZN7QString10push_frontERKS_(void *that, const QString & s)
{
  QString *cthat = (QString *)that;
   cthat->push_front(s);
}

  // proto: static QString QString::fromStdU16String(const std::u16string & s);
QString* demth_ZN7QString16fromStdU16StringERKi(void *that, const std::u16string & s)
{
  QString *cthat = (QString *)that;
  auto recret = cthat->fromStdU16String(s);
  return new QString(recret);
}

  // proto:  bool QString::contains(QChar c, Qt::CaseSensitivity cs);
bool demth_ZNK7QString8containsE5QCharN2Qt15CaseSensitivityE(void *that, QChar c, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->contains(c, cs);
}

  // proto:  const QChar * QString::data();
const QChar * demth_ZNK7QString4dataEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->data();
}

  // proto:  void QString::QString(const QString & );
void demth_ZN7QStringC1ERKS_(void *that, const QString & arg1)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString(arg1);
}

  // proto:  void QString::QString(const QByteArray & a);
void demth_ZN7QStringC1ERK10QByteArray(void *that, const QByteArray & a)
{
  QString *cthat = (QString *)that;
  auto _o = new(that) QString(a);
}

  // proto:  QString & QString::append(const char * s);
QString * demth_ZN7QString6appendEPKc(void *that, const char * s)
{
  QString *cthat = (QString *)that;
  return &cthat->append(s);
}

  // proto:  void QString::squeeze();
void demth_ZN7QString7squeezeEv(void *that)
{
  QString *cthat = (QString *)that;
   cthat->squeeze();
}

  // proto: static int QString::compare(const QString & s1, const QString & s2, Qt::CaseSensitivity cs);
int demth_ZN7QString7compareERKS_S1_N2Qt15CaseSensitivityE(void *that, const QString & s1, const QString & s2, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->compare(s1, s2, cs);
}

  // proto:  QString & QString::remove(const QRegExp & rx);
QString * demth_ZN7QString6removeERK7QRegExp(void *that, const QRegExp & rx)
{
  QString *cthat = (QString *)that;
  return &cthat->remove(rx);
}

  // proto:  bool QString::isEmpty();
bool demth_ZNK7QString7isEmptyEv(void *that)
{
  QString *cthat = (QString *)that;
  return cthat->isEmpty();
}

  // proto:  bool QString::contains(const QString & s, Qt::CaseSensitivity cs);
bool demth_ZNK7QString8containsERKS_N2Qt15CaseSensitivityE(void *that, const QString & s, Qt::CaseSensitivity cs)
{
  QString *cthat = (QString *)that;
  return cthat->contains(s, cs);
}

  // proto:  void QString::reserve(int size);
void demth_ZN7QString7reserveEi(void *that, int size)
{
  QString *cthat = (QString *)that;
   cthat->reserve(size);
}

int QLatin1String_Class_Size()
{
  return sizeof(QLatin1String);
}

// QLatin1String(const char *)
QLatin1String* dector_ZN13QLatin1StringC1EPKc(const char * s)
{
  // static_assert(sizeof(QLatin1String) == 32, "tyszerr");
  QLatin1String* rthis = new QLatin1String(s);
  return rthis;
}

// QLatin1String(const class QByteArray &)
QLatin1String* dector_ZN13QLatin1StringC1ERK10QByteArray(const QByteArray & s)
{
  // static_assert(sizeof(QLatin1String) == 32, "tyszerr");
  QLatin1String* rthis = new QLatin1String(s);
  return rthis;
}

// QLatin1String(const char *, int)
QLatin1String* dector_ZN13QLatin1StringC1EPKci(const char * s, int sz)
{
  // static_assert(sizeof(QLatin1String) == 32, "tyszerr");
  QLatin1String* rthis = new QLatin1String(s, sz);
  return rthis;
}

  // proto:  const char * QLatin1String::data();
const char * demth_ZNK13QLatin1String4dataEv(void *that)
{
  QLatin1String *cthat = (QLatin1String *)that;
  return cthat->data();
}

  // proto:  int QLatin1String::size();
int demth_ZNK13QLatin1String4sizeEv(void *that)
{
  QLatin1String *cthat = (QLatin1String *)that;
  return cthat->size();
}

  // proto:  void QLatin1String::QLatin1String(const QByteArray & s);
void demth_ZN13QLatin1StringC1ERK10QByteArray(void *that, const QByteArray & s)
{
  QLatin1String *cthat = (QLatin1String *)that;
  auto _o = new(that) QLatin1String(s);
}

  // proto:  const char * QLatin1String::latin1();
const char * demth_ZNK13QLatin1String6latin1Ev(void *that)
{
  QLatin1String *cthat = (QLatin1String *)that;
  return cthat->latin1();
}

int QCharRef_Class_Size()
{
  return sizeof(QCharRef);
}

  // proto:  bool QCharRef::isLetterOrNumber();
bool demth_ZN8QCharRef16isLetterOrNumberEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isLetterOrNumber();
}

  // proto:  bool QCharRef::isDigit();
bool demth_ZNK8QCharRef7isDigitEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isDigit();
}

  // proto:  void QCharRef::setCell(uchar cell);
void demth_ZN8QCharRef7setCellEh(void *that, unsigned char cell)
{
  QCharRef *cthat = (QCharRef *)that;
   cthat->setCell(cell);
}

  // proto:  bool QCharRef::isMark();
bool demth_ZNK8QCharRef6isMarkEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isMark();
}

  // proto:  int QCharRef::digitValue();
int demth_ZNK8QCharRef10digitValueEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->digitValue();
}

  // proto:  bool QCharRef::isLetter();
bool demth_ZNK8QCharRef8isLetterEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isLetter();
}

  // proto:  bool QCharRef::isNumber();
bool demth_ZNK8QCharRef8isNumberEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isNumber();
}

  // proto:  bool QCharRef::isPrint();
bool demth_ZNK8QCharRef7isPrintEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isPrint();
}

  // proto:  void QCharRef::setRow(uchar row);
void demth_ZN8QCharRef6setRowEh(void *that, unsigned char row)
{
  QCharRef *cthat = (QCharRef *)that;
   cthat->setRow(row);
}

  // proto:  bool QCharRef::isNull();
bool demth_ZNK8QCharRef6isNullEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isNull();
}

  // proto:  uchar QCharRef::row();
uchar demth_ZNK8QCharRef3rowEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->row();
}

  // proto:  bool QCharRef::isTitleCase();
bool demth_ZNK8QCharRef11isTitleCaseEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isTitleCase();
}

  // proto:  bool QCharRef::isUpper();
bool demth_ZNK8QCharRef7isUpperEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isUpper();
}

  // proto:  uchar QCharRef::cell();
uchar demth_ZNK8QCharRef4cellEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->cell();
}

  // proto:  uchar QCharRef::combiningClass();
uchar demth_ZNK8QCharRef14combiningClassEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->combiningClass();
}

  // proto:  bool QCharRef::isSpace();
bool demth_ZNK8QCharRef7isSpaceEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isSpace();
}

  // proto:  bool QCharRef::isPunct();
bool demth_ZNK8QCharRef7isPunctEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isPunct();
}

  // proto:  bool QCharRef::isLower();
bool demth_ZNK8QCharRef7isLowerEv(void *that)
{
  QCharRef *cthat = (QCharRef *)that;
  return cthat->isLower();
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

// QStringRef(const class QStringRef &)
QStringRef* dector_ZN10QStringRefC1ERKS_(const QStringRef & other)
{
  // static_assert(sizeof(QStringRef) == 32, "tyszerr");
  QStringRef* rthis = new QStringRef(other);
  return rthis;
}

// QStringRef(const class QString *, int, int)
QStringRef* dector_ZN10QStringRefC1EPK7QStringii(const QString * string, int position, int size)
{
  // static_assert(sizeof(QStringRef) == 32, "tyszerr");
  QStringRef* rthis = new QStringRef(string, position, size);
  return rthis;
}

// QStringRef()
QStringRef* dector_ZN10QStringRefC1Ev()
{
  // static_assert(sizeof(QStringRef) == 32, "tyszerr");
  QStringRef* rthis = new QStringRef();
  return rthis;
}

// ~QStringRef()
void dedtor_ZN10QStringRefD0Ev(QStringRef* that)
{
  QStringRef* rthis = (QStringRef*)that;
  delete rthis;
}

  // proto:  void QStringRef::QStringRef(const QString * string);
void demth_ZN10QStringRefC1EPK7QString(void *that, const QString * string)
{
  QStringRef *cthat = (QStringRef *)that;
  auto _o = new(that) QStringRef(string);
}

  // proto:  void QStringRef::clear();
void demth_ZN10QStringRef5clearEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
   cthat->clear();
}

  // proto:  int QStringRef::position();
int demth_ZNK10QStringRef8positionEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->position();
}

  // proto:  const QChar * QStringRef::cbegin();
const QChar * demth_ZNK10QStringRef6cbeginEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->cbegin();
}

  // proto:  bool QStringRef::isEmpty();
bool demth_ZNK10QStringRef7isEmptyEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->isEmpty();
}

  // proto:  bool QStringRef::contains(const QString & str, Qt::CaseSensitivity cs);
bool demth_ZNK10QStringRef8containsERK7QStringN2Qt15CaseSensitivityE(void *that, const QString & str, Qt::CaseSensitivity cs)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->contains(str, cs);
}

  // proto:  int QStringRef::size();
int demth_ZNK10QStringRef4sizeEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->size();
}

  // proto:  const QChar * QStringRef::constData();
const QChar * demth_ZNK10QStringRef9constDataEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->constData();
}

  // proto:  void QStringRef::QStringRef(const QStringRef & other);
void demth_ZN10QStringRefC1ERKS_(void *that, const QStringRef & other)
{
  QStringRef *cthat = (QStringRef *)that;
  auto _o = new(that) QStringRef(other);
}

  // proto:  int QStringRef::count();
int demth_ZNK10QStringRef5countEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->count();
}

  // proto:  void QStringRef::QStringRef(const QString * string, int position, int size);
void demth_ZN10QStringRefC1EPK7QStringii(void *that, const QString * string, int position, int size)
{
  QStringRef *cthat = (QStringRef *)that;
  auto _o = new(that) QStringRef(string, position, size);
}

  // proto:  void QStringRef::QStringRef();
void demth_ZN10QStringRefC1Ev(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  auto _o = new(that) QStringRef();
}

  // proto:  const QChar QStringRef::at(int i);
const QChar* demth_ZNK10QStringRef2atEi(void *that, int i)
{
  QStringRef *cthat = (QStringRef *)that;
  auto recret = cthat->at(i);
  return new const QChar(recret);
}

  // proto:  bool QStringRef::isNull();
bool demth_ZNK10QStringRef6isNullEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->isNull();
}

  // proto:  const QChar * QStringRef::data();
const QChar * demth_ZNK10QStringRef4dataEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->data();
}

  // proto:  const QChar * QStringRef::begin();
const QChar * demth_ZNK10QStringRef5beginEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->begin();
}

  // proto:  const QChar * QStringRef::unicode();
const QChar * demth_ZNK10QStringRef7unicodeEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->unicode();
}

  // proto:  const QString * QStringRef::string();
const QString * demth_ZNK10QStringRef6stringEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->string();
}

  // proto:  bool QStringRef::contains(QChar ch, Qt::CaseSensitivity cs);
bool demth_ZNK10QStringRef8containsE5QCharN2Qt15CaseSensitivityE(void *that, QChar ch, Qt::CaseSensitivity cs)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->contains(ch, cs);
}

  // proto:  const QChar * QStringRef::cend();
const QChar * demth_ZNK10QStringRef4cendEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->cend();
}

  // proto:  bool QStringRef::contains(QLatin1String str, Qt::CaseSensitivity cs);
bool demth_ZNK10QStringRef8containsE13QLatin1StringN2Qt15CaseSensitivityE(void *that, QLatin1String str, Qt::CaseSensitivity cs)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->contains(str, cs);
}

  // proto:  int QStringRef::length();
int demth_ZNK10QStringRef6lengthEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->length();
}

  // proto:  void QStringRef::~QStringRef();
void demth_ZN10QStringRefD0Ev(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
   cthat->~QStringRef();
}

  // proto:  bool QStringRef::contains(const QStringRef & str, Qt::CaseSensitivity cs);
bool demth_ZNK10QStringRef8containsERKS_N2Qt15CaseSensitivityE(void *that, const QStringRef & str, Qt::CaseSensitivity cs)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->contains(str, cs);
}

  // proto:  const QChar * QStringRef::end();
const QChar * demth_ZNK10QStringRef3endEv(void *that)
{
  QStringRef *cthat = (QStringRef *)that;
  return cthat->end();
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

