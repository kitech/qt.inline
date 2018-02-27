//  header block begin
// /usr/include/qt/QtCore/qchar.h
#ifndef protected
#define protected public
#endif
#include <qchar.h>
#include <QtCore>
#include "callback_inherit.h"

// QChar is pure virtual: false
// QChar has virtual projected: false
//  header block end

//  main block begin

class MyQChar : public QChar {
public:
  virtual ~MyQChar() {}
// void QChar()
MyQChar() : QChar() {}
// void QChar(ushort)
MyQChar(ushort rc) : QChar(rc) {}
// void QChar(uchar, uchar)
MyQChar(uchar c, uchar r) : QChar(c, r) {}
// void QChar(short)
MyQChar(short rc) : QChar(rc) {}
// void QChar(uint)
MyQChar(uint rc) : QChar(rc) {}
// void QChar(int)
MyQChar(int rc) : QChar(rc) {}
// void QChar(enum QChar::SpecialCharacter)
MyQChar(QChar::SpecialCharacter s) : QChar(s) {}
// void QChar(char16_t)
MyQChar(char16_t ch) : QChar(ch) {}
// void QChar(char)
MyQChar(char c) : QChar(c) {}
// void QChar(uchar)
MyQChar(uchar c) : QChar(c) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:81
// [-2] void QChar()
extern "C"
void* C_ZN5QCharC2Ev() {
  return  new QChar();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:82
// [-2] void QChar(ushort)
extern "C"
void* C_ZN5QCharC2Et(ushort rc) {
  return  new QChar(rc);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:83
// [-2] void QChar(uchar, uchar)
extern "C"
void* C_ZN5QCharC2Ehh(uchar c, uchar r) {
  return  new QChar(c, r);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:84
// [-2] void QChar(short)
extern "C"
void* C_ZN5QCharC2Es(short rc) {
  return  new QChar(rc);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:85
// [-2] void QChar(uint)
extern "C"
void* C_ZN5QCharC2Ej(uint rc) {
  return  new QChar(rc);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:86
// [-2] void QChar(int)
extern "C"
void* C_ZN5QCharC2Ei(int rc) {
  return  new QChar(rc);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:87
// [-2] void QChar(enum QChar::SpecialCharacter)
extern "C"
void* C_ZN5QCharC2ENS_16SpecialCharacterE(QChar::SpecialCharacter s) {
  return  new QChar(s);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:90
// [-2] void QChar(char16_t)
extern "C"
void* C_ZN5QCharC2EDs(char16_t ch) {
  return  new QChar(ch);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:98
// [-2] void QChar(char)
extern "C"
void* C_ZN5QCharC2Ec(char c) {
  return  new QChar(c);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:100
// [-2] void QChar(uchar)
extern "C"
void* C_ZN5QCharC2Eh(uchar c) {
  return  new QChar(c);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:394
// [4] QChar::Category category()
extern "C"
QChar::Category C_ZNK5QChar8categoryEv(void *this_) {
  return (QChar::Category)((QChar*)this_)->category();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:395
// [4] QChar::Direction direction()
extern "C"
QChar::Direction C_ZNK5QChar9directionEv(void *this_) {
  return (QChar::Direction)((QChar*)this_)->direction();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:396
// [4] QChar::JoiningType joiningType()
extern "C"
QChar::JoiningType C_ZNK5QChar11joiningTypeEv(void *this_) {
  return (QChar::JoiningType)((QChar*)this_)->joiningType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:398
// [4] QChar::Joining joining()
extern "C"
QChar::Joining C_ZNK5QChar7joiningEv(void *this_) {
  return (QChar::Joining)((QChar*)this_)->joining();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:411
// [1] unsigned char combiningClass()
extern "C"
unsigned char C_ZNK5QChar14combiningClassEv(void *this_) {
  return (unsigned char)((QChar*)this_)->combiningClass();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:413
// [2] QChar mirroredChar()
extern "C"
void* C_ZNK5QChar12mirroredCharEv(void *this_) {
  auto rv = ((QChar*)this_)->mirroredChar();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:414
// [1] bool hasMirrored()
extern "C"
bool C_ZNK5QChar11hasMirroredEv(void *this_) {
  return (bool)((QChar*)this_)->hasMirrored();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:416
// [8] QString decomposition()
extern "C"
void* C_ZNK5QChar13decompositionEv(void *this_) {
  auto rv = ((QChar*)this_)->decomposition();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:417
// [4] QChar::Decomposition decompositionTag()
extern "C"
QChar::Decomposition C_ZNK5QChar16decompositionTagEv(void *this_) {
  return (QChar::Decomposition)((QChar*)this_)->decompositionTag();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:419
// [4] int digitValue()
extern "C"
int C_ZNK5QChar10digitValueEv(void *this_) {
  return (int)((QChar*)this_)->digitValue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:420
// [2] QChar toLower()
extern "C"
void* C_ZNK5QChar7toLowerEv(void *this_) {
  auto rv = ((QChar*)this_)->toLower();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:421
// [2] QChar toUpper()
extern "C"
void* C_ZNK5QChar7toUpperEv(void *this_) {
  auto rv = ((QChar*)this_)->toUpper();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:422
// [2] QChar toTitleCase()
extern "C"
void* C_ZNK5QChar11toTitleCaseEv(void *this_) {
  auto rv = ((QChar*)this_)->toTitleCase();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:423
// [2] QChar toCaseFolded()
extern "C"
void* C_ZNK5QChar12toCaseFoldedEv(void *this_) {
  auto rv = ((QChar*)this_)->toCaseFolded();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:425
// [4] QChar::Script script()
extern "C"
QChar::Script C_ZNK5QChar6scriptEv(void *this_) {
  return (QChar::Script)((QChar*)this_)->script();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:427
// [4] QChar::UnicodeVersion unicodeVersion()
extern "C"
QChar::UnicodeVersion C_ZNK5QChar14unicodeVersionEv(void *this_) {
  return (QChar::UnicodeVersion)((QChar*)this_)->unicodeVersion();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:432
// [1] char toLatin1()
extern "C"
char C_ZNK5QChar8toLatin1Ev(void *this_) {
  return (char)((QChar*)this_)->toLatin1();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:433
// [2] ushort unicode()
extern "C"
ushort C_ZNK5QChar7unicodeEv(void *this_) {
  return (ushort)((QChar*)this_)->unicode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:434
// [2] ushort & unicode()
extern "C"
void* C_ZN5QChar7unicodeEv(void *this_) {
  auto& rv = ((QChar*)this_)->unicode();
return &rv;
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:440
// [2] QChar fromLatin1(char)
extern "C"
void* C_ZN5QChar10fromLatin1Ec(char c) {
  auto rv = QChar::fromLatin1(c);
return new QChar(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:442
// [1] bool isNull()
extern "C"
bool C_ZNK5QChar6isNullEv(void *this_) {
  return (bool)((QChar*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:444
// [1] bool isPrint()
extern "C"
bool C_ZNK5QChar7isPrintEv(void *this_) {
  return (bool)((QChar*)this_)->isPrint();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:445
// [1] bool isSpace()
extern "C"
bool C_ZNK5QChar7isSpaceEv(void *this_) {
  return (bool)((QChar*)this_)->isSpace();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:446
// [1] bool isMark()
extern "C"
bool C_ZNK5QChar6isMarkEv(void *this_) {
  return (bool)((QChar*)this_)->isMark();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:447
// [1] bool isPunct()
extern "C"
bool C_ZNK5QChar7isPunctEv(void *this_) {
  return (bool)((QChar*)this_)->isPunct();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:448
// [1] bool isSymbol()
extern "C"
bool C_ZNK5QChar8isSymbolEv(void *this_) {
  return (bool)((QChar*)this_)->isSymbol();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:449
// [1] bool isLetter()
extern "C"
bool C_ZNK5QChar8isLetterEv(void *this_) {
  return (bool)((QChar*)this_)->isLetter();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:450
// [1] bool isNumber()
extern "C"
bool C_ZNK5QChar8isNumberEv(void *this_) {
  return (bool)((QChar*)this_)->isNumber();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:451
// [1] bool isLetterOrNumber()
extern "C"
bool C_ZNK5QChar16isLetterOrNumberEv(void *this_) {
  return (bool)((QChar*)this_)->isLetterOrNumber();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:452
// [1] bool isDigit()
extern "C"
bool C_ZNK5QChar7isDigitEv(void *this_) {
  return (bool)((QChar*)this_)->isDigit();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:453
// [1] bool isLower()
extern "C"
bool C_ZNK5QChar7isLowerEv(void *this_) {
  return (bool)((QChar*)this_)->isLower();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:454
// [1] bool isUpper()
extern "C"
bool C_ZNK5QChar7isUpperEv(void *this_) {
  return (bool)((QChar*)this_)->isUpper();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:455
// [1] bool isTitleCase()
extern "C"
bool C_ZNK5QChar11isTitleCaseEv(void *this_) {
  return (bool)((QChar*)this_)->isTitleCase();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:457
// [1] bool isNonCharacter()
extern "C"
bool C_ZNK5QChar14isNonCharacterEv(void *this_) {
  return (bool)((QChar*)this_)->isNonCharacter();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:458
// [1] bool isHighSurrogate()
extern "C"
bool C_ZNK5QChar15isHighSurrogateEv(void *this_) {
  return (bool)((QChar*)this_)->isHighSurrogate();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:459
// [1] bool isLowSurrogate()
extern "C"
bool C_ZNK5QChar14isLowSurrogateEv(void *this_) {
  return (bool)((QChar*)this_)->isLowSurrogate();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:460
// [1] bool isSurrogate()
extern "C"
bool C_ZNK5QChar11isSurrogateEv(void *this_) {
  return (bool)((QChar*)this_)->isSurrogate();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:462
// [1] uchar cell()
extern "C"
uchar C_ZNK5QChar4cellEv(void *this_) {
  return (uchar)((QChar*)this_)->cell();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:463
// [1] uchar row()
extern "C"
uchar C_ZNK5QChar3rowEv(void *this_) {
  return (uchar)((QChar*)this_)->row();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:464
// [-2] void setCell(uchar)
extern "C"
void C_ZN5QChar7setCellEh(void *this_, uchar acell) {
  ((QChar*)this_)->setCell(acell);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:465
// [-2] void setRow(uchar)
extern "C"
void C_ZN5QChar6setRowEh(void *this_, uchar arow) {
  ((QChar*)this_)->setRow(arow);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:467
// [1] bool isNonCharacter(uint)
extern "C"
bool C_ZN5QChar14isNonCharacterEj(uint ucs4) {
  return (bool)QChar::isNonCharacter(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:471
// [1] bool isHighSurrogate(uint)
extern "C"
bool C_ZN5QChar15isHighSurrogateEj(uint ucs4) {
  return (bool)QChar::isHighSurrogate(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:475
// [1] bool isLowSurrogate(uint)
extern "C"
bool C_ZN5QChar14isLowSurrogateEj(uint ucs4) {
  return (bool)QChar::isLowSurrogate(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:479
// [1] bool isSurrogate(uint)
extern "C"
bool C_ZN5QChar11isSurrogateEj(uint ucs4) {
  return (bool)QChar::isSurrogate(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:483
// [1] bool requiresSurrogates(uint)
extern "C"
bool C_ZN5QChar18requiresSurrogatesEj(uint ucs4) {
  return (bool)QChar::requiresSurrogates(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:487
// [4] uint surrogateToUcs4(ushort, ushort)
extern "C"
uint C_ZN5QChar15surrogateToUcs4Ett(ushort high, ushort low) {
  return (uint)QChar::surrogateToUcs4(high, low);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:491
// [4] uint surrogateToUcs4(class QChar, class QChar)
extern "C"
uint C_ZN5QChar15surrogateToUcs4ES_S_(QChar* high, QChar* low) {
  return (uint)QChar::surrogateToUcs4(*high, *low);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:495
// [2] ushort highSurrogate(uint)
extern "C"
ushort C_ZN5QChar13highSurrogateEj(uint ucs4) {
  return (ushort)QChar::highSurrogate(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:499
// [2] ushort lowSurrogate(uint)
extern "C"
ushort C_ZN5QChar12lowSurrogateEj(uint ucs4) {
  return (ushort)QChar::lowSurrogate(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:504
// [4] QChar::Category category(uint)
extern "C"
QChar::Category C_ZN5QChar8categoryEj(uint ucs4) {
  return (QChar::Category)QChar::category(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:505
// [4] QChar::Direction direction(uint)
extern "C"
QChar::Direction C_ZN5QChar9directionEj(uint ucs4) {
  return (QChar::Direction)QChar::direction(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:506
// [4] QChar::JoiningType joiningType(uint)
extern "C"
QChar::JoiningType C_ZN5QChar11joiningTypeEj(uint ucs4) {
  return (QChar::JoiningType)QChar::joiningType(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:508
// [4] QChar::Joining joining(uint)
extern "C"
QChar::Joining C_ZN5QChar7joiningEj(uint ucs4) {
  return (QChar::Joining)QChar::joining(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:510
// [1] unsigned char combiningClass(uint)
extern "C"
unsigned char C_ZN5QChar14combiningClassEj(uint ucs4) {
  return (unsigned char)QChar::combiningClass(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:512
// [4] uint mirroredChar(uint)
extern "C"
uint C_ZN5QChar12mirroredCharEj(uint ucs4) {
  return (uint)QChar::mirroredChar(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:513
// [1] bool hasMirrored(uint)
extern "C"
bool C_ZN5QChar11hasMirroredEj(uint ucs4) {
  return (bool)QChar::hasMirrored(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:515
// [8] QString decomposition(uint)
extern "C"
void* C_ZN5QChar13decompositionEj(uint ucs4) {
  auto rv = QChar::decomposition(ucs4);
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:516
// [4] QChar::Decomposition decompositionTag(uint)
extern "C"
QChar::Decomposition C_ZN5QChar16decompositionTagEj(uint ucs4) {
  return (QChar::Decomposition)QChar::decompositionTag(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:518
// [4] int digitValue(uint)
extern "C"
int C_ZN5QChar10digitValueEj(uint ucs4) {
  return (int)QChar::digitValue(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:519
// [4] uint toLower(uint)
extern "C"
uint C_ZN5QChar7toLowerEj(uint ucs4) {
  return (uint)QChar::toLower(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:520
// [4] uint toUpper(uint)
extern "C"
uint C_ZN5QChar7toUpperEj(uint ucs4) {
  return (uint)QChar::toUpper(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:521
// [4] uint toTitleCase(uint)
extern "C"
uint C_ZN5QChar11toTitleCaseEj(uint ucs4) {
  return (uint)QChar::toTitleCase(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:522
// [4] uint toCaseFolded(uint)
extern "C"
uint C_ZN5QChar12toCaseFoldedEj(uint ucs4) {
  return (uint)QChar::toCaseFolded(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:524
// [4] QChar::Script script(uint)
extern "C"
QChar::Script C_ZN5QChar6scriptEj(uint ucs4) {
  return (QChar::Script)QChar::script(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:526
// [4] QChar::UnicodeVersion unicodeVersion(uint)
extern "C"
QChar::UnicodeVersion C_ZN5QChar14unicodeVersionEj(uint ucs4) {
  return (QChar::UnicodeVersion)QChar::unicodeVersion(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:528
// [4] QChar::UnicodeVersion currentUnicodeVersion()
extern "C"
QChar::UnicodeVersion C_ZN5QChar21currentUnicodeVersionEv() {
  return (QChar::UnicodeVersion)QChar::currentUnicodeVersion();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:530
// [1] bool isPrint(uint)
extern "C"
bool C_ZN5QChar7isPrintEj(uint ucs4) {
  return (bool)QChar::isPrint(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:531
// [1] bool isSpace(uint)
extern "C"
bool C_ZN5QChar7isSpaceEj(uint ucs4) {
  return (bool)QChar::isSpace(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:537
// [1] bool isMark(uint)
extern "C"
bool C_ZN5QChar6isMarkEj(uint ucs4) {
  return (bool)QChar::isMark(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:538
// [1] bool isPunct(uint)
extern "C"
bool C_ZN5QChar7isPunctEj(uint ucs4) {
  return (bool)QChar::isPunct(ucs4);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:539
// [1] bool isSymbol(uint)
extern "C"
bool C_ZN5QChar8isSymbolEj(uint ucs4) {
  return (bool)QChar::isSymbol(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:540
// [1] bool isLetter(uint)
extern "C"
bool C_ZN5QChar8isLetterEj(uint ucs4) {
  return (bool)QChar::isLetter(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:545
// [1] bool isNumber(uint)
extern "C"
bool C_ZN5QChar8isNumberEj(uint ucs4) {
  return (bool)QChar::isNumber(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:547
// [1] bool isLetterOrNumber(uint)
extern "C"
bool C_ZN5QChar16isLetterOrNumberEj(uint ucs4) {
  return (bool)QChar::isLetterOrNumber(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:553
// [1] bool isDigit(uint)
extern "C"
bool C_ZN5QChar7isDigitEj(uint ucs4) {
  return (bool)QChar::isDigit(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:555
// [1] bool isLower(uint)
extern "C"
bool C_ZN5QChar7isLowerEj(uint ucs4) {
  return (bool)QChar::isLower(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:557
// [1] bool isUpper(uint)
extern "C"
bool C_ZN5QChar7isUpperEj(uint ucs4) {
  return (bool)QChar::isUpper(ucs4);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:559
// [1] bool isTitleCase(uint)
extern "C"
bool C_ZN5QChar11isTitleCaseEj(uint ucs4) {
  return (bool)QChar::isTitleCase(ucs4);
}

extern "C"
void C_ZN5QCharD2Ev(void *this_) {
  delete (QChar*)(this_);
}
//  main block end
