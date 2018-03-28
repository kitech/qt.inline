//  header block begin
// since 0x050000
// /usr/include/qt/QtCore/qregularexpression.h
#ifndef protected
#define protected public
#endif
#include <qregularexpression.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegularExpressionMatch is pure virtual: false
// QRegularExpressionMatch has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQRegularExpressionMatch : public QRegularExpressionMatch {
public:
  virtual ~MyQRegularExpressionMatch() {}
// void QRegularExpressionMatch()
MyQRegularExpressionMatch() : QRegularExpressionMatch() {}
};

// Public Visibility=Default Availability=Available
// since 5.1
// /usr/include/qt/QtCore/qregularexpression.h:178
// [-2] void QRegularExpressionMatch()
#if QT_VERSION >= 0x050100
extern "C" Q_DECL_EXPORT
void* C_ZN23QRegularExpressionMatchC2Ev() {
  return  new QRegularExpressionMatch();
}
#endif // QT_VERSION >= 0x050100

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:179
// [-2] void ~QRegularExpressionMatch()
extern "C" Q_DECL_EXPORT
void C_ZN23QRegularExpressionMatchD2Ev(void *this_) {
  delete (QRegularExpressionMatch*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:181
// [8] QRegularExpressionMatch & operator=(const QRegularExpressionMatch &)
extern "C" Q_DECL_EXPORT
void* C_ZN23QRegularExpressionMatchaSERKS_(void *this_, QRegularExpressionMatch* match_) {
  auto& rv = ((QRegularExpressionMatch*)this_)->operator=(*match_);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:184
// [8] QRegularExpressionMatch & operator=(QRegularExpressionMatch &&)
extern "C" Q_DECL_EXPORT
void* C_ZN23QRegularExpressionMatchaSEOS_(void *this_, QRegularExpressionMatch && match_) {
  auto& rv = ((QRegularExpressionMatch*)this_)->operator=(match_);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:187
// [-2] void swap(QRegularExpressionMatch &)
extern "C" Q_DECL_EXPORT
void C_ZN23QRegularExpressionMatch4swapERS_(void *this_, QRegularExpressionMatch* other) {
  ((QRegularExpressionMatch*)this_)->swap(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:189
// [8] QRegularExpression regularExpression()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch17regularExpressionEv(void *this_) {
  auto rv = ((QRegularExpressionMatch*)this_)->regularExpression();
return new QRegularExpression(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:190
// [4] QRegularExpression::MatchType matchType()
extern "C" Q_DECL_EXPORT
QRegularExpression::MatchType C_ZNK23QRegularExpressionMatch9matchTypeEv(void *this_) {
  return (QRegularExpression::MatchType)((QRegularExpressionMatch*)this_)->matchType();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:191
// [4] QRegularExpression::MatchOptions matchOptions()
extern "C" Q_DECL_EXPORT
QRegularExpression::MatchOptions C_ZNK23QRegularExpressionMatch12matchOptionsEv(void *this_) {
  return (QRegularExpression::MatchOptions)((QRegularExpressionMatch*)this_)->matchOptions();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:193
// [1] bool hasMatch()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QRegularExpressionMatch8hasMatchEv(void *this_) {
  return (bool)((QRegularExpressionMatch*)this_)->hasMatch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:194
// [1] bool hasPartialMatch()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QRegularExpressionMatch15hasPartialMatchEv(void *this_) {
  return (bool)((QRegularExpressionMatch*)this_)->hasPartialMatch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:196
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK23QRegularExpressionMatch7isValidEv(void *this_) {
  return (bool)((QRegularExpressionMatch*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:198
// [4] int lastCapturedIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch17lastCapturedIndexEv(void *this_) {
  return (int)((QRegularExpressionMatch*)this_)->lastCapturedIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:200
// [8] QString captured(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch8capturedEi(void *this_, int nth) {
  auto rv = ((QRegularExpressionMatch*)this_)->captured(nth);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:201
// [16] QStringRef capturedRef(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch11capturedRefEi(void *this_, int nth) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedRef(nth);
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qregularexpression.h:202
// [16] QStringView capturedView(int)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch12capturedViewEi(void *this_, int nth) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedView(nth);
return new QStringView(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:205
// [8] QString captured(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch8capturedERK7QString(void *this_, QString* name) {
  auto rv = ((QRegularExpressionMatch*)this_)->captured(*name);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:206
// [16] QStringRef capturedRef(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch11capturedRefERK7QString(void *this_, QString* name) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedRef(*name);
return new QStringRef(rv);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qregularexpression.h:209
// [8] QString captured(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch8capturedE11QStringView(void *this_, QStringView* name) {
  auto rv = ((QRegularExpressionMatch*)this_)->captured(*name);
return new QString(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qregularexpression.h:210
// [16] QStringRef capturedRef(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch11capturedRefE11QStringView(void *this_, QStringView* name) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedRef(*name);
return new QStringRef(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qregularexpression.h:211
// [16] QStringView capturedView(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch12capturedViewE11QStringView(void *this_, QStringView* name) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedView(*name);
return new QStringView(rv);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:213
// [8] QStringList capturedTexts()
extern "C" Q_DECL_EXPORT
void* C_ZNK23QRegularExpressionMatch13capturedTextsEv(void *this_) {
  auto rv = ((QRegularExpressionMatch*)this_)->capturedTexts();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:215
// [4] int capturedStart(int)
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch13capturedStartEi(void *this_, int nth) {
  return (int)((QRegularExpressionMatch*)this_)->capturedStart(nth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:216
// [4] int capturedLength(int)
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch14capturedLengthEi(void *this_, int nth) {
  return (int)((QRegularExpressionMatch*)this_)->capturedLength(nth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:217
// [4] int capturedEnd(int)
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch11capturedEndEi(void *this_, int nth) {
  return (int)((QRegularExpressionMatch*)this_)->capturedEnd(nth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:220
// [4] int capturedStart(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch13capturedStartERK7QString(void *this_, QString* name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedStart(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:221
// [4] int capturedLength(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch14capturedLengthERK7QString(void *this_, QString* name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedLength(*name);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregularexpression.h:222
// [4] int capturedEnd(const QString &)
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch11capturedEndERK7QString(void *this_, QString* name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedEnd(*name);
}

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qregularexpression.h:225
// [4] int capturedStart(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch13capturedStartE11QStringView(void *this_, QStringView* name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedStart(*name);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qregularexpression.h:226
// [4] int capturedLength(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch14capturedLengthE11QStringView(void *this_, QStringView* name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedLength(*name);
}
#endif // QT_VERSION >= 0x050a00

// Public Visibility=Default Availability=Available
// since 5.10
// /usr/include/qt/QtCore/qregularexpression.h:227
// [4] int capturedEnd(QStringView)
#if QT_VERSION >= 0x050a00
extern "C" Q_DECL_EXPORT
int C_ZNK23QRegularExpressionMatch11capturedEndE11QStringView(void *this_, QStringView* name) {
  return (int)((QRegularExpressionMatch*)this_)->capturedEnd(*name);
}
#endif // QT_VERSION >= 0x050a00

//  main block end
