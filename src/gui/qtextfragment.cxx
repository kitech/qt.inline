//  header block begin
// /usr/include/qt/QtGui/qtextobject.h
#include <qtextobject.h>
#include <QtGui>

//  header block end

//  main block begin
// inline
// /usr/include/qt/QtGui/qtextobject.h:305
// void QTextFragment(const class QTextDocumentPrivate *, int, int)
extern "C"
void* C_ZN13QTextFragmentC1EPK20QTextDocumentPrivateii(const QTextDocumentPrivate * priv, int f, int fe) {
  return new QTextFragment(priv, f, fe);
}
// inline
// /usr/include/qt/QtGui/qtextobject.h:306
// void QTextFragment()
extern "C"
void* C_ZN13QTextFragmentC1Ev() {
  return new QTextFragment();
}
// inline
// /usr/include/qt/QtGui/qtextobject.h:310
// bool isValid()
extern "C"
void C_ZNK13QTextFragment7isValidEv(void *this_) {
  /*return*/ ((QTextFragment*)this_)->isValid();
}
// /usr/include/qt/QtGui/qtextobject.h:316
// int position()
extern "C"
void C_ZNK13QTextFragment8positionEv(void *this_) {
  /*return*/ ((QTextFragment*)this_)->position();
}
// /usr/include/qt/QtGui/qtextobject.h:317
// int length()
extern "C"
void C_ZNK13QTextFragment6lengthEv(void *this_) {
  /*return*/ ((QTextFragment*)this_)->length();
}
// /usr/include/qt/QtGui/qtextobject.h:318
// bool contains(int)
extern "C"
void C_ZNK13QTextFragment8containsEi(void *this_, int position) {
  /*return*/ ((QTextFragment*)this_)->contains(position);
}
// /usr/include/qt/QtGui/qtextobject.h:320
// QTextCharFormat charFormat()
extern "C"
void C_ZNK13QTextFragment10charFormatEv(void *this_) {
  /*return*/ ((QTextFragment*)this_)->charFormat();
}
// /usr/include/qt/QtGui/qtextobject.h:321
// int charFormatIndex()
extern "C"
void C_ZNK13QTextFragment15charFormatIndexEv(void *this_) {
  /*return*/ ((QTextFragment*)this_)->charFormatIndex();
}
// /usr/include/qt/QtGui/qtextobject.h:322
// QString text()
extern "C"
void C_ZNK13QTextFragment4textEv(void *this_) {
  /*return*/ ((QTextFragment*)this_)->text();
}
// /usr/include/qt/QtGui/qtextobject.h:325
// QList<QGlyphRun> glyphRuns(int, int)
extern "C"
void C_ZNK13QTextFragment9glyphRunsEii(void *this_, int from, int length) {
  /*return*/ ((QTextFragment*)this_)->glyphRuns(from, length);
}
//  main block end
