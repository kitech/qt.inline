//  header block begin

// /usr/include/qt/QtCore/qchar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qchar.h>
#include <QtCore>
#include "callback_inherit.h"

// QChar is pure virtual: false
// QChar has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQChar_t {
  QByteArrayData data[1];
  char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQChar_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQChar_t qt_meta_stringdata_MyQChar = {
   {
  QT_MOC_LITERAL(0, 0, 7), // "MyQChar"
  },
  "MyQChar"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQChar[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQChar : public QChar {
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
// void QChar(QChar::SpecialCharacter)
MyQChar(QChar::SpecialCharacter s) : QChar(s) {}
// void QChar(QLatin1Char)
MyQChar(QLatin1Char ch) : QChar(ch) {}
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
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2Ev() {
  return  new QChar();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:82
// [-2] void QChar(ushort)
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2Et(ushort rc) {
  return  new QChar(rc);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:83
// [-2] void QChar(uchar, uchar)
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2Ehh(uchar c, uchar r) {
  return  new QChar(c, r);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:84
// [-2] void QChar(short)
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2Es(short rc) {
  return  new QChar(rc);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:85
// [-2] void QChar(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2Ej(uint rc) {
  return  new QChar(rc);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:86
// [-2] void QChar(int)
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2Ei(int rc) {
  return  new QChar(rc);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:87
// [-2] void QChar(QChar::SpecialCharacter)
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2ENS_16SpecialCharacterE(QChar::SpecialCharacter s) {
  return  new QChar(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:88
// [-2] void QChar(QLatin1Char)
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2E11QLatin1Char(QLatin1Char* ch) {
  return  new QChar(*ch);
}

// Public inline Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qchar.h:90
// [-2] void QChar(char16_t)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2EDs(char16_t ch) {
  return  new QChar(ch);
}
#endif // QT_VERSION >= 0x050a00

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:102
// [-2] void QChar(char)
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2Ec(char c) {
  return  new QChar(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:104
// [-2] void QChar(uchar)
extern "C" Q_DECL_EXPORT
void* C_ZN5QCharC2Eh(uchar c) {
  return  new QChar(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:414
// [4] QChar::Category category()
extern "C" Q_DECL_EXPORT
QChar::Category C_ZNK5QChar8categoryEv(void *this_) {
  return (QChar::Category)((QChar*)this_)->category();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:415
// [4] QChar::Direction direction()
extern "C" Q_DECL_EXPORT
QChar::Direction C_ZNK5QChar9directionEv(void *this_) {
  return (QChar::Direction)((QChar*)this_)->direction();
}

// Public inline Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qchar.h:416
// [4] QChar::JoiningType joiningType()
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
QChar::JoiningType C_ZNK5QChar11joiningTypeEv(void *this_) {
  return (QChar::JoiningType)((QChar*)this_)->joiningType();
}
#endif // QT_VERSION >= 0x050300

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:418
// [4] QChar::Joining joining()
extern "C" Q_DECL_EXPORT
QChar::Joining C_ZNK5QChar7joiningEv(void *this_) {
  return (QChar::Joining)((QChar*)this_)->joining();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:431
// [1] unsigned char combiningClass()
extern "C" Q_DECL_EXPORT
unsigned char C_ZNK5QChar14combiningClassEv(void *this_) {
  return (unsigned char)((QChar*)this_)->combiningClass();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:433
// [2] QChar mirroredChar()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QChar12mirroredCharEv(void *this_) {
  auto rv = ((QChar*)this_)->mirroredChar();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:434
// [1] bool hasMirrored()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar11hasMirroredEv(void *this_) {
  return (bool)((QChar*)this_)->hasMirrored();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:436
// [8] QString decomposition()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QChar13decompositionEv(void *this_) {
  auto rv = ((QChar*)this_)->decomposition();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:437
// [4] QChar::Decomposition decompositionTag()
extern "C" Q_DECL_EXPORT
QChar::Decomposition C_ZNK5QChar16decompositionTagEv(void *this_) {
  return (QChar::Decomposition)((QChar*)this_)->decompositionTag();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:439
// [4] int digitValue()
extern "C" Q_DECL_EXPORT
int C_ZNK5QChar10digitValueEv(void *this_) {
  return (int)((QChar*)this_)->digitValue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:440
// [2] QChar toLower()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QChar7toLowerEv(void *this_) {
  auto rv = ((QChar*)this_)->toLower();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:441
// [2] QChar toUpper()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QChar7toUpperEv(void *this_) {
  auto rv = ((QChar*)this_)->toUpper();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:442
// [2] QChar toTitleCase()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QChar11toTitleCaseEv(void *this_) {
  auto rv = ((QChar*)this_)->toTitleCase();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:443
// [2] QChar toCaseFolded()
extern "C" Q_DECL_EXPORT
void* C_ZNK5QChar12toCaseFoldedEv(void *this_) {
  auto rv = ((QChar*)this_)->toCaseFolded();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qchar.h:445
// [4] QChar::Script script()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
QChar::Script C_ZNK5QChar6scriptEv(void *this_) {
  return (QChar::Script)((QChar*)this_)->script();
}
#endif // QT_VERSION >= 0x050100

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:447
// [4] QChar::UnicodeVersion unicodeVersion()
extern "C" Q_DECL_EXPORT
QChar::UnicodeVersion C_ZNK5QChar14unicodeVersionEv(void *this_) {
  return (QChar::UnicodeVersion)((QChar*)this_)->unicodeVersion();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:452
// [1] char toLatin1()
extern "C" Q_DECL_EXPORT
char C_ZNK5QChar8toLatin1Ev(void *this_) {
  return (char)((QChar*)this_)->toLatin1();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:453
// [2] ushort unicode()
extern "C" Q_DECL_EXPORT
ushort C_ZNK5QChar7unicodeEv(void *this_) {
  return (ushort)((QChar*)this_)->unicode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:454
// [2] ushort & unicode()
extern "C" Q_DECL_EXPORT
void* C_ZN5QChar7unicodeEv(void *this_) {
  auto& rv = ((QChar*)this_)->unicode();
return &rv;
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:460
// [2] QChar fromLatin1(char)
extern "C" Q_DECL_EXPORT
void* C_ZN5QChar10fromLatin1Ec(char c) {
  auto rv = QChar::fromLatin1(c);
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:462
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar6isNullEv(void *this_) {
  return (bool)((QChar*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:464
// [1] bool isPrint()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar7isPrintEv(void *this_) {
  return (bool)((QChar*)this_)->isPrint();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:465
// [1] bool isSpace()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar7isSpaceEv(void *this_) {
  return (bool)((QChar*)this_)->isSpace();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:466
// [1] bool isMark()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar6isMarkEv(void *this_) {
  return (bool)((QChar*)this_)->isMark();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:467
// [1] bool isPunct()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar7isPunctEv(void *this_) {
  return (bool)((QChar*)this_)->isPunct();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:468
// [1] bool isSymbol()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar8isSymbolEv(void *this_) {
  return (bool)((QChar*)this_)->isSymbol();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:469
// [1] bool isLetter()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar8isLetterEv(void *this_) {
  return (bool)((QChar*)this_)->isLetter();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:470
// [1] bool isNumber()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar8isNumberEv(void *this_) {
  return (bool)((QChar*)this_)->isNumber();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:471
// [1] bool isLetterOrNumber()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar16isLetterOrNumberEv(void *this_) {
  return (bool)((QChar*)this_)->isLetterOrNumber();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:472
// [1] bool isDigit()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar7isDigitEv(void *this_) {
  return (bool)((QChar*)this_)->isDigit();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:473
// [1] bool isLower()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar7isLowerEv(void *this_) {
  return (bool)((QChar*)this_)->isLower();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:474
// [1] bool isUpper()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar7isUpperEv(void *this_) {
  return (bool)((QChar*)this_)->isUpper();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:475
// [1] bool isTitleCase()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar11isTitleCaseEv(void *this_) {
  return (bool)((QChar*)this_)->isTitleCase();
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:477
// [1] bool isNonCharacter()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar14isNonCharacterEv(void *this_) {
  return (bool)((QChar*)this_)->isNonCharacter();
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:478
// [1] bool isHighSurrogate()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar15isHighSurrogateEv(void *this_) {
  return (bool)((QChar*)this_)->isHighSurrogate();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:479
// [1] bool isLowSurrogate()
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar14isLowSurrogateEv(void *this_) {
  return (bool)((QChar*)this_)->isLowSurrogate();
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:480
// [1] bool isSurrogate()
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZNK5QChar11isSurrogateEv(void *this_) {
  return (bool)((QChar*)this_)->isSurrogate();
}
#endif // QT_VERSION >= 0x050000

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:482
// [1] uchar cell()
extern "C" Q_DECL_EXPORT
uchar C_ZNK5QChar4cellEv(void *this_) {
  return (uchar)((QChar*)this_)->cell();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:483
// [1] uchar row()
extern "C" Q_DECL_EXPORT
uchar C_ZNK5QChar3rowEv(void *this_) {
  return (uchar)((QChar*)this_)->row();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:484
// [-2] void setCell(uchar)
extern "C" Q_DECL_EXPORT
void C_ZN5QChar7setCellEh(void *this_, uchar acell) {
  ((QChar*)this_)->setCell(acell);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:485
// [-2] void setRow(uchar)
extern "C" Q_DECL_EXPORT
void C_ZN5QChar6setRowEh(void *this_, uchar arow) {
  ((QChar*)this_)->setRow(arow);
}

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:487
// [1] bool isNonCharacter(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar14isNonCharacterEj(uint ucs4) {
  return (bool)QChar::isNonCharacter(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:491
// [1] bool isHighSurrogate(uint)
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar15isHighSurrogateEj(uint ucs4) {
  return (bool)QChar::isHighSurrogate(ucs4);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:495
// [1] bool isLowSurrogate(uint)
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar14isLowSurrogateEj(uint ucs4) {
  return (bool)QChar::isLowSurrogate(ucs4);
}

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:499
// [1] bool isSurrogate(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar11isSurrogateEj(uint ucs4) {
  return (bool)QChar::isSurrogate(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:503
// [1] bool requiresSurrogates(uint)
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar18requiresSurrogatesEj(uint ucs4) {
  return (bool)QChar::requiresSurrogates(ucs4);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:507
// [4] uint surrogateToUcs4(ushort, ushort)
extern "C" Q_DECL_EXPORT
uint C_ZN5QChar15surrogateToUcs4Ett(ushort high, ushort low) {
  return (uint)QChar::surrogateToUcs4(high, low);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:511
// [4] uint surrogateToUcs4(QChar, QChar)
extern "C" Q_DECL_EXPORT
uint C_ZN5QChar15surrogateToUcs4ES_S_(QChar* high, QChar* low) {
  return (uint)QChar::surrogateToUcs4(*high, *low);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:515
// [2] ushort highSurrogate(uint)
extern "C" Q_DECL_EXPORT
ushort C_ZN5QChar13highSurrogateEj(uint ucs4) {
  return (ushort)QChar::highSurrogate(ucs4);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:519
// [2] ushort lowSurrogate(uint)
extern "C" Q_DECL_EXPORT
ushort C_ZN5QChar12lowSurrogateEj(uint ucs4) {
  return (ushort)QChar::lowSurrogate(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:524
// [4] QChar::Category category(uint)
extern "C" Q_DECL_EXPORT
QChar::Category C_ZN5QChar8categoryEj(uint ucs4) {
  return (QChar::Category)QChar::category(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:525
// [4] QChar::Direction direction(uint)
extern "C" Q_DECL_EXPORT
QChar::Direction C_ZN5QChar9directionEj(uint ucs4) {
  return (QChar::Direction)QChar::direction(ucs4);
}

// Public static Visibility=Default Availability=Available
// since 5.3
// /usr/include/qt/QtCore/qchar.h:526
// [4] QChar::JoiningType joiningType(uint)
#if QT_VERSION >= 0x050300
extern "C" Q_DECL_EXPORT
QChar::JoiningType C_ZN5QChar11joiningTypeEj(uint ucs4) {
  return (QChar::JoiningType)QChar::joiningType(ucs4);
}
#endif // QT_VERSION >= 0x050300

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:528
// [4] QChar::Joining joining(uint)
extern "C" Q_DECL_EXPORT
QChar::Joining C_ZN5QChar7joiningEj(uint ucs4) {
  return (QChar::Joining)QChar::joining(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:530
// [1] unsigned char combiningClass(uint)
extern "C" Q_DECL_EXPORT
unsigned char C_ZN5QChar14combiningClassEj(uint ucs4) {
  return (unsigned char)QChar::combiningClass(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:532
// [4] uint mirroredChar(uint)
extern "C" Q_DECL_EXPORT
uint C_ZN5QChar12mirroredCharEj(uint ucs4) {
  return (uint)QChar::mirroredChar(ucs4);
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:533
// [1] bool hasMirrored(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar11hasMirroredEj(uint ucs4) {
  return (bool)QChar::hasMirrored(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:535
// [8] QString decomposition(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN5QChar13decompositionEj(uint ucs4) {
  auto rv = QChar::decomposition(ucs4);
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:536
// [4] QChar::Decomposition decompositionTag(uint)
extern "C" Q_DECL_EXPORT
QChar::Decomposition C_ZN5QChar16decompositionTagEj(uint ucs4) {
  return (QChar::Decomposition)QChar::decompositionTag(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:538
// [4] int digitValue(uint)
extern "C" Q_DECL_EXPORT
int C_ZN5QChar10digitValueEj(uint ucs4) {
  return (int)QChar::digitValue(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:539
// [4] uint toLower(uint)
extern "C" Q_DECL_EXPORT
uint C_ZN5QChar7toLowerEj(uint ucs4) {
  return (uint)QChar::toLower(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:540
// [4] uint toUpper(uint)
extern "C" Q_DECL_EXPORT
uint C_ZN5QChar7toUpperEj(uint ucs4) {
  return (uint)QChar::toUpper(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:541
// [4] uint toTitleCase(uint)
extern "C" Q_DECL_EXPORT
uint C_ZN5QChar11toTitleCaseEj(uint ucs4) {
  return (uint)QChar::toTitleCase(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:542
// [4] uint toCaseFolded(uint)
extern "C" Q_DECL_EXPORT
uint C_ZN5QChar12toCaseFoldedEj(uint ucs4) {
  return (uint)QChar::toCaseFolded(ucs4);
}

// Public static Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qchar.h:544
// [4] QChar::Script script(uint)
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
QChar::Script C_ZN5QChar6scriptEj(uint ucs4) {
  return (QChar::Script)QChar::script(ucs4);
}
#endif // QT_VERSION >= 0x050100

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:546
// [4] QChar::UnicodeVersion unicodeVersion(uint)
extern "C" Q_DECL_EXPORT
QChar::UnicodeVersion C_ZN5QChar14unicodeVersionEj(uint ucs4) {
  return (QChar::UnicodeVersion)QChar::unicodeVersion(ucs4);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:548
// [4] QChar::UnicodeVersion currentUnicodeVersion()
extern "C" Q_DECL_EXPORT
QChar::UnicodeVersion C_ZN5QChar21currentUnicodeVersionEv() {
  return (QChar::UnicodeVersion)QChar::currentUnicodeVersion();
}

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:550
// [1] bool isPrint(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar7isPrintEj(uint ucs4) {
  return (bool)QChar::isPrint(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:551
// [1] bool isSpace(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar7isSpaceEj(uint ucs4) {
  return (bool)QChar::isSpace(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:557
// [1] bool isMark(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar6isMarkEj(uint ucs4) {
  return (bool)QChar::isMark(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:558
// [1] bool isPunct(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar7isPunctEj(uint ucs4) {
  return (bool)QChar::isPunct(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:559
// [1] bool isSymbol(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar8isSymbolEj(uint ucs4) {
  return (bool)QChar::isSymbol(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:560
// [1] bool isLetter(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar8isLetterEj(uint ucs4) {
  return (bool)QChar::isLetter(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:565
// [1] bool isNumber(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar8isNumberEj(uint ucs4) {
  return (bool)QChar::isNumber(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:567
// [1] bool isLetterOrNumber(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar16isLetterOrNumberEj(uint ucs4) {
  return (bool)QChar::isLetterOrNumber(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:573
// [1] bool isDigit(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar7isDigitEj(uint ucs4) {
  return (bool)QChar::isDigit(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:575
// [1] bool isLower(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar7isLowerEj(uint ucs4) {
  return (bool)QChar::isLower(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:577
// [1] bool isUpper(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar7isUpperEj(uint ucs4) {
  return (bool)QChar::isUpper(ucs4);
}
#endif // QT_VERSION >= 0x050000

// Public static inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtCore/qchar.h:579
// [1] bool isTitleCase(uint)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
bool C_ZN5QChar11isTitleCaseEj(uint ucs4) {
  return (bool)QChar::isTitleCase(ucs4);
}
#endif // QT_VERSION >= 0x050000


extern "C" Q_DECL_EXPORT
void C_ZN5QCharD2Ev(void *this_) {
  delete (QChar*)(this_);
}
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
