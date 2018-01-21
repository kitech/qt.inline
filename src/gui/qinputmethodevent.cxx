//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:544
// void QInputMethodEvent()
extern "C"
void* C_ZN17QInputMethodEventC1Ev() {
  return new QInputMethodEvent();
}
// /usr/include/qt/QtGui/qevent.h:545
// void QInputMethodEvent(const class QString &, const QList<class QInputMethodEvent::Attribute> &)
extern "C"
void* C_ZN17QInputMethodEventC1ERK7QStringRK5QListINS_9AttributeEE(const QString & preeditText, const QList<QInputMethodEvent::Attribute> & attributes) {
  return new QInputMethodEvent(preeditText, attributes);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:546
// void ~QInputMethodEvent()
extern "C"
void C_ZN17QInputMethodEventD1Ev(void *this_) {
  delete (QInputMethodEvent*)(this_);
}
// /usr/include/qt/QtGui/qevent.h:548
// void setCommitString(const class QString &, int, int)
extern "C"
void C_ZN17QInputMethodEvent15setCommitStringERK7QStringii(void *this_, const QString & commitString, int replaceFrom, int replaceLength) {
  ((QInputMethodEvent*)this_)->setCommitString(commitString, replaceFrom, replaceLength);
}
// inline
// /usr/include/qt/QtGui/qevent.h:549
// const QList<QInputMethodEvent::Attribute> & attributes()
extern "C"
void C_ZNK17QInputMethodEvent10attributesEv(void *this_) {
  /*return*/ ((QInputMethodEvent*)this_)->attributes();
}
// inline
// /usr/include/qt/QtGui/qevent.h:550
// const QString & preeditString()
extern "C"
void C_ZNK17QInputMethodEvent13preeditStringEv(void *this_) {
  /*return*/ ((QInputMethodEvent*)this_)->preeditString();
}
// inline
// /usr/include/qt/QtGui/qevent.h:552
// const QString & commitString()
extern "C"
void C_ZNK17QInputMethodEvent12commitStringEv(void *this_) {
  /*return*/ ((QInputMethodEvent*)this_)->commitString();
}
// inline
// /usr/include/qt/QtGui/qevent.h:553
// int replacementStart()
extern "C"
void C_ZNK17QInputMethodEvent16replacementStartEv(void *this_) {
  /*return*/ ((QInputMethodEvent*)this_)->replacementStart();
}
// inline
// /usr/include/qt/QtGui/qevent.h:554
// int replacementLength()
extern "C"
void C_ZNK17QInputMethodEvent17replacementLengthEv(void *this_) {
  /*return*/ ((QInputMethodEvent*)this_)->replacementLength();
}
//  main block end
