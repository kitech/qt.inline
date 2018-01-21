//  header block begin
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#include <qgraphicstransform.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qgraphicstransform.h:119
// const QMetaObject * metaObject()
extern "C"
void C_ZNK17QGraphicsRotation10metaObjectEv(void *this_) {
  /*return*/ ((QGraphicsRotation*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:125
// void QGraphicsRotation(class QObject *)
extern "C"
void* C_ZN17QGraphicsRotationC1EP7QObject(QObject * parent) {
  return new QGraphicsRotation(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicstransform.h:126
// void ~QGraphicsRotation()
extern "C"
void C_ZN17QGraphicsRotationD1Ev(void *this_) {
  delete (QGraphicsRotation*)(this_);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:128
// QVector3D origin()
extern "C"
void C_ZNK17QGraphicsRotation6originEv(void *this_) {
  /*return*/ ((QGraphicsRotation*)this_)->origin();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:129
// void setOrigin(const class QVector3D &)
extern "C"
void C_ZN17QGraphicsRotation9setOriginERK9QVector3D(void *this_, const QVector3D & point) {
  ((QGraphicsRotation*)this_)->setOrigin(point);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:131
// qreal angle()
extern "C"
void C_ZNK17QGraphicsRotation5angleEv(void *this_) {
  /*return*/ ((QGraphicsRotation*)this_)->angle();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:132
// void setAngle(qreal)
extern "C"
void C_ZN17QGraphicsRotation8setAngleEd(void *this_, qreal arg0) {
  ((QGraphicsRotation*)this_)->setAngle(arg0);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:134
// QVector3D axis()
extern "C"
void C_ZNK17QGraphicsRotation4axisEv(void *this_) {
  /*return*/ ((QGraphicsRotation*)this_)->axis();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:135
// void setAxis(const class QVector3D &)
extern "C"
void C_ZN17QGraphicsRotation7setAxisERK9QVector3D(void *this_, const QVector3D & axis) {
  ((QGraphicsRotation*)this_)->setAxis(axis);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:136
// void setAxis(Qt::Axis)
extern "C"
void C_ZN17QGraphicsRotation7setAxisEN2Qt4AxisE(void *this_, Qt::Axis axis) {
  ((QGraphicsRotation*)this_)->setAxis(axis);
}
// virtual
// /usr/include/qt/QtWidgets/qgraphicstransform.h:138
// void applyTo(class QMatrix4x4 *)
extern "C"
void C_ZNK17QGraphicsRotation7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsRotation*)this_)->applyTo(matrix);
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:141
// void originChanged()
extern "C"
void C_ZN17QGraphicsRotation13originChangedEv(void *this_) {
  ((QGraphicsRotation*)this_)->originChanged();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:142
// void angleChanged()
extern "C"
void C_ZN17QGraphicsRotation12angleChangedEv(void *this_) {
  ((QGraphicsRotation*)this_)->angleChanged();
}
// /usr/include/qt/QtWidgets/qgraphicstransform.h:143
// void axisChanged()
extern "C"
void C_ZN17QGraphicsRotation11axisChangedEv(void *this_) {
  ((QGraphicsRotation*)this_)->axisChanged();
}
//  main block end
