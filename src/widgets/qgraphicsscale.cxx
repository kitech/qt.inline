//  header block begin
// since 0x040600
// /usr/include/qt/QtWidgets/qgraphicstransform.h
#ifndef protected
#define protected public
#define private public
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
// void QGraphicsScale(QObject *)
MyQGraphicsScale(QObject * parent) : QGraphicsScale(parent) {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK14QGraphicsScale10metaObjectEv(void *this_) {
  return (void*)((QGraphicsScale*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScale11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QGraphicsScale*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN14QGraphicsScale11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QGraphicsScale*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScale2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsScale::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:81
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN14QGraphicsScale6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QGraphicsScale::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:88
// [-2] void QGraphicsScale(QObject *)
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
// [-2] void setOrigin(const QVector3D &)
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
// [-2] void applyTo(QMatrix4x4 *)
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
// since 4.7
// /usr/include/qt/QtWidgets/qgraphicstransform.h:107
// [-2] void xScaleChanged()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13xScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->xScaleChanged();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qgraphicstransform.h:108
// [-2] void yScaleChanged()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13yScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->yScaleChanged();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// since 4.7
// /usr/include/qt/QtWidgets/qgraphicstransform.h:109
// [-2] void zScaleChanged()
#if QT_VERSION >= 0x040700
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale13zScaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->zScaleChanged();
}
#endif // QT_VERSION >= 0x040700

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicstransform.h:110
// [-2] void scaleChanged()
extern "C" Q_DECL_EXPORT
void C_ZN14QGraphicsScale12scaleChangedEv(void *this_) {
  ((QGraphicsScale*)this_)->scaleChanged();
}

//  main block end
