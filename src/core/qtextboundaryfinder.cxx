//  header block begin

// since 0x040400
// /usr/include/qt/QtCore/qtextboundaryfinder.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qtextboundaryfinder.h>
#include <QtCore>
#include "callback_inherit.h"

// QTextBoundaryFinder is pure virtual: false
// QTextBoundaryFinder has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTextBoundaryFinder_t {
  QByteArrayData data[1];
  char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTextBoundaryFinder_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTextBoundaryFinder_t qt_meta_stringdata_MyQTextBoundaryFinder = {
   {
  QT_MOC_LITERAL(0, 0, 21), // "MyQTextBoundaryFinder"
  },
  "MyQTextBoundaryFinder"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTextBoundaryFinder[] = {
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
class Q_DECL_EXPORT MyQTextBoundaryFinder : public QTextBoundaryFinder {
public:
  virtual ~MyQTextBoundaryFinder() {}
// void QTextBoundaryFinder()
MyQTextBoundaryFinder() : QTextBoundaryFinder() {}
// void QTextBoundaryFinder(const QTextBoundaryFinder &)
MyQTextBoundaryFinder(const QTextBoundaryFinder & other) : QTextBoundaryFinder(other) {}
// void QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType, const QString &)
MyQTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type_, const QString & string) : QTextBoundaryFinder(type_, string) {}
// void QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType, const QChar *, int, unsigned char *, int)
MyQTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type_, const QChar * chars, int length, unsigned char * buffer, int bufferSize) : QTextBoundaryFinder(type_, chars, length, buffer, bufferSize) {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:54
// [-2] void QTextBoundaryFinder()
extern "C" Q_DECL_EXPORT
void* C_ZN19QTextBoundaryFinderC2Ev() {
  return  new QTextBoundaryFinder();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:55
// [-2] void QTextBoundaryFinder(const QTextBoundaryFinder &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QTextBoundaryFinderC2ERKS_(QTextBoundaryFinder* other) {
  return  new QTextBoundaryFinder(*other);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:56
// [48] QTextBoundaryFinder & operator=(const QTextBoundaryFinder &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QTextBoundaryFinderaSERKS_(void *this_, QTextBoundaryFinder* other) {
  auto& rv = ((QTextBoundaryFinder*)this_)->operator=(*other);
return &rv;
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:57
// [-2] void ~QTextBoundaryFinder()
extern "C" Q_DECL_EXPORT
void C_ZN19QTextBoundaryFinderD2Ev(void *this_) {
  delete (QTextBoundaryFinder*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:76
// [-2] void QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType, const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZN19QTextBoundaryFinderC2ENS_12BoundaryTypeERK7QString(QTextBoundaryFinder::BoundaryType type_, QString* string) {
  return  new QTextBoundaryFinder(type_, *string);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:77
// [-2] void QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType, const QChar *, int, unsigned char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN19QTextBoundaryFinderC2ENS_12BoundaryTypeEPK5QChariPhi(QTextBoundaryFinder::BoundaryType type_, const QChar * chars, int length, unsigned char * buffer, int bufferSize) {
  return  new QTextBoundaryFinder(type_, chars, length, buffer, bufferSize);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:79
// [1] bool isValid()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QTextBoundaryFinder7isValidEv(void *this_) {
  return (bool)((QTextBoundaryFinder*)this_)->isValid();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:81
// [4] QTextBoundaryFinder::BoundaryType type()
extern "C" Q_DECL_EXPORT
QTextBoundaryFinder::BoundaryType C_ZNK19QTextBoundaryFinder4typeEv(void *this_) {
  return (QTextBoundaryFinder::BoundaryType)((QTextBoundaryFinder*)this_)->type();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:82
// [8] QString string()
extern "C" Q_DECL_EXPORT
void* C_ZNK19QTextBoundaryFinder6stringEv(void *this_) {
  auto rv = ((QTextBoundaryFinder*)this_)->string();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:84
// [-2] void toStart()
extern "C" Q_DECL_EXPORT
void C_ZN19QTextBoundaryFinder7toStartEv(void *this_) {
  ((QTextBoundaryFinder*)this_)->toStart();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:85
// [-2] void toEnd()
extern "C" Q_DECL_EXPORT
void C_ZN19QTextBoundaryFinder5toEndEv(void *this_) {
  ((QTextBoundaryFinder*)this_)->toEnd();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:86
// [4] int position()
extern "C" Q_DECL_EXPORT
int C_ZNK19QTextBoundaryFinder8positionEv(void *this_) {
  return (int)((QTextBoundaryFinder*)this_)->position();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:87
// [-2] void setPosition(int)
extern "C" Q_DECL_EXPORT
void C_ZN19QTextBoundaryFinder11setPositionEi(void *this_, int position) {
  ((QTextBoundaryFinder*)this_)->setPosition(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:89
// [4] int toNextBoundary()
extern "C" Q_DECL_EXPORT
int C_ZN19QTextBoundaryFinder14toNextBoundaryEv(void *this_) {
  return (int)((QTextBoundaryFinder*)this_)->toNextBoundary();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:90
// [4] int toPreviousBoundary()
extern "C" Q_DECL_EXPORT
int C_ZN19QTextBoundaryFinder18toPreviousBoundaryEv(void *this_) {
  return (int)((QTextBoundaryFinder*)this_)->toPreviousBoundary();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:92
// [1] bool isAtBoundary()
extern "C" Q_DECL_EXPORT
bool C_ZNK19QTextBoundaryFinder12isAtBoundaryEv(void *this_) {
  return (bool)((QTextBoundaryFinder*)this_)->isAtBoundary();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qtextboundaryfinder.h:93
// [4] QTextBoundaryFinder::BoundaryReasons boundaryReasons()
extern "C" Q_DECL_EXPORT
QTextBoundaryFinder::BoundaryReasons* C_ZNK19QTextBoundaryFinder15boundaryReasonsEv(void *this_) {
  auto rv = ((QTextBoundaryFinder*)this_)->boundaryReasons();
return new QTextBoundaryFinder::BoundaryReasons(rv);
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
