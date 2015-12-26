// auto generated, do not modify.
// created: Sat Dec 26 11:30:23 2015
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
bool _ZNK5QChar11hasMirroredEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->hasMirrored();
}

  // proto: static ushort QChar::lowSurrogate(uint ucs4);
ushort _ZN5QChar12lowSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->lowSurrogate(ucs4);
}

  // proto: static uint QChar::surrogateToUcs4(QChar high, QChar low);
uint _ZN5QChar15surrogateToUcs4ES_S_(void *that, QChar high, QChar low)
{
  QChar *cthat = (QChar *)that;
  return cthat->surrogateToUcs4(high, low);
}

  // proto: static bool QChar::isTitleCase(uint ucs4);
bool _ZN5QChar11isTitleCaseEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isTitleCase(ucs4);
}

  // proto:  int QChar::digitValue();
int _ZNK5QChar10digitValueEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->digitValue();
}

  // proto:  QChar QChar::toTitleCase();
QChar* _ZNK5QChar11toTitleCaseEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->toTitleCase();
  return new QChar(recret);
}

  // proto: static bool QChar::isLower(uint ucs4);
bool _ZN5QChar7isLowerEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLower(ucs4);
}

  // proto:  bool QChar::isSymbol();
bool _ZNK5QChar8isSymbolEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isSymbol();
}

  // proto:  QChar QChar::mirroredChar();
QChar* _ZNK5QChar12mirroredCharEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->mirroredChar();
  return new QChar(recret);
}

  // proto: static bool QChar::isHighSurrogate(uint ucs4);
bool _ZN5QChar15isHighSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isHighSurrogate(ucs4);
}

  // proto:  bool QChar::isMark();
bool _ZNK5QChar6isMarkEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isMark();
}

  // proto: static uint QChar::surrogateToUcs4(ushort high, ushort low);
uint _ZN5QChar15surrogateToUcs4Ett(void *that, unsigned short high, unsigned short low)
{
  QChar *cthat = (QChar *)that;
  return cthat->surrogateToUcs4(high, low);
}

  // proto:  void QChar::setRow(uchar row);
void _ZN5QChar6setRowEh(void *that, unsigned char row)
{
  QChar *cthat = (QChar *)that;
   cthat->setRow(row);
}

  // proto:  void QChar::setCell(uchar cell);
void _ZN5QChar7setCellEh(void *that, unsigned char cell)
{
  QChar *cthat = (QChar *)that;
   cthat->setCell(cell);
}

  // proto: static bool QChar::isUpper(uint ucs4);
bool _ZN5QChar7isUpperEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isUpper(ucs4);
}

  // proto:  QChar QChar::toCaseFolded();
QChar* _ZNK5QChar12toCaseFoldedEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->toCaseFolded();
  return new QChar(recret);
}

  // proto:  bool QChar::isPrint();
bool _ZNK5QChar7isPrintEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isPrint();
}

  // proto:  bool QChar::isPunct();
bool _ZNK5QChar7isPunctEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->isPunct();
}

  // proto: static bool QChar::isLetterOrNumber(uint ucs4);
bool _ZN5QChar16isLetterOrNumberEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLetterOrNumber(ucs4);
}

  // proto: static bool QChar::isDigit(uint ucs4);
bool _ZN5QChar7isDigitEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isDigit(ucs4);
}

  // proto:  unsigned char QChar::combiningClass();
unsigned char _ZNK5QChar14combiningClassEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return cthat->combiningClass();
}

  // proto: static ushort QChar::highSurrogate(uint ucs4);
ushort _ZN5QChar13highSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->highSurrogate(ucs4);
}

  // proto: static bool QChar::requiresSurrogates(uint ucs4);
bool _ZN5QChar18requiresSurrogatesEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->requiresSurrogates(ucs4);
}

  // proto:  ushort & QChar::unicode();
ushort * _ZN5QChar7unicodeEv(void *that)
{
  QChar *cthat = (QChar *)that;
  return &cthat->unicode();
}

  // proto: static bool QChar::isLowSurrogate(uint ucs4);
bool _ZN5QChar14isLowSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLowSurrogate(ucs4);
}

  // proto: static bool QChar::isNumber(uint ucs4);
bool _ZN5QChar8isNumberEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isNumber(ucs4);
}

  // proto:  QChar QChar::toLower();
QChar* _ZNK5QChar7toLowerEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->toLower();
  return new QChar(recret);
}

  // proto: static bool QChar::isLetter(uint ucs4);
bool _ZN5QChar8isLetterEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isLetter(ucs4);
}

  // proto:  QChar QChar::toUpper();
QChar* _ZNK5QChar7toUpperEv(void *that)
{
  QChar *cthat = (QChar *)that;
  auto recret = cthat->toUpper();
  return new QChar(recret);
}

  // proto: static bool QChar::isSpace(uint ucs4);
bool _ZN5QChar7isSpaceEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isSpace(ucs4);
}

  // proto: static bool QChar::isSurrogate(uint ucs4);
bool _ZN5QChar11isSurrogateEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isSurrogate(ucs4);
}

  // proto: static bool QChar::isNonCharacter(uint ucs4);
bool _ZN5QChar14isNonCharacterEj(void *that, unsigned int ucs4)
{
  QChar *cthat = (QChar *)that;
  return cthat->isNonCharacter(ucs4);
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

