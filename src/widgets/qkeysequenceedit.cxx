// /usr/include/qt/QtWidgets/qkeysequenceedit.h
#include <qkeysequenceedit.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:53
// const QMetaObject * metaObject()
extern "C"
void C_ZNK16QKeySequenceEdit10metaObjectEv(void *this_) {
  /*return*/ ((QKeySequenceEdit*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:57
// void QKeySequenceEdit(class QWidget *)
extern "C"
void* C_ZN16QKeySequenceEditC1EP7QWidget(QWidget * parent) {
  return new QKeySequenceEdit(parent);
}
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:58
// void QKeySequenceEdit(const class QKeySequence &, class QWidget *)
extern "C"
void* C_ZN16QKeySequenceEditC1ERK12QKeySequenceP7QWidget(const QKeySequence & keySequence, QWidget * parent) {
  return new QKeySequenceEdit(keySequence, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:59
// void ~QKeySequenceEdit()
extern "C"
void C_ZN16QKeySequenceEditD1Ev(void *this_) {
  delete (QKeySequenceEdit*)(this_);
}
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:61
// QKeySequence keySequence()
extern "C"
void C_ZNK16QKeySequenceEdit11keySequenceEv(void *this_) {
  /*return*/ ((QKeySequenceEdit*)this_)->keySequence();
}
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:64
// void setKeySequence(const class QKeySequence &)
extern "C"
void C_ZN16QKeySequenceEdit14setKeySequenceERK12QKeySequence(void *this_, const QKeySequence & keySequence) {
  ((QKeySequenceEdit*)this_)->setKeySequence(keySequence);
}
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:65
// void clear()
extern "C"
void C_ZN16QKeySequenceEdit5clearEv(void *this_) {
  ((QKeySequenceEdit*)this_)->clear();
}
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:68
// void editingFinished()
extern "C"
void C_ZN16QKeySequenceEdit15editingFinishedEv(void *this_) {
  ((QKeySequenceEdit*)this_)->editingFinished();
}
// /usr/include/qt/QtWidgets/qkeysequenceedit.h:69
// void keySequenceChanged(const class QKeySequence &)
extern "C"
void C_ZN16QKeySequenceEdit18keySequenceChangedERK12QKeySequence(void *this_, const QKeySequence & keySequence) {
  ((QKeySequenceEdit*)this_)->keySequenceChanged(keySequence);
}