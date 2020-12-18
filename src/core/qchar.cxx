//  header block begin

// /usr/include/qt/QtCore/qchar.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qchar.h>
#include <QtCore>
#include "callback_inherit.h"

// QChar is pure virtual: false false
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qchar(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:95
// [-2] void QChar() 
// (12)qm1574451635 (13)_ZN5QCharC2Ev
/*void* qm1574451635()*/{
  ;
  this_ =  new QChar();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:96
// [-2] void QChar(ushort) 
// (12)qm3017169055 (13)_ZN5QCharC2Et
/*void* qm3017169055(unsigned short rc)*/{
  unsigned short rc = *(unsigned short*)this_;
  this_ =  new QChar(rc);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:97
// [-2] void QChar(uchar, uchar) 
// (11)qm387908407 (14)_ZN5QCharC2Ehh
/*void* qm387908407(unsigned char c, unsigned char r)*/{
  unsigned char c = *(unsigned char*)this_; unsigned char r = *(unsigned char*)this_;
  this_ =  new QChar(c, r);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:98
// [-2] void QChar(short) 
// (11)qm766692668 (13)_ZN5QCharC2Es
/*void* qm766692668(short rc)*/{
  short rc = *(short*)this_;
  this_ =  new QChar(rc);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:99
// [-2] void QChar(uint) 
// (12)qm1238984188 (13)_ZN5QCharC2Ej
/*void* qm1238984188(unsigned int rc)*/{
  unsigned int rc = *(unsigned int*)this_;
  this_ =  new QChar(rc);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:100
// [-2] void QChar(int) 
// (12)qm3503305798 (13)_ZN5QCharC2Ei
/*void* qm3503305798(int rc)*/{
  int rc = *(int*)this_;
  this_ =  new QChar(rc);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:101
// [-2] void QChar(QChar::SpecialCharacter) 
// (12)qm1755695445 (34)_ZN5QCharC2ENS_16SpecialCharacterE
/*void* qm1755695445(QChar::SpecialCharacter s)*/{
  QChar::SpecialCharacter s = *(QChar::SpecialCharacter*)this_;
  this_ =  new QChar(s);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:102
// [-2] void QChar(QLatin1Char) 
// (12)qm1216774710 (25)_ZN5QCharC2E11QLatin1Char
/*void* qm1216774710(QLatin1Char ch)*/{
  QLatin1Char ch = *(QLatin1Char*)this_;
  this_ =  new QChar(ch);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:104
// [-2] void QChar(char16_t) 
// (12)qm2756419957 (14)_ZN5QCharC2EDs
/*void* qm2756419957(char16_t ch)*/{
  char16_t ch = *(char16_t*)this_;
  this_ =  new QChar(ch);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:116
// [-2] void QChar(char) 
// (11)qm805690712 (13)_ZN5QCharC2Ec
/*void* qm805690712(char c)*/{
  char c = *(char*)this_;
  this_ =  new QChar(c);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:118
// [-2] void QChar(uchar) 
// (12)qm2815886544 (13)_ZN5QCharC2Eh
/*void* qm2815886544(unsigned char c)*/{
  unsigned char c = *(unsigned char*)this_;
  this_ =  new QChar(c);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:451
// [4] QChar::Category category() const
// (12)qm3362992714 (21)_ZNK5QChar8categoryEv
//static
/*void qm3362992714()*/ {
  ;
  (void) ((QChar*)this_)->category();
   auto xptr = (QChar::Category (QChar::*)() const ) &QChar::category;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:452
// [4] QChar::Direction direction() const
// (11)qm278475776 (22)_ZNK5QChar9directionEv
//static
/*void qm278475776()*/ {
  ;
  (void) ((QChar*)this_)->direction();
   auto xptr = (QChar::Direction (QChar::*)() const ) &QChar::direction;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:453
// [4] QChar::JoiningType joiningType() const
// (12)qm2341100419 (25)_ZNK5QChar11joiningTypeEv
//static
/*void qm2341100419()*/ {
  ;
  (void) ((QChar*)this_)->joiningType();
   auto xptr = (QChar::JoiningType (QChar::*)() const ) &QChar::joiningType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:468
// [1] unsigned char combiningClass() const
// (12)qm4059050244 (28)_ZNK5QChar14combiningClassEv
//static
/*void qm4059050244()*/ {
  ;
  (void) ((QChar*)this_)->combiningClass();
   auto xptr = (unsigned char (QChar::*)() const ) &QChar::combiningClass;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:470
// [2] QChar mirroredChar() const
// (11)qm278788392 (26)_ZNK5QChar12mirroredCharEv
//static
/*void qm278788392()*/ {
  ;
  (void) ((QChar*)this_)->mirroredChar();
   auto xptr = (QChar (QChar::*)() const ) &QChar::mirroredChar;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:471
// [1] bool hasMirrored() const
// (12)qm2337179042 (25)_ZNK5QChar11hasMirroredEv
//static
/*void qm2337179042()*/ {
  ;
  (void) ((QChar*)this_)->hasMirrored();
   auto xptr = (bool (QChar::*)() const ) &QChar::hasMirrored;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:474
// [4] QChar::Decomposition decompositionTag() const
// (12)qm1416686752 (30)_ZNK5QChar16decompositionTagEv
//static
/*void qm1416686752()*/ {
  ;
  (void) ((QChar*)this_)->decompositionTag();
   auto xptr = (QChar::Decomposition (QChar::*)() const ) &QChar::decompositionTag;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:476
// [4] int digitValue() const
// (12)qm3697721514 (24)_ZNK5QChar10digitValueEv
//static
/*void qm3697721514()*/ {
  ;
  (void) ((QChar*)this_)->digitValue();
   auto xptr = (int (QChar::*)() const ) &QChar::digitValue;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:477
// [2] QChar toLower() const
// (12)qm2118155065 (20)_ZNK5QChar7toLowerEv
//static
/*void qm2118155065()*/ {
  ;
  (void) ((QChar*)this_)->toLower();
   auto xptr = (QChar (QChar::*)() const ) &QChar::toLower;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:478
// [2] QChar toUpper() const
// (12)qm3433483898 (20)_ZNK5QChar7toUpperEv
//static
/*void qm3433483898()*/ {
  ;
  (void) ((QChar*)this_)->toUpper();
   auto xptr = (QChar (QChar::*)() const ) &QChar::toUpper;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:479
// [2] QChar toTitleCase() const
// (11)qm277487223 (25)_ZNK5QChar11toTitleCaseEv
//static
/*void qm277487223()*/ {
  ;
  (void) ((QChar*)this_)->toTitleCase();
   auto xptr = (QChar (QChar::*)() const ) &QChar::toTitleCase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:480
// [2] QChar toCaseFolded() const
// (12)qm3825881246 (26)_ZNK5QChar12toCaseFoldedEv
//static
/*void qm3825881246()*/ {
  ;
  (void) ((QChar*)this_)->toCaseFolded();
   auto xptr = (QChar (QChar::*)() const ) &QChar::toCaseFolded;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:482
// [4] QChar::Script script() const
// (11)qm984031442 (19)_ZNK5QChar6scriptEv
//static
/*void qm984031442()*/ {
  ;
  (void) ((QChar*)this_)->script();
   auto xptr = (QChar::Script (QChar::*)() const ) &QChar::script;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:484
// [4] QChar::UnicodeVersion unicodeVersion() const
// (11)qm993009208 (28)_ZNK5QChar14unicodeVersionEv
//static
/*void qm993009208()*/ {
  ;
  (void) ((QChar*)this_)->unicodeVersion();
   auto xptr = (QChar::UnicodeVersion (QChar::*)() const ) &QChar::unicodeVersion;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:489
// [1] char toLatin1() const
// (11)qm165719640 (21)_ZNK5QChar8toLatin1Ev
//static
/*void qm165719640()*/ {
  ;
  (void) ((QChar*)this_)->toLatin1();
   auto xptr = (char (QChar::*)() const ) &QChar::toLatin1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:490
// [2] ushort unicode() const
// (12)qm3197351799 (20)_ZNK5QChar7unicodeEv
//static
/*void qm3197351799()*/ {
  ;
  (void) ((QChar*)this_)->unicode();
   auto xptr = (unsigned short (QChar::*)() const ) &QChar::unicode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:491
// [2] ushort & unicode() 
// (11)qm767587503 (19)_ZN5QChar7unicodeEv
//static
/*void qm767587503()*/ {
  ;
  (void) ((QChar*)this_)->unicode();
   auto xptr = (unsigned short & (QChar::*)() ) &QChar::unicode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:497
// [2] QChar fromLatin1(char) 
// (12)qm1515127825 (23)_ZN5QChar10fromLatin1Ec
//static
/*void qm1515127825(char c)*/ {
  char c = *(char*)this_;
  (void) QChar::fromLatin1(c);
   auto xptr = (QChar (*)(char) ) &QChar::fromLatin1;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:499
// [1] bool isNull() const
// (12)qm1850750533 (19)_ZNK5QChar6isNullEv
//static
/*void qm1850750533()*/ {
  ;
  (void) ((QChar*)this_)->isNull();
   auto xptr = (bool (QChar::*)() const ) &QChar::isNull;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:501
// [1] bool isPrint() const
// (11)qm464637908 (20)_ZNK5QChar7isPrintEv
//static
/*void qm464637908()*/ {
  ;
  (void) ((QChar*)this_)->isPrint();
   auto xptr = (bool (QChar::*)() const ) &QChar::isPrint;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:502
// [1] bool isSpace() const
// (12)qm3094294041 (20)_ZNK5QChar7isSpaceEv
//static
/*void qm3094294041()*/ {
  ;
  (void) ((QChar*)this_)->isSpace();
   auto xptr = (bool (QChar::*)() const ) &QChar::isSpace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:503
// [1] bool isMark() const
// (12)qm3358409600 (19)_ZNK5QChar6isMarkEv
//static
/*void qm3358409600()*/ {
  ;
  (void) ((QChar*)this_)->isMark();
   auto xptr = (bool (QChar::*)() const ) &QChar::isMark;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:504
// [1] bool isPunct() const
// (12)qm1191115681 (20)_ZNK5QChar7isPunctEv
//static
/*void qm1191115681()*/ {
  ;
  (void) ((QChar*)this_)->isPunct();
   auto xptr = (bool (QChar::*)() const ) &QChar::isPunct;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:505
// [1] bool isSymbol() const
// (12)qm4013907087 (21)_ZNK5QChar8isSymbolEv
//static
/*void qm4013907087()*/ {
  ;
  (void) ((QChar*)this_)->isSymbol();
   auto xptr = (bool (QChar::*)() const ) &QChar::isSymbol;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:506
// [1] bool isLetter() const
// (12)qm1487328989 (21)_ZNK5QChar8isLetterEv
//static
/*void qm1487328989()*/ {
  ;
  (void) ((QChar*)this_)->isLetter();
   auto xptr = (bool (QChar::*)() const ) &QChar::isLetter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:507
// [1] bool isNumber() const
// (12)qm3055844383 (21)_ZNK5QChar8isNumberEv
//static
/*void qm3055844383()*/ {
  ;
  (void) ((QChar*)this_)->isNumber();
   auto xptr = (bool (QChar::*)() const ) &QChar::isNumber;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:508
// [1] bool isLetterOrNumber() const
// (12)qm4139686370 (30)_ZNK5QChar16isLetterOrNumberEv
//static
/*void qm4139686370()*/ {
  ;
  (void) ((QChar*)this_)->isLetterOrNumber();
   auto xptr = (bool (QChar::*)() const ) &QChar::isLetterOrNumber;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:509
// [1] bool isDigit() const
// (12)qm3285582729 (20)_ZNK5QChar7isDigitEv
//static
/*void qm3285582729()*/ {
  ;
  (void) ((QChar*)this_)->isDigit();
   auto xptr = (bool (QChar::*)() const ) &QChar::isDigit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:510
// [1] bool isLower() const
// (11)qm148634235 (20)_ZNK5QChar7isLowerEv
//static
/*void qm148634235()*/ {
  ;
  (void) ((QChar*)this_)->isLower();
   auto xptr = (bool (QChar::*)() const ) &QChar::isLower;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:511
// [1] bool isUpper() const
// (12)qm3124580152 (20)_ZNK5QChar7isUpperEv
//static
/*void qm3124580152()*/ {
  ;
  (void) ((QChar*)this_)->isUpper();
   auto xptr = (bool (QChar::*)() const ) &QChar::isUpper;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:512
// [1] bool isTitleCase() const
// (12)qm3937630382 (25)_ZNK5QChar11isTitleCaseEv
//static
/*void qm3937630382()*/ {
  ;
  (void) ((QChar*)this_)->isTitleCase();
   auto xptr = (bool (QChar::*)() const ) &QChar::isTitleCase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:514
// [1] bool isNonCharacter() const
// (12)qm3129594087 (28)_ZNK5QChar14isNonCharacterEv
//static
/*void qm3129594087()*/ {
  ;
  (void) ((QChar*)this_)->isNonCharacter();
   auto xptr = (bool (QChar::*)() const ) &QChar::isNonCharacter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:515
// [1] bool isHighSurrogate() const
// (11)qm133792443 (29)_ZNK5QChar15isHighSurrogateEv
//static
/*void qm133792443()*/ {
  ;
  (void) ((QChar*)this_)->isHighSurrogate();
   auto xptr = (bool (QChar::*)() const ) &QChar::isHighSurrogate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:516
// [1] bool isLowSurrogate() const
// (12)qm2984236982 (28)_ZNK5QChar14isLowSurrogateEv
//static
/*void qm2984236982()*/ {
  ;
  (void) ((QChar*)this_)->isLowSurrogate();
   auto xptr = (bool (QChar::*)() const ) &QChar::isLowSurrogate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:517
// [1] bool isSurrogate() const
// (12)qm1101755919 (25)_ZNK5QChar11isSurrogateEv
//static
/*void qm1101755919()*/ {
  ;
  (void) ((QChar*)this_)->isSurrogate();
   auto xptr = (bool (QChar::*)() const ) &QChar::isSurrogate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:519
// [1] uchar cell() const
// (12)qm1110278844 (17)_ZNK5QChar4cellEv
//static
/*void qm1110278844()*/ {
  ;
  (void) ((QChar*)this_)->cell();
   auto xptr = (unsigned char (QChar::*)() const ) &QChar::cell;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:520
// [1] uchar row() const
// (12)qm1420655867 (16)_ZNK5QChar3rowEv
//static
/*void qm1420655867()*/ {
  ;
  (void) ((QChar*)this_)->row();
   auto xptr = (unsigned char (QChar::*)() const ) &QChar::row;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:521
// [-2] void setCell(uchar) 
// (12)qm2026889193 (19)_ZN5QChar7setCellEh
//static
/*void qm2026889193(unsigned char acell)*/ {
  unsigned char acell = *(unsigned char*)this_;
  (void) ((QChar*)this_)->setCell(acell);
   auto xptr = (void (QChar::*)(unsigned char) ) &QChar::setCell;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:522
// [-2] void setRow(uchar) 
// (12)qm4090560028 (18)_ZN5QChar6setRowEh
//static
/*void qm4090560028(unsigned char arow)*/ {
  unsigned char arow = *(unsigned char*)this_;
  (void) ((QChar*)this_)->setRow(arow);
   auto xptr = (void (QChar::*)(unsigned char) ) &QChar::setRow;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:524
// [1] bool isNonCharacter(uint) 
// (12)qm2587444110 (27)_ZN5QChar14isNonCharacterEj
//static
/*void qm2587444110(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isNonCharacter(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isNonCharacter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:528
// [1] bool isHighSurrogate(uint) 
// (12)qm3250711238 (28)_ZN5QChar15isHighSurrogateEj
//static
/*void qm3250711238(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isHighSurrogate(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isHighSurrogate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:532
// [1] bool isLowSurrogate(uint) 
// (12)qm2439988447 (27)_ZN5QChar14isLowSurrogateEj
//static
/*void qm2439988447(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isLowSurrogate(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isLowSurrogate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:536
// [1] bool isSurrogate(uint) 
// (12)qm3158382080 (24)_ZN5QChar11isSurrogateEj
//static
/*void qm3158382080(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isSurrogate(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isSurrogate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:540
// [1] bool requiresSurrogates(uint) 
// (12)qm3684868312 (31)_ZN5QChar18requiresSurrogatesEj
//static
/*void qm3684868312(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::requiresSurrogates(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::requiresSurrogates;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:544
// [4] uint surrogateToUcs4(ushort, ushort) 
// (12)qm2370525118 (29)_ZN5QChar15surrogateToUcs4Ett
//static
/*void qm2370525118(unsigned short high, unsigned short low)*/ {
  unsigned short high = *(unsigned short*)this_; unsigned short low = *(unsigned short*)this_;
  (void) QChar::surrogateToUcs4(high, low);
   auto xptr = (unsigned int (*)(unsigned short, unsigned short) ) &QChar::surrogateToUcs4;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:548
// [4] uint surrogateToUcs4(QChar, QChar) 
// (12)qm2905580705 (31)_ZN5QChar15surrogateToUcs4ES_S_
//static
/*void qm2905580705(QChar high, QChar low)*/ {
  QChar high = *(QChar*)this_; QChar low = *(QChar*)this_;
  (void) QChar::surrogateToUcs4(high, low);
   auto xptr = (unsigned int (*)(QChar, QChar) ) &QChar::surrogateToUcs4;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:552
// [2] ushort highSurrogate(uint) 
// (12)qm3856793448 (26)_ZN5QChar13highSurrogateEj
//static
/*void qm3856793448(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::highSurrogate(ucs4);
   auto xptr = (unsigned short (*)(unsigned int) ) &QChar::highSurrogate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:556
// [2] ushort lowSurrogate(uint) 
// (11)qm998530183 (25)_ZN5QChar12lowSurrogateEj
//static
/*void qm998530183(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::lowSurrogate(ucs4);
   auto xptr = (unsigned short (*)(unsigned int) ) &QChar::lowSurrogate;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:588
// [1] bool isSpace(uint) 
// (12)qm1061007758 (19)_ZN5QChar7isSpaceEj
//static
/*void qm1061007758(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isSpace(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isSpace;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:597
// [1] bool isLetter(uint) 
// (12)qm3292300215 (20)_ZN5QChar8isLetterEj
//static
/*void qm3292300215(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isLetter(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isLetter;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:602
// [1] bool isNumber(uint) 
// (11)qm717105525 (20)_ZN5QChar8isNumberEj
//static
/*void qm717105525(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isNumber(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isNumber;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:604
// [1] bool isLetterOrNumber(uint) 
// (11)qm716877081 (29)_ZN5QChar16isLetterOrNumberEj
//static
/*void qm716877081(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isLetterOrNumber(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isLetterOrNumber;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:610
// [1] bool isDigit(uint) 
// (12)qm1149541406 (19)_ZN5QChar7isDigitEj
//static
/*void qm1149541406(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isDigit(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isDigit;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:612
// [1] bool isLower(uint) 
// (12)qm2408146412 (19)_ZN5QChar7isLowerEj
//static
/*void qm2408146412(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isLower(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isLower;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:614
// [1] bool isUpper(uint) 
// (12)qm1030738095 (19)_ZN5QChar7isUpperEj
//static
/*void qm1030738095(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isUpper(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isUpper;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public static inline Extend Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qchar.h:616
// [1] bool isTitleCase(uint) 
// (11)qm391714977 (24)_ZN5QChar11isTitleCaseEj
//static
/*void qm391714977(unsigned int ucs4)*/ {
  unsigned int ucs4 = *(unsigned int*)this_;
  (void) QChar::isTitleCase(ucs4);
   auto xptr = (bool (*)(unsigned int) ) &QChar::isTitleCase;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN5QCharD2Ev(void *this_)*/ {
  delete (QChar*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qchar
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
