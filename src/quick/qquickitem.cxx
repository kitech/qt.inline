// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/qquickitem.h
// dst-file: /src/quick/qquickitem.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qquickitem.h>


#include <qglobal.h>
#include <qvariant.h>
#include <qquickitem.h>
#include <qqmllist.h>
#include <qpoint.h>
#include <qrect.h>
#include <qcursor.h>
#include <qlist.h>
#include <qnetworkinterface.h>
#include <qtransform.h>
#include <qquickitemgrabresult.h>
#include <qsharedpointer.h>
#include <qnamespace.h>
#include <qstring.h>
// <= header block end

// main block begin =>
void __keep_qquickitem_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QQuickTransform_Class_Size()
{
  return sizeof(QQuickTransform);
}

extern "C"
int QQuickItem_Class_Size()
{
  return sizeof(QQuickItem);
}

// <= use block end

// ext block begin =>
//   // proto:  void QQuickTransform::~QQuickTransform();
extern "C"
void C_ZN15QQuickTransformD2Ev(void *qthis) {
  delete (QQuickTransform*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 54, column 5>
//   // proto:  const QMetaObject * QQuickTransform::metaObject();
// _ZNK15QQuickTransform10metaObjectEv metaObject()
extern "C"
void*
C_ZNK15QQuickTransform10metaObjectEv(void *qthis) {
  auto ret =
  ((QQuickTransform*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 56, column 5>
//   // proto:  void QQuickTransform::QQuickTransform(QObject * parent);
extern "C"
QQuickTransform*
C_ZN15QQuickTransformC2EP7QObject(QObject * arg1) {
  // auto ret = new QQuickTransform(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 59, column 10>
//   // proto:  void QQuickTransform::appendToItem(QQuickItem * );
// _ZN15QQuickTransform12appendToItemEP10QQuickItem appendToItem(class QQuickItem *)
extern "C"
void
C_ZN15QQuickTransform12appendToItemEP10QQuickItem(void *qthis,
QQuickItem * arg1) {
  ((QQuickTransform*)qthis)->appendToItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 62, column 18>
//   // proto:  void QQuickTransform::applyTo(QMatrix4x4 * matrix);
// _ZNK15QQuickTransform7applyToEP10QMatrix4x4 applyTo(class QMatrix4x4 *)
extern "C"
void
C_ZNK15QQuickTransform7applyToEP10QMatrix4x4(void *qthis,
QMatrix4x4 * arg1) {
  ((QQuickTransform*)qthis)->applyTo(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 60, column 10>
//   // proto:  void QQuickTransform::prependToItem(QQuickItem * );
// _ZN15QQuickTransform13prependToItemEP10QQuickItem prependToItem(class QQuickItem *)
extern "C"
void
C_ZN15QQuickTransform13prependToItemEP10QQuickItem(void *qthis,
QQuickItem * arg1) {
  ((QQuickTransform*)qthis)->prependToItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 225, column 11>
//   // proto:  qreal QQuickItem::implicitWidth();
// _ZNK10QQuickItem13implicitWidthEv implicitWidth()
extern "C"
double
C_ZNK10QQuickItem13implicitWidthEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->implicitWidth();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 235, column 21>
//   // proto:  QQuickItem::TransformOrigin QQuickItem::transformOrigin();
// _ZNK10QQuickItem15transformOriginEv transformOrigin()
extern "C"
QQuickItem::TransformOrigin
C_ZNK10QQuickItem15transformOriginEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->transformOrigin();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 224, column 10>
//   // proto:  void QQuickItem::setImplicitWidth(qreal );
// _ZN10QQuickItem16setImplicitWidthEd setImplicitWidth(qreal)
extern "C"
void
C_ZN10QQuickItem16setImplicitWidthEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setImplicitWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 282, column 10>
//   // proto:  void QQuickItem::setAcceptedMouseButtons(Qt::MouseButtons buttons);
// _ZN10QQuickItem23setAcceptedMouseButtonsE6QFlagsIN2Qt11MouseButtonEE setAcceptedMouseButtons(Qt::MouseButtons)
extern "C"
void
C_ZN10QQuickItem23setAcceptedMouseButtonsE6QFlagsIN2Qt11MouseButtonEE(void *qthis,
Qt::MouseButtons* arg1) {
  ((QQuickItem*)qthis)->setAcceptedMouseButtons(*((Qt::MouseButtons*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 210, column 10>
//   // proto:  void QQuickItem::setBaselineOffset(qreal );
// _ZN10QQuickItem17setBaselineOffsetEd setBaselineOffset(qreal)
extern "C"
void
C_ZN10QQuickItem17setBaselineOffsetEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setBaselineOffset(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 223, column 10>
//   // proto:  void QQuickItem::resetWidth();
// _ZN10QQuickItem10resetWidthEv resetWidth()
extern "C"
void
C_ZN10QQuickItem10resetWidthEv(void *qthis) {
  ((QQuickItem*)qthis)->resetWidth();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 215, column 11>
//   // proto:  qreal QQuickItem::y();
// _ZNK10QQuickItem1yEv y()
extern "C"
double
C_ZNK10QQuickItem1yEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->y();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 348, column 10>
//   // proto:  void QQuickItem::childrenRectChanged(const QRectF & );
// _ZN10QQuickItem19childrenRectChangedERK6QRectF childrenRectChanged(const class QRectF &)
extern "C"
void
C_ZN10QQuickItem19childrenRectChangedERK6QRectF(void *qthis,
const QRectF* arg1) {
  ((QQuickItem*)qthis)->childrenRectChanged(*((const QRectF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 376, column 10>
//   // proto:  void QQuickItem::implicitHeightChanged();
// _ZN10QQuickItem21implicitHeightChangedEv implicitHeightChanged()
extern "C"
void
C_ZN10QQuickItem21implicitHeightChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->implicitHeightChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 331, column 22>
//   // proto:  QVariant QQuickItem::inputMethodQuery(Qt::InputMethodQuery query);
// _ZNK10QQuickItem16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
extern "C"
QVariant*
C_ZNK10QQuickItem16inputMethodQueryEN2Qt16InputMethodQueryE(void *qthis,
Qt::InputMethodQuery* arg1) {
  auto ret =
  ((QQuickItem*)qthis)->inputMethodQuery(*((Qt::InputMethodQuery*)arg1));
  return new QVariant(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 370, column 10>
//   // proto:  void QQuickItem::xChanged();
// _ZN10QQuickItem8xChangedEv xChanged()
extern "C"
void
C_ZN10QQuickItem8xChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->xChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 267, column 11>
//   // proto:  Flags QQuickItem::flags();
// _ZNK10QQuickItem5flagsEv flags()
extern "C"
QFlags<QQuickItem::Flag>*
C_ZNK10QQuickItem5flagsEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->flags();
  return new QFlags<QQuickItem::Flag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 358, column 10>
//   // proto:  void QQuickItem::clipChanged(bool );
// _ZN10QQuickItem11clipChangedEb clipChanged(_Bool)
extern "C"
void
C_ZN10QQuickItem11clipChangedEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->clipChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 325, column 22>
//   // proto:  void QQuickItem::forceActiveFocus();
// _ZN10QQuickItem16forceActiveFocusEv forceActiveFocus()
extern "C"
void
C_ZN10QQuickItem16forceActiveFocusEv(void *qthis) {
  ((QQuickItem*)qthis)->forceActiveFocus();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 204, column 10>
//   // proto:  void QQuickItem::setClip(bool );
// _ZN10QQuickItem7setClipEb setClip(_Bool)
extern "C"
void
C_ZN10QQuickItem7setClipEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setClip(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 228, column 10>
//   // proto:  void QQuickItem::setHeight(qreal );
// _ZN10QQuickItem9setHeightEd setHeight(qreal)
extern "C"
void
C_ZN10QQuickItem9setHeightEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setHeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 218, column 10>
//   // proto:  void QQuickItem::setY(qreal );
// _ZN10QQuickItem4setYEd setY(qreal)
extern "C"
void
C_ZN10QQuickItem4setYEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setY(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 243, column 11>
//   // proto:  qreal QQuickItem::rotation();
// _ZNK10QQuickItem8rotationEv rotation()
extern "C"
double
C_ZNK10QQuickItem8rotationEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->rotation();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 248, column 11>
//   // proto:  qreal QQuickItem::opacity();
// _ZNK10QQuickItem7opacityEv opacity()
extern "C"
double
C_ZNK10QQuickItem7opacityEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->opacity();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 277, column 10>
//   // proto:  void QQuickItem::setFocus(bool focus, Qt::FocusReason reason);
// _ZN10QQuickItem8setFocusEbN2Qt11FocusReasonE setFocus(_Bool, Qt::FocusReason)
extern "C"
void
C_ZN10QQuickItem8setFocusEbN2Qt11FocusReasonE(void *qthis,
bool arg1,
Qt::FocusReason* arg2) {
  ((QQuickItem*)qthis)->setFocus(arg1,
*((Qt::FocusReason*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 231, column 11>
//   // proto:  qreal QQuickItem::implicitHeight();
// _ZNK10QQuickItem14implicitHeightEv implicitHeight()
extern "C"
double
C_ZNK10QQuickItem14implicitHeightEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->implicitHeight();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 341, column 18>
//   // proto:  bool QQuickItem::isTextureProvider();
// _ZNK10QQuickItem17isTextureProviderEv isTextureProvider()
extern "C"
bool
C_ZNK10QQuickItem17isTextureProviderEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->isTextureProvider();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 368, column 10>
//   // proto:  void QQuickItem::scaleChanged();
// _ZN10QQuickItem12scaleChangedEv scaleChanged()
extern "C"
void
C_ZN10QQuickItem12scaleChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->scaleChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 375, column 10>
//   // proto:  void QQuickItem::implicitWidthChanged();
// _ZN10QQuickItem20implicitWidthChangedEv implicitWidthChanged()
extern "C"
void
C_ZN10QQuickItem20implicitWidthChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->implicitWidthChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 257, column 10>
//   // proto:  bool QQuickItem::smooth();
// _ZNK10QQuickItem6smoothEv smooth()
extern "C"
bool
C_ZNK10QQuickItem6smoothEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->smooth();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 212, column 39>
//   // proto:  QQmlListProperty<QQuickTransform> QQuickItem::transform();
// _ZN10QQuickItem9transformEv transform()
extern "C"
QQmlListProperty<QQuickTransform>*
C_ZN10QQuickItem9transformEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->transform();
  return new QQmlListProperty<QQuickTransform>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 197, column 10>
//   // proto:  void QQuickItem::stackBefore(const QQuickItem * );
// _ZN10QQuickItem11stackBeforeEPKS_ stackBefore(const class QQuickItem *)
extern "C"
void
C_ZN10QQuickItem11stackBeforeEPKS_(void *qthis,
const QQuickItem * arg1) {
  ((QQuickItem*)qthis)->stackBefore(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 261, column 10>
//   // proto:  void QQuickItem::setActiveFocusOnTab(bool );
// _ZN10QQuickItem19setActiveFocusOnTabEb setActiveFocusOnTab(_Bool)
extern "C"
void
C_ZN10QQuickItem19setActiveFocusOnTabEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setActiveFocusOnTab(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 245, column 11>
//   // proto:  qreal QQuickItem::scale();
// _ZNK10QQuickItem5scaleEv scale()
extern "C"
double
C_ZNK10QQuickItem5scaleEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->scale();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 255, column 10>
//   // proto:  void QQuickItem::setEnabled(bool );
// _ZN10QQuickItem10setEnabledEb setEnabled(_Bool)
extern "C"
void
C_ZN10QQuickItem10setEnabledEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setEnabled(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 230, column 10>
//   // proto:  void QQuickItem::setImplicitHeight(qreal );
// _ZN10QQuickItem17setImplicitHeightEd setImplicitHeight(qreal)
extern "C"
void
C_ZN10QQuickItem17setImplicitHeightEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setImplicitHeight(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 219, column 10>
//   // proto:  void QQuickItem::setPosition(const QPointF & );
// _ZN10QQuickItem11setPositionERK7QPointF setPosition(const class QPointF &)
extern "C"
void
C_ZN10QQuickItem11setPositionERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QQuickItem*)qthis)->setPosition(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 258, column 10>
//   // proto:  void QQuickItem::setSmooth(bool );
// _ZN10QQuickItem9setSmoothEb setSmooth(_Bool)
extern "C"
void
C_ZN10QQuickItem9setSmoothEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setSmooth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 373, column 10>
//   // proto:  void QQuickItem::heightChanged();
// _ZN10QQuickItem13heightChangedEv heightChanged()
extern "C"
void
C_ZN10QQuickItem13heightChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->heightChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 371, column 10>
//   // proto:  void QQuickItem::yChanged();
// _ZN10QQuickItem8yChangedEv yChanged()
extern "C"
void
C_ZN10QQuickItem8yChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->yChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 317, column 13>
//   // proto:  QPointF QQuickItem::mapFromScene(const QPointF & point);
// _ZNK10QQuickItem12mapFromSceneERK7QPointF mapFromScene(const class QPointF &)
extern "C"
QPointF*
C_ZNK10QQuickItem12mapFromSceneERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QQuickItem*)qthis)->mapFromScene(*((const QPointF*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 357, column 10>
//   // proto:  void QQuickItem::antialiasingChanged(bool );
// _ZN10QQuickItem19antialiasingChangedEb antialiasingChanged(_Bool)
extern "C"
void
C_ZN10QQuickItem19antialiasingChangedEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->antialiasingChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 284, column 10>
//   // proto:  void QQuickItem::setAcceptHoverEvents(bool enabled);
// _ZN10QQuickItem20setAcceptHoverEventsEb setAcceptHoverEvents(_Bool)
extern "C"
void
C_ZN10QQuickItem20setAcceptHoverEventsEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setAcceptHoverEvents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 352, column 10>
//   // proto:  void QQuickItem::activeFocusChanged(bool );
// _ZN10QQuickItem18activeFocusChangedEb activeFocusChanged(_Bool)
extern "C"
void
C_ZN10QQuickItem18activeFocusChangedEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->activeFocusChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 372, column 10>
//   // proto:  void QQuickItem::widthChanged();
// _ZN10QQuickItem12widthChangedEv widthChanged()
extern "C"
void
C_ZN10QQuickItem12widthChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->widthChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 237, column 13>
//   // proto:  QPointF QQuickItem::transformOriginPoint();
// _ZNK10QQuickItem20transformOriginPointEv transformOriginPoint()
extern "C"
QPointF*
C_ZNK10QQuickItem20transformOriginPointEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->transformOriginPoint();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 207, column 10>
//   // proto:  void QQuickItem::setState(const QString & );
// _ZN10QQuickItem8setStateERK7QString setState(const class QString &)
extern "C"
void
C_ZN10QQuickItem8setStateERK7QString(void *qthis,
const QString* arg1) {
  ((QQuickItem*)qthis)->setState(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 195, column 17>
//   // proto:  QQuickItem * QQuickItem::parentItem();
// _ZNK10QQuickItem10parentItemEv parentItem()
extern "C"
void*
C_ZNK10QQuickItem10parentItemEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->parentItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 278, column 10>
//   // proto:  bool QQuickItem::isFocusScope();
// _ZNK10QQuickItem12isFocusScopeEv isFocusScope()
extern "C"
bool
C_ZNK10QQuickItem12isFocusScopeEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->isFocusScope();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 309, column 30>
//   // proto:  bool QQuickItem::contains(const QPointF & point);
// _ZNK10QQuickItem8containsERK7QPointF contains(const class QPointF &)
extern "C"
bool
C_ZNK10QQuickItem8containsERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QQuickItem*)qthis)->contains(*((const QPointF*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 271, column 20>
//   // proto:  QRectF QQuickItem::boundingRect();
// _ZNK10QQuickItem12boundingRectEv boundingRect()
extern "C"
QRectF*
C_ZNK10QQuickItem12boundingRectEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->boundingRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 265, column 10>
//   // proto:  void QQuickItem::resetAntialiasing();
// _ZN10QQuickItem17resetAntialiasingEv resetAntialiasing()
extern "C"
void
C_ZN10QQuickItem17resetAntialiasingEv(void *qthis) {
  ((QQuickItem*)qthis)->resetAntialiasing();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 314, column 12>
//   // proto:  QRectF QQuickItem::mapRectToItem(const QQuickItem * item, const QRectF & rect);
// _ZNK10QQuickItem13mapRectToItemEPKS_RK6QRectF mapRectToItem(const class QQuickItem *, const class QRectF &)
extern "C"
QRectF*
C_ZNK10QQuickItem13mapRectToItemEPKS_RK6QRectF(void *qthis,
const QQuickItem * arg1,
const QRectF* arg2) {
  auto ret =
  ((QQuickItem*)qthis)->mapRectToItem(arg1,
*((const QRectF*)arg2));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 214, column 11>
//   // proto:  qreal QQuickItem::x();
// _ZNK10QQuickItem1xEv x()
extern "C"
double
C_ZNK10QQuickItem1xEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->x();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 316, column 13>
//   // proto:  QPointF QQuickItem::mapFromItem(const QQuickItem * item, const QPointF & point);
// _ZNK10QQuickItem11mapFromItemEPKS_RK7QPointF mapFromItem(const class QQuickItem *, const class QPointF &)
extern "C"
QPointF*
C_ZNK10QQuickItem11mapFromItemEPKS_RK7QPointF(void *qthis,
const QQuickItem * arg1,
const QPointF* arg2) {
  auto ret =
  ((QQuickItem*)qthis)->mapFromItem(arg1,
*((const QPointF*)arg2));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 251, column 10>
//   // proto:  bool QQuickItem::isVisible();
// _ZNK10QQuickItem9isVisibleEv isVisible()
extern "C"
bool
C_ZNK10QQuickItem9isVisibleEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->isVisible();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 359, column 24>
//   // proto:  void QQuickItem::windowChanged(QQuickWindow * window);
// _ZN10QQuickItem13windowChangedEP12QQuickWindow windowChanged(class QQuickWindow *)
extern "C"
void
C_ZN10QQuickItem13windowChangedEP12QQuickWindow(void *qthis,
QQuickWindow * arg1) {
  ((QQuickItem*)qthis)->windowChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 342, column 33>
//   // proto:  QSGTextureProvider * QQuickItem::textureProvider();
// _ZNK10QQuickItem15textureProviderEv textureProvider()
extern "C"
void*
C_ZNK10QQuickItem15textureProviderEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->textureProvider();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 241, column 10>
//   // proto:  void QQuickItem::setZ(qreal );
// _ZN10QQuickItem4setZEd setZ(qreal)
extern "C"
void
C_ZN10QQuickItem4setZEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setZ(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 289, column 10>
//   // proto:  void QQuickItem::unsetCursor();
// _ZN10QQuickItem11unsetCursorEv unsetCursor()
extern "C"
void
C_ZN10QQuickItem11unsetCursorEv(void *qthis) {
  ((QQuickItem*)qthis)->unsetCursor();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 283, column 10>
//   // proto:  bool QQuickItem::acceptHoverEvents();
// _ZNK10QQuickItem17acceptHoverEventsEv acceptHoverEvents()
extern "C"
bool
C_ZNK10QQuickItem17acceptHoverEventsEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->acceptHoverEvents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 298, column 10>
//   // proto:  void QQuickItem::setFiltersChildMouseEvents(bool filter);
// _ZN10QQuickItem26setFiltersChildMouseEventsEb setFiltersChildMouseEvents(_Bool)
extern "C"
void
C_ZN10QQuickItem26setFiltersChildMouseEventsEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setFiltersChildMouseEvents(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 254, column 10>
//   // proto:  bool QQuickItem::isEnabled();
// _ZNK10QQuickItem9isEnabledEv isEnabled()
extern "C"
bool
C_ZNK10QQuickItem9isEnabledEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->isEnabled();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 312, column 13>
//   // proto:  QPointF QQuickItem::mapToItem(const QQuickItem * item, const QPointF & point);
// _ZNK10QQuickItem9mapToItemEPKS_RK7QPointF mapToItem(const class QQuickItem *, const class QPointF &)
extern "C"
QPointF*
C_ZNK10QQuickItem9mapToItemEPKS_RK7QPointF(void *qthis,
const QQuickItem * arg1,
const QPointF* arg2) {
  auto ret =
  ((QQuickItem*)qthis)->mapToItem(arg1,
*((const QPointF*)arg2));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 221, column 11>
//   // proto:  qreal QQuickItem::width();
// _ZNK10QQuickItem5widthEv width()
extern "C"
double
C_ZNK10QQuickItem5widthEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->width();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 313, column 13>
//   // proto:  QPointF QQuickItem::mapToScene(const QPointF & point);
// _ZNK10QQuickItem10mapToSceneERK7QPointF mapToScene(const class QPointF &)
extern "C"
QPointF*
C_ZNK10QQuickItem10mapToSceneERK7QPointF(void *qthis,
const QPointF* arg1) {
  auto ret =
  ((QQuickItem*)qthis)->mapToScene(*((const QPointF*)arg1));
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 302, column 10>
//   // proto:  bool QQuickItem::keepTouchGrab();
// _ZNK10QQuickItem13keepTouchGrabEv keepTouchGrab()
extern "C"
bool
C_ZNK10QQuickItem13keepTouchGrabEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->keepTouchGrab();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 200, column 12>
//   // proto:  QRectF QQuickItem::childrenRect();
// _ZN10QQuickItem12childrenRectEv childrenRect()
extern "C"
QRectF*
C_ZN10QQuickItem12childrenRectEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->childrenRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 92, column 5>
//   // proto:  const QMetaObject * QQuickItem::metaObject();
// _ZNK10QQuickItem10metaObjectEv metaObject()
extern "C"
void*
C_ZNK10QQuickItem10metaObjectEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 296, column 10>
//   // proto:  void QQuickItem::setKeepMouseGrab(bool );
// _ZN10QQuickItem16setKeepMouseGrabEb setKeepMouseGrab(_Bool)
extern "C"
void
C_ZN10QQuickItem16setKeepMouseGrabEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setKeepMouseGrab(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 297, column 10>
//   // proto:  bool QQuickItem::filtersChildMouseEvents();
// _ZNK10QQuickItem23filtersChildMouseEventsEv filtersChildMouseEvents()
extern "C"
bool
C_ZNK10QQuickItem23filtersChildMouseEventsEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->filtersChildMouseEvents();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 274, column 10>
//   // proto:  bool QQuickItem::hasActiveFocus();
// _ZNK10QQuickItem14hasActiveFocusEv hasActiveFocus()
extern "C"
bool
C_ZNK10QQuickItem14hasActiveFocusEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->hasActiveFocus();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 236, column 10>
//   // proto:  void QQuickItem::setTransformOrigin(QQuickItem::TransformOrigin );
// _ZN10QQuickItem18setTransformOriginENS_15TransformOriginE setTransformOrigin(enum QQuickItem::TransformOrigin)
extern "C"
void
C_ZN10QQuickItem18setTransformOriginENS_15TransformOriginE(void *qthis,
QQuickItem::TransformOrigin arg1) {
  ((QQuickItem*)qthis)->setTransformOrigin(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 292, column 10>
//   // proto:  bool QQuickItem::isUnderMouse();
// _ZNK10QQuickItem12isUnderMouseEv isUnderMouse()
extern "C"
bool
C_ZNK10QQuickItem12isUnderMouseEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->isUnderMouse();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 367, column 10>
//   // proto:  void QQuickItem::rotationChanged();
// _ZN10QQuickItem15rotationChangedEv rotationChanged()
extern "C"
void
C_ZN10QQuickItem15rotationChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->rotationChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 238, column 10>
//   // proto:  void QQuickItem::setTransformOriginPoint(const QPointF & );
// _ZN10QQuickItem23setTransformOriginPointERK7QPointF setTransformOriginPoint(const class QPointF &)
extern "C"
void
C_ZN10QQuickItem23setTransformOriginPointERK7QPointF(void *qthis,
const QPointF* arg1) {
  ((QQuickItem*)qthis)->setTransformOriginPoint(*((const QPointF*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 321, column 10>
//   // proto:  void QQuickItem::polish();
// _ZN10QQuickItem6polishEv polish()
extern "C"
void
C_ZN10QQuickItem6polishEv(void *qthis) {
  ((QQuickItem*)qthis)->polish();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 362, column 10>
//   // proto:  void QQuickItem::childrenChanged();
// _ZN10QQuickItem15childrenChangedEv childrenChanged()
extern "C"
void
C_ZN10QQuickItem15childrenChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->childrenChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 364, column 10>
//   // proto:  void QQuickItem::enabledChanged();
// _ZN10QQuickItem14enabledChangedEv enabledChanged()
extern "C"
void
C_ZN10QQuickItem14enabledChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->enabledChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 196, column 10>
//   // proto:  void QQuickItem::setParentItem(QQuickItem * parent);
// _ZN10QQuickItem13setParentItemEPS_ setParentItem(class QQuickItem *)
extern "C"
void
C_ZN10QQuickItem13setParentItemEPS_(void *qthis,
QQuickItem * arg1) {
  ((QQuickItem*)qthis)->setParentItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 191, column 5>
//   // proto:  void QQuickItem::QQuickItem(QQuickItem * parent);
extern "C"
QQuickItem*
C_ZN10QQuickItemC2EPS_(QQuickItem * arg1) {
  auto ret = new QQuickItem(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 222, column 10>
//   // proto:  void QQuickItem::setWidth(qreal );
// _ZN10QQuickItem8setWidthEd setWidth(qreal)
extern "C"
void
C_ZN10QQuickItem8setWidthEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setWidth(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 354, column 10>
//   // proto:  void QQuickItem::parentChanged(QQuickItem * );
// _ZN10QQuickItem13parentChangedEPS_ parentChanged(class QQuickItem *)
extern "C"
void
C_ZN10QQuickItem13parentChangedEPS_(void *qthis,
QQuickItem * arg1) {
  ((QQuickItem*)qthis)->parentChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 353, column 24>
//   // proto:  void QQuickItem::activeFocusOnTabChanged(bool );
// _ZN10QQuickItem23activeFocusOnTabChangedEb activeFocusOnTabChanged(_Bool)
extern "C"
void
C_ZN10QQuickItem23activeFocusOnTabChangedEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->activeFocusOnTabChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 326, column 22>
//   // proto:  void QQuickItem::forceActiveFocus(Qt::FocusReason reason);
// _ZN10QQuickItem16forceActiveFocusEN2Qt11FocusReasonE forceActiveFocus(Qt::FocusReason)
extern "C"
void
C_ZN10QQuickItem16forceActiveFocusEN2Qt11FocusReasonE(void *qthis,
Qt::FocusReason* arg1) {
  ((QQuickItem*)qthis)->forceActiveFocus(*((Qt::FocusReason*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 327, column 43>
//   // proto:  QQuickItem * QQuickItem::nextItemInFocusChain(bool forward);
// _ZN10QQuickItem20nextItemInFocusChainEb nextItemInFocusChain(_Bool)
extern "C"
void*
C_ZN10QQuickItem20nextItemInFocusChainEb(void *qthis,
bool arg1) {
  auto ret =
  ((QQuickItem*)qthis)->nextItemInFocusChain(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 301, column 10>
//   // proto:  void QQuickItem::ungrabTouchPoints();
// _ZN10QQuickItem17ungrabTouchPointsEv ungrabTouchPoints()
extern "C"
void
C_ZN10QQuickItem17ungrabTouchPointsEv(void *qthis) {
  ((QQuickItem*)qthis)->ungrabTouchPoints();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 295, column 10>
//   // proto:  bool QQuickItem::keepMouseGrab();
// _ZNK10QQuickItem13keepMouseGrabEv keepMouseGrab()
extern "C"
bool
C_ZNK10QQuickItem13keepMouseGrabEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->keepMouseGrab();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 319, column 12>
//   // proto:  QRectF QQuickItem::mapRectFromScene(const QRectF & rect);
// _ZNK10QQuickItem16mapRectFromSceneERK6QRectF mapRectFromScene(const class QRectF &)
extern "C"
QRectF*
C_ZNK10QQuickItem16mapRectFromSceneERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QQuickItem*)qthis)->mapRectFromScene(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 350, column 10>
//   // proto:  void QQuickItem::stateChanged(const QString & );
// _ZN10QQuickItem12stateChangedERK7QString stateChanged(const class QString &)
extern "C"
void
C_ZN10QQuickItem12stateChangedERK7QString(void *qthis,
const QString* arg1) {
  ((QQuickItem*)qthis)->stateChanged(*((const QString*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 351, column 10>
//   // proto:  void QQuickItem::focusChanged(bool );
// _ZN10QQuickItem12focusChangedEb focusChanged(_Bool)
extern "C"
void
C_ZN10QQuickItem12focusChangedEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->focusChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 216, column 13>
//   // proto:  QPointF QQuickItem::position();
// _ZNK10QQuickItem8positionEv position()
extern "C"
QPointF*
C_ZNK10QQuickItem8positionEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->position();
  return new QPointF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 227, column 11>
//   // proto:  qreal QQuickItem::height();
// _ZNK10QQuickItem6heightEv height()
extern "C"
double
C_ZNK10QQuickItem6heightEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->height();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 328, column 29>
//   // proto:  QQuickItem * QQuickItem::childAt(qreal x, qreal y);
// _ZNK10QQuickItem7childAtEdd childAt(qreal, qreal)
extern "C"
void*
C_ZNK10QQuickItem7childAtEdd(void *qthis,
qreal arg1,
qreal arg2) {
  auto ret =
  ((QQuickItem*)qthis)->childAt(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 287, column 13>
//   // proto:  QCursor QQuickItem::cursor();
// _ZNK10QQuickItem6cursorEv cursor()
extern "C"
QCursor*
C_ZNK10QQuickItem6cursorEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->cursor();
  return new QCursor(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 203, column 10>
//   // proto:  bool QQuickItem::clip();
// _ZNK10QQuickItem4clipEv clip()
extern "C"
bool
C_ZNK10QQuickItem4clipEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->clip();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 263, column 10>
//   // proto:  bool QQuickItem::antialiasing();
// _ZNK10QQuickItem12antialiasingEv antialiasing()
extern "C"
bool
C_ZNK10QQuickItem12antialiasingEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->antialiasing();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 194, column 19>
//   // proto:  QQuickWindow * QQuickItem::window();
// _ZNK10QQuickItem6windowEv window()
extern "C"
void*
C_ZNK10QQuickItem6windowEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->window();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 318, column 12>
//   // proto:  QRectF QQuickItem::mapRectFromItem(const QQuickItem * item, const QRectF & rect);
// _ZNK10QQuickItem15mapRectFromItemEPKS_RK6QRectF mapRectFromItem(const class QQuickItem *, const class QRectF &)
extern "C"
QRectF*
C_ZNK10QQuickItem15mapRectFromItemEPKS_RK6QRectF(void *qthis,
const QQuickItem * arg1,
const QRectF* arg2) {
  auto ret =
  ((QQuickItem*)qthis)->mapRectFromItem(arg1,
*((const QRectF*)arg2));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 252, column 10>
//   // proto:  void QQuickItem::setVisible(bool );
// _ZN10QQuickItem10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN10QQuickItem10setVisibleEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 268, column 10>
//   // proto:  void QQuickItem::setFlag(QQuickItem::Flag flag, bool enabled);
// _ZN10QQuickItem7setFlagENS_4FlagEb setFlag(enum QQuickItem::Flag, _Bool)
extern "C"
void
C_ZN10QQuickItem7setFlagENS_4FlagEb(void *qthis,
QQuickItem::Flag arg1,
bool arg2) {
  ((QQuickItem*)qthis)->setFlag(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 276, column 10>
//   // proto:  void QQuickItem::setFocus(bool );
// _ZN10QQuickItem8setFocusEb setFocus(_Bool)
extern "C"
void
C_ZN10QQuickItem8setFocusEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setFocus(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 260, column 10>
//   // proto:  bool QQuickItem::activeFocusOnTab();
// _ZNK10QQuickItem16activeFocusOnTabEv activeFocusOnTab()
extern "C"
bool
C_ZNK10QQuickItem16activeFocusOnTabEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->activeFocusOnTab();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 363, column 10>
//   // proto:  void QQuickItem::opacityChanged();
// _ZN10QQuickItem14opacityChangedEv opacityChanged()
extern "C"
void
C_ZN10QQuickItem14opacityChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->opacityChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 365, column 10>
//   // proto:  void QQuickItem::visibleChanged();
// _ZN10QQuickItem14visibleChangedEv visibleChanged()
extern "C"
void
C_ZN10QQuickItem14visibleChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->visibleChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 240, column 11>
//   // proto:  qreal QQuickItem::z();
// _ZNK10QQuickItem1zEv z()
extern "C"
double
C_ZNK10QQuickItem1zEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->z();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 249, column 10>
//   // proto:  void QQuickItem::setOpacity(qreal );
// _ZN10QQuickItem10setOpacityEd setOpacity(qreal)
extern "C"
void
C_ZN10QQuickItem10setOpacityEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setOpacity(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 269, column 10>
//   // proto:  void QQuickItem::setFlags(Flags flags);
// _ZN10QQuickItem8setFlagsE6QFlagsINS_4FlagEE setFlags(Flags)
extern "C"
void
C_ZN10QQuickItem8setFlagsE6QFlagsINS_4FlagEE(void *qthis,
QQuickItem::Flags arg1) {
  ((QQuickItem*)qthis)->setFlags(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 264, column 10>
//   // proto:  void QQuickItem::setAntialiasing(bool );
// _ZN10QQuickItem15setAntialiasingEb setAntialiasing(_Bool)
extern "C"
void
C_ZN10QQuickItem15setAntialiasingEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setAntialiasing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 366, column 10>
//   // proto:  void QQuickItem::visibleChildrenChanged();
// _ZN10QQuickItem22visibleChildrenChangedEv visibleChildrenChanged()
extern "C"
void
C_ZN10QQuickItem22visibleChildrenChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->visibleChildrenChanged();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 201, column 25>
//   // proto:  QList<QQuickItem *> QQuickItem::childItems();
// _ZNK10QQuickItem10childItemsEv childItems()
extern "C"
QList<QQuickItem *>*
C_ZNK10QQuickItem10childItemsEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->childItems();
  return new QList<QQuickItem *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 233, column 10>
//   // proto:  void QQuickItem::setSize(const QSizeF & size);
// _ZN10QQuickItem7setSizeERK6QSizeF setSize(const class QSizeF &)
extern "C"
void
C_ZN10QQuickItem7setSizeERK6QSizeF(void *qthis,
const QSizeF* arg1) {
  ((QQuickItem*)qthis)->setSize(*((const QSizeF*)arg1));
}
//   // proto:  void QQuickItem::~QQuickItem();
extern "C"
void C_ZN10QQuickItemD2Ev(void *qthis) {
  delete (QQuickItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 279, column 17>
//   // proto:  QQuickItem * QQuickItem::scopedFocusItem();
// _ZNK10QQuickItem15scopedFocusItemEv scopedFocusItem()
extern "C"
void*
C_ZNK10QQuickItem15scopedFocusItemEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->scopedFocusItem();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 306, column 36>
//   // proto:  bool QQuickItem::grabToImage(const QJSValue & callback, const QSize & targetSize);
// _ZN10QQuickItem11grabToImageERK8QJSValueRK5QSize grabToImage(const class QJSValue &, const class QSize &)
extern "C"
bool
C_ZN10QQuickItem11grabToImageERK8QJSValueRK5QSize(void *qthis,
const QJSValue* arg1,
const QSize* arg2) {
  auto ret =
  ((QQuickItem*)qthis)->grabToImage(*((const QJSValue*)arg1),
*((const QSize*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 355, column 10>
//   // proto:  void QQuickItem::transformOriginChanged(QQuickItem::TransformOrigin );
// _ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE transformOriginChanged(enum QQuickItem::TransformOrigin)
extern "C"
void
C_ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(void *qthis,
QQuickItem::TransformOrigin arg1) {
  ((QQuickItem*)qthis)->transformOriginChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 311, column 16>
//   // proto:  QTransform QQuickItem::itemTransform(QQuickItem * , bool * );
// _ZNK10QQuickItem13itemTransformEPS_Pb itemTransform(class QQuickItem *, _Bool *)
extern "C"
QTransform*
C_ZNK10QQuickItem13itemTransformEPS_Pb(void *qthis,
QQuickItem * arg1,
bool * arg2) {
  auto ret =
  ((QQuickItem*)qthis)->itemTransform(arg1,
arg2);
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 345, column 10>
//   // proto:  void QQuickItem::update();
// _ZN10QQuickItem6updateEv update()
extern "C"
void
C_ZN10QQuickItem6updateEv(void *qthis) {
  ((QQuickItem*)qthis)->update();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 288, column 10>
//   // proto:  void QQuickItem::setCursor(const QCursor & cursor);
// _ZN10QQuickItem9setCursorERK7QCursor setCursor(const class QCursor &)
extern "C"
void
C_ZN10QQuickItem9setCursorERK7QCursor(void *qthis,
const QCursor* arg1) {
  ((QQuickItem*)qthis)->setCursor(*((const QCursor*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 300, column 10>
//   // proto:  void QQuickItem::grabTouchPoints(const QVector<int> & ids);
// _ZN10QQuickItem15grabTouchPointsERK7QVectorIiE grabTouchPoints(const QVector<int> &)
extern "C"
void
C_ZN10QQuickItem15grabTouchPointsERK7QVectorIiE(void *qthis,
const QVector<int>* arg1) {
  ((QQuickItem*)qthis)->grabTouchPoints(*((const QVector<int>*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 307, column 42>
//   // proto:  QSharedPointer<QQuickItemGrabResult> QQuickItem::grabToImage(const QSize & targetSize);
// _ZN10QQuickItem11grabToImageERK5QSize grabToImage(const class QSize &)
extern "C"
QSharedPointer<QQuickItemGrabResult>*
C_ZN10QQuickItem11grabToImageERK5QSize(void *qthis,
const QSize* arg1) {
  auto ret =
  ((QQuickItem*)qthis)->grabToImage(*((const QSize*)arg1));
  return new QSharedPointer<QQuickItemGrabResult>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 324, column 22>
//   // proto:  void QQuickItem::mapToItem(QQmlV4Function * );
// _ZNK10QQuickItem9mapToItemEP14QQmlV4Function mapToItem(class QQmlV4Function *)
extern "C"
void
C_ZNK10QQuickItem9mapToItemEP14QQmlV4Function(void *qthis,
QQmlV4Function * arg1) {
  ((QQuickItem*)qthis)->mapToItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 272, column 20>
//   // proto:  QRectF QQuickItem::clipRect();
// _ZNK10QQuickItem8clipRectEv clipRect()
extern "C"
QRectF*
C_ZNK10QQuickItem8clipRectEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->clipRect();
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 281, column 22>
//   // proto:  Qt::MouseButtons QQuickItem::acceptedMouseButtons();
// _ZNK10QQuickItem20acceptedMouseButtonsEv acceptedMouseButtons()
extern "C"
QFlags<Qt::MouseButton>*
C_ZNK10QQuickItem20acceptedMouseButtonsEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->acceptedMouseButtons();
  return new QFlags<Qt::MouseButton>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 294, column 10>
//   // proto:  void QQuickItem::ungrabMouse();
// _ZN10QQuickItem11ungrabMouseEv ungrabMouse()
extern "C"
void
C_ZN10QQuickItem11ungrabMouseEv(void *qthis) {
  ((QQuickItem*)qthis)->ungrabMouse();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 315, column 12>
//   // proto:  QRectF QQuickItem::mapRectToScene(const QRectF & rect);
// _ZNK10QQuickItem14mapRectToSceneERK6QRectF mapRectToScene(const class QRectF &)
extern "C"
QRectF*
C_ZNK10QQuickItem14mapRectToSceneERK6QRectF(void *qthis,
const QRectF* arg1) {
  auto ret =
  ((QQuickItem*)qthis)->mapRectToScene(*((const QRectF*)arg1));
  return new QRectF(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 244, column 10>
//   // proto:  void QQuickItem::setRotation(qreal );
// _ZN10QQuickItem11setRotationEd setRotation(qreal)
extern "C"
void
C_ZN10QQuickItem11setRotationEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setRotation(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 356, column 10>
//   // proto:  void QQuickItem::smoothChanged(bool );
// _ZN10QQuickItem13smoothChangedEb smoothChanged(_Bool)
extern "C"
void
C_ZN10QQuickItem13smoothChangedEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->smoothChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 323, column 22>
//   // proto:  void QQuickItem::mapFromItem(QQmlV4Function * );
// _ZNK10QQuickItem11mapFromItemEP14QQmlV4Function mapFromItem(class QQmlV4Function *)
extern "C"
void
C_ZNK10QQuickItem11mapFromItemEP14QQmlV4Function(void *qthis,
QQmlV4Function * arg1) {
  ((QQuickItem*)qthis)->mapFromItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 275, column 10>
//   // proto:  bool QQuickItem::hasFocus();
// _ZNK10QQuickItem8hasFocusEv hasFocus()
extern "C"
bool
C_ZNK10QQuickItem8hasFocusEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->hasFocus();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 217, column 10>
//   // proto:  void QQuickItem::setX(qreal );
// _ZN10QQuickItem4setXEd setX(qreal)
extern "C"
void
C_ZN10QQuickItem4setXEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setX(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 206, column 13>
//   // proto:  QString QQuickItem::state();
// _ZNK10QQuickItem5stateEv state()
extern "C"
QString*
C_ZNK10QQuickItem5stateEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->state();
  return new QString(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 246, column 10>
//   // proto:  void QQuickItem::setScale(qreal );
// _ZN10QQuickItem8setScaleEd setScale(qreal)
extern "C"
void
C_ZN10QQuickItem8setScaleEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->setScale(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 229, column 10>
//   // proto:  void QQuickItem::resetHeight();
// _ZN10QQuickItem11resetHeightEv resetHeight()
extern "C"
void
C_ZN10QQuickItem11resetHeightEv(void *qthis) {
  ((QQuickItem*)qthis)->resetHeight();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 293, column 10>
//   // proto:  void QQuickItem::grabMouse();
// _ZN10QQuickItem9grabMouseEv grabMouse()
extern "C"
void
C_ZN10QQuickItem9grabMouseEv(void *qthis) {
  ((QQuickItem*)qthis)->grabMouse();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 303, column 10>
//   // proto:  void QQuickItem::setKeepTouchGrab(bool );
// _ZN10QQuickItem16setKeepTouchGrabEb setKeepTouchGrab(_Bool)
extern "C"
void
C_ZN10QQuickItem16setKeepTouchGrabEb(void *qthis,
bool arg1) {
  ((QQuickItem*)qthis)->setKeepTouchGrab(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 349, column 10>
//   // proto:  void QQuickItem::baselineOffsetChanged(qreal );
// _ZN10QQuickItem21baselineOffsetChangedEd baselineOffsetChanged(qreal)
extern "C"
void
C_ZN10QQuickItem21baselineOffsetChangedEd(void *qthis,
qreal arg1) {
  ((QQuickItem*)qthis)->baselineOffsetChanged(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 198, column 10>
//   // proto:  void QQuickItem::stackAfter(const QQuickItem * );
// _ZN10QQuickItem10stackAfterEPKS_ stackAfter(const class QQuickItem *)
extern "C"
void
C_ZN10QQuickItem10stackAfterEPKS_(void *qthis,
const QQuickItem * arg1) {
  ((QQuickItem*)qthis)->stackAfter(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 209, column 11>
//   // proto:  qreal QQuickItem::baselineOffset();
// _ZNK10QQuickItem14baselineOffsetEv baselineOffset()
extern "C"
double
C_ZNK10QQuickItem14baselineOffsetEv(void *qthis) {
  auto ret =
  ((QQuickItem*)qthis)->baselineOffset();
  return ret; // 0 TypeKind.DOUBLE
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 374, column 10>
//   // proto:  void QQuickItem::zChanged();
// _ZN10QQuickItem8zChangedEv zChanged()
extern "C"
void
C_ZN10QQuickItem8zChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->zChanged();
}
// <= ext block end

// body block begin =>
// QQuickTransform_SlotProxy here
class QQuickTransform_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickTransform_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};

extern "C" {
  QQuickTransform_SlotProxy* QQuickTransform_SlotProxy_new()
  {
    return new QQuickTransform_SlotProxy();
  }
};

// QQuickItem_SlotProxy here
class QQuickItem_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QQuickItem_SlotProxy():QObject(){}

public slots:
  // opacityChanged()
  void slot_proxy_func__ZN10QQuickItem14opacityChangedEv();
public:
  void (*slot_func__ZN10QQuickItem14opacityChangedEv)(void* rsfptr) = NULL;
public slots:
  // visibleChanged()
  void slot_proxy_func__ZN10QQuickItem14visibleChangedEv();
public:
  void (*slot_func__ZN10QQuickItem14visibleChangedEv)(void* rsfptr) = NULL;
public slots:
  // heightChanged()
  void slot_proxy_func__ZN10QQuickItem13heightChangedEv();
public:
  void (*slot_func__ZN10QQuickItem13heightChangedEv)(void* rsfptr) = NULL;
public slots:
  // childrenRectChanged(const class QRectF &)
  void slot_proxy_func__ZN10QQuickItem19childrenRectChangedERK6QRectF(const QRectF & arg0);
public:
  void (*slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF)(void* rsfptr, const QRectF & arg0) = NULL;
public slots:
  // yChanged()
  void slot_proxy_func__ZN10QQuickItem8yChangedEv();
public:
  void (*slot_func__ZN10QQuickItem8yChangedEv)(void* rsfptr) = NULL;
public slots:
  // antialiasingChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem19antialiasingChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem19antialiasingChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // visibleChildrenChanged()
  void slot_proxy_func__ZN10QQuickItem22visibleChildrenChangedEv();
public:
  void (*slot_func__ZN10QQuickItem22visibleChildrenChangedEv)(void* rsfptr) = NULL;
public slots:
  // widthChanged()
  void slot_proxy_func__ZN10QQuickItem12widthChangedEv();
public:
  void (*slot_func__ZN10QQuickItem12widthChangedEv)(void* rsfptr) = NULL;
public slots:
  // rotationChanged()
  void slot_proxy_func__ZN10QQuickItem15rotationChangedEv();
public:
  void (*slot_func__ZN10QQuickItem15rotationChangedEv)(void* rsfptr) = NULL;
public slots:
  // smoothChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem13smoothChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem13smoothChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // childrenChanged()
  void slot_proxy_func__ZN10QQuickItem15childrenChangedEv();
public:
  void (*slot_func__ZN10QQuickItem15childrenChangedEv)(void* rsfptr) = NULL;
public slots:
  // transformOriginChanged(enum QQuickItem::TransformOrigin)
  void slot_proxy_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QQuickItem::TransformOrigin arg0);
public:
  void (*slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE)(void* rsfptr, QQuickItem::TransformOrigin arg0) = NULL;
public slots:
  // enabledChanged()
  void slot_proxy_func__ZN10QQuickItem14enabledChangedEv();
public:
  void (*slot_func__ZN10QQuickItem14enabledChangedEv)(void* rsfptr) = NULL;
public slots:
  // implicitHeightChanged()
  void slot_proxy_func__ZN10QQuickItem21implicitHeightChangedEv();
public:
  void (*slot_func__ZN10QQuickItem21implicitHeightChangedEv)(void* rsfptr) = NULL;
public slots:
  // parentChanged(class QQuickItem *)
  void slot_proxy_func__ZN10QQuickItem13parentChangedEPS_(QQuickItem * arg0);
public:
  void (*slot_func__ZN10QQuickItem13parentChangedEPS_)(void* rsfptr, QQuickItem * arg0) = NULL;
public slots:
  // xChanged()
  void slot_proxy_func__ZN10QQuickItem8xChangedEv();
public:
  void (*slot_func__ZN10QQuickItem8xChangedEv)(void* rsfptr) = NULL;
public slots:
  // windowChanged(class QQuickWindow *)
  void slot_proxy_func__ZN10QQuickItem13windowChangedEP12QQuickWindow(QQuickWindow * arg0);
public:
  void (*slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow)(void* rsfptr, QQuickWindow * arg0) = NULL;
public slots:
  // clipChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem11clipChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem11clipChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // scaleChanged()
  void slot_proxy_func__ZN10QQuickItem12scaleChangedEv();
public:
  void (*slot_func__ZN10QQuickItem12scaleChangedEv)(void* rsfptr) = NULL;
public slots:
  // focusChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem12focusChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem12focusChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // stateChanged(const class QString &)
  void slot_proxy_func__ZN10QQuickItem12stateChangedERK7QString(const QString & arg0);
public:
  void (*slot_func__ZN10QQuickItem12stateChangedERK7QString)(void* rsfptr, const QString & arg0) = NULL;
public slots:
  // implicitWidthChanged()
  void slot_proxy_func__ZN10QQuickItem20implicitWidthChangedEv();
public:
  void (*slot_func__ZN10QQuickItem20implicitWidthChangedEv)(void* rsfptr) = NULL;
public slots:
  // activeFocusChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem18activeFocusChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem18activeFocusChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // baselineOffsetChanged(qreal)
  void slot_proxy_func__ZN10QQuickItem21baselineOffsetChangedEd(qreal arg0);
public:
  void (*slot_func__ZN10QQuickItem21baselineOffsetChangedEd)(void* rsfptr, qreal arg0) = NULL;
public slots:
  // activeFocusOnTabChanged(_Bool)
  void slot_proxy_func__ZN10QQuickItem23activeFocusOnTabChangedEb(bool arg0);
public:
  void (*slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb)(void* rsfptr, bool arg0) = NULL;
public slots:
  // zChanged()
  void slot_proxy_func__ZN10QQuickItem8zChangedEv();
public:
  void (*slot_func__ZN10QQuickItem8zChangedEv)(void* rsfptr) = NULL;
public: void* rsfptr = NULL;
};
#include "src/quick/qquickitem.moc"

extern "C" {
  QQuickItem_SlotProxy* QQuickItem_SlotProxy_new()
  {
    return new QQuickItem_SlotProxy();
  }
};

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem14opacityChangedEv() {
  if (this->slot_func__ZN10QQuickItem14opacityChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem14opacityChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem14opacityChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem14opacityChangedEv = (decltype(that->slot_func__ZN10QQuickItem14opacityChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(opacityChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem14opacityChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem14opacityChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem14visibleChangedEv() {
  if (this->slot_func__ZN10QQuickItem14visibleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem14visibleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem14visibleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem14visibleChangedEv = (decltype(that->slot_func__ZN10QQuickItem14visibleChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(visibleChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem14visibleChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem14visibleChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem13heightChangedEv() {
  if (this->slot_func__ZN10QQuickItem13heightChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem13heightChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem13heightChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem13heightChangedEv = (decltype(that->slot_func__ZN10QQuickItem13heightChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(heightChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem13heightChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem13heightChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem19childrenRectChangedERK6QRectF(const QRectF & arg0) {
  if (this->slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem19childrenRectChangedERK6QRectF(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF = (decltype(that->slot_func__ZN10QQuickItem19childrenRectChangedERK6QRectF))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(childrenRectChanged(const class QRectF &)), that, SLOT(slot_proxy_func__ZN10QQuickItem19childrenRectChangedERK6QRectF(const QRectF & arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem19childrenRectChangedERK6QRectF(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem8yChangedEv() {
  if (this->slot_func__ZN10QQuickItem8yChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem8yChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem8yChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem8yChangedEv = (decltype(that->slot_func__ZN10QQuickItem8yChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(yChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem8yChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem8yChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem19antialiasingChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem19antialiasingChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem19antialiasingChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem19antialiasingChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem19antialiasingChangedEb = (decltype(that->slot_func__ZN10QQuickItem19antialiasingChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(antialiasingChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem19antialiasingChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem19antialiasingChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem22visibleChildrenChangedEv() {
  if (this->slot_func__ZN10QQuickItem22visibleChildrenChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem22visibleChildrenChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem22visibleChildrenChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem22visibleChildrenChangedEv = (decltype(that->slot_func__ZN10QQuickItem22visibleChildrenChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(visibleChildrenChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem22visibleChildrenChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem22visibleChildrenChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem12widthChangedEv() {
  if (this->slot_func__ZN10QQuickItem12widthChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem12widthChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem12widthChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem12widthChangedEv = (decltype(that->slot_func__ZN10QQuickItem12widthChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(widthChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem12widthChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem12widthChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem15rotationChangedEv() {
  if (this->slot_func__ZN10QQuickItem15rotationChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem15rotationChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem15rotationChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem15rotationChangedEv = (decltype(that->slot_func__ZN10QQuickItem15rotationChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(rotationChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem15rotationChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem15rotationChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem13smoothChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem13smoothChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem13smoothChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem13smoothChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem13smoothChangedEb = (decltype(that->slot_func__ZN10QQuickItem13smoothChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(smoothChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem13smoothChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem13smoothChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem15childrenChangedEv() {
  if (this->slot_func__ZN10QQuickItem15childrenChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem15childrenChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem15childrenChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem15childrenChangedEv = (decltype(that->slot_func__ZN10QQuickItem15childrenChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(childrenChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem15childrenChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem15childrenChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QQuickItem::TransformOrigin arg0) {
  if (this->slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE = (decltype(that->slot_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(transformOriginChanged(enum QQuickItem::TransformOrigin)), that, SLOT(slot_proxy_func__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QQuickItem::TransformOrigin arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem14enabledChangedEv() {
  if (this->slot_func__ZN10QQuickItem14enabledChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem14enabledChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem14enabledChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem14enabledChangedEv = (decltype(that->slot_func__ZN10QQuickItem14enabledChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(enabledChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem14enabledChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem14enabledChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem21implicitHeightChangedEv() {
  if (this->slot_func__ZN10QQuickItem21implicitHeightChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem21implicitHeightChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem21implicitHeightChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem21implicitHeightChangedEv = (decltype(that->slot_func__ZN10QQuickItem21implicitHeightChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(implicitHeightChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem21implicitHeightChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem21implicitHeightChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem13parentChangedEPS_(QQuickItem * arg0) {
  if (this->slot_func__ZN10QQuickItem13parentChangedEPS_ != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem13parentChangedEPS_(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem13parentChangedEPS_(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem13parentChangedEPS_ = (decltype(that->slot_func__ZN10QQuickItem13parentChangedEPS_))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(parentChanged(class QQuickItem *)), that, SLOT(slot_proxy_func__ZN10QQuickItem13parentChangedEPS_(QQuickItem * arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem13parentChangedEPS_(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem8xChangedEv() {
  if (this->slot_func__ZN10QQuickItem8xChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem8xChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem8xChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem8xChangedEv = (decltype(that->slot_func__ZN10QQuickItem8xChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(xChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem8xChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem8xChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem13windowChangedEP12QQuickWindow(QQuickWindow * arg0) {
  if (this->slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem13windowChangedEP12QQuickWindow(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow = (decltype(that->slot_func__ZN10QQuickItem13windowChangedEP12QQuickWindow))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(windowChanged(class QQuickWindow *)), that, SLOT(slot_proxy_func__ZN10QQuickItem13windowChangedEP12QQuickWindow(QQuickWindow * arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem13windowChangedEP12QQuickWindow(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem11clipChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem11clipChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem11clipChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem11clipChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem11clipChangedEb = (decltype(that->slot_func__ZN10QQuickItem11clipChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(clipChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem11clipChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem11clipChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem12scaleChangedEv() {
  if (this->slot_func__ZN10QQuickItem12scaleChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem12scaleChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem12scaleChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem12scaleChangedEv = (decltype(that->slot_func__ZN10QQuickItem12scaleChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(scaleChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem12scaleChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem12scaleChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem12focusChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem12focusChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem12focusChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem12focusChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem12focusChangedEb = (decltype(that->slot_func__ZN10QQuickItem12focusChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(focusChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem12focusChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem12focusChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem12stateChangedERK7QString(const QString & arg0) {
  if (this->slot_func__ZN10QQuickItem12stateChangedERK7QString != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem12stateChangedERK7QString(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem12stateChangedERK7QString(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem12stateChangedERK7QString = (decltype(that->slot_func__ZN10QQuickItem12stateChangedERK7QString))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(stateChanged(const class QString &)), that, SLOT(slot_proxy_func__ZN10QQuickItem12stateChangedERK7QString(const QString & arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem12stateChangedERK7QString(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem20implicitWidthChangedEv() {
  if (this->slot_func__ZN10QQuickItem20implicitWidthChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem20implicitWidthChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem20implicitWidthChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem20implicitWidthChangedEv = (decltype(that->slot_func__ZN10QQuickItem20implicitWidthChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(implicitWidthChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem20implicitWidthChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem20implicitWidthChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem18activeFocusChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem18activeFocusChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem18activeFocusChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem18activeFocusChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem18activeFocusChangedEb = (decltype(that->slot_func__ZN10QQuickItem18activeFocusChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(activeFocusChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem18activeFocusChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem18activeFocusChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem21baselineOffsetChangedEd(qreal arg0) {
  if (this->slot_func__ZN10QQuickItem21baselineOffsetChangedEd != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem21baselineOffsetChangedEd(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem21baselineOffsetChangedEd(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem21baselineOffsetChangedEd = (decltype(that->slot_func__ZN10QQuickItem21baselineOffsetChangedEd))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(baselineOffsetChanged(qreal)), that, SLOT(slot_proxy_func__ZN10QQuickItem21baselineOffsetChangedEd(qreal arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem21baselineOffsetChangedEd(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem23activeFocusOnTabChangedEb(bool arg0) {
  if (this->slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb(this->rsfptr, arg0);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem23activeFocusOnTabChangedEb(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb = (decltype(that->slot_func__ZN10QQuickItem23activeFocusOnTabChangedEb))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(activeFocusOnTabChanged(_Bool)), that, SLOT(slot_proxy_func__ZN10QQuickItem23activeFocusOnTabChangedEb(bool arg0)));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem23activeFocusOnTabChangedEb(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QQuickItem_SlotProxy::slot_proxy_func__ZN10QQuickItem8zChangedEv() {
  if (this->slot_func__ZN10QQuickItem8zChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN10QQuickItem8zChangedEv(this->rsfptr);
  }
}
extern "C"
void* QQuickItem_SlotProxy_connect__ZN10QQuickItem8zChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QQuickItem_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN10QQuickItem8zChangedEv = (decltype(that->slot_func__ZN10QQuickItem8zChangedEv))ffifptr;
  QObject::connect((QQuickItem*)sender, SIGNAL(zChanged()), that, SLOT(slot_proxy_func__ZN10QQuickItem8zChangedEv()));
  return that;
}
extern "C"
void QQuickItem_SlotProxy_disconnect__ZN10QQuickItem8zChangedEv(QQuickItem_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

