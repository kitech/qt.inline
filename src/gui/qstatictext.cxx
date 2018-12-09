//  header block begin

// since 0x040700
// /usr/include/qt/QtGui/qstatictext.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qstatictext.h>
#include <QtGui>
#include "callback_inherit.h"

// QStaticText is pure virtual: false
// QStaticText has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQStaticText_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQStaticText_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQStaticText_t qt_meta_stringdata_MyQStaticText = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQStaticText"
  },
  "MyQStaticText"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQStaticText[] = {
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
class Q_DECL_EXPORT MyQStaticText : public QStaticText {
public:
  virtual ~MyQStaticText() {}
// void QStaticText()
MyQStaticText() : QStaticText() {}
// void QStaticText(const QString &)
MyQStaticText(const QString & text) : QStaticText(text) {}
// void QStaticText(const QStaticText &)
MyQStaticText(const QStaticText & other) : QStaticText(other) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:64
// [-2] void QStaticText()
extern "C" Q_DECL_EXPORT
void* C_ZN11QStaticTextC2Ev() {
  return  new QStaticText();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:65
// [-2] void QStaticText(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStaticTextC2ERK7QString(QString* text) {
  return  new QStaticText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:66
// [-2] void QStaticText(const QStaticText &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStaticTextC2ERKS_(QStaticText* other) {
  return  new QStaticText(*other);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:68
// [8] QStaticText & operator=(QStaticText &&)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStaticTextaSEOS_(void *this_, QStaticText && other) {
  auto& rv = ((QStaticText*)this_)->operator=(other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:70
// [8] QStaticText & operator=(const QStaticText &)
extern "C" Q_DECL_EXPORT
void* C_ZN11QStaticTextaSERKS_(void *this_, QStaticText* arg0) {
  auto& rv = ((QStaticText*)this_)->operator=(*arg0);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:71
// [-2] void ~QStaticText()
extern "C" Q_DECL_EXPORT
void C_ZN11QStaticTextD2Ev(void *this_) {
  delete (QStaticText*)(this_);
}
// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qstatictext.h:73
// [-2] void swap(QStaticText &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN11QStaticText4swapERS_(void *this_, QStaticText* other) {
  ((QStaticText*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:75
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN11QStaticText7setTextERK7QString(void *this_, QString* text) {
  ((QStaticText*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:76
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStaticText4textEv(void *this_) {
  auto rv = ((QStaticText*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:78
// [-2] void setTextFormat(Qt::TextFormat)
extern "C" Q_DECL_EXPORT
void C_ZN11QStaticText13setTextFormatEN2Qt10TextFormatE(void *this_, Qt::TextFormat textFormat) {
  ((QStaticText*)this_)->setTextFormat(textFormat);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:79
// [4] Qt::TextFormat textFormat()
extern "C" Q_DECL_EXPORT
Qt::TextFormat C_ZNK11QStaticText10textFormatEv(void *this_) {
  return (Qt::TextFormat)((QStaticText*)this_)->textFormat();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:81
// [-2] void setTextWidth(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN11QStaticText12setTextWidthEd(void *this_, qreal textWidth) {
  ((QStaticText*)this_)->setTextWidth(textWidth);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:82
// [8] qreal textWidth()
extern "C" Q_DECL_EXPORT
qreal C_ZNK11QStaticText9textWidthEv(void *this_) {
  return (qreal)((QStaticText*)this_)->textWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:84
// [-2] void setTextOption(const QTextOption &)
extern "C" Q_DECL_EXPORT
void C_ZN11QStaticText13setTextOptionERK11QTextOption(void *this_, QTextOption* textOption) {
  ((QStaticText*)this_)->setTextOption(*textOption);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:85
// [32] QTextOption textOption()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStaticText10textOptionEv(void *this_) {
  auto rv = ((QStaticText*)this_)->textOption();
return new QTextOption(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:87
// [16] QSizeF size()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QStaticText4sizeEv(void *this_) {
  auto rv = ((QStaticText*)this_)->size();
return new QSizeF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:89
// [-2] void prepare(const QTransform &, const QFont &)
extern "C" Q_DECL_EXPORT
void C_ZN11QStaticText7prepareERK10QTransformRK5QFont(void *this_, QTransform* matrix, QFont* font) {
  ((QStaticText*)this_)->prepare(*matrix, *font);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:91
// [-2] void setPerformanceHint(QStaticText::PerformanceHint)
extern "C" Q_DECL_EXPORT
void C_ZN11QStaticText18setPerformanceHintENS_15PerformanceHintE(void *this_, QStaticText::PerformanceHint performanceHint) {
  ((QStaticText*)this_)->setPerformanceHint(performanceHint);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:92
// [4] QStaticText::PerformanceHint performanceHint()
extern "C" Q_DECL_EXPORT
QStaticText::PerformanceHint C_ZNK11QStaticText15performanceHintEv(void *this_) {
  return (QStaticText::PerformanceHint)((QStaticText*)this_)->performanceHint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:94
// [1] bool operator==(const QStaticText &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStaticTexteqERKS_(void *this_, QStaticText* arg0) {
  return (bool)((QStaticText*)this_)->operator==(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:95
// [1] bool operator!=(const QStaticText &)
extern "C" Q_DECL_EXPORT
bool C_ZNK11QStaticTextneERKS_(void *this_, QStaticText* arg0) {
  return (bool)((QStaticText*)this_)->operator!=(*arg0);
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
