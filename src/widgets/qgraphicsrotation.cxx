//  header block begin
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#endif
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsRotation is pure virtual: false
// QGraphicsRotation has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsRotation : public QGraphicsRotation {
public:
  virtual ~MyQGraphicsRotation() {}
// void QGraphicsRotation(class QObject *)
MyQGraphicsRotation(QObject * parent) : QGraphicsRotation(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:120
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRotation10metaObjectEv(void *this_) {
  return (void*)((QGraphicsRotation*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:126
// [-2] void QGraphicsRotation(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QGraphicsRotationC2EP7QObject(QObject * parent) {
  return  new QGraphicsRotation(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:127
// [-2] void ~QGraphicsRotation()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotationD2Ev(void *this_) {
  delete (QGraphicsRotation*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:129
// [12] QVector3D origin()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRotation6originEv(void *this_) {
  auto rv = ((QGraphicsRotation*)this_)->origin();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:130
// [-2] void setOrigin(const class QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation9setOriginERK9QVector3D(void *this_, QVector3D* point) {
  ((QGraphicsRotation*)this_)->setOrigin(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:132
// [8] qreal angle()
extern "C" Q_DECL_EXPORT
qreal C_ZNK17QGraphicsRotation5angleEv(void *this_) {
  return (qreal)((QGraphicsRotation*)this_)->angle();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:133
// [-2] void setAngle(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation8setAngleEd(void *this_, qreal arg0) {
  ((QGraphicsRotation*)this_)->setAngle(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:135
// [12] QVector3D axis()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QGraphicsRotation4axisEv(void *this_) {
  auto rv = ((QGraphicsRotation*)this_)->axis();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:136
// [-2] void setAxis(const class QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation7setAxisERK9QVector3D(void *this_, QVector3D* axis) {
  ((QGraphicsRotation*)this_)->setAxis(*axis);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:137
// [-2] void setAxis(Qt::Axis)
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation7setAxisEN2Qt4AxisE(void *this_, Qt::Axis axis) {
  ((QGraphicsRotation*)this_)->setAxis(axis);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:139
// [-2] void applyTo(class QMatrix4x4 *)
extern "C" Q_DECL_EXPORT
void C_ZNK17QGraphicsRotation7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsRotation*)this_)->applyTo(matrix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:142
// [-2] void originChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation13originChangedEv(void *this_) {
  ((QGraphicsRotation*)this_)->originChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:143
// [-2] void angleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation12angleChangedEv(void *this_) {
  ((QGraphicsRotation*)this_)->angleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:144
// [-2] void axisChanged()
extern "C" Q_DECL_EXPORT
void C_ZN17QGraphicsRotation11axisChangedEv(void *this_) {
  ((QGraphicsRotation*)this_)->axisChanged();
}

//  main block end
