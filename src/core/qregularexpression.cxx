//  header block begin
// /usr/include/qt/QtCore/qregularexpression.h
#include <qregularexpression.h>
#include <QtCore>

// QRegularExpression is pure virtual: false
// QRegularExpression has virtual projected: false
//  header block end

//  main block begin

class MyQRegularExpression : public QRegularExpression {
public:
  virtual ~MyQRegularExpression() {}
// void QRegularExpression()
MyQRegularExpression() : QRegularExpression() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:81
// [4] QRegularExpression::PatternOptions patternOptions()
extern "C"
void C_ZNK18QRegularExpression14patternOptionsEv(void *this_) {
  auto rv = ((QRegularExpression*)this_)->patternOptions();
/*return rv;*/
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:84
// [-2] void QRegularExpression()
extern "C"
void* C_ZN18QRegularExpressionC2Ev() {
  return  new QRegularExpression();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:87
// [-2] void ~QRegularExpression()
extern "C"
void C_ZN18QRegularExpressionD2Ev(void *this_) {
  delete (QRegularExpression*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:95
// [-2] void swap(class QRegularExpression &)
extern "C"
void C_ZN18QRegularExpression4swapERS_(void *this_, QRegularExpression & other) {
  ((QRegularExpression*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:97
// [8] QString pattern()
extern "C"
void* C_ZNK18QRegularExpression7patternEv(void *this_) {
  auto rv = ((QRegularExpression*)this_)->pattern();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:98
// [-2] void setPattern(const class QString &)
extern "C"
void C_ZN18QRegularExpression10setPatternERK7QString(void *this_, const QString & pattern) {
  ((QRegularExpression*)this_)->setPattern(pattern);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:100
// [1] bool isValid()
extern "C"
bool C_ZNK18QRegularExpression7isValidEv(void *this_) {
  return (bool)((QRegularExpression*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:101
// [4] int patternErrorOffset()
extern "C"
int C_ZNK18QRegularExpression18patternErrorOffsetEv(void *this_) {
  return (int)((QRegularExpression*)this_)->patternErrorOffset();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:102
// [8] QString errorString()
extern "C"
void* C_ZNK18QRegularExpression11errorStringEv(void *this_) {
  auto rv = ((QRegularExpression*)this_)->errorString();
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:104
// [4] int captureCount()
extern "C"
int C_ZNK18QRegularExpression12captureCountEv(void *this_) {
  return (int)((QRegularExpression*)this_)->captureCount();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:141
// [-2] void optimize()
extern "C"
void C_ZNK18QRegularExpression8optimizeEv(void *this_) {
  ((QRegularExpression*)this_)->optimize();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:143
// [8] QString escape(const class QString &)
extern "C"
void* C_ZN18QRegularExpression6escapeERK7QString(const QString & str) {
  auto rv = QRegularExpression::escape(str);
return new QString(rv);
}
//  main block end
