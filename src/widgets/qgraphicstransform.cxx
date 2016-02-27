// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtWidgets/qgraphicstransform.h
// dst-file: /src/widgets/qgraphicstransform.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qgraphicstransform.h>


#include <qvector3d.h>
#include <qglobal.h>
// <= header block end

// main block begin =>
void __keep_qgraphicstransform_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QGraphicsRotation_Class_Size()
{
  return sizeof(QGraphicsRotation);
}

extern "C"
int QGraphicsScale_Class_Size()
{
  return sizeof(QGraphicsScale);
}

extern "C"
int QGraphicsTransform_Class_Size()
{
  return sizeof(QGraphicsTransform);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 136, column 10>
//   // proto:  void QGraphicsRotation::angleChanged();
// _ZN17QGraphicsRotation12angleChangedEv angleChanged()
extern "C"
void
C_ZN17QGraphicsRotation12angleChangedEv(void *qthis) {
  ((QGraphicsRotation*)qthis)->angleChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 122, column 15>
//   // proto:  QVector3D QGraphicsRotation::origin();
// _ZNK17QGraphicsRotation6originEv origin()
extern "C"
QVector3D*
C_ZNK17QGraphicsRotation6originEv(void *qthis) {
  auto ret =
  ((QGraphicsRotation*)qthis)->origin();
  return new QVector3D(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 126, column 10>
//   // proto:  void QGraphicsRotation::setAngle(qreal );
// _ZN17QGraphicsRotation8setAngleEd setAngle(qreal)
extern "C"
void
C_ZN17QGraphicsRotation8setAngleEd(void *qthis,
qreal arg1) {
  ((QGraphicsRotation*)qthis)->setAngle(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 119, column 5>
//   // proto:  void QGraphicsRotation::QGraphicsRotation(QObject * parent);
extern "C"
QGraphicsRotation*
C_ZN17QGraphicsRotationC2EP7QObject(QObject * arg1) {
  auto ret = new QGraphicsRotation(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 130, column 10>
//   // proto:  void QGraphicsRotation::setAxis(Qt::Axis axis);
// _ZN17QGraphicsRotation7setAxisEN2Qt4AxisE setAxis(Qt::Axis)
extern "C"
void
C_ZN17QGraphicsRotation7setAxisEN2Qt4AxisE(void *qthis,
Qt::Axis* arg1) {
  ((QGraphicsRotation*)qthis)->setAxis(*((Qt::Axis*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 113, column 5>
//   // proto:  const QMetaObject * QGraphicsRotation::metaObject();
// _ZNK17QGraphicsRotation10metaObjectEv metaObject()
extern "C"
void*
C_ZNK17QGraphicsRotation10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsRotation*)qthis)->metaObject();
  return (void*)ret;
}
//   // proto:  void QGraphicsRotation::~QGraphicsRotation();
extern "C"
void C_ZN17QGraphicsRotationD2Ev(void *qthis) {
  delete (QGraphicsRotation*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 123, column 10>
//   // proto:  void QGraphicsRotation::setOrigin(const QVector3D & point);
// _ZN17QGraphicsRotation9setOriginERK9QVector3D setOrigin(const class QVector3D &)
extern "C"
void
C_ZN17QGraphicsRotation9setOriginERK9QVector3D(void *qthis,
const QVector3D* arg1) {
  ((QGraphicsRotation*)qthis)->setOrigin(*((const QVector3D*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 128, column 15>
//   // proto:  QVector3D QGraphicsRotation::axis();
// _ZNK17QGraphicsRotation4axisEv axis()
extern "C"
QVector3D*
C_ZNK17QGraphicsRotation4axisEv(void *qthis) {
  auto ret =
  ((QGraphicsRotation*)qthis)->axis();
  return new QVector3D(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 132, column 10>
//   // proto:  void QGraphicsRotation::applyTo(QMatrix4x4 * matrix);
// _ZNK17QGraphicsRotation7applyToEP10QMatrix4x4 applyTo(class QMatrix4x4 *)
extern "C"
void
C_ZNK17QGraphicsRotation7applyToEP10QMatrix4x4(void *qthis,
QMatrix4x4 * arg1) {
  ((QGraphicsRotation*)qthis)->applyTo(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 129, column 10>
//   // proto:  void QGraphicsRotation::setAxis(const QVector3D & axis);
// _ZN17QGraphicsRotation7setAxisERK9QVector3D setAxis(const class QVector3D &)
extern "C"
void
C_ZN17QGraphicsRotation7setAxisERK9QVector3D(void *qthis,
const QVector3D* arg1) {
  ((QGraphicsRotation*)qthis)->setAxis(*((const QVector3D*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 125, column 11>
//   // proto:  qreal QGraphicsRotation::angle();
// _ZNK17QGraphicsRotation5angleEv angle()
extern "C"
double
C_ZNK17QGraphicsRotation5angleEv(void *qthis) {
  auto ret =
  ((QGraphicsRotation*)qthis)->angle();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 135, column 10>
//   // proto:  void QGraphicsRotation::originChanged();
// _ZN17QGraphicsRotation13originChangedEv originChanged()
extern "C"
void
C_ZN17QGraphicsRotation13originChangedEv(void *qthis) {
  ((QGraphicsRotation*)qthis)->originChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 137, column 10>
//   // proto:  void QGraphicsRotation::axisChanged();
// _ZN17QGraphicsRotation11axisChangedEv axisChanged()
extern "C"
void
C_ZN17QGraphicsRotation11axisChangedEv(void *qthis) {
  ((QGraphicsRotation*)qthis)->axisChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 96, column 10>
//   // proto:  void QGraphicsScale::applyTo(QMatrix4x4 * matrix);
// _ZNK14QGraphicsScale7applyToEP10QMatrix4x4 applyTo(class QMatrix4x4 *)
extern "C"
void
C_ZNK14QGraphicsScale7applyToEP10QMatrix4x4(void *qthis,
QMatrix4x4 * arg1) {
  ((QGraphicsScale*)qthis)->applyTo(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 93, column 11>
//   // proto:  qreal QGraphicsScale::zScale();
// _ZNK14QGraphicsScale6zScaleEv zScale()
extern "C"
double
C_ZNK14QGraphicsScale6zScaleEv(void *qthis) {
  auto ret =
  ((QGraphicsScale*)qthis)->zScale();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 101, column 10>
//   // proto:  void QGraphicsScale::yScaleChanged();
// _ZN14QGraphicsScale13yScaleChangedEv yScaleChanged()
extern "C"
void
C_ZN14QGraphicsScale13yScaleChangedEv(void *qthis) {
  ((QGraphicsScale*)qthis)->yScaleChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 99, column 10>
//   // proto:  void QGraphicsScale::originChanged();
// _ZN14QGraphicsScale13originChangedEv originChanged()
extern "C"
void
C_ZN14QGraphicsScale13originChangedEv(void *qthis) {
  ((QGraphicsScale*)qthis)->originChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 87, column 11>
//   // proto:  qreal QGraphicsScale::xScale();
// _ZNK14QGraphicsScale6xScaleEv xScale()
extern "C"
double
C_ZNK14QGraphicsScale6xScaleEv(void *qthis) {
  auto ret =
  ((QGraphicsScale*)qthis)->xScale();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 90, column 11>
//   // proto:  qreal QGraphicsScale::yScale();
// _ZNK14QGraphicsScale6yScaleEv yScale()
extern "C"
double
C_ZNK14QGraphicsScale6yScaleEv(void *qthis) {
  auto ret =
  ((QGraphicsScale*)qthis)->yScale();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 85, column 10>
//   // proto:  void QGraphicsScale::setOrigin(const QVector3D & point);
// _ZN14QGraphicsScale9setOriginERK9QVector3D setOrigin(const class QVector3D &)
extern "C"
void
C_ZN14QGraphicsScale9setOriginERK9QVector3D(void *qthis,
const QVector3D* arg1) {
  ((QGraphicsScale*)qthis)->setOrigin(*((const QVector3D*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 91, column 10>
//   // proto:  void QGraphicsScale::setYScale(qreal );
// _ZN14QGraphicsScale9setYScaleEd setYScale(qreal)
extern "C"
void
C_ZN14QGraphicsScale9setYScaleEd(void *qthis,
qreal arg1) {
  ((QGraphicsScale*)qthis)->setYScale(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 84, column 15>
//   // proto:  QVector3D QGraphicsScale::origin();
// _ZNK14QGraphicsScale6originEv origin()
extern "C"
QVector3D*
C_ZNK14QGraphicsScale6originEv(void *qthis) {
  auto ret =
  ((QGraphicsScale*)qthis)->origin();
  return new QVector3D(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 103, column 10>
//   // proto:  void QGraphicsScale::scaleChanged();
// _ZN14QGraphicsScale12scaleChangedEv scaleChanged()
extern "C"
void
C_ZN14QGraphicsScale12scaleChangedEv(void *qthis) {
  ((QGraphicsScale*)qthis)->scaleChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 94, column 10>
//   // proto:  void QGraphicsScale::setZScale(qreal );
// _ZN14QGraphicsScale9setZScaleEd setZScale(qreal)
extern "C"
void
C_ZN14QGraphicsScale9setZScaleEd(void *qthis,
qreal arg1) {
  ((QGraphicsScale*)qthis)->setZScale(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 88, column 10>
//   // proto:  void QGraphicsScale::setXScale(qreal );
// _ZN14QGraphicsScale9setXScaleEd setXScale(qreal)
extern "C"
void
C_ZN14QGraphicsScale9setXScaleEd(void *qthis,
qreal arg1) {
  ((QGraphicsScale*)qthis)->setXScale(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 100, column 10>
//   // proto:  void QGraphicsScale::xScaleChanged();
// _ZN14QGraphicsScale13xScaleChangedEv xScaleChanged()
extern "C"
void
C_ZN14QGraphicsScale13xScaleChangedEv(void *qthis) {
  ((QGraphicsScale*)qthis)->xScaleChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 102, column 10>
//   // proto:  void QGraphicsScale::zScaleChanged();
// _ZN14QGraphicsScale13zScaleChangedEv zScaleChanged()
extern "C"
void
C_ZN14QGraphicsScale13zScaleChangedEv(void *qthis) {
  ((QGraphicsScale*)qthis)->zScaleChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 74, column 5>
//   // proto:  const QMetaObject * QGraphicsScale::metaObject();
// _ZNK14QGraphicsScale10metaObjectEv metaObject()
extern "C"
void*
C_ZNK14QGraphicsScale10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsScale*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 81, column 5>
//   // proto:  void QGraphicsScale::QGraphicsScale(QObject * parent);
extern "C"
QGraphicsScale*
C_ZN14QGraphicsScaleC2EP7QObject(QObject * arg1) {
  auto ret = new QGraphicsScale(arg1);
  return ret;
}
//   // proto:  void QGraphicsScale::~QGraphicsScale();
extern "C"
void C_ZN14QGraphicsScaleD2Ev(void *qthis) {
  delete (QGraphicsScale*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 56, column 18>
//   // proto:  void QGraphicsTransform::applyTo(QMatrix4x4 * matrix);
// _ZNK18QGraphicsTransform7applyToEP10QMatrix4x4 applyTo(class QMatrix4x4 *)
extern "C"
void
C_ZNK18QGraphicsTransform7applyToEP10QMatrix4x4(void *qthis,
QMatrix4x4 * arg1) {
  ((QGraphicsTransform*)qthis)->applyTo(arg1);
}
//   // proto:  void QGraphicsTransform::~QGraphicsTransform();
extern "C"
void C_ZN18QGraphicsTransformD2Ev(void *qthis) {
  delete (QGraphicsTransform*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 53, column 5>
//   // proto:  void QGraphicsTransform::QGraphicsTransform(QObject * parent);
extern "C"
QGraphicsTransform*
C_ZN18QGraphicsTransformC2EP7QObject(QObject * arg1) {
  // auto ret = new QGraphicsTransform(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qgraphicstransform.h', line 51, column 5>
//   // proto:  const QMetaObject * QGraphicsTransform::metaObject();
// _ZNK18QGraphicsTransform10metaObjectEv metaObject()
extern "C"
void*
C_ZNK18QGraphicsTransform10metaObjectEv(void *qthis) {
  auto ret =
  ((QGraphicsTransform*)qthis)->metaObject();
  return (void*)ret;
}
// <= ext block end

// body block begin =>
// QGraphicsRotation_SlotProxy here
class QGraphicsRotation_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsRotation_SlotProxy():QObject(){}

public slots:
  // angleChanged()
  void slot_proxy_func__ZN17QGraphicsRotation12angleChangedEv();
public:
  void (*slot_func__ZN17QGraphicsRotation12angleChangedEv)(void* rsfptr) = NULL;
public slots:
  // axisChanged()
  void slot_proxy_func__ZN17QGraphicsRotation11axisChangedEv();
public:
  void (*slot_func__ZN17QGraphicsRotation11axisChangedEv)(void* rsfptr) = NULL;
public slots:
  // originChanged()
  void slot_proxy_func__ZN17QGraphicsRotation13originChangedEv();
public:
  void (*slot_func__ZN17QGraphicsRotation13originChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsRotation_SlotProxy* QGraphicsRotation_SlotProxy_new()
  {
    return new QGraphicsRotation_SlotProxy();
  }
};

void QGraphicsRotation_SlotProxy::slot_proxy_func__ZN17QGraphicsRotation12angleChangedEv() {
  if (this->slot_func__ZN17QGraphicsRotation12angleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsRotation12angleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsRotation_SlotProxy_connect__ZN17QGraphicsRotation12angleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsRotation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsRotation12angleChangedEv = (decltype(that->slot_func__ZN17QGraphicsRotation12angleChangedEv))ffifptr;
  QObject::connect((QGraphicsRotation*)sender, SIGNAL(angleChanged()), that, SLOT(slot_proxy_func__ZN17QGraphicsRotation12angleChangedEv()));
  return that;
}
extern "C"
void QGraphicsRotation_SlotProxy_disconnect__ZN17QGraphicsRotation12angleChangedEv(QGraphicsRotation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsRotation_SlotProxy::slot_proxy_func__ZN17QGraphicsRotation11axisChangedEv() {
  if (this->slot_func__ZN17QGraphicsRotation11axisChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsRotation11axisChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsRotation_SlotProxy_connect__ZN17QGraphicsRotation11axisChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsRotation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsRotation11axisChangedEv = (decltype(that->slot_func__ZN17QGraphicsRotation11axisChangedEv))ffifptr;
  QObject::connect((QGraphicsRotation*)sender, SIGNAL(axisChanged()), that, SLOT(slot_proxy_func__ZN17QGraphicsRotation11axisChangedEv()));
  return that;
}
extern "C"
void QGraphicsRotation_SlotProxy_disconnect__ZN17QGraphicsRotation11axisChangedEv(QGraphicsRotation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsRotation_SlotProxy::slot_proxy_func__ZN17QGraphicsRotation13originChangedEv() {
  if (this->slot_func__ZN17QGraphicsRotation13originChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN17QGraphicsRotation13originChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsRotation_SlotProxy_connect__ZN17QGraphicsRotation13originChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsRotation_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN17QGraphicsRotation13originChangedEv = (decltype(that->slot_func__ZN17QGraphicsRotation13originChangedEv))ffifptr;
  QObject::connect((QGraphicsRotation*)sender, SIGNAL(originChanged()), that, SLOT(slot_proxy_func__ZN17QGraphicsRotation13originChangedEv()));
  return that;
}
extern "C"
void QGraphicsRotation_SlotProxy_disconnect__ZN17QGraphicsRotation13originChangedEv(QGraphicsRotation_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsScale_SlotProxy here
class QGraphicsScale_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsScale_SlotProxy():QObject(){}

public slots:
  // scaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale12scaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale12scaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // originChanged()
  void slot_proxy_func__ZN14QGraphicsScale13originChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13originChangedEv)(void* rsfptr) = NULL;
public slots:
  // zScaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale13zScaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13zScaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // yScaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale13yScaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13yScaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // xScaleChanged()
  void slot_proxy_func__ZN14QGraphicsScale13xScaleChangedEv();
public:
  void (*slot_func__ZN14QGraphicsScale13xScaleChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};

extern "C" {
  QGraphicsScale_SlotProxy* QGraphicsScale_SlotProxy_new()
  {
    return new QGraphicsScale_SlotProxy();
  }
};

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale12scaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale12scaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale12scaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale12scaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale12scaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale12scaleChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(scaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale12scaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale12scaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13originChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13originChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13originChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13originChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale13originChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13originChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(originChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13originChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13originChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13zScaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13zScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13zScaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13zScaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale13zScaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13zScaleChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(zScaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13zScaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13zScaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13yScaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13yScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13yScaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13yScaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale13yScaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13yScaleChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(yScaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13yScaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13yScaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QGraphicsScale_SlotProxy::slot_proxy_func__ZN14QGraphicsScale13xScaleChangedEv() {
  if (this->slot_func__ZN14QGraphicsScale13xScaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN14QGraphicsScale13xScaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QGraphicsScale_SlotProxy_connect__ZN14QGraphicsScale13xScaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QGraphicsScale_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN14QGraphicsScale13xScaleChangedEv = (decltype(that->slot_func__ZN14QGraphicsScale13xScaleChangedEv))ffifptr;
  QObject::connect((QGraphicsScale*)sender, SIGNAL(xScaleChanged()), that, SLOT(slot_proxy_func__ZN14QGraphicsScale13xScaleChangedEv()));
  return that;
}
extern "C"
void QGraphicsScale_SlotProxy_disconnect__ZN14QGraphicsScale13xScaleChangedEv(QGraphicsScale_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// QGraphicsTransform_SlotProxy here
class QGraphicsTransform_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QGraphicsTransform_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qgraphicstransform.moc"

extern "C" {
  QGraphicsTransform_SlotProxy* QGraphicsTransform_SlotProxy_new()
  {
    return new QGraphicsTransform_SlotProxy();
  }
};

// <= body block end

