//  header block begin

// /usr/include/qt/QtCore/qstring.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstring.h>
#include <QtCore>
#include "callback_inherit.h"

// QCharRef is pure virtual: false
// QCharRef has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQCharRef_t {
  QByteArrayData data[1];
  char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQCharRef_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQCharRef_t qt_meta_stringdata_MyQCharRef = {
   {
  QT_MOC_LITERAL(0, 0, 10), // "MyQCharRef"
  },
  "MyQCharRef"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQCharRef[] = {
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
class Q_DECL_EXPORT MyQCharRef : public QCharRef {
public:
  virtual ~MyQCharRef() {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1001
// [16] QCharRef & operator=(QChar)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCharRefaSE5QChar(void *this_, QChar* c) {
  auto& rv = ((QCharRef*)this_)->operator=(*c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1007
// [16] QCharRef & operator=(char)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCharRefaSEc(void *this_, char c) {
  auto& rv = ((QCharRef*)this_)->operator=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1009
// [16] QCharRef & operator=(uchar)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCharRefaSEh(void *this_, uchar c) {
  auto& rv = ((QCharRef*)this_)->operator=(c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1012
// [16] QCharRef & operator=(const QCharRef &)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCharRefaSERKS_(void *this_, QCharRef* c) {
  auto& rv = ((QCharRef*)this_)->operator=(*c);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1013
// [16] QCharRef & operator=(ushort)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCharRefaSEt(void *this_, ushort rc) {
  auto& rv = ((QCharRef*)this_)->operator=(rc);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1014
// [16] QCharRef & operator=(short)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCharRefaSEs(void *this_, short rc) {
  auto& rv = ((QCharRef*)this_)->operator=(rc);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1015
// [16] QCharRef & operator=(uint)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCharRefaSEj(void *this_, uint rc) {
  auto& rv = ((QCharRef*)this_)->operator=(rc);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1016
// [16] QCharRef & operator=(int)
extern "C" Q_DECL_EXPORT
void* C_ZN8QCharRefaSEi(void *this_, int rc) {
  auto& rv = ((QCharRef*)this_)->operator=(rc);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1019
// [1] bool isNull()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef6isNullEv(void *this_) {
  return (bool)((QCharRef*)this_)->isNull();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1020
// [1] bool isPrint()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef7isPrintEv(void *this_) {
  return (bool)((QCharRef*)this_)->isPrint();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1021
// [1] bool isPunct()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef7isPunctEv(void *this_) {
  return (bool)((QCharRef*)this_)->isPunct();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1022
// [1] bool isSpace()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef7isSpaceEv(void *this_) {
  return (bool)((QCharRef*)this_)->isSpace();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1023
// [1] bool isMark()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef6isMarkEv(void *this_) {
  return (bool)((QCharRef*)this_)->isMark();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1024
// [1] bool isLetter()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef8isLetterEv(void *this_) {
  return (bool)((QCharRef*)this_)->isLetter();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1025
// [1] bool isNumber()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef8isNumberEv(void *this_) {
  return (bool)((QCharRef*)this_)->isNumber();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1026
// [1] bool isLetterOrNumber()
extern "C" Q_DECL_EXPORT
bool C_ZN8QCharRef16isLetterOrNumberEv(void *this_) {
  return (bool)((QCharRef*)this_)->isLetterOrNumber();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1027
// [1] bool isDigit()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef7isDigitEv(void *this_) {
  return (bool)((QCharRef*)this_)->isDigit();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1028
// [1] bool isLower()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef7isLowerEv(void *this_) {
  return (bool)((QCharRef*)this_)->isLower();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1029
// [1] bool isUpper()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef7isUpperEv(void *this_) {
  return (bool)((QCharRef*)this_)->isUpper();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1030
// [1] bool isTitleCase()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef11isTitleCaseEv(void *this_) {
  return (bool)((QCharRef*)this_)->isTitleCase();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1032
// [4] int digitValue()
extern "C" Q_DECL_EXPORT
int C_ZNK8QCharRef10digitValueEv(void *this_) {
  return (int)((QCharRef*)this_)->digitValue();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1033
// [2] QChar toLower()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCharRef7toLowerEv(void *this_) {
  auto rv = ((QCharRef*)this_)->toLower();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1034
// [2] QChar toUpper()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCharRef7toUpperEv(void *this_) {
  auto rv = ((QCharRef*)this_)->toUpper();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1035
// [2] QChar toTitleCase()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCharRef11toTitleCaseEv(void *this_) {
  auto rv = ((QCharRef*)this_)->toTitleCase();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1037
// [4] QChar::Category category()
extern "C" Q_DECL_EXPORT
QChar::Category C_ZNK8QCharRef8categoryEv(void *this_) {
  return (QChar::Category)((QCharRef*)this_)->category();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1038
// [4] QChar::Direction direction()
extern "C" Q_DECL_EXPORT
QChar::Direction C_ZNK8QCharRef9directionEv(void *this_) {
  return (QChar::Direction)((QCharRef*)this_)->direction();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1039
// [4] QChar::JoiningType joiningType()
extern "C" Q_DECL_EXPORT
QChar::JoiningType C_ZNK8QCharRef11joiningTypeEv(void *this_) {
  return (QChar::JoiningType)((QCharRef*)this_)->joiningType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1041
// [4] QChar::Joining joining()
extern "C" Q_DECL_EXPORT
QChar::Joining C_ZNK8QCharRef7joiningEv(void *this_) {
  return (QChar::Joining)((QCharRef*)this_)->joining();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1054
// [1] bool hasMirrored()
extern "C" Q_DECL_EXPORT
bool C_ZNK8QCharRef11hasMirroredEv(void *this_) {
  return (bool)((QCharRef*)this_)->hasMirrored();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1055
// [2] QChar mirroredChar()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCharRef12mirroredCharEv(void *this_) {
  auto rv = ((QCharRef*)this_)->mirroredChar();
return new QChar(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1056
// [8] QString decomposition()
extern "C" Q_DECL_EXPORT
void* C_ZNK8QCharRef13decompositionEv(void *this_) {
  auto rv = ((QCharRef*)this_)->decomposition();
return new QString(rv);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1057
// [4] QChar::Decomposition decompositionTag()
extern "C" Q_DECL_EXPORT
QChar::Decomposition C_ZNK8QCharRef16decompositionTagEv(void *this_) {
  return (QChar::Decomposition)((QCharRef*)this_)->decompositionTag();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1058
// [1] uchar combiningClass()
extern "C" Q_DECL_EXPORT
uchar C_ZNK8QCharRef14combiningClassEv(void *this_) {
  return (uchar)((QCharRef*)this_)->combiningClass();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1060
// [4] QChar::Script script()
extern "C" Q_DECL_EXPORT
QChar::Script C_ZNK8QCharRef6scriptEv(void *this_) {
  return (QChar::Script)((QCharRef*)this_)->script();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1062
// [4] QChar::UnicodeVersion unicodeVersion()
extern "C" Q_DECL_EXPORT
QChar::UnicodeVersion C_ZNK8QCharRef14unicodeVersionEv(void *this_) {
  return (QChar::UnicodeVersion)((QCharRef*)this_)->unicodeVersion();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1064
// [1] uchar cell()
extern "C" Q_DECL_EXPORT
uchar C_ZNK8QCharRef4cellEv(void *this_) {
  return (uchar)((QCharRef*)this_)->cell();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1065
// [1] uchar row()
extern "C" Q_DECL_EXPORT
uchar C_ZNK8QCharRef3rowEv(void *this_) {
  return (uchar)((QCharRef*)this_)->row();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1066
// [-2] void setCell(uchar)
extern "C" Q_DECL_EXPORT
void C_ZN8QCharRef7setCellEh(void *this_, uchar cell) {
  ((QCharRef*)this_)->setCell(cell);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1067
// [-2] void setRow(uchar)
extern "C" Q_DECL_EXPORT
void C_ZN8QCharRef6setRowEh(void *this_, uchar row) {
  ((QCharRef*)this_)->setRow(row);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1072
// [1] char toLatin1()
extern "C" Q_DECL_EXPORT
char C_ZNK8QCharRef8toLatin1Ev(void *this_) {
  return (char)((QCharRef*)this_)->toLatin1();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1073
// [2] ushort unicode()
extern "C" Q_DECL_EXPORT
ushort C_ZNK8QCharRef7unicodeEv(void *this_) {
  return (ushort)((QCharRef*)this_)->unicode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1074
// [2] ushort & unicode()
extern "C" Q_DECL_EXPORT
void* C_ZN8QCharRef7unicodeEv(void *this_) {
  auto& rv = ((QCharRef*)this_)->unicode();
return &rv;
}


extern "C" Q_DECL_EXPORT
void C_ZN8QCharRefD2Ev(void *this_) {
  delete (QCharRef*)(this_);
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
