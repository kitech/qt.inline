//  header block begin
// /usr/include/qt/QtCore/qregularexpression.h
#include <qregularexpression.h>
#include <QtCore>

//  header block end

//  main block begin
// /usr/include/qt/QtCore/qregularexpression.h:176
// void QRegularExpressionMatch()
extern "C"
void* C_ZN23QRegularExpressionMatchC1Ev() {
  return new QRegularExpressionMatch();
}
// /usr/include/qt/QtCore/qregularexpression.h:177
// void ~QRegularExpressionMatch()
extern "C"
void C_ZN23QRegularExpressionMatchD1Ev(void *this_) {
  delete (QRegularExpressionMatch*)(this_);
}
// inline
// /usr/include/qt/QtCore/qregularexpression.h:185
// void swap(class QRegularExpressionMatch &)
extern "C"
void C_ZN23QRegularExpressionMatch4swapERS_(void *this_, QRegularExpressionMatch & other) {
  ((QRegularExpressionMatch*)this_)->swap(other);
}
// /usr/include/qt/QtCore/qregularexpression.h:187
// QRegularExpression regularExpression()
extern "C"
void C_ZNK23QRegularExpressionMatch17regularExpressionEv(void *this_) {
  /*return*/ ((QRegularExpressionMatch*)this_)->regularExpression();
}
// /usr/include/qt/QtCore/qregularexpression.h:188
// QRegularExpression::MatchType matchType()
extern "C"
void C_ZNK23QRegularExpressionMatch9matchTypeEv(void *this_) {
  /*return*/ ((QRegularExpressionMatch*)this_)->matchType();
}
// /usr/include/qt/QtCore/qregularexpression.h:189
// QRegularExpression::MatchOptions matchOptions()
extern "C"
void C_ZNK23QRegularExpressionMatch12matchOptionsEv(void *this_) {
  /*return*/ ((QRegularExpressionMatch*)this_)->matchOptions();
}
// /usr/include/qt/QtCore/qregularexpression.h:191
// bool hasMatch()
extern "C"
void C_ZNK23QRegularExpressionMatch8hasMatchEv(void *this_) {
  /*return*/ ((QRegularExpressionMatch*)this_)->hasMatch();
}
// /usr/include/qt/QtCore/qregularexpression.h:192
// bool hasPartialMatch()
extern "C"
void C_ZNK23QRegularExpressionMatch15hasPartialMatchEv(void *this_) {
  /*return*/ ((QRegularExpressionMatch*)this_)->hasPartialMatch();
}
// /usr/include/qt/QtCore/qregularexpression.h:194
// bool isValid()
extern "C"
void C_ZNK23QRegularExpressionMatch7isValidEv(void *this_) {
  /*return*/ ((QRegularExpressionMatch*)this_)->isValid();
}
// /usr/include/qt/QtCore/qregularexpression.h:196
// int lastCapturedIndex()
extern "C"
void C_ZNK23QRegularExpressionMatch17lastCapturedIndexEv(void *this_) {
  /*return*/ ((QRegularExpressionMatch*)this_)->lastCapturedIndex();
}
// /usr/include/qt/QtCore/qregularexpression.h:198
// QString captured(int)
extern "C"
void C_ZNK23QRegularExpressionMatch8capturedEi(void *this_, int nth) {
  /*return*/ ((QRegularExpressionMatch*)this_)->captured(nth);
}
// /usr/include/qt/QtCore/qregularexpression.h:199
// QStringRef capturedRef(int)
extern "C"
void C_ZNK23QRegularExpressionMatch11capturedRefEi(void *this_, int nth) {
  /*return*/ ((QRegularExpressionMatch*)this_)->capturedRef(nth);
}
// /usr/include/qt/QtCore/qregularexpression.h:201
// QString captured(const class QString &)
extern "C"
void C_ZNK23QRegularExpressionMatch8capturedERK7QString(void *this_, const QString & name) {
  /*return*/ ((QRegularExpressionMatch*)this_)->captured(name);
}
// /usr/include/qt/QtCore/qregularexpression.h:202
// QStringRef capturedRef(const class QString &)
extern "C"
void C_ZNK23QRegularExpressionMatch11capturedRefERK7QString(void *this_, const QString & name) {
  /*return*/ ((QRegularExpressionMatch*)this_)->capturedRef(name);
}
// /usr/include/qt/QtCore/qregularexpression.h:204
// QStringList capturedTexts()
extern "C"
void C_ZNK23QRegularExpressionMatch13capturedTextsEv(void *this_) {
  /*return*/ ((QRegularExpressionMatch*)this_)->capturedTexts();
}
// /usr/include/qt/QtCore/qregularexpression.h:206
// int capturedStart(int)
extern "C"
void C_ZNK23QRegularExpressionMatch13capturedStartEi(void *this_, int nth) {
  /*return*/ ((QRegularExpressionMatch*)this_)->capturedStart(nth);
}
// /usr/include/qt/QtCore/qregularexpression.h:207
// int capturedLength(int)
extern "C"
void C_ZNK23QRegularExpressionMatch14capturedLengthEi(void *this_, int nth) {
  /*return*/ ((QRegularExpressionMatch*)this_)->capturedLength(nth);
}
// /usr/include/qt/QtCore/qregularexpression.h:208
// int capturedEnd(int)
extern "C"
void C_ZNK23QRegularExpressionMatch11capturedEndEi(void *this_, int nth) {
  /*return*/ ((QRegularExpressionMatch*)this_)->capturedEnd(nth);
}
// /usr/include/qt/QtCore/qregularexpression.h:210
// int capturedStart(const class QString &)
extern "C"
void C_ZNK23QRegularExpressionMatch13capturedStartERK7QString(void *this_, const QString & name) {
  /*return*/ ((QRegularExpressionMatch*)this_)->capturedStart(name);
}
// /usr/include/qt/QtCore/qregularexpression.h:211
// int capturedLength(const class QString &)
extern "C"
void C_ZNK23QRegularExpressionMatch14capturedLengthERK7QString(void *this_, const QString & name) {
  /*return*/ ((QRegularExpressionMatch*)this_)->capturedLength(name);
}
// /usr/include/qt/QtCore/qregularexpression.h:212
// int capturedEnd(const class QString &)
extern "C"
void C_ZNK23QRegularExpressionMatch11capturedEndERK7QString(void *this_, const QString & name) {
  /*return*/ ((QRegularExpressionMatch*)this_)->capturedEnd(name);
}
//  main block end
