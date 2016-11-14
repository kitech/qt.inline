// /usr/include/qt/QtCore/qtextboundaryfinder.h
#include <qtextboundaryfinder.h>
#include <QtCore>

// /usr/include/qt/QtCore/qtextboundaryfinder.h:54
// void QTextBoundaryFinder()
extern "C"
void* C_ZN19QTextBoundaryFinderC1Ev() {
  return new QTextBoundaryFinder();
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:57
// void ~QTextBoundaryFinder()
extern "C"
void C_ZN19QTextBoundaryFinderD1Ev(void *this_) {
  delete (QTextBoundaryFinder*)(this_);
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:76
// void QTextBoundaryFinder(enum QTextBoundaryFinder::BoundaryType, const class QString &)
extern "C"
void* C_ZN19QTextBoundaryFinderC1ENS_12BoundaryTypeERK7QString(QTextBoundaryFinder::BoundaryType type, const QString & string) {
  return new QTextBoundaryFinder(type, string);
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:77
// void QTextBoundaryFinder(enum QTextBoundaryFinder::BoundaryType, const class QChar *, int, unsigned char *, int)
extern "C"
void* C_ZN19QTextBoundaryFinderC1ENS_12BoundaryTypeEPK5QChariPhi(QTextBoundaryFinder::BoundaryType type, const QChar * chars, int length, unsigned char * buffer, int bufferSize) {
  return new QTextBoundaryFinder(type, chars, length, buffer, bufferSize);
}
// inline
// /usr/include/qt/QtCore/qtextboundaryfinder.h:79
// bool isValid()
extern "C"
void C_ZNK19QTextBoundaryFinder7isValidEv(void *this_) {
  /*return*/ ((QTextBoundaryFinder*)this_)->isValid();
}
// inline
// /usr/include/qt/QtCore/qtextboundaryfinder.h:81
// QTextBoundaryFinder::BoundaryType type()
extern "C"
void C_ZNK19QTextBoundaryFinder4typeEv(void *this_) {
  /*return*/ ((QTextBoundaryFinder*)this_)->type();
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:82
// QString string()
extern "C"
void C_ZNK19QTextBoundaryFinder6stringEv(void *this_) {
  /*return*/ ((QTextBoundaryFinder*)this_)->string();
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:84
// void toStart()
extern "C"
void C_ZN19QTextBoundaryFinder7toStartEv(void *this_) {
  ((QTextBoundaryFinder*)this_)->toStart();
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:85
// void toEnd()
extern "C"
void C_ZN19QTextBoundaryFinder5toEndEv(void *this_) {
  ((QTextBoundaryFinder*)this_)->toEnd();
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:86
// int position()
extern "C"
void C_ZNK19QTextBoundaryFinder8positionEv(void *this_) {
  /*return*/ ((QTextBoundaryFinder*)this_)->position();
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:87
// void setPosition(int)
extern "C"
void C_ZN19QTextBoundaryFinder11setPositionEi(void *this_, int position) {
  ((QTextBoundaryFinder*)this_)->setPosition(position);
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:89
// int toNextBoundary()
extern "C"
void C_ZN19QTextBoundaryFinder14toNextBoundaryEv(void *this_) {
  /*return*/ ((QTextBoundaryFinder*)this_)->toNextBoundary();
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:90
// int toPreviousBoundary()
extern "C"
void C_ZN19QTextBoundaryFinder18toPreviousBoundaryEv(void *this_) {
  /*return*/ ((QTextBoundaryFinder*)this_)->toPreviousBoundary();
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:92
// bool isAtBoundary()
extern "C"
void C_ZNK19QTextBoundaryFinder12isAtBoundaryEv(void *this_) {
  /*return*/ ((QTextBoundaryFinder*)this_)->isAtBoundary();
}
// /usr/include/qt/QtCore/qtextboundaryfinder.h:93
// BoundaryReasons boundaryReasons()
extern "C"
void C_ZNK19QTextBoundaryFinder15boundaryReasonsEv(void *this_) {
  /*return*/ ((QTextBoundaryFinder*)this_)->boundaryReasons();
}