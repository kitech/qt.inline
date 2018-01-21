//  header block begin
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#include <qgraphicstransform.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgraphicstransform.h:80
// const QMetaObject * metaObject()
extern "C"
void C_ZNK14QGraphicsScale10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsScale*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:87
// void QGraphicsScale(class QObject *)
extern "C"
void* C_ZN14QGraphicsScaleC1EP7QObject(QObject * parent) {
  return new QGraphicsScale(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicstransform.h:88
// void ~QGraphicsScale()
extern "C"
void C_ZN14QGraphicsScaleD1Ev(void *this_) {
  delete (QGraphicsScale*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:90
// QVector3D origin()
extern "C"
void C_ZNK14QGraphicsScale6originEv(void *this_) {
  /*return*/ ((QGraphicsScale*)this_)->origin();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:91
// void setOrigin(const class QVector3D &)
extern "C"
void C_ZN14QGraphicsScale9setOriginERK9QVector3D(void *this_, const QVector3D & point) {
  ((QGraphicsScale*)this_)->setOrigin(point);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:93
// qreal xScale()
extern "C"
void C_ZNK14QGraphicsScale6xScaleEv(void *this_) {
  /*return*/ ((QGraphicsScale*)this_)->xScale();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:94
// void setXScale(qreal)
extern "C"
void C_ZN14QGraphicsScale9setXScaleEd(void *this_, qreal arg0) {
  ((QGraphicsScale*)this_)->setXScale(arg0);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:96
// qreal yScale()
extern "C"
void C_ZNK14QGraphicsScale6yScaleEv(void *this_) {
  /*return*/ ((QGraphicsScale*)this_)->yScale();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:97
// void setYScale(qreal)
extern "C"
void C_ZN14QGraphicsScale9setYScaleEd(void *this_, qreal arg0) {
  ((QGraphicsScale*)this_)->setYScale(arg0);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:99
// qreal zScale()
extern "C"
void C_ZNK14QGraphicsScale6zScaleEv(void *this_) {
  /*return*/ ((QGraphicsScale*)this_)->zScale();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:100
// void setZScale(qreal)
extern "C"
void C_ZN14QGraphicsScale9setZScaleEd(void *this_, qreal arg0) {
  ((QGraphicsScale*)this_)->setZScale(arg0);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicstransform.h:102
// void applyTo(class QMatrix4x4 *)
extern "C"
void C_ZNK14QGraphicsScale7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsScale*)this_)->applyTo(matrix);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:105
// void originChanged()
extern "C"
void C_ZN14QGraphicsScale13originChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->originChanged();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:106
// void xScaleChanged()
extern "C"
void C_ZN14QGraphicsScale13xScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->xScaleChanged();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:107
// void yScaleChanged()
extern "C"
void C_ZN14QGraphicsScale13yScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->yScaleChanged();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:108
// void zScaleChanged()
extern "C"
void C_ZN14QGraphicsScale13zScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->zScaleChanged();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:109
// void scaleChanged()
extern "C"
void C_ZN14QGraphicsScale12scaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->scaleChanged();
}
//  main block end
