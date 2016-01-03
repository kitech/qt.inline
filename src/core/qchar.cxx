// auto generated, do not modify.
// created: Sun Jan  3 01:22:04 2016
// src-file: /QtCore/qchar.h
// dst-file: /src/core/qchar.cxx
//

// header block begin =>
#include <qchar.h>

extern "C" {

int QLatin1Char_Class_Size()
{
  return sizeof(QLatin1Char);
}

// QLatin1Char(char)
QLatin1Char* dector_ZN11QLatin1CharC1Ec(char c)
{
  // static_assert(sizeof(QLatin1Char) == 32, "tyszerr");
  QLatin1Char* rthis = new QLatin1Char(c);
  return rthis;
}

  // proto:  ushort QLatin1Char::unicode();
ushort demth_ZNK11QLatin1Char7unicodeEv(void *that)
{
  QLatin1Char *cthat = (QLatin1Char *)that;
  return cthat->unicode();
}

  // proto:  char QLatin1Char::toLatin1();
char demth_ZNK11QLatin1Char8toLatin1Ev(void *that)
{
  QLatin1Char *cthat = (QLatin1Char *)that;
  return cthat->toLatin1();
}

int QChar_Class_Size()
{
  return sizeof(QChar);
}

// QChar(struct QLatin1Char)
QChar* dector_ZN5QCharC1E11QLatin1Char(QLatin1Char ch)
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar(ch);
  return rthis;
}

// QChar(uchar, uchar)
QChar* dector_ZN5QCharC1Ehh(unsigned char c, unsigned char r)
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar(c, r);
  return rthis;
}

// QChar(char)
QChar* dector_ZN5QCharC1Ec(char c)
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar(c);
  return rthis;
}

// QChar(uint)
QChar* dector_ZN5QCharC1Ej(unsigned int rc)
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar(rc);
  return rthis;
}

// QChar(int)
QChar* dector_ZN5QCharC1Ei(int rc)
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar(rc);
  return rthis;
}

// QChar(short)
QChar* dector_ZN5QCharC1Es(short rc)
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar(rc);
  return rthis;
}

// QChar()
QChar* dector_ZN5QCharC1Ev()
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar();
  return rthis;
}

// QChar(ushort)
QChar* dector_ZN5QCharC1Et(unsigned short rc)
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar(rc);
  return rthis;
}

// QChar(enum QChar::SpecialCharacter)
QChar* dector_ZN5QCharC1ENS_16SpecialCharacterE(QChar::SpecialCharacter s)
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar(s);
  return rthis;
}

// QChar(uchar)
QChar* dector_ZN5QCharC1Eh(unsigned char c)
{
  // static_assert(sizeof(QChar) == 32, "tyszerr");
  QChar* rthis = new QChar(c);
  return rthis;
}

  // proto:  bool QChar::hasMirrored();
bool demth_ZNK5QChar11hasMirroredEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->hasMirrored();
}

  // proto: static ushort QChar::lowSurrogate(uint ucs4);
ushort demth_ZN5QChar12lowSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->lowSurrogate(ucs4);
}

  // proto:  uchar QChar::cell();
uchar demth_ZNK5QChar4cellEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->cell();
}

  // proto: static uint QChar::surrogateToUcs4(QChar high, QChar low);
uint demth_ZN5QChar15surrogateToUcs4ES_S_(void *that, QChar high, QChar low)
{
  QChar *cthat = (QChar *)that;
  return cthat->surrogateToUcs4(high, low);
}

  // proto: static bool QChar::isTitleCase(uint ucs4);
bool demth_ZN5QChar11isTitleCaseEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isTitleCase(ucs4);
}

  // proto:  bool QChar::isNull();
bool demth_ZNK5QChar6isNullEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isNull();
}

  // proto:  int QChar::digitValue();
int demth_ZNK5QChar10digitValueEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->digitValue();
}

  // proto:  ushort QChar::unicode();
ushort demth_ZNK5QChar7unicodeEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->unicode();
}

  // proto:  QChar QChar::toTitleCase();
QChar* demth_ZNK5QChar11toTitleCaseEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->toTitleCase();
  return new QChar(recret);
}

  // proto: static bool QChar::isLower(uint ucs4);
bool demth_ZN5QChar7isLowerEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLower(ucs4);
}

  // proto:  bool QChar::isLowSurrogate();
bool demth_ZNK5QChar14isLowSurrogateEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLowSurrogate();
}

  // proto:  bool QChar::isSymbol();
bool demth_ZNK5QChar8isSymbolEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isSymbol();
}

  // proto:  bool QChar::isLower();
bool demth_ZNK5QChar7isLowerEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLower();
}

  // proto:  QChar QChar::mirroredChar();
QChar* demth_ZNK5QChar12mirroredCharEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->mirroredChar();
  return new QChar(recret);
}

  // proto:  uchar QChar::row();
uchar demth_ZNK5QChar3rowEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->row();
}

  // proto:  bool QChar::isDigit();
bool demth_ZNK5QChar7isDigitEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isDigit();
}

  // proto:  bool QChar::isSurrogate();
bool demth_ZNK5QChar11isSurrogateEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isSurrogate();
}

  // proto:  bool QChar::isNumber();
bool demth_ZNK5QChar8isNumberEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isNumber();
}

  // proto: static bool QChar::isHighSurrogate(uint ucs4);
bool demth_ZN5QChar15isHighSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isHighSurrogate(ucs4);
}

  // proto:  bool QChar::isMark();
bool demth_ZNK5QChar6isMarkEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isMark();
}

  // proto: static uint QChar::surrogateToUcs4(ushort high, ushort low);
uint demth_ZN5QChar15surrogateToUcs4Ett(void *that, unsigned short high, unsigned short low)
{
  QChar *cthat = (QChar *)that;
  return cthat->surrogateToUcs4(high, low);
}

  // proto:  void QChar::setRow(uchar row);
void demth_ZN5QChar6setRowEh(void *that, unsigned char row)
{
  QChar *cthat = (QChar *)that;
   cthat->setRow(row);
}

  // proto:  void QChar::setCell(uchar cell);
void demth_ZN5QChar7setCellEh(void *that, unsigned char cell)
{
  QChar *cthat = (QChar *)that;
   cthat->setCell(cell);
}

  // proto: static bool QChar::isUpper(uint ucs4);
bool demth_ZN5QChar7isUpperEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isUpper(ucs4);
}

  // proto:  QChar QChar::toCaseFolded();
QChar* demth_ZNK5QChar12toCaseFoldedEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->toCaseFolded();
  return new QChar(recret);
}

  // proto:  bool QChar::isPrint();
bool demth_ZNK5QChar7isPrintEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isPrint();
}

  // proto:  bool QChar::isPunct();
bool demth_ZNK5QChar7isPunctEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isPunct();
}

  // proto:  bool QChar::isSpace();
bool demth_ZNK5QChar7isSpaceEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isSpace();
}

  // proto:  bool QChar::isUpper();
bool demth_ZNK5QChar7isUpperEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isUpper();
}

  // proto:  bool QChar::isNonCharacter();
bool demth_ZNK5QChar14isNonCharacterEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isNonCharacter();
}

  // proto: static bool QChar::isLetterOrNumber(uint ucs4);
bool demth_ZN5QChar16isLetterOrNumberEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLetterOrNumber(ucs4);
}

  // proto: static bool QChar::isDigit(uint ucs4);
bool demth_ZN5QChar7isDigitEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isDigit(ucs4);
}

  // proto:  bool QChar::isTitleCase();
bool demth_ZNK5QChar11isTitleCaseEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isTitleCase();
}

  // proto:  bool QChar::isLetter();
bool demth_ZNK5QChar8isLetterEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLetter();
}

  // proto:  unsigned char QChar::combiningClass();
unsigned char demth_ZNK5QChar14combiningClassEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->combiningClass();
}

  // proto:  bool QChar::isHighSurrogate();
bool demth_ZNK5QChar15isHighSurrogateEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isHighSurrogate();
}

  // proto: static ushort QChar::highSurrogate(uint ucs4);
ushort demth_ZN5QChar13highSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->highSurrogate(ucs4);
}

  // proto: static bool QChar::requiresSurrogates(uint ucs4);
bool demth_ZN5QChar18requiresSurrogatesEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->requiresSurrogates(ucs4);
}

  // proto:  bool QChar::isLetterOrNumber();
bool demth_ZNK5QChar16isLetterOrNumberEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLetterOrNumber();
}

  // proto:  ushort & QChar::unicode();
ushort * demth_ZN5QChar7unicodeEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return &cthat->unicode();
}

  // proto: static bool QChar::isLowSurrogate(uint ucs4);
bool demth_ZN5QChar14isLowSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLowSurrogate(ucs4);
}

  // proto: static bool QChar::isNumber(uint ucs4);
bool demth_ZN5QChar8isNumberEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isNumber(ucs4);
}

  // proto:  QChar QChar::toLower();
QChar* demth_ZNK5QChar7toLowerEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->toLower();
  return new QChar(recret);
}

  // proto: static bool QChar::isLetter(uint ucs4);
bool demth_ZN5QChar8isLetterEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLetter(ucs4);
}

  // proto:  QChar QChar::toUpper();
QChar* demth_ZNK5QChar7toUpperEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->toUpper();
  return new QChar(recret);
}

  // proto: static bool QChar::isSpace(uint ucs4);
bool demth_ZN5QChar7isSpaceEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isSpace(ucs4);
}

  // proto: static QChar QChar::fromLatin1(char c);
QChar* demth_ZN5QChar10fromLatin1Ec(void *that, char c)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->fromLatin1(c);
  return new QChar(recret);
}

  // proto: static bool QChar::isSurrogate(uint ucs4);
bool demth_ZN5QChar11isSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isSurrogate(ucs4);
}

  // proto: static bool QChar::isNonCharacter(uint ucs4);
bool demth_ZN5QChar14isNonCharacterEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isNonCharacter(ucs4);
}

  // proto:  char QChar::toLatin1();
char demth_ZNK5QChar8toLatin1Ev(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->toLatin1();
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

