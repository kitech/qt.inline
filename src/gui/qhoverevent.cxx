//  header block begin
// /usr/include/qt/QtGui/qevent.h
#include <qevent.h>
#include <QtGui>

//  header block end

//  main block begin
// /usr/include/qt/QtGui/qevent.h:154
// void QHoverEvent(enum QEvent::Type, const class QPointF &, const class QPointF &, Qt::KeyboardModifiers)
extern "C"
void* C_ZN11QHoverEventC1EN6QEvent4TypeERK7QPointFS4_6QFlagsIN2Qt16KeyboardModifierEE(QEvent::Type type, const QPointF & pos, const QPointF & oldPos, QFlags<Qt::KeyboardModifier> modifiers) {
  return new QHoverEvent(type, pos, oldPos, modifiers);
}
// virtual
// /usr/include/qt/QtGui/qevent.h:155
// void ~QHoverEvent()
extern "C"
void C_ZN11QHoverEventD1Ev(void *this_) {
  delete (QHoverEvent*)(this_);
}
// inline
// /usr/include/qt/QtGui/qevent.h:158
// QPoint pos()
extern "C"
void C_ZNK11QHoverEvent3posEv(void *this_) {
  /*return*/ ((QHoverEvent*)this_)->pos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:159
// QPoint oldPos()
extern "C"
void C_ZNK11QHoverEvent6oldPosEv(void *this_) {
  /*return*/ ((QHoverEvent*)this_)->oldPos();
}
// inline
// /usr/include/qt/QtGui/qevent.h:162
// const QPointF & posF()
extern "C"
void C_ZNK11QHoverEvent4posFEv(void *this_) {
  /*return*/ ((QHoverEvent*)this_)->posF();
}
// inline
// /usr/include/qt/QtGui/qevent.h:163
// const QPointF & oldPosF()
extern "C"
void C_ZNK11QHoverEvent7oldPosFEv(void *this_) {
  /*return*/ ((QHoverEvent*)this_)->oldPosF();
}
//  main block end
