//  header block begin

// /usr/include/qt/QtCore/qregexp.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qregexp.h>
#include <QtCore>
#include "callback_inherit.h"

// QRegExp is pure virtual: false
// QRegExp has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQRegExp_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQRegExp_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQRegExp_t qt_meta_stringdata_MyQRegExp = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQRegExp"
  },
  "MyQRegExp"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQRegExp[] = {
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
class Q_DECL_EXPORT MyQRegExp : public QRegExp {
public:
  virtual ~MyQRegExp() {}
// void QRegExp()
MyQRegExp() : QRegExp() {}
// void QRegExp(const QString &, Qt::CaseSensitivity, QRegExp::PatternSyntax)
MyQRegExp(const QString & pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax) : QRegExp(pattern, cs, syntax) {}
// void QRegExp(const QRegExp &)
MyQRegExp(const QRegExp & rx) : QRegExp(rx) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:70
// [-2] void QRegExp()
extern "C" Q_DECL_EXPORT
void* C_ZN7QRegExpC2Ev() {
  return  new QRegExp();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:71
// [-2] void QRegExp(const QString &, Qt::CaseSensitivity, QRegExp::PatternSyntax)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRegExpC2ERK7QStringN2Qt15CaseSensitivityENS_13PatternSyntaxE(QString* pattern, Qt::CaseSensitivity cs, QRegExp::PatternSyntax syntax) {
  return  new QRegExp(*pattern, cs, syntax);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:73
// [-2] void QRegExp(const QRegExp &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRegExpC2ERKS_(QRegExp* rx) {
  return  new QRegExp(*rx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:74
// [-2] void ~QRegExp()
extern "C" Q_DECL_EXPORT
void C_ZN7QRegExpD2Ev(void *this_) {
  delete (QRegExp*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:75
// [8] QRegExp & operator=(const QRegExp &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRegExpaSERKS_(void *this_, QRegExp* rx) {
  auto& rv = ((QRegExp*)this_)->operator=(*rx);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:77
// [8] QRegExp & operator=(QRegExp &&)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRegExpaSEOS_(void *this_, QRegExp && other) {
  auto& rv = ((QRegExp*)this_)->operator=(other);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtCore/qregexp.h:79
// [-2] void swap(QRegExp &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN7QRegExp4swapERS_(void *this_, QRegExp* other) {
  ((QRegExp*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:81
// [1] bool operator==(const QRegExp &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QRegExpeqERKS_(void *this_, QRegExp* rx) {
  return (bool)((QRegExp*)this_)->operator==(*rx);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:82
// [1] bool operator!=(const QRegExp &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QRegExpneERKS_(void *this_, QRegExp* rx) {
  return (bool)((QRegExp*)this_)->operator!=(*rx);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:84
// [1] bool isEmpty()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QRegExp7isEmptyEv(void *this_) {
  return (bool)((QRegExp*)this_)->isEmpty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:85
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QRegExp7isValidEv(void *this_) {
  return (bool)((QRegExp*)this_)->isValid();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:86
// [8] QString pattern()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QRegExp7patternEv(void *this_) {
  auto rv = ((QRegExp*)this_)->pattern();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:87
// [-2] void setPattern(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN7QRegExp10setPatternERK7QString(void *this_, QString* pattern) {
  ((QRegExp*)this_)->setPattern(*pattern);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:88
// [4] Qt::CaseSensitivity caseSensitivity()
extern "C" Q_DECL_EXPORT
Qt::CaseSensitivity C_ZNK7QRegExp15caseSensitivityEv(void *this_) {
  return (Qt::CaseSensitivity)((QRegExp*)this_)->caseSensitivity();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:89
// [-2] void setCaseSensitivity(Qt::CaseSensitivity)
extern "C" Q_DECL_EXPORT
void C_ZN7QRegExp18setCaseSensitivityEN2Qt15CaseSensitivityE(void *this_, Qt::CaseSensitivity cs) {
  ((QRegExp*)this_)->setCaseSensitivity(cs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:90
// [4] QRegExp::PatternSyntax patternSyntax()
extern "C" Q_DECL_EXPORT
QRegExp::PatternSyntax C_ZNK7QRegExp13patternSyntaxEv(void *this_) {
  return (QRegExp::PatternSyntax)((QRegExp*)this_)->patternSyntax();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:91
// [-2] void setPatternSyntax(QRegExp::PatternSyntax)
extern "C" Q_DECL_EXPORT
void C_ZN7QRegExp16setPatternSyntaxENS_13PatternSyntaxE(void *this_, QRegExp::PatternSyntax syntax) {
  ((QRegExp*)this_)->setPatternSyntax(syntax);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:93
// [1] bool isMinimal()
extern "C" Q_DECL_EXPORT
bool C_ZNK7QRegExp9isMinimalEv(void *this_) {
  return (bool)((QRegExp*)this_)->isMinimal();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:94
// [-2] void setMinimal(bool)
extern "C" Q_DECL_EXPORT
void C_ZN7QRegExp10setMinimalEb(void *this_, bool minimal) {
  ((QRegExp*)this_)->setMinimal(minimal);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:96
// [1] bool exactMatch(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK7QRegExp10exactMatchERK7QString(void *this_, QString* str) {
  return (bool)((QRegExp*)this_)->exactMatch(*str);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:98
// [4] int indexIn(const QString &, int, QRegExp::CaretMode)
extern "C" Q_DECL_EXPORT
int C_ZNK7QRegExp7indexInERK7QStringiNS_9CaretModeE(void *this_, QString* str, int offset, QRegExp::CaretMode caretMode) {
  return (int)((QRegExp*)this_)->indexIn(*str, offset, caretMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:99
// [4] int lastIndexIn(const QString &, int, QRegExp::CaretMode)
extern "C" Q_DECL_EXPORT
int C_ZNK7QRegExp11lastIndexInERK7QStringiNS_9CaretModeE(void *this_, QString* str, int offset, QRegExp::CaretMode caretMode) {
  return (int)((QRegExp*)this_)->lastIndexIn(*str, offset, caretMode);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:100
// [4] int matchedLength()
extern "C" Q_DECL_EXPORT
int C_ZNK7QRegExp13matchedLengthEv(void *this_) {
  return (int)((QRegExp*)this_)->matchedLength();
}

// Public Visibility=Default Availability=Available
// since 4.6
// /usr/include/qt/QtCore/qregexp.h:102
// [4] int captureCount()
#if QT_VERSION >= 0x040600
extern "C" Q_DECL_EXPORT
int C_ZNK7QRegExp12captureCountEv(void *this_) {
  return (int)((QRegExp*)this_)->captureCount();
}
#endif // QT_VERSION >= 0x040600

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:103
// [8] QStringList capturedTexts()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QRegExp13capturedTextsEv(void *this_) {
  auto rv = ((QRegExp*)this_)->capturedTexts();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:104
// [8] QStringList capturedTexts()
extern "C" Q_DECL_EXPORT
void* C_ZN7QRegExp13capturedTextsEv(void *this_) {
  auto rv = ((QRegExp*)this_)->capturedTexts();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:105
// [8] QString cap(int)
extern "C" Q_DECL_EXPORT
void* C_ZNK7QRegExp3capEi(void *this_, int nth) {
  auto rv = ((QRegExp*)this_)->cap(nth);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:106
// [8] QString cap(int)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRegExp3capEi(void *this_, int nth) {
  auto rv = ((QRegExp*)this_)->cap(nth);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:107
// [4] int pos(int)
extern "C" Q_DECL_EXPORT
int C_ZNK7QRegExp3posEi(void *this_, int nth) {
  return (int)((QRegExp*)this_)->pos(nth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:108
// [4] int pos(int)
extern "C" Q_DECL_EXPORT
int C_ZN7QRegExp3posEi(void *this_, int nth) {
  return (int)((QRegExp*)this_)->pos(nth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:109
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZNK7QRegExp11errorStringEv(void *this_) {
  auto rv = ((QRegExp*)this_)->errorString();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:110
// [8] QString errorString()
extern "C" Q_DECL_EXPORT
void* C_ZN7QRegExp11errorStringEv(void *this_) {
  auto rv = ((QRegExp*)this_)->errorString();
return new QString(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qregexp.h:113
// [8] QString escape(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN7QRegExp6escapeERK7QString(QString* str) {
  auto rv = QRegExp::escape(*str);
return new QString(rv);
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
