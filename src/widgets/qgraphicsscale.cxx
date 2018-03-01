//  header block begin
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#endif
#include <qgraphicstransform.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QGraphicsScale is pure virtual: false
// QGraphicsScale has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQGraphicsScale : public QGraphicsScale {
public:
  virtual ~MyQGraphicsScale() {}
// void QGraphicsScale(class QObject *)
MyQGraphicsScale(QObject * parent) : QGraphicsScale(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScale10metaObjectEv(void *this_) {
  return (void*)((QGraphicsScale*)this_)->metaObject();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:88
// [-2] void QGraphicsScale(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScaleC2EP7QObject(QObject * parent) {
  return  new QGraphicsScale(parent);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:89
// [-2] void ~QGraphicsScale()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScaleD2Ev(void *this_) {
  delete (QGraphicsScale*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:91
// [12] QVector3D origin()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScale6originEv(void *this_) {
  auto rv = ((QGraphicsScale*)this_)->origin();
return new QVector3D(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:92
// [-2] void setOrigin(const class QVector3D &)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale9setOriginERK9QVector3D(void *this_, QVector3D* point) {
  ((QGraphicsScale*)this_)->setOrigin(*point);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:94
// [8] qreal xScale()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGraphicsScale6xScaleEv(void *this_) {
  return (qreal)((QGraphicsScale*)this_)->xScale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:95
// [-2] void setXScale(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale9setXScaleEd(void *this_, qreal arg0) {
  ((QGraphicsScale*)this_)->setXScale(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:97
// [8] qreal yScale()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGraphicsScale6yScaleEv(void *this_) {
  return (qreal)((QGraphicsScale*)this_)->yScale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:98
// [-2] void setYScale(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale9setYScaleEd(void *this_, qreal arg0) {
  ((QGraphicsScale*)this_)->setYScale(arg0);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:100
// [8] qreal zScale()
extern "C" Q_DECL_EXPORT
qreal C_ZNK14QGraphicsScale6zScaleEv(void *this_) {
  return (qreal)((QGraphicsScale*)this_)->zScale();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:101
// [-2] void setZScale(qreal)
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale9setZScaleEd(void *this_, qreal arg0) {
  ((QGraphicsScale*)this_)->setZScale(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:103
// [-2] void applyTo(class QMatrix4x4 *)
extern "C" Q_DECL_EXPORT
void C_ZNK14QGraphicsScale7applyToEP10QMatrix4x4(void *this_, QMatrix4x4 * matrix) {
  ((QGraphicsScale*)this_)->applyTo(matrix);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:106
// [-2] void originChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13originChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->originChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:107
// [-2] void xScaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13xScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->xScaleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:108
// [-2] void yScaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13yScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->yScaleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:109
// [-2] void zScaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13zScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->zScaleChanged();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:110
// [-2] void scaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale12scaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->scaleChanged();
}

//  main block end
