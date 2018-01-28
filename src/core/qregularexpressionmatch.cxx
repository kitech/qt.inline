//  header block begin
// /usr/include/qt/QtCore/qregularexpression.h
#include <qregularexpression.h>
#include <QtCore>

// QRegularExpressionMatch is pure virtual: false
//  header block end

//  main block begin

class MyQRegularExpressionMatch : public QRegularExpressionMatch {
public:
MyQRegularExpressionMatch() : QRegularExpressionMatch() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:178
// [-2] void QRegularExpressionMatch()
extern "C"
void* C_ZN23QRegularExpressionMatchC1Ev() {
  (MyQRegularExpressionMatch*)(0);
  return  new MyQRegularExpressionMatch();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:179
// [-2] void ~QRegularExpressionMatch()
extern "C"
void C_ZN23QRegularExpressionMatchD1Ev(void *this_) {
  delete (QRegularExpressionMatch*)(this_);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:187
// [-2] void swap(class QRegularExpressionMatch &)
extern "C"
void C_ZN23QRegularExpressionMatch4swapERS_(void *this_, QRegularExpressionMatch & other) {
  ((QRegularExpressionMatch*)this_)->swap(other);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:189
// [8] QRegularExpression regularExpression()
extern "C"
void* C_ZNK23QRegularExpressionMatch17regularExpressionEv(void *this_) {
  auto rv = ((QRegularExpressionMatch*)this_)->regularExpression();
return new QRegularExpression(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:190
// [4] QRegularExpression::MatchType matchType()
extern "C"
QRegularExpression::MatchType C_ZNK23QRegularExpressionMatch9matchTypeEv(void *this_) {
  return (QRegularExpression::MatchType)((QRegularExpressionMatch*)this_)->matchType();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:191
// [4] QRegularExpression::MatchOptions matchOptions()
extern "C"
QRegularExpression::MatchOptions C_ZNK23QRegularExpressionMatch12matchOptionsEv(void *this_) {
  return (QRegularExpression::MatchOptions)((QRegularExpressionMatch*)this_)->matchOptions();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:193
// [1] bool hasMatch()
extern "C"
bool C_ZNK23QRegularExpressionMatch8hasMatchEv(void *this_) {
  return (bool)((QRegularExpressionMatch*)this_)->hasMatch();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:194
// [1] bool hasPartialMatch()
extern "C"
bool C_ZNK23QRegularExpressionMatch15hasPartialMatchEv(void *this_) {
  return (bool)((QRegularExpressionMatch*)this_)->hasPartialMatch();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:196
// [1] bool isValid()
extern "C"
bool C_ZNK23QRegularExpressionMatch7isValidEv(void *this_) {
  return (bool)((QRegularExpressionMatch*)this_)->isValid();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:198
// [4] int lastCapturedIndex()
extern "C"
int C_ZNK23QRegularExpressionMatch17lastCapturedIndexEv(void *this_) {
  return (int)((QRegularExpressionMatch*)this_)->lastCapturedIndex();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:200
// [8] QString captured(int)
extern "C"
void* C_ZNK23QRegularExpressionMatch8capturedEi(void *this_, int nth) {
  auto rv = ((QRegularExpressionMatch*)this_)->captured(nth);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:201
// [16] QStringRef capturedRef(int)
extern "C"
void* C_ZNK23QRegularExpressionMatch11capturedRefEi(void *this_, int nth) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedRef(nth);
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:202
// [16] QStringView capturedView(int)
extern "C"
void* C_ZNK23QRegularExpressionMatch12capturedViewEi(void *this_, int nth) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedView(nth);
return new QStringView(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:205
// [8] QString captured(const class QString &)
extern "C"
void* C_ZNK23QRegularExpressionMatch8capturedERK7QString(void *this_, const QString & name) {
  auto rv = ((QRegularExpressionMatch*)this_)->captured(name);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:206
// [16] QStringRef capturedRef(const class QString &)
extern "C"
void* C_ZNK23QRegularExpressionMatch11capturedRefERK7QString(void *this_, const QString & name) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedRef(name);
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:209
// [8] QString captured(class QStringView)
extern "C"
void* C_ZNK23QRegularExpressionMatch8capturedE11QStringView(void *this_, QStringView name) {
  auto rv = ((QRegularExpressionMatch*)this_)->captured(name);
return new QString(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:210
// [16] QStringRef capturedRef(class QStringView)
extern "C"
void* C_ZNK23QRegularExpressionMatch11capturedRefE11QStringView(void *this_, QStringView name) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedRef(name);
return new QStringRef(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:211
// [16] QStringView capturedView(class QStringView)
extern "C"
void* C_ZNK23QRegularExpressionMatch12capturedViewE11QStringView(void *this_, QStringView name) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedView(name);
return new QStringView(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:215
// [4] int capturedStart(int)
extern "C"
int C_ZNK23QRegularExpressionMatch13capturedStartEi(void *this_, int nth) {
  return (int)((QRegularExpressionMatch*)this_)->capturedStart(nth);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:216
// [4] int capturedLength(int)
extern "C"
int C_ZNK23QRegularExpressionMatch14capturedLengthEi(void *this_, int nth) {
  return (int)((QRegularExpressionMatch*)this_)->capturedLength(nth);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:217
// [4] int capturedEnd(int)
extern "C"
int C_ZNK23QRegularExpressionMatch11capturedEndEi(void *this_, int nth) {
  return (int)((QRegularExpressionMatch*)this_)->capturedEnd(nth);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:220
// [4] int capturedStart(const class QString &)
extern "C"
int C_ZNK23QRegularExpressionMatch13capturedStartERK7QString(void *this_, const QString & name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedStart(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:221
// [4] int capturedLength(const class QString &)
extern "C"
int C_ZNK23QRegularExpressionMatch14capturedLengthERK7QString(void *this_, const QString & name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedLength(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:222
// [4] int capturedEnd(const class QString &)
extern "C"
int C_ZNK23QRegularExpressionMatch11capturedEndERK7QString(void *this_, const QString & name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedEnd(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:225
// [4] int capturedStart(class QStringView)
extern "C"
int C_ZNK23QRegularExpressionMatch13capturedStartE11QStringView(void *this_, QStringView name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedStart(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:226
// [4] int capturedLength(class QStringView)
extern "C"
int C_ZNK23QRegularExpressionMatch14capturedLengthE11QStringView(void *this_, QStringView name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedLength(name);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:227
// [4] int capturedEnd(class QStringView)
extern "C"
int C_ZNK23QRegularExpressionMatch11capturedEndE11QStringView(void *this_, QStringView name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedEnd(name);
}
//  main block end
