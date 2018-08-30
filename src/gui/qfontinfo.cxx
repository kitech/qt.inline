//  header block begin
// /usr/include/qt/QtGui/qfontinfo.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qfontinfo.h>
#include <QtGui>
#include "callback_inherit.h"

// QFontInfo is pure virtual: false
// QFontInfo has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQFontInfo_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQFontInfo_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQFontInfo_t qt_meta_stringdata_MyQFontInfo = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQFontInfo"
  },
  "MyQFontInfo"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQFontInfo[] = {
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
class Q_DECL_EXPORT MyQFontInfo : public QFontInfo {
public:
  virtual ~MyQFontInfo() {}
// void QFontInfo(const QFont &)
MyQFontInfo(const QFont & arg0) : QFontInfo(arg0) {}
// void QFontInfo(const QFontInfo &)
MyQFontInfo(const QFontInfo & arg0) : QFontInfo(arg0) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:53
// [-2] void QFontInfo(const QFont &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFontInfoC2ERK5QFont(QFont* arg0) {
  return  new QFontInfo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:54
// [-2] void QFontInfo(const QFontInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFontInfoC2ERKS_(QFontInfo* arg0) {
  return  new QFontInfo(*arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:55
// [-2] void ~QFontInfo()
extern "C" Q_DECL_EXPORT
void C_ZN9QFontInfoD2Ev(void *this_) {
  delete (QFontInfo*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:57
// [8] QFontInfo & operator=(const QFontInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZN9QFontInfoaSERKS_(void *this_, QFontInfo* arg0) {
  auto& rv = ((QFontInfo*)this_)->operator=(*arg0);
return &rv;
}

// Public inline Visibility=Default Availability=Available
// since 5.0
// /usr/include/qt/QtGui/qfontinfo.h:59
// [-2] void swap(QFontInfo &)
#if QT_VERSION >= 0x050000
extern "C" Q_DECL_EXPORT
void C_ZN9QFontInfo4swapERS_(void *this_, QFontInfo* other) {
  ((QFontInfo*)this_)->swap(*other);
}
#endif // QT_VERSION >= 0x050000

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:61
// [8] QString family()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFontInfo6familyEv(void *this_) {
  auto rv = ((QFontInfo*)this_)->family();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// since 4.8
// /usr/include/qt/QtGui/qfontinfo.h:62
// [8] QString styleName()
#if QT_VERSION >= 0x040800
extern "C" Q_DECL_EXPORT
void* C_ZNK9QFontInfo9styleNameEv(void *this_) {
  auto rv = ((QFontInfo*)this_)->styleName();
return new QString(rv);
}
#endif // QT_VERSION >= 0x040800

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:63
// [4] int pixelSize()
extern "C" Q_DECL_EXPORT
int C_ZNK9QFontInfo9pixelSizeEv(void *this_) {
  return (int)((QFontInfo*)this_)->pixelSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:64
// [4] int pointSize()
extern "C" Q_DECL_EXPORT
int C_ZNK9QFontInfo9pointSizeEv(void *this_) {
  return (int)((QFontInfo*)this_)->pointSize();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:65
// [8] qreal pointSizeF()
extern "C" Q_DECL_EXPORT
qreal C_ZNK9QFontInfo10pointSizeFEv(void *this_) {
  return (qreal)((QFontInfo*)this_)->pointSizeF();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:66
// [1] bool italic()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFontInfo6italicEv(void *this_) {
  return (bool)((QFontInfo*)this_)->italic();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:67
// [4] QFont::Style style()
extern "C" Q_DECL_EXPORT
QFont::Style C_ZNK9QFontInfo5styleEv(void *this_) {
  return (QFont::Style)((QFontInfo*)this_)->style();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:68
// [4] int weight()
extern "C" Q_DECL_EXPORT
int C_ZNK9QFontInfo6weightEv(void *this_) {
  return (int)((QFontInfo*)this_)->weight();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:69
// [1] bool bold()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFontInfo4boldEv(void *this_) {
  return (bool)((QFontInfo*)this_)->bold();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:70
// [1] bool underline()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFontInfo9underlineEv(void *this_) {
  return (bool)((QFontInfo*)this_)->underline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:71
// [1] bool overline()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFontInfo8overlineEv(void *this_) {
  return (bool)((QFontInfo*)this_)->overline();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:72
// [1] bool strikeOut()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFontInfo9strikeOutEv(void *this_) {
  return (bool)((QFontInfo*)this_)->strikeOut();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:73
// [1] bool fixedPitch()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFontInfo10fixedPitchEv(void *this_) {
  return (bool)((QFontInfo*)this_)->fixedPitch();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:74
// [4] QFont::StyleHint styleHint()
extern "C" Q_DECL_EXPORT
QFont::StyleHint C_ZNK9QFontInfo9styleHintEv(void *this_) {
  return (QFont::StyleHint)((QFontInfo*)this_)->styleHint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:76
// [1] bool rawMode()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFontInfo7rawModeEv(void *this_) {
  return (bool)((QFontInfo*)this_)->rawMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:79
// [1] bool exactMatch()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QFontInfo10exactMatchEv(void *this_) {
  return (bool)((QFontInfo*)this_)->exactMatch();
}

//  main block end
