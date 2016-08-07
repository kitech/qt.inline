// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtCore/qtextboundaryfinder.h
// dst-file: /src/core/qtextboundaryfinder.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qtextboundaryfinder.h>


#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qtextboundaryfinder_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 79, column 17>
//   // proto:  bool QTextBoundaryFinder::isValid();
if (true) {
  auto f = [](QTextBoundaryFinder flythis) {
    ((QTextBoundaryFinder*)0)->isValid();
    flythis.isValid();
  };
  if (f == nullptr){}
}
// _ZNK19QTextBoundaryFinder7isValidEv isValid()
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 81, column 25>
//   // proto:  QTextBoundaryFinder::BoundaryType QTextBoundaryFinder::type();
if (true) {
  auto f = [](QTextBoundaryFinder flythis) {
    ((QTextBoundaryFinder*)0)->type();
    flythis.type();
  };
  if (f == nullptr){}
}
// _ZNK19QTextBoundaryFinder4typeEv type()
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QTextBoundaryFinder_Class_Size()
{
  return sizeof(QTextBoundaryFinder);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 92, column 10>
//   // proto:  bool QTextBoundaryFinder::isAtBoundary();
// _ZNK19QTextBoundaryFinder12isAtBoundaryEv isAtBoundary()
extern "C"
bool
C_ZNK19QTextBoundaryFinder12isAtBoundaryEv(void *qthis) {
  auto ret =
  ((QTextBoundaryFinder*)qthis)->isAtBoundary();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 89, column 9>
//   // proto:  int QTextBoundaryFinder::toNextBoundary();
// _ZN19QTextBoundaryFinder14toNextBoundaryEv toNextBoundary()
extern "C"
int
C_ZN19QTextBoundaryFinder14toNextBoundaryEv(void *qthis) {
  auto ret =
  ((QTextBoundaryFinder*)qthis)->toNextBoundary();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 93, column 21>
//   // proto:  BoundaryReasons QTextBoundaryFinder::boundaryReasons();
// _ZNK19QTextBoundaryFinder15boundaryReasonsEv boundaryReasons()
extern "C"
QFlags<QTextBoundaryFinder::BoundaryReason>*
C_ZNK19QTextBoundaryFinder15boundaryReasonsEv(void *qthis) {
  auto ret =
  ((QTextBoundaryFinder*)qthis)->boundaryReasons();
  return new QFlags<QTextBoundaryFinder::BoundaryReason>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 85, column 10>
//   // proto:  void QTextBoundaryFinder::toEnd();
// _ZN19QTextBoundaryFinder5toEndEv toEnd()
extern "C"
void
C_ZN19QTextBoundaryFinder5toEndEv(void *qthis) {
  ((QTextBoundaryFinder*)qthis)->toEnd();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 55, column 5>
//   // proto:  void QTextBoundaryFinder::QTextBoundaryFinder(const QTextBoundaryFinder & other);
extern "C"
QTextBoundaryFinder*
C_ZN19QTextBoundaryFinderC2ERKS_(const QTextBoundaryFinder* arg1) {
  auto ret = new QTextBoundaryFinder(*((const QTextBoundaryFinder*)arg1));
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 87, column 10>
//   // proto:  void QTextBoundaryFinder::setPosition(int position);
// _ZN19QTextBoundaryFinder11setPositionEi setPosition(int)
extern "C"
void
C_ZN19QTextBoundaryFinder11setPositionEi(void *qthis,
int arg1) {
  ((QTextBoundaryFinder*)qthis)->setPosition(arg1);
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 54, column 5>
//   // proto:  void QTextBoundaryFinder::QTextBoundaryFinder();
extern "C"
QTextBoundaryFinder*
C_ZN19QTextBoundaryFinderC2Ev() {
  auto ret = new QTextBoundaryFinder();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 90, column 9>
//   // proto:  int QTextBoundaryFinder::toPreviousBoundary();
// _ZN19QTextBoundaryFinder18toPreviousBoundaryEv toPreviousBoundary()
extern "C"
int
C_ZN19QTextBoundaryFinder18toPreviousBoundaryEv(void *qthis) {
  auto ret =
  ((QTextBoundaryFinder*)qthis)->toPreviousBoundary();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 77, column 5>
//   // proto:  void QTextBoundaryFinder::QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type, const QChar * chars, int length, unsigned char * buffer, int bufferSize);
extern "C"
QTextBoundaryFinder*
C_ZN19QTextBoundaryFinderC2ENS_12BoundaryTypeEPK5QChariPhi(QTextBoundaryFinder::BoundaryType arg1,
const QChar * arg2,
int arg3,
unsigned char * arg4,
int arg5) {
  auto ret = new QTextBoundaryFinder(arg1,
arg2,
arg3,
arg4,
arg5);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 79, column 17>
//   // proto:  bool QTextBoundaryFinder::isValid();
// _ZNK19QTextBoundaryFinder7isValidEv isValid()
extern "C"
bool
C_ZNK19QTextBoundaryFinder7isValidEv(void *qthis) {
  auto ret =
  ((QTextBoundaryFinder*)qthis)->isValid();
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void QTextBoundaryFinder::~QTextBoundaryFinder();
extern "C"
void C_ZN19QTextBoundaryFinderD2Ev(void *qthis) {
  delete (QTextBoundaryFinder*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 82, column 13>
//   // proto:  QString QTextBoundaryFinder::string();
// _ZNK19QTextBoundaryFinder6stringEv string()
extern "C"
QString*
C_ZNK19QTextBoundaryFinder6stringEv(void *qthis) {
  auto ret =
  ((QTextBoundaryFinder*)qthis)->string();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 81, column 25>
//   // proto:  QTextBoundaryFinder::BoundaryType QTextBoundaryFinder::type();
// _ZNK19QTextBoundaryFinder4typeEv type()
extern "C"
QTextBoundaryFinder::BoundaryType
C_ZNK19QTextBoundaryFinder4typeEv(void *qthis) {
  auto ret =
  ((QTextBoundaryFinder*)qthis)->type();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 84, column 10>
//   // proto:  void QTextBoundaryFinder::toStart();
// _ZN19QTextBoundaryFinder7toStartEv toStart()
extern "C"
void
C_ZN19QTextBoundaryFinder7toStartEv(void *qthis) {
  ((QTextBoundaryFinder*)qthis)->toStart();
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 86, column 9>
//   // proto:  int QTextBoundaryFinder::position();
// _ZNK19QTextBoundaryFinder8positionEv position()
extern "C"
int
C_ZNK19QTextBoundaryFinder8positionEv(void *qthis) {
  auto ret =
  ((QTextBoundaryFinder*)qthis)->position();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtCore/qtextboundaryfinder.h', line 76, column 5>
//   // proto:  void QTextBoundaryFinder::QTextBoundaryFinder(QTextBoundaryFinder::BoundaryType type, const QString & string);
extern "C"
QTextBoundaryFinder*
C_ZN19QTextBoundaryFinderC2ENS_12BoundaryTypeERK7QString(QTextBoundaryFinder::BoundaryType arg1,
const QString* arg2) {
  auto ret = new QTextBoundaryFinder(arg1,
*((const QString*)arg2));
  return ret;
}
// <= ext block end

// body block begin =>
// <= body block end

