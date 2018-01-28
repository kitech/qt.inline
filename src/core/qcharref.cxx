//  header block begin
// /usr/include/qt/QtCore/qstring.h
#include <qstring.h>
#include <QtCore>

// QCharRef is pure virtual: false
//  header block end

//  main block begin

class MyQCharRef : public QCharRef {
public:
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1054
// [1] bool isNull()
extern "C"
bool C_ZNK8QCharRef6isNullEv(void *this_) {
  return (bool)((QCharRef*)this_)->isNull();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1055
// [1] bool isPrint()
extern "C"
bool C_ZNK8QCharRef7isPrintEv(void *this_) {
  return (bool)((QCharRef*)this_)->isPrint();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1056
// [1] bool isPunct()
extern "C"
bool C_ZNK8QCharRef7isPunctEv(void *this_) {
  return (bool)((QCharRef*)this_)->isPunct();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1057
// [1] bool isSpace()
extern "C"
bool C_ZNK8QCharRef7isSpaceEv(void *this_) {
  return (bool)((QCharRef*)this_)->isSpace();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1058
// [1] bool isMark()
extern "C"
bool C_ZNK8QCharRef6isMarkEv(void *this_) {
  return (bool)((QCharRef*)this_)->isMark();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1059
// [1] bool isLetter()
extern "C"
bool C_ZNK8QCharRef8isLetterEv(void *this_) {
  return (bool)((QCharRef*)this_)->isLetter();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1060
// [1] bool isNumber()
extern "C"
bool C_ZNK8QCharRef8isNumberEv(void *this_) {
  return (bool)((QCharRef*)this_)->isNumber();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1061
// [1] bool isLetterOrNumber()
extern "C"
bool C_ZN8QCharRef16isLetterOrNumberEv(void *this_) {
  return (bool)((QCharRef*)this_)->isLetterOrNumber();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1062
// [1] bool isDigit()
extern "C"
bool C_ZNK8QCharRef7isDigitEv(void *this_) {
  return (bool)((QCharRef*)this_)->isDigit();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1063
// [1] bool isLower()
extern "C"
bool C_ZNK8QCharRef7isLowerEv(void *this_) {
  return (bool)((QCharRef*)this_)->isLower();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1064
// [1] bool isUpper()
extern "C"
bool C_ZNK8QCharRef7isUpperEv(void *this_) {
  return (bool)((QCharRef*)this_)->isUpper();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1065
// [1] bool isTitleCase()
extern "C"
bool C_ZNK8QCharRef11isTitleCaseEv(void *this_) {
  return (bool)((QCharRef*)this_)->isTitleCase();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1067
// [4] int digitValue()
extern "C"
int C_ZNK8QCharRef10digitValueEv(void *this_) {
  return (int)((QCharRef*)this_)->digitValue();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1068
// [2] QChar toLower()
extern "C"
void* C_ZNK8QCharRef7toLowerEv(void *this_) {
  auto rv = ((QCharRef*)this_)->toLower();
return new QChar(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1069
// [2] QChar toUpper()
extern "C"
void* C_ZNK8QCharRef7toUpperEv(void *this_) {
  auto rv = ((QCharRef*)this_)->toUpper();
return new QChar(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1070
// [2] QChar toTitleCase()
extern "C"
void* C_ZNK8QCharRef11toTitleCaseEv(void *this_) {
  auto rv = ((QCharRef*)this_)->toTitleCase();
return new QChar(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1072
// [4] QChar::Category category()
extern "C"
QChar::Category C_ZNK8QCharRef8categoryEv(void *this_) {
  return (QChar::Category)((QCharRef*)this_)->category();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1073
// [4] QChar::Direction direction()
extern "C"
QChar::Direction C_ZNK8QCharRef9directionEv(void *this_) {
  return (QChar::Direction)((QCharRef*)this_)->direction();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1074
// [4] QChar::JoiningType joiningType()
extern "C"
QChar::JoiningType C_ZNK8QCharRef11joiningTypeEv(void *this_) {
  return (QChar::JoiningType)((QCharRef*)this_)->joiningType();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1076
// [4] QChar::Joining joining()
extern "C"
QChar::Joining C_ZNK8QCharRef7joiningEv(void *this_) {
  return (QChar::Joining)((QCharRef*)this_)->joining();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1089
// [1] bool hasMirrored()
extern "C"
bool C_ZNK8QCharRef11hasMirroredEv(void *this_) {
  return (bool)((QCharRef*)this_)->hasMirrored();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1090
// [2] QChar mirroredChar()
extern "C"
void* C_ZNK8QCharRef12mirroredCharEv(void *this_) {
  auto rv = ((QCharRef*)this_)->mirroredChar();
return new QChar(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1091
// [8] QString decomposition()
extern "C"
void* C_ZNK8QCharRef13decompositionEv(void *this_) {
  auto rv = ((QCharRef*)this_)->decomposition();
return new QString(rv);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1092
// [4] QChar::Decomposition decompositionTag()
extern "C"
QChar::Decomposition C_ZNK8QCharRef16decompositionTagEv(void *this_) {
  return (QChar::Decomposition)((QCharRef*)this_)->decompositionTag();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1093
// [1] uchar combiningClass()
extern "C"
uchar C_ZNK8QCharRef14combiningClassEv(void *this_) {
  return (uchar)((QCharRef*)this_)->combiningClass();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1095
// [4] QChar::Script script()
extern "C"
QChar::Script C_ZNK8QCharRef6scriptEv(void *this_) {
  return (QChar::Script)((QCharRef*)this_)->script();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1097
// [4] QChar::UnicodeVersion unicodeVersion()
extern "C"
QChar::UnicodeVersion C_ZNK8QCharRef14unicodeVersionEv(void *this_) {
  return (QChar::UnicodeVersion)((QCharRef*)this_)->unicodeVersion();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1099
// [1] uchar cell()
extern "C"
uchar C_ZNK8QCharRef4cellEv(void *this_) {
  return (uchar)((QCharRef*)this_)->cell();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1100
// [1] uchar row()
extern "C"
uchar C_ZNK8QCharRef3rowEv(void *this_) {
  return (uchar)((QCharRef*)this_)->row();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1101
// [-2] void setCell(uchar)
extern "C"
void C_ZN8QCharRef7setCellEh(void *this_, uchar cell) {
  ((QCharRef*)this_)->setCell(cell);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1102
// [-2] void setRow(uchar)
extern "C"
void C_ZN8QCharRef6setRowEh(void *this_, uchar row) {
  ((QCharRef*)this_)->setRow(row);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1107
// [1] char toLatin1()
extern "C"
char C_ZNK8QCharRef8toLatin1Ev(void *this_) {
  return (char)((QCharRef*)this_)->toLatin1();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1108
// [2] ushort unicode()
extern "C"
ushort C_ZNK8QCharRef7unicodeEv(void *this_) {
  return (ushort)((QCharRef*)this_)->unicode();
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qstring.h:1109
// [2] ushort & unicode()
extern "C"
void* C_ZN8QCharRef7unicodeEv(void *this_) {
  auto& rv = ((QCharRef*)this_)->unicode();
return &rv;
}
//  main block end
