//  header block begin
// /usr/include/qt/QtWidgets/qgraphicseffect.h
#include <qgraphicseffect.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:156
// const QMetaObject * metaObject()
extern "C"
void C_ZNK19QGraphicsBlurEffect10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsBlurEffect*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:168
// void QGraphicsBlurEffect(class QObject *)
extern "C"
void* C_ZN19QGraphicsBlurEffectC1EP7QObject(QObject * parent) {
  return new QGraphicsBlurEffect(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:169
// void ~QGraphicsBlurEffect()
extern "C"
void C_ZN19QGraphicsBlurEffectD1Ev(void *this_) {
  delete (QGraphicsBlurEffect*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicseffect.h:171
// QRectF boundingRectFor(const class QRectF &)
extern "C"
void C_ZNK19QGraphicsBlurEffect15boundingRectForERK6QRectF(void *this_, const QRectF & rect) {
  /*return*/ ((QGraphicsBlurEffect*)this_)->boundingRectFor(rect);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:172
// qreal blurRadius()
extern "C"
void C_ZNK19QGraphicsBlurEffect10blurRadiusEv(void *this_) {
  /*return*/ ((QGraphicsBlurEffect*)this_)->blurRadius();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:173
// BlurHints blurHints()
extern "C"
void C_ZNK19QGraphicsBlurEffect9blurHintsEv(void *this_) {
  /*return*/ ((QGraphicsBlurEffect*)this_)->blurHints();
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:176
// void setBlurRadius(qreal)
extern "C"
void C_ZN19QGraphicsBlurEffect13setBlurRadiusEd(void *this_, qreal blurRadius) {
  ((QGraphicsBlurEffect*)this_)->setBlurRadius(blurRadius);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:177
// void setBlurHints(BlurHints)
extern "C"
void C_ZN19QGraphicsBlurEffect12setBlurHintsE6QFlagsINS_8BlurHintEE(void *this_, QFlags<QGraphicsBlurEffect::BlurHint> hints) {
  ((QGraphicsBlurEffect*)this_)->setBlurHints(hints);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:180
// void blurRadiusChanged(qreal)
extern "C"
void C_ZN19QGraphicsBlurEffect17blurRadiusChangedEd(void *this_, qreal blurRadius) {
  ((QGraphicsBlurEffect*)this_)->blurRadiusChanged(blurRadius);
}
// /usr/include/qt/QtWidgets/qgraphicseffect.h:181
// void blurHintsChanged(BlurHints)
extern "C"
void C_ZN19QGraphicsBlurEffect16blurHintsChangedE6QFlagsINS_8BlurHintEE(void *this_, QFlags<QGraphicsBlurEffect::BlurHint> hints) {
  ((QGraphicsBlurEffect*)this_)->blurHintsChanged(hints);
}
//  main block end
