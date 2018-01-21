//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:127
// const QMetaObject * metaObject()
extern "C"
void C_ZNK23QGraphicsColorizeEffect10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsColorizeEffect*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:131
// void QGraphicsColorizeEffect(class QObject *)
extern "C"
void* C_ZN23QGraphicsColorizeEffectC1EP7QObject(QObject * parent) {
  return new QGraphicsColorizeEffect(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:132
// void ~QGraphicsColorizeEffect()
extern "C"
void C_ZN23QGraphicsColorizeEffectD1Ev(void *this_) {
  delete (QGraphicsColorizeEffect*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:134
// QColor color()
extern "C"
void C_ZNK23QGraphicsColorizeEffect5colorEv(void *this_) {
  /*return*/ ((QGraphicsColorizeEffect*)this_)->color();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:135
// qreal strength()
extern "C"
void C_ZNK23QGraphicsColorizeEffect8strengthEv(void *this_) {
  /*return*/ ((QGraphicsColorizeEffect*)this_)->strength();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:138
// void setColor(const class QColor &)
extern "C"
void C_ZN23QGraphicsColorizeEffect8setColorERK6QColor(void *this_, const QColor & c) {
  ((QGraphicsColorizeEffect*)this_)->setColor(c);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:139
// void setStrength(qreal)
extern "C"
void C_ZN23QGraphicsColorizeEffect11setStrengthEd(void *this_, qreal strength) {
  ((QGraphicsColorizeEffect*)this_)->setStrength(strength);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:142
// void colorChanged(const class QColor &)
extern "C"
void C_ZN23QGraphicsColorizeEffect12colorChangedERK6QColor(void *this_, const QColor & color) {
  ((QGraphicsColorizeEffect*)this_)->colorChanged(color);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:143
// void strengthChanged(qreal)
extern "C"
void C_ZN23QGraphicsColorizeEffect15strengthChangedEd(void *this_, qreal strength) {
  ((QGraphicsColorizeEffect*)this_)->strengthChanged(strength);
}
//  main block end
