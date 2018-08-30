//  header block begin
// /usr/include/qt/QtGui/qtextformat.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextformat.h>
#include <QtGui>
#include "callback_inherit.h"

// QTextListFormat is pure virtual: false
// QTextListFormat has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQTextListFormat_t {
  QByteArrayData data[1];
  char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextListFormat_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextListFormat_t qt_meta_stringdata_MyQTextListFormat = {
   {
  QT_MOC_LITERAL(0, 0, 17), // "MyQTextListFormat"
  },
  "MyQTextListFormat"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextListFormat[] = {
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
class Q_DECL_EXPORT MyQTextListFormat : public QTextListFormat {
public:
  virtual ~MyQTextListFormat() {}
// void QTextListFormat()
MyQTextListFormat() : QTextListFormat() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:681
// [-2] void QTextListFormat()
extern "C" Q_DECL_EXPORT
void* C_ZN15QTextListFormatC2Ev() {
  return  new QTextListFormat();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:683
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK15QTextListFormat7isValidEv(void *this_) {
  return (bool)((QTextListFormat*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:697
// [-2] void setStyle(QTextListFormat::Style)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextListFormat8setStyleENS_5StyleE(void *this_, QTextListFormat::Style style) {
  ((QTextListFormat*)this_)->setStyle(style);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:698
// [4] QTextListFormat::Style style()
extern "C" Q_DECL_EXPORT
QTextListFormat::Style C_ZNK15QTextListFormat5styleEv(void *this_) {
  return (QTextListFormat::Style)((QTextListFormat*)this_)->style();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:701
// [-2] void setIndent(int)
extern "C" Q_DECL_EXPORT
void C_ZN15QTextListFormat9setIndentEi(void *this_, int indent) {
  ((QTextListFormat*)this_)->setIndent(indent);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:702
// [4] int indent()
extern "C" Q_DECL_EXPORT
int C_ZNK15QTextListFormat6indentEv(void *this_) {
  return (int)((QTextListFormat*)this_)->indent();
}

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:705
// [-2] void setNumberPrefix(const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN15QTextListFormat15setNumberPrefixERK7QString(void *this_, QString* numberPrefix) {
  ((QTextListFormat*)this_)->setNumberPrefix(*numberPrefix);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:706
// [8] QString numberPrefix()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextListFormat12numberPrefixEv(void *this_) {
  auto rv = ((QTextListFormat*)this_)->numberPrefix();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:709
// [-2] void setNumberSuffix(const QString &)
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void C_ZN15QTextListFormat15setNumberSuffixERK7QString(void *this_, QString* numberSuffix) {
  ((QTextListFormat*)this_)->setNumberSuffix(*numberSuffix);
}
#endif // QT_VERSION >= 0x040800

// Public inline Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qtextformat.h:710
// [8] QString numberSuffix()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK15QTextListFormat12numberSuffixEv(void *this_) {
  auto rv = ((QTextListFormat*)this_)->numberSuffix();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800


extern "C" Q_DECL_EXPORT
void C_ZN15QTextListFormatD2Ev(void *this_) {
  delete (QTextListFormat*)(this_);
}
//  main block end
