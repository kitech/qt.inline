#include <qstring.h>
#include <qnamespace.h>
#include <qsharedpointer_impl.h>
#include <qsharedpointer.h>
#include <qtransform.h>
#include <qnetworkinterface.h>
#include <qlist.h>
#include <qcursor.h>
#include <qrect.h>
#include <qpoint.h>
#include <qqmllist.h>
#include <qqmllistproperty.h>
#include <qvariant.h>
#include <qglobal.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/qquickitem.h
// dst-file: /src/quick/qquickitem.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qquickitem.h>

extern "C" {

int QQuickTransform_Class_Size()
{
  return sizeof(QQuickTransform);
}

int QQuickItem_Class_Size()
{
  return sizeof(QQuickItem);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qquickitem_inline_symbols() {
//   // proto:  void QQuickTransform::~QQuickTransform();
if (true) {
  delete ((QQuickTransform*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 54, column 5>
//   // proto:  const QMetaObject * QQuickTransform::metaObject();
if (true) {
  auto f = []() {
    ((QQuickTransform*)0)->metaObject();
  };
  if (f == nullptr){}
}
// _ZNK15QQuickTransform10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 56, column 5>
//   // proto:  void QQuickTransform::QQuickTransform(QObject * parent);
if (true) {
  auto f = [](QObject * arg1) {
    // new QQuickTransform(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 59, column 10>
//   // proto:  void QQuickTransform::appendToItem(QQuickItem * );
if (true) {
  auto f = [](QQuickItem * arg1) {
    ((QQuickTransform*)0)->appendToItem(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QQuickTransform12appendToItemEP10QQuickItem appendToItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 62, column 18>
//   // proto:  void QQuickTransform::applyTo(QMatrix4x4 * matrix);
if (true) {
  auto f = [](QMatrix4x4 * arg1) {
    ((QQuickTransform*)0)->applyTo(arg1);
  };
  if (f == nullptr){}
}
// _ZNK15QQuickTransform7applyToEP10QMatrix4x4 applyTo(class QMatrix4x4 *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 60, column 10>
//   // proto:  void QQuickTransform::prependToItem(QQuickItem * );
if (true) {
  auto f = [](QQuickItem * arg1) {
    ((QQuickTransform*)0)->prependToItem(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QQuickTransform13prependToItemEP10QQuickItem prependToItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 225, column 11>
//   // proto:  qreal QQuickItem::implicitWidth();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->implicitWidth();
    flythis.implicitWidth();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem13implicitWidthEv implicitWidth()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 235, column 21>
//   // proto:  QQuickItem::TransformOrigin QQuickItem::transformOrigin();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->transformOrigin();
    flythis.transformOrigin();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem15transformOriginEv transformOrigin()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 224, column 10>
//   // proto:  void QQuickItem::setImplicitWidth(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setImplicitWidth(arg1);
    flythis.setImplicitWidth(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem16setImplicitWidthEd setImplicitWidth(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 282, column 10>
//   // proto:  void QQuickItem::setAcceptedMouseButtons(Qt::MouseButtons buttons);
if (true) {
  auto f = [](QQuickItem flythis, Qt::MouseButtons arg1) {
    ((QQuickItem*)0)->setAcceptedMouseButtons(arg1);
    flythis.setAcceptedMouseButtons(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem23setAcceptedMouseButtonsE6QFlagsIN2Qt11MouseButtonEE setAcceptedMouseButtons(Qt::MouseButtons)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 210, column 10>
//   // proto:  void QQuickItem::setBaselineOffset(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setBaselineOffset(arg1);
    flythis.setBaselineOffset(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem17setBaselineOffsetEd setBaselineOffset(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 223, column 10>
//   // proto:  void QQuickItem::resetWidth();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->resetWidth();
    flythis.resetWidth();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem10resetWidthEv resetWidth()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 215, column 11>
//   // proto:  qreal QQuickItem::y();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->y();
    flythis.y();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem1yEv y()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 348, column 10>
//   // proto:  void QQuickItem::childrenRectChanged(const QRectF & );
if (true) {
  auto f = [](QQuickItem flythis, const QRectF & arg1) {
    ((QQuickItem*)0)->childrenRectChanged(arg1);
    flythis.childrenRectChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem19childrenRectChangedERK6QRectF childrenRectChanged(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 376, column 10>
//   // proto:  void QQuickItem::implicitHeightChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->implicitHeightChanged();
    flythis.implicitHeightChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem21implicitHeightChangedEv implicitHeightChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 331, column 22>
//   // proto:  QVariant QQuickItem::inputMethodQuery(Qt::InputMethodQuery query);
if (true) {
  auto f = [](QQuickItem flythis, Qt::InputMethodQuery arg1) {
    ((QQuickItem*)0)->inputMethodQuery(arg1);
    flythis.inputMethodQuery(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 370, column 10>
//   // proto:  void QQuickItem::xChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->xChanged();
    flythis.xChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem8xChangedEv xChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 267, column 11>
//   // proto:  Flags QQuickItem::flags();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->flags();
    flythis.flags();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 358, column 10>
//   // proto:  void QQuickItem::clipChanged(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->clipChanged(arg1);
    flythis.clipChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem11clipChangedEb clipChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 325, column 22>
//   // proto:  void QQuickItem::forceActiveFocus();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->forceActiveFocus();
    flythis.forceActiveFocus();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem16forceActiveFocusEv forceActiveFocus()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 204, column 10>
//   // proto:  void QQuickItem::setClip(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setClip(arg1);
    flythis.setClip(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem7setClipEb setClip(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 228, column 10>
//   // proto:  void QQuickItem::setHeight(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setHeight(arg1);
    flythis.setHeight(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem9setHeightEd setHeight(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 218, column 10>
//   // proto:  void QQuickItem::setY(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setY(arg1);
    flythis.setY(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem4setYEd setY(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 243, column 11>
//   // proto:  qreal QQuickItem::rotation();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->rotation();
    flythis.rotation();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem8rotationEv rotation()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 248, column 11>
//   // proto:  qreal QQuickItem::opacity();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->opacity();
    flythis.opacity();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem7opacityEv opacity()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 277, column 10>
//   // proto:  void QQuickItem::setFocus(bool focus, Qt::FocusReason reason);
if (true) {
  auto f = [](QQuickItem flythis, bool arg1, Qt::FocusReason arg2) {
    ((QQuickItem*)0)->setFocus(arg1, arg2);
    flythis.setFocus(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem8setFocusEbN2Qt11FocusReasonE setFocus(_Bool, Qt::FocusReason)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 231, column 11>
//   // proto:  qreal QQuickItem::implicitHeight();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->implicitHeight();
    flythis.implicitHeight();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem14implicitHeightEv implicitHeight()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 341, column 18>
//   // proto:  bool QQuickItem::isTextureProvider();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->isTextureProvider();
    flythis.isTextureProvider();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem17isTextureProviderEv isTextureProvider()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 368, column 10>
//   // proto:  void QQuickItem::scaleChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->scaleChanged();
    flythis.scaleChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem12scaleChangedEv scaleChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 375, column 10>
//   // proto:  void QQuickItem::implicitWidthChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->implicitWidthChanged();
    flythis.implicitWidthChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem20implicitWidthChangedEv implicitWidthChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 257, column 10>
//   // proto:  bool QQuickItem::smooth();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->smooth();
    flythis.smooth();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem6smoothEv smooth()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 212, column 39>
//   // proto:  QQmlListProperty<QQuickTransform> QQuickItem::transform();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->transform();
    flythis.transform();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem9transformEv transform()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 197, column 10>
//   // proto:  void QQuickItem::stackBefore(const QQuickItem * );
if (true) {
  auto f = [](QQuickItem flythis, const QQuickItem * arg1) {
    ((QQuickItem*)0)->stackBefore(arg1);
    flythis.stackBefore(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem11stackBeforeEPKS_ stackBefore(const class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 261, column 10>
//   // proto:  void QQuickItem::setActiveFocusOnTab(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setActiveFocusOnTab(arg1);
    flythis.setActiveFocusOnTab(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem19setActiveFocusOnTabEb setActiveFocusOnTab(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 245, column 11>
//   // proto:  qreal QQuickItem::scale();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->scale();
    flythis.scale();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem5scaleEv scale()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 255, column 10>
//   // proto:  void QQuickItem::setEnabled(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setEnabled(arg1);
    flythis.setEnabled(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem10setEnabledEb setEnabled(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 230, column 10>
//   // proto:  void QQuickItem::setImplicitHeight(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setImplicitHeight(arg1);
    flythis.setImplicitHeight(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem17setImplicitHeightEd setImplicitHeight(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 219, column 10>
//   // proto:  void QQuickItem::setPosition(const QPointF & );
if (true) {
  auto f = [](QQuickItem flythis, const QPointF & arg1) {
    ((QQuickItem*)0)->setPosition(arg1);
    flythis.setPosition(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem11setPositionERK7QPointF setPosition(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 258, column 10>
//   // proto:  void QQuickItem::setSmooth(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setSmooth(arg1);
    flythis.setSmooth(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem9setSmoothEb setSmooth(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 373, column 10>
//   // proto:  void QQuickItem::heightChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->heightChanged();
    flythis.heightChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem13heightChangedEv heightChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 371, column 10>
//   // proto:  void QQuickItem::yChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->yChanged();
    flythis.yChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem8yChangedEv yChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 317, column 13>
//   // proto:  QPointF QQuickItem::mapFromScene(const QPointF & point);
if (true) {
  auto f = [](QQuickItem flythis, const QPointF & arg1) {
    ((QQuickItem*)0)->mapFromScene(arg1);
    flythis.mapFromScene(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem12mapFromSceneERK7QPointF mapFromScene(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 357, column 10>
//   // proto:  void QQuickItem::antialiasingChanged(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->antialiasingChanged(arg1);
    flythis.antialiasingChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem19antialiasingChangedEb antialiasingChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 284, column 10>
//   // proto:  void QQuickItem::setAcceptHoverEvents(bool enabled);
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setAcceptHoverEvents(arg1);
    flythis.setAcceptHoverEvents(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem20setAcceptHoverEventsEb setAcceptHoverEvents(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 352, column 10>
//   // proto:  void QQuickItem::activeFocusChanged(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->activeFocusChanged(arg1);
    flythis.activeFocusChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem18activeFocusChangedEb activeFocusChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 372, column 10>
//   // proto:  void QQuickItem::widthChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->widthChanged();
    flythis.widthChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem12widthChangedEv widthChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 237, column 13>
//   // proto:  QPointF QQuickItem::transformOriginPoint();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->transformOriginPoint();
    flythis.transformOriginPoint();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem20transformOriginPointEv transformOriginPoint()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 207, column 10>
//   // proto:  void QQuickItem::setState(const QString & );
if (true) {
  auto f = [](QQuickItem flythis, const QString & arg1) {
    ((QQuickItem*)0)->setState(arg1);
    flythis.setState(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem8setStateERK7QString setState(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 195, column 17>
//   // proto:  QQuickItem * QQuickItem::parentItem();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->parentItem();
    flythis.parentItem();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem10parentItemEv parentItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 278, column 10>
//   // proto:  bool QQuickItem::isFocusScope();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->isFocusScope();
    flythis.isFocusScope();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem12isFocusScopeEv isFocusScope()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 309, column 30>
//   // proto:  bool QQuickItem::contains(const QPointF & point);
if (true) {
  auto f = [](QQuickItem flythis, const QPointF & arg1) {
    ((QQuickItem*)0)->contains(arg1);
    flythis.contains(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem8containsERK7QPointF contains(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 271, column 20>
//   // proto:  QRectF QQuickItem::boundingRect();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->boundingRect();
    flythis.boundingRect();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem12boundingRectEv boundingRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 265, column 10>
//   // proto:  void QQuickItem::resetAntialiasing();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->resetAntialiasing();
    flythis.resetAntialiasing();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem17resetAntialiasingEv resetAntialiasing()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 314, column 12>
//   // proto:  QRectF QQuickItem::mapRectToItem(const QQuickItem * item, const QRectF & rect);
if (true) {
  auto f = [](QQuickItem flythis, const QQuickItem * arg1, const QRectF & arg2) {
    ((QQuickItem*)0)->mapRectToItem(arg1, arg2);
    flythis.mapRectToItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem13mapRectToItemEPKS_RK6QRectF mapRectToItem(const class QQuickItem *, const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 214, column 11>
//   // proto:  qreal QQuickItem::x();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->x();
    flythis.x();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem1xEv x()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 316, column 13>
//   // proto:  QPointF QQuickItem::mapFromItem(const QQuickItem * item, const QPointF & point);
if (true) {
  auto f = [](QQuickItem flythis, const QQuickItem * arg1, const QPointF & arg2) {
    ((QQuickItem*)0)->mapFromItem(arg1, arg2);
    flythis.mapFromItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem11mapFromItemEPKS_RK7QPointF mapFromItem(const class QQuickItem *, const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 251, column 10>
//   // proto:  bool QQuickItem::isVisible();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->isVisible();
    flythis.isVisible();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem9isVisibleEv isVisible()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 359, column 24>
//   // proto:  void QQuickItem::windowChanged(QQuickWindow * window);
if (true) {
  auto f = [](QQuickItem flythis, QQuickWindow * arg1) {
    ((QQuickItem*)0)->windowChanged(arg1);
    flythis.windowChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem13windowChangedEP12QQuickWindow windowChanged(class QQuickWindow *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 342, column 33>
//   // proto:  QSGTextureProvider * QQuickItem::textureProvider();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->textureProvider();
    flythis.textureProvider();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem15textureProviderEv textureProvider()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 241, column 10>
//   // proto:  void QQuickItem::setZ(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setZ(arg1);
    flythis.setZ(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem4setZEd setZ(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 289, column 10>
//   // proto:  void QQuickItem::unsetCursor();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->unsetCursor();
    flythis.unsetCursor();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem11unsetCursorEv unsetCursor()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 283, column 10>
//   // proto:  bool QQuickItem::acceptHoverEvents();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->acceptHoverEvents();
    flythis.acceptHoverEvents();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem17acceptHoverEventsEv acceptHoverEvents()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 298, column 10>
//   // proto:  void QQuickItem::setFiltersChildMouseEvents(bool filter);
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setFiltersChildMouseEvents(arg1);
    flythis.setFiltersChildMouseEvents(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem26setFiltersChildMouseEventsEb setFiltersChildMouseEvents(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 254, column 10>
//   // proto:  bool QQuickItem::isEnabled();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->isEnabled();
    flythis.isEnabled();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem9isEnabledEv isEnabled()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 312, column 13>
//   // proto:  QPointF QQuickItem::mapToItem(const QQuickItem * item, const QPointF & point);
if (true) {
  auto f = [](QQuickItem flythis, const QQuickItem * arg1, const QPointF & arg2) {
    ((QQuickItem*)0)->mapToItem(arg1, arg2);
    flythis.mapToItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem9mapToItemEPKS_RK7QPointF mapToItem(const class QQuickItem *, const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 221, column 11>
//   // proto:  qreal QQuickItem::width();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->width();
    flythis.width();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem5widthEv width()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 313, column 13>
//   // proto:  QPointF QQuickItem::mapToScene(const QPointF & point);
if (true) {
  auto f = [](QQuickItem flythis, const QPointF & arg1) {
    ((QQuickItem*)0)->mapToScene(arg1);
    flythis.mapToScene(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem10mapToSceneERK7QPointF mapToScene(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 302, column 10>
//   // proto:  bool QQuickItem::keepTouchGrab();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->keepTouchGrab();
    flythis.keepTouchGrab();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem13keepTouchGrabEv keepTouchGrab()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 200, column 12>
//   // proto:  QRectF QQuickItem::childrenRect();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->childrenRect();
    flythis.childrenRect();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem12childrenRectEv childrenRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 92, column 5>
//   // proto:  const QMetaObject * QQuickItem::metaObject();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->metaObject();
    flythis.metaObject();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 296, column 10>
//   // proto:  void QQuickItem::setKeepMouseGrab(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setKeepMouseGrab(arg1);
    flythis.setKeepMouseGrab(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem16setKeepMouseGrabEb setKeepMouseGrab(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 297, column 10>
//   // proto:  bool QQuickItem::filtersChildMouseEvents();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->filtersChildMouseEvents();
    flythis.filtersChildMouseEvents();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem23filtersChildMouseEventsEv filtersChildMouseEvents()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 274, column 10>
//   // proto:  bool QQuickItem::hasActiveFocus();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->hasActiveFocus();
    flythis.hasActiveFocus();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem14hasActiveFocusEv hasActiveFocus()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 236, column 10>
//   // proto:  void QQuickItem::setTransformOrigin(QQuickItem::TransformOrigin );
if (true) {
  auto f = [](QQuickItem flythis, QQuickItem::TransformOrigin arg1) {
    ((QQuickItem*)0)->setTransformOrigin(arg1);
    flythis.setTransformOrigin(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem18setTransformOriginENS_15TransformOriginE setTransformOrigin(enum QQuickItem::TransformOrigin)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 292, column 10>
//   // proto:  bool QQuickItem::isUnderMouse();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->isUnderMouse();
    flythis.isUnderMouse();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem12isUnderMouseEv isUnderMouse()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 367, column 10>
//   // proto:  void QQuickItem::rotationChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->rotationChanged();
    flythis.rotationChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem15rotationChangedEv rotationChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 238, column 10>
//   // proto:  void QQuickItem::setTransformOriginPoint(const QPointF & );
if (true) {
  auto f = [](QQuickItem flythis, const QPointF & arg1) {
    ((QQuickItem*)0)->setTransformOriginPoint(arg1);
    flythis.setTransformOriginPoint(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem23setTransformOriginPointERK7QPointF setTransformOriginPoint(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 321, column 10>
//   // proto:  void QQuickItem::polish();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->polish();
    flythis.polish();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem6polishEv polish()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 362, column 10>
//   // proto:  void QQuickItem::childrenChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->childrenChanged();
    flythis.childrenChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem15childrenChangedEv childrenChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 364, column 10>
//   // proto:  void QQuickItem::enabledChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->enabledChanged();
    flythis.enabledChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem14enabledChangedEv enabledChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 196, column 10>
//   // proto:  void QQuickItem::setParentItem(QQuickItem * parent);
if (true) {
  auto f = [](QQuickItem flythis, QQuickItem * arg1) {
    ((QQuickItem*)0)->setParentItem(arg1);
    flythis.setParentItem(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem13setParentItemEPS_ setParentItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 191, column 5>
//   // proto:  void QQuickItem::QQuickItem(QQuickItem * parent);
if (true) {
  auto f = [](QQuickItem * arg1) {
    new QQuickItem(arg1);
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 222, column 10>
//   // proto:  void QQuickItem::setWidth(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setWidth(arg1);
    flythis.setWidth(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem8setWidthEd setWidth(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 354, column 10>
//   // proto:  void QQuickItem::parentChanged(QQuickItem * );
if (true) {
  auto f = [](QQuickItem flythis, QQuickItem * arg1) {
    ((QQuickItem*)0)->parentChanged(arg1);
    flythis.parentChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem13parentChangedEPS_ parentChanged(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 353, column 24>
//   // proto:  void QQuickItem::activeFocusOnTabChanged(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->activeFocusOnTabChanged(arg1);
    flythis.activeFocusOnTabChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem23activeFocusOnTabChangedEb activeFocusOnTabChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 326, column 22>
//   // proto:  void QQuickItem::forceActiveFocus(Qt::FocusReason reason);
if (true) {
  auto f = [](QQuickItem flythis, Qt::FocusReason arg1) {
    ((QQuickItem*)0)->forceActiveFocus(arg1);
    flythis.forceActiveFocus(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem16forceActiveFocusEN2Qt11FocusReasonE forceActiveFocus(Qt::FocusReason)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 327, column 43>
//   // proto:  QQuickItem * QQuickItem::nextItemInFocusChain(bool forward);
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->nextItemInFocusChain(arg1);
    flythis.nextItemInFocusChain(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem20nextItemInFocusChainEb nextItemInFocusChain(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 301, column 10>
//   // proto:  void QQuickItem::ungrabTouchPoints();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->ungrabTouchPoints();
    flythis.ungrabTouchPoints();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem17ungrabTouchPointsEv ungrabTouchPoints()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 295, column 10>
//   // proto:  bool QQuickItem::keepMouseGrab();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->keepMouseGrab();
    flythis.keepMouseGrab();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem13keepMouseGrabEv keepMouseGrab()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 319, column 12>
//   // proto:  QRectF QQuickItem::mapRectFromScene(const QRectF & rect);
if (true) {
  auto f = [](QQuickItem flythis, const QRectF & arg1) {
    ((QQuickItem*)0)->mapRectFromScene(arg1);
    flythis.mapRectFromScene(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem16mapRectFromSceneERK6QRectF mapRectFromScene(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 350, column 10>
//   // proto:  void QQuickItem::stateChanged(const QString & );
if (true) {
  auto f = [](QQuickItem flythis, const QString & arg1) {
    ((QQuickItem*)0)->stateChanged(arg1);
    flythis.stateChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem12stateChangedERK7QString stateChanged(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 351, column 10>
//   // proto:  void QQuickItem::focusChanged(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->focusChanged(arg1);
    flythis.focusChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem12focusChangedEb focusChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 216, column 13>
//   // proto:  QPointF QQuickItem::position();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->position();
    flythis.position();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem8positionEv position()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 227, column 11>
//   // proto:  qreal QQuickItem::height();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->height();
    flythis.height();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem6heightEv height()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 328, column 29>
//   // proto:  QQuickItem * QQuickItem::childAt(qreal x, qreal y);
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1, qreal arg2) {
    ((QQuickItem*)0)->childAt(arg1, arg2);
    flythis.childAt(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem7childAtEdd childAt(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 287, column 13>
//   // proto:  QCursor QQuickItem::cursor();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->cursor();
    flythis.cursor();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem6cursorEv cursor()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 203, column 10>
//   // proto:  bool QQuickItem::clip();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->clip();
    flythis.clip();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem4clipEv clip()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 263, column 10>
//   // proto:  bool QQuickItem::antialiasing();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->antialiasing();
    flythis.antialiasing();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem12antialiasingEv antialiasing()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 194, column 19>
//   // proto:  QQuickWindow * QQuickItem::window();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->window();
    flythis.window();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem6windowEv window()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 318, column 12>
//   // proto:  QRectF QQuickItem::mapRectFromItem(const QQuickItem * item, const QRectF & rect);
if (true) {
  auto f = [](QQuickItem flythis, const QQuickItem * arg1, const QRectF & arg2) {
    ((QQuickItem*)0)->mapRectFromItem(arg1, arg2);
    flythis.mapRectFromItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem15mapRectFromItemEPKS_RK6QRectF mapRectFromItem(const class QQuickItem *, const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 252, column 10>
//   // proto:  void QQuickItem::setVisible(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setVisible(arg1);
    flythis.setVisible(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem10setVisibleEb setVisible(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 268, column 10>
//   // proto:  void QQuickItem::setFlag(QQuickItem::Flag flag, bool enabled);
if (true) {
  auto f = [](QQuickItem flythis, QQuickItem::Flag arg1, bool arg2) {
    ((QQuickItem*)0)->setFlag(arg1, arg2);
    flythis.setFlag(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem7setFlagENS_4FlagEb setFlag(enum QQuickItem::Flag, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 276, column 10>
//   // proto:  void QQuickItem::setFocus(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setFocus(arg1);
    flythis.setFocus(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem8setFocusEb setFocus(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 260, column 10>
//   // proto:  bool QQuickItem::activeFocusOnTab();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->activeFocusOnTab();
    flythis.activeFocusOnTab();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem16activeFocusOnTabEv activeFocusOnTab()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 363, column 10>
//   // proto:  void QQuickItem::opacityChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->opacityChanged();
    flythis.opacityChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem14opacityChangedEv opacityChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 365, column 10>
//   // proto:  void QQuickItem::visibleChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->visibleChanged();
    flythis.visibleChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem14visibleChangedEv visibleChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 240, column 11>
//   // proto:  qreal QQuickItem::z();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->z();
    flythis.z();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem1zEv z()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 249, column 10>
//   // proto:  void QQuickItem::setOpacity(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setOpacity(arg1);
    flythis.setOpacity(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem10setOpacityEd setOpacity(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 269, column 10>
//   // proto:  void QQuickItem::setFlags(Flags flags);
if (true) {
  auto f = [](QQuickItem flythis, QQuickItem::Flags arg1) {
    ((QQuickItem*)0)->setFlags(arg1);
    flythis.setFlags(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem8setFlagsE6QFlagsINS_4FlagEE setFlags(Flags)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 264, column 10>
//   // proto:  void QQuickItem::setAntialiasing(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setAntialiasing(arg1);
    flythis.setAntialiasing(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem15setAntialiasingEb setAntialiasing(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 366, column 10>
//   // proto:  void QQuickItem::visibleChildrenChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->visibleChildrenChanged();
    flythis.visibleChildrenChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem22visibleChildrenChangedEv visibleChildrenChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 201, column 25>
//   // proto:  QList<QQuickItem *> QQuickItem::childItems();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->childItems();
    flythis.childItems();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem10childItemsEv childItems()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 233, column 10>
//   // proto:  void QQuickItem::setSize(const QSizeF & size);
if (true) {
  auto f = [](QQuickItem flythis, const QSizeF & arg1) {
    ((QQuickItem*)0)->setSize(arg1);
    flythis.setSize(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem7setSizeERK6QSizeF setSize(const class QSizeF &)
//   // proto:  void QQuickItem::~QQuickItem();
if (true) {
  delete ((QQuickItem*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 279, column 17>
//   // proto:  QQuickItem * QQuickItem::scopedFocusItem();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->scopedFocusItem();
    flythis.scopedFocusItem();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem15scopedFocusItemEv scopedFocusItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 306, column 36>
//   // proto:  bool QQuickItem::grabToImage(const QJSValue & callback, const QSize & targetSize);
if (true) {
  auto f = [](QQuickItem flythis, const QJSValue & arg1, const QSize & arg2) {
    ((QQuickItem*)0)->grabToImage(arg1, arg2);
    flythis.grabToImage(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem11grabToImageERK8QJSValueRK5QSize grabToImage(const class QJSValue &, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 355, column 10>
//   // proto:  void QQuickItem::transformOriginChanged(QQuickItem::TransformOrigin );
if (true) {
  auto f = [](QQuickItem flythis, QQuickItem::TransformOrigin arg1) {
    ((QQuickItem*)0)->transformOriginChanged(arg1);
    flythis.transformOriginChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE transformOriginChanged(enum QQuickItem::TransformOrigin)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 311, column 16>
//   // proto:  QTransform QQuickItem::itemTransform(QQuickItem * , bool * );
if (true) {
  auto f = [](QQuickItem flythis, QQuickItem * arg1, bool * arg2) {
    ((QQuickItem*)0)->itemTransform(arg1, arg2);
    flythis.itemTransform(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem13itemTransformEPS_Pb itemTransform(class QQuickItem *, _Bool *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 345, column 10>
//   // proto:  void QQuickItem::update();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->update();
    flythis.update();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem6updateEv update()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 288, column 10>
//   // proto:  void QQuickItem::setCursor(const QCursor & cursor);
if (true) {
  auto f = [](QQuickItem flythis, const QCursor & arg1) {
    ((QQuickItem*)0)->setCursor(arg1);
    flythis.setCursor(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem9setCursorERK7QCursor setCursor(const class QCursor &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 300, column 10>
//   // proto:  void QQuickItem::grabTouchPoints(const QVector<int> & ids);
if (true) {
  auto f = [](QQuickItem flythis, const QVector<int> & arg1) {
    ((QQuickItem*)0)->grabTouchPoints(arg1);
    flythis.grabTouchPoints(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem15grabTouchPointsERK7QVectorIiE grabTouchPoints(const QVector<int> &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 307, column 42>
//   // proto:  QSharedPointer<QQuickItemGrabResult> QQuickItem::grabToImage(const QSize & targetSize);
if (true) {
  auto f = [](QQuickItem flythis, const QSize & arg1) {
    ((QQuickItem*)0)->grabToImage(arg1);
    flythis.grabToImage(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem11grabToImageERK5QSize grabToImage(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 324, column 22>
//   // proto:  void QQuickItem::mapToItem(QQmlV4Function * );
if (true) {
  auto f = [](QQuickItem flythis, QQmlV4Function * arg1) {
    ((QQuickItem*)0)->mapToItem(arg1);
    flythis.mapToItem(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem9mapToItemEP14QQmlV4Function mapToItem(class QQmlV4Function *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 272, column 20>
//   // proto:  QRectF QQuickItem::clipRect();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->clipRect();
    flythis.clipRect();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem8clipRectEv clipRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 281, column 22>
//   // proto:  Qt::MouseButtons QQuickItem::acceptedMouseButtons();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->acceptedMouseButtons();
    flythis.acceptedMouseButtons();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem20acceptedMouseButtonsEv acceptedMouseButtons()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 294, column 10>
//   // proto:  void QQuickItem::ungrabMouse();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->ungrabMouse();
    flythis.ungrabMouse();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem11ungrabMouseEv ungrabMouse()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 315, column 12>
//   // proto:  QRectF QQuickItem::mapRectToScene(const QRectF & rect);
if (true) {
  auto f = [](QQuickItem flythis, const QRectF & arg1) {
    ((QQuickItem*)0)->mapRectToScene(arg1);
    flythis.mapRectToScene(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem14mapRectToSceneERK6QRectF mapRectToScene(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 244, column 10>
//   // proto:  void QQuickItem::setRotation(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setRotation(arg1);
    flythis.setRotation(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem11setRotationEd setRotation(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 356, column 10>
//   // proto:  void QQuickItem::smoothChanged(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->smoothChanged(arg1);
    flythis.smoothChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem13smoothChangedEb smoothChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 323, column 22>
//   // proto:  void QQuickItem::mapFromItem(QQmlV4Function * );
if (true) {
  auto f = [](QQuickItem flythis, QQmlV4Function * arg1) {
    ((QQuickItem*)0)->mapFromItem(arg1);
    flythis.mapFromItem(arg1);
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem11mapFromItemEP14QQmlV4Function mapFromItem(class QQmlV4Function *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 275, column 10>
//   // proto:  bool QQuickItem::hasFocus();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->hasFocus();
    flythis.hasFocus();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem8hasFocusEv hasFocus()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 217, column 10>
//   // proto:  void QQuickItem::setX(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setX(arg1);
    flythis.setX(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem4setXEd setX(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 206, column 13>
//   // proto:  QString QQuickItem::state();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->state();
    flythis.state();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem5stateEv state()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 246, column 10>
//   // proto:  void QQuickItem::setScale(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->setScale(arg1);
    flythis.setScale(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem8setScaleEd setScale(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 229, column 10>
//   // proto:  void QQuickItem::resetHeight();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->resetHeight();
    flythis.resetHeight();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem11resetHeightEv resetHeight()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 293, column 10>
//   // proto:  void QQuickItem::grabMouse();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->grabMouse();
    flythis.grabMouse();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem9grabMouseEv grabMouse()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 303, column 10>
//   // proto:  void QQuickItem::setKeepTouchGrab(bool );
if (true) {
  auto f = [](QQuickItem flythis, bool arg1) {
    ((QQuickItem*)0)->setKeepTouchGrab(arg1);
    flythis.setKeepTouchGrab(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem16setKeepTouchGrabEb setKeepTouchGrab(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 349, column 10>
//   // proto:  void QQuickItem::baselineOffsetChanged(qreal );
if (true) {
  auto f = [](QQuickItem flythis, qreal arg1) {
    ((QQuickItem*)0)->baselineOffsetChanged(arg1);
    flythis.baselineOffsetChanged(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem21baselineOffsetChangedEd baselineOffsetChanged(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 198, column 10>
//   // proto:  void QQuickItem::stackAfter(const QQuickItem * );
if (true) {
  auto f = [](QQuickItem flythis, const QQuickItem * arg1) {
    ((QQuickItem*)0)->stackAfter(arg1);
    flythis.stackAfter(arg1);
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem10stackAfterEPKS_ stackAfter(const class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 209, column 11>
//   // proto:  qreal QQuickItem::baselineOffset();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->baselineOffset();
    flythis.baselineOffset();
  };
  if (f == nullptr){}
}
// _ZNK10QQuickItem14baselineOffsetEv baselineOffset()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 374, column 10>
//   // proto:  void QQuickItem::zChanged();
if (true) {
  auto f = [](QQuickItem flythis) {
    ((QQuickItem*)0)->zChanged();
    flythis.zChanged();
  };
  if (f == nullptr){}
}
// _ZN10QQuickItem8zChangedEv zChanged()
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
//   // proto:  void QQuickTransform::~QQuickTransform();
extern "C"
void C_ZN15QQuickTransformD2Ev(void *qthis) {
  delete (QQuickTransform*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 54, column 5>
//   // proto:  const QMetaObject * QQuickTransform::metaObject();
extern "C"
void C_ZNK15QQuickTransform10metaObjectEv(void *qthis) {
  ((QQuickTransform*)qthis)->metaObject();
}
// _ZNK15QQuickTransform10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 56, column 5>
//   // proto:  void QQuickTransform::QQuickTransform(QObject * parent);
extern "C"
void C_ZN15QQuickTransformC2EP7QObject(QObject * arg1) {
  // new QQuickTransform(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 59, column 10>
//   // proto:  void QQuickTransform::appendToItem(QQuickItem * );
extern "C"
void C_ZN15QQuickTransform12appendToItemEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((QQuickTransform*)qthis)->appendToItem(arg1);
}
// _ZN15QQuickTransform12appendToItemEP10QQuickItem appendToItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 62, column 18>
//   // proto:  void QQuickTransform::applyTo(QMatrix4x4 * matrix);
extern "C"
void C_ZNK15QQuickTransform7applyToEP10QMatrix4x4(void *qthis, QMatrix4x4 * arg1) {
  ((QQuickTransform*)qthis)->applyTo(arg1);
}
// _ZNK15QQuickTransform7applyToEP10QMatrix4x4 applyTo(class QMatrix4x4 *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 60, column 10>
//   // proto:  void QQuickTransform::prependToItem(QQuickItem * );
extern "C"
void C_ZN15QQuickTransform13prependToItemEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((QQuickTransform*)qthis)->prependToItem(arg1);
}
// _ZN15QQuickTransform13prependToItemEP10QQuickItem prependToItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 225, column 11>
//   // proto:  qreal QQuickItem::implicitWidth();
extern "C"
void C_ZNK10QQuickItem13implicitWidthEv(void *qthis) {
  ((QQuickItem*)qthis)->implicitWidth();
}
// _ZNK10QQuickItem13implicitWidthEv implicitWidth()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 235, column 21>
//   // proto:  QQuickItem::TransformOrigin QQuickItem::transformOrigin();
extern "C"
void C_ZNK10QQuickItem15transformOriginEv(void *qthis) {
  ((QQuickItem*)qthis)->transformOrigin();
}
// _ZNK10QQuickItem15transformOriginEv transformOrigin()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 224, column 10>
//   // proto:  void QQuickItem::setImplicitWidth(qreal );
extern "C"
void C_ZN10QQuickItem16setImplicitWidthEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setImplicitWidth(arg1);
}
// _ZN10QQuickItem16setImplicitWidthEd setImplicitWidth(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 282, column 10>
//   // proto:  void QQuickItem::setAcceptedMouseButtons(Qt::MouseButtons buttons);
extern "C"
void C_ZN10QQuickItem23setAcceptedMouseButtonsE6QFlagsIN2Qt11MouseButtonEE(void *qthis, Qt::MouseButtons arg1) {
  ((QQuickItem*)qthis)->setAcceptedMouseButtons(arg1);
}
// _ZN10QQuickItem23setAcceptedMouseButtonsE6QFlagsIN2Qt11MouseButtonEE setAcceptedMouseButtons(Qt::MouseButtons)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 210, column 10>
//   // proto:  void QQuickItem::setBaselineOffset(qreal );
extern "C"
void C_ZN10QQuickItem17setBaselineOffsetEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setBaselineOffset(arg1);
}
// _ZN10QQuickItem17setBaselineOffsetEd setBaselineOffset(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 223, column 10>
//   // proto:  void QQuickItem::resetWidth();
extern "C"
void C_ZN10QQuickItem10resetWidthEv(void *qthis) {
  ((QQuickItem*)qthis)->resetWidth();
}
// _ZN10QQuickItem10resetWidthEv resetWidth()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 215, column 11>
//   // proto:  qreal QQuickItem::y();
extern "C"
void C_ZNK10QQuickItem1yEv(void *qthis) {
  ((QQuickItem*)qthis)->y();
}
// _ZNK10QQuickItem1yEv y()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 348, column 10>
//   // proto:  void QQuickItem::childrenRectChanged(const QRectF & );
extern "C"
void C_ZN10QQuickItem19childrenRectChangedERK6QRectF(void *qthis, const QRectF & arg1) {
  ((QQuickItem*)qthis)->childrenRectChanged(arg1);
}
// _ZN10QQuickItem19childrenRectChangedERK6QRectF childrenRectChanged(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 376, column 10>
//   // proto:  void QQuickItem::implicitHeightChanged();
extern "C"
void C_ZN10QQuickItem21implicitHeightChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->implicitHeightChanged();
}
// _ZN10QQuickItem21implicitHeightChangedEv implicitHeightChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 331, column 22>
//   // proto:  QVariant QQuickItem::inputMethodQuery(Qt::InputMethodQuery query);
extern "C"
void C_ZNK10QQuickItem16inputMethodQueryEN2Qt16InputMethodQueryE(void *qthis, Qt::InputMethodQuery arg1) {
  ((QQuickItem*)qthis)->inputMethodQuery(arg1);
}
// _ZNK10QQuickItem16inputMethodQueryEN2Qt16InputMethodQueryE inputMethodQuery(Qt::InputMethodQuery)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 370, column 10>
//   // proto:  void QQuickItem::xChanged();
extern "C"
void C_ZN10QQuickItem8xChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->xChanged();
}
// _ZN10QQuickItem8xChangedEv xChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 267, column 11>
//   // proto:  Flags QQuickItem::flags();
extern "C"
void C_ZNK10QQuickItem5flagsEv(void *qthis) {
  ((QQuickItem*)qthis)->flags();
}
// _ZNK10QQuickItem5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 358, column 10>
//   // proto:  void QQuickItem::clipChanged(bool );
extern "C"
void C_ZN10QQuickItem11clipChangedEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->clipChanged(arg1);
}
// _ZN10QQuickItem11clipChangedEb clipChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 325, column 22>
//   // proto:  void QQuickItem::forceActiveFocus();
extern "C"
void C_ZN10QQuickItem16forceActiveFocusEv(void *qthis) {
  ((QQuickItem*)qthis)->forceActiveFocus();
}
// _ZN10QQuickItem16forceActiveFocusEv forceActiveFocus()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 204, column 10>
//   // proto:  void QQuickItem::setClip(bool );
extern "C"
void C_ZN10QQuickItem7setClipEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setClip(arg1);
}
// _ZN10QQuickItem7setClipEb setClip(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 228, column 10>
//   // proto:  void QQuickItem::setHeight(qreal );
extern "C"
void C_ZN10QQuickItem9setHeightEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setHeight(arg1);
}
// _ZN10QQuickItem9setHeightEd setHeight(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 218, column 10>
//   // proto:  void QQuickItem::setY(qreal );
extern "C"
void C_ZN10QQuickItem4setYEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setY(arg1);
}
// _ZN10QQuickItem4setYEd setY(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 243, column 11>
//   // proto:  qreal QQuickItem::rotation();
extern "C"
void C_ZNK10QQuickItem8rotationEv(void *qthis) {
  ((QQuickItem*)qthis)->rotation();
}
// _ZNK10QQuickItem8rotationEv rotation()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 248, column 11>
//   // proto:  qreal QQuickItem::opacity();
extern "C"
void C_ZNK10QQuickItem7opacityEv(void *qthis) {
  ((QQuickItem*)qthis)->opacity();
}
// _ZNK10QQuickItem7opacityEv opacity()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 277, column 10>
//   // proto:  void QQuickItem::setFocus(bool focus, Qt::FocusReason reason);
extern "C"
void C_ZN10QQuickItem8setFocusEbN2Qt11FocusReasonE(void *qthis, bool arg1, Qt::FocusReason arg2) {
  ((QQuickItem*)qthis)->setFocus(arg1, arg2);
}
// _ZN10QQuickItem8setFocusEbN2Qt11FocusReasonE setFocus(_Bool, Qt::FocusReason)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 231, column 11>
//   // proto:  qreal QQuickItem::implicitHeight();
extern "C"
void C_ZNK10QQuickItem14implicitHeightEv(void *qthis) {
  ((QQuickItem*)qthis)->implicitHeight();
}
// _ZNK10QQuickItem14implicitHeightEv implicitHeight()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 341, column 18>
//   // proto:  bool QQuickItem::isTextureProvider();
extern "C"
void C_ZNK10QQuickItem17isTextureProviderEv(void *qthis) {
  ((QQuickItem*)qthis)->isTextureProvider();
}
// _ZNK10QQuickItem17isTextureProviderEv isTextureProvider()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 368, column 10>
//   // proto:  void QQuickItem::scaleChanged();
extern "C"
void C_ZN10QQuickItem12scaleChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->scaleChanged();
}
// _ZN10QQuickItem12scaleChangedEv scaleChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 375, column 10>
//   // proto:  void QQuickItem::implicitWidthChanged();
extern "C"
void C_ZN10QQuickItem20implicitWidthChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->implicitWidthChanged();
}
// _ZN10QQuickItem20implicitWidthChangedEv implicitWidthChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 257, column 10>
//   // proto:  bool QQuickItem::smooth();
extern "C"
void C_ZNK10QQuickItem6smoothEv(void *qthis) {
  ((QQuickItem*)qthis)->smooth();
}
// _ZNK10QQuickItem6smoothEv smooth()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 212, column 39>
//   // proto:  QQmlListProperty<QQuickTransform> QQuickItem::transform();
extern "C"
void C_ZN10QQuickItem9transformEv(void *qthis) {
  ((QQuickItem*)qthis)->transform();
}
// _ZN10QQuickItem9transformEv transform()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 197, column 10>
//   // proto:  void QQuickItem::stackBefore(const QQuickItem * );
extern "C"
void C_ZN10QQuickItem11stackBeforeEPKS_(void *qthis, const QQuickItem * arg1) {
  ((QQuickItem*)qthis)->stackBefore(arg1);
}
// _ZN10QQuickItem11stackBeforeEPKS_ stackBefore(const class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 261, column 10>
//   // proto:  void QQuickItem::setActiveFocusOnTab(bool );
extern "C"
void C_ZN10QQuickItem19setActiveFocusOnTabEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setActiveFocusOnTab(arg1);
}
// _ZN10QQuickItem19setActiveFocusOnTabEb setActiveFocusOnTab(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 245, column 11>
//   // proto:  qreal QQuickItem::scale();
extern "C"
void C_ZNK10QQuickItem5scaleEv(void *qthis) {
  ((QQuickItem*)qthis)->scale();
}
// _ZNK10QQuickItem5scaleEv scale()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 255, column 10>
//   // proto:  void QQuickItem::setEnabled(bool );
extern "C"
void C_ZN10QQuickItem10setEnabledEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setEnabled(arg1);
}
// _ZN10QQuickItem10setEnabledEb setEnabled(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 230, column 10>
//   // proto:  void QQuickItem::setImplicitHeight(qreal );
extern "C"
void C_ZN10QQuickItem17setImplicitHeightEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setImplicitHeight(arg1);
}
// _ZN10QQuickItem17setImplicitHeightEd setImplicitHeight(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 219, column 10>
//   // proto:  void QQuickItem::setPosition(const QPointF & );
extern "C"
void C_ZN10QQuickItem11setPositionERK7QPointF(void *qthis, const QPointF & arg1) {
  ((QQuickItem*)qthis)->setPosition(arg1);
}
// _ZN10QQuickItem11setPositionERK7QPointF setPosition(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 258, column 10>
//   // proto:  void QQuickItem::setSmooth(bool );
extern "C"
void C_ZN10QQuickItem9setSmoothEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setSmooth(arg1);
}
// _ZN10QQuickItem9setSmoothEb setSmooth(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 373, column 10>
//   // proto:  void QQuickItem::heightChanged();
extern "C"
void C_ZN10QQuickItem13heightChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->heightChanged();
}
// _ZN10QQuickItem13heightChangedEv heightChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 371, column 10>
//   // proto:  void QQuickItem::yChanged();
extern "C"
void C_ZN10QQuickItem8yChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->yChanged();
}
// _ZN10QQuickItem8yChangedEv yChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 317, column 13>
//   // proto:  QPointF QQuickItem::mapFromScene(const QPointF & point);
extern "C"
void C_ZNK10QQuickItem12mapFromSceneERK7QPointF(void *qthis, const QPointF & arg1) {
  ((QQuickItem*)qthis)->mapFromScene(arg1);
}
// _ZNK10QQuickItem12mapFromSceneERK7QPointF mapFromScene(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 357, column 10>
//   // proto:  void QQuickItem::antialiasingChanged(bool );
extern "C"
void C_ZN10QQuickItem19antialiasingChangedEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->antialiasingChanged(arg1);
}
// _ZN10QQuickItem19antialiasingChangedEb antialiasingChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 284, column 10>
//   // proto:  void QQuickItem::setAcceptHoverEvents(bool enabled);
extern "C"
void C_ZN10QQuickItem20setAcceptHoverEventsEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setAcceptHoverEvents(arg1);
}
// _ZN10QQuickItem20setAcceptHoverEventsEb setAcceptHoverEvents(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 352, column 10>
//   // proto:  void QQuickItem::activeFocusChanged(bool );
extern "C"
void C_ZN10QQuickItem18activeFocusChangedEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->activeFocusChanged(arg1);
}
// _ZN10QQuickItem18activeFocusChangedEb activeFocusChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 372, column 10>
//   // proto:  void QQuickItem::widthChanged();
extern "C"
void C_ZN10QQuickItem12widthChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->widthChanged();
}
// _ZN10QQuickItem12widthChangedEv widthChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 237, column 13>
//   // proto:  QPointF QQuickItem::transformOriginPoint();
extern "C"
void C_ZNK10QQuickItem20transformOriginPointEv(void *qthis) {
  ((QQuickItem*)qthis)->transformOriginPoint();
}
// _ZNK10QQuickItem20transformOriginPointEv transformOriginPoint()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 207, column 10>
//   // proto:  void QQuickItem::setState(const QString & );
extern "C"
void C_ZN10QQuickItem8setStateERK7QString(void *qthis, const QString & arg1) {
  ((QQuickItem*)qthis)->setState(arg1);
}
// _ZN10QQuickItem8setStateERK7QString setState(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 195, column 17>
//   // proto:  QQuickItem * QQuickItem::parentItem();
extern "C"
void C_ZNK10QQuickItem10parentItemEv(void *qthis) {
  ((QQuickItem*)qthis)->parentItem();
}
// _ZNK10QQuickItem10parentItemEv parentItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 278, column 10>
//   // proto:  bool QQuickItem::isFocusScope();
extern "C"
void C_ZNK10QQuickItem12isFocusScopeEv(void *qthis) {
  ((QQuickItem*)qthis)->isFocusScope();
}
// _ZNK10QQuickItem12isFocusScopeEv isFocusScope()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 309, column 30>
//   // proto:  bool QQuickItem::contains(const QPointF & point);
extern "C"
void C_ZNK10QQuickItem8containsERK7QPointF(void *qthis, const QPointF & arg1) {
  ((QQuickItem*)qthis)->contains(arg1);
}
// _ZNK10QQuickItem8containsERK7QPointF contains(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 271, column 20>
//   // proto:  QRectF QQuickItem::boundingRect();
extern "C"
void C_ZNK10QQuickItem12boundingRectEv(void *qthis) {
  ((QQuickItem*)qthis)->boundingRect();
}
// _ZNK10QQuickItem12boundingRectEv boundingRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 265, column 10>
//   // proto:  void QQuickItem::resetAntialiasing();
extern "C"
void C_ZN10QQuickItem17resetAntialiasingEv(void *qthis) {
  ((QQuickItem*)qthis)->resetAntialiasing();
}
// _ZN10QQuickItem17resetAntialiasingEv resetAntialiasing()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 314, column 12>
//   // proto:  QRectF QQuickItem::mapRectToItem(const QQuickItem * item, const QRectF & rect);
extern "C"
void C_ZNK10QQuickItem13mapRectToItemEPKS_RK6QRectF(void *qthis, const QQuickItem * arg1, const QRectF & arg2) {
  ((QQuickItem*)qthis)->mapRectToItem(arg1, arg2);
}
// _ZNK10QQuickItem13mapRectToItemEPKS_RK6QRectF mapRectToItem(const class QQuickItem *, const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 214, column 11>
//   // proto:  qreal QQuickItem::x();
extern "C"
void C_ZNK10QQuickItem1xEv(void *qthis) {
  ((QQuickItem*)qthis)->x();
}
// _ZNK10QQuickItem1xEv x()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 316, column 13>
//   // proto:  QPointF QQuickItem::mapFromItem(const QQuickItem * item, const QPointF & point);
extern "C"
void C_ZNK10QQuickItem11mapFromItemEPKS_RK7QPointF(void *qthis, const QQuickItem * arg1, const QPointF & arg2) {
  ((QQuickItem*)qthis)->mapFromItem(arg1, arg2);
}
// _ZNK10QQuickItem11mapFromItemEPKS_RK7QPointF mapFromItem(const class QQuickItem *, const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 251, column 10>
//   // proto:  bool QQuickItem::isVisible();
extern "C"
void C_ZNK10QQuickItem9isVisibleEv(void *qthis) {
  ((QQuickItem*)qthis)->isVisible();
}
// _ZNK10QQuickItem9isVisibleEv isVisible()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 359, column 24>
//   // proto:  void QQuickItem::windowChanged(QQuickWindow * window);
extern "C"
void C_ZN10QQuickItem13windowChangedEP12QQuickWindow(void *qthis, QQuickWindow * arg1) {
  ((QQuickItem*)qthis)->windowChanged(arg1);
}
// _ZN10QQuickItem13windowChangedEP12QQuickWindow windowChanged(class QQuickWindow *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 342, column 33>
//   // proto:  QSGTextureProvider * QQuickItem::textureProvider();
extern "C"
void C_ZNK10QQuickItem15textureProviderEv(void *qthis) {
  ((QQuickItem*)qthis)->textureProvider();
}
// _ZNK10QQuickItem15textureProviderEv textureProvider()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 241, column 10>
//   // proto:  void QQuickItem::setZ(qreal );
extern "C"
void C_ZN10QQuickItem4setZEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setZ(arg1);
}
// _ZN10QQuickItem4setZEd setZ(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 289, column 10>
//   // proto:  void QQuickItem::unsetCursor();
extern "C"
void C_ZN10QQuickItem11unsetCursorEv(void *qthis) {
  ((QQuickItem*)qthis)->unsetCursor();
}
// _ZN10QQuickItem11unsetCursorEv unsetCursor()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 283, column 10>
//   // proto:  bool QQuickItem::acceptHoverEvents();
extern "C"
void C_ZNK10QQuickItem17acceptHoverEventsEv(void *qthis) {
  ((QQuickItem*)qthis)->acceptHoverEvents();
}
// _ZNK10QQuickItem17acceptHoverEventsEv acceptHoverEvents()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 298, column 10>
//   // proto:  void QQuickItem::setFiltersChildMouseEvents(bool filter);
extern "C"
void C_ZN10QQuickItem26setFiltersChildMouseEventsEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setFiltersChildMouseEvents(arg1);
}
// _ZN10QQuickItem26setFiltersChildMouseEventsEb setFiltersChildMouseEvents(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 254, column 10>
//   // proto:  bool QQuickItem::isEnabled();
extern "C"
void C_ZNK10QQuickItem9isEnabledEv(void *qthis) {
  ((QQuickItem*)qthis)->isEnabled();
}
// _ZNK10QQuickItem9isEnabledEv isEnabled()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 312, column 13>
//   // proto:  QPointF QQuickItem::mapToItem(const QQuickItem * item, const QPointF & point);
extern "C"
void C_ZNK10QQuickItem9mapToItemEPKS_RK7QPointF(void *qthis, const QQuickItem * arg1, const QPointF & arg2) {
  ((QQuickItem*)qthis)->mapToItem(arg1, arg2);
}
// _ZNK10QQuickItem9mapToItemEPKS_RK7QPointF mapToItem(const class QQuickItem *, const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 221, column 11>
//   // proto:  qreal QQuickItem::width();
extern "C"
void C_ZNK10QQuickItem5widthEv(void *qthis) {
  ((QQuickItem*)qthis)->width();
}
// _ZNK10QQuickItem5widthEv width()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 313, column 13>
//   // proto:  QPointF QQuickItem::mapToScene(const QPointF & point);
extern "C"
void C_ZNK10QQuickItem10mapToSceneERK7QPointF(void *qthis, const QPointF & arg1) {
  ((QQuickItem*)qthis)->mapToScene(arg1);
}
// _ZNK10QQuickItem10mapToSceneERK7QPointF mapToScene(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 302, column 10>
//   // proto:  bool QQuickItem::keepTouchGrab();
extern "C"
void C_ZNK10QQuickItem13keepTouchGrabEv(void *qthis) {
  ((QQuickItem*)qthis)->keepTouchGrab();
}
// _ZNK10QQuickItem13keepTouchGrabEv keepTouchGrab()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 200, column 12>
//   // proto:  QRectF QQuickItem::childrenRect();
extern "C"
void C_ZN10QQuickItem12childrenRectEv(void *qthis) {
  ((QQuickItem*)qthis)->childrenRect();
}
// _ZN10QQuickItem12childrenRectEv childrenRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 92, column 5>
//   // proto:  const QMetaObject * QQuickItem::metaObject();
extern "C"
void C_ZNK10QQuickItem10metaObjectEv(void *qthis) {
  ((QQuickItem*)qthis)->metaObject();
}
// _ZNK10QQuickItem10metaObjectEv metaObject()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 296, column 10>
//   // proto:  void QQuickItem::setKeepMouseGrab(bool );
extern "C"
void C_ZN10QQuickItem16setKeepMouseGrabEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setKeepMouseGrab(arg1);
}
// _ZN10QQuickItem16setKeepMouseGrabEb setKeepMouseGrab(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 297, column 10>
//   // proto:  bool QQuickItem::filtersChildMouseEvents();
extern "C"
void C_ZNK10QQuickItem23filtersChildMouseEventsEv(void *qthis) {
  ((QQuickItem*)qthis)->filtersChildMouseEvents();
}
// _ZNK10QQuickItem23filtersChildMouseEventsEv filtersChildMouseEvents()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 274, column 10>
//   // proto:  bool QQuickItem::hasActiveFocus();
extern "C"
void C_ZNK10QQuickItem14hasActiveFocusEv(void *qthis) {
  ((QQuickItem*)qthis)->hasActiveFocus();
}
// _ZNK10QQuickItem14hasActiveFocusEv hasActiveFocus()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 236, column 10>
//   // proto:  void QQuickItem::setTransformOrigin(QQuickItem::TransformOrigin );
extern "C"
void C_ZN10QQuickItem18setTransformOriginENS_15TransformOriginE(void *qthis, QQuickItem::TransformOrigin arg1) {
  ((QQuickItem*)qthis)->setTransformOrigin(arg1);
}
// _ZN10QQuickItem18setTransformOriginENS_15TransformOriginE setTransformOrigin(enum QQuickItem::TransformOrigin)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 292, column 10>
//   // proto:  bool QQuickItem::isUnderMouse();
extern "C"
void C_ZNK10QQuickItem12isUnderMouseEv(void *qthis) {
  ((QQuickItem*)qthis)->isUnderMouse();
}
// _ZNK10QQuickItem12isUnderMouseEv isUnderMouse()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 367, column 10>
//   // proto:  void QQuickItem::rotationChanged();
extern "C"
void C_ZN10QQuickItem15rotationChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->rotationChanged();
}
// _ZN10QQuickItem15rotationChangedEv rotationChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 238, column 10>
//   // proto:  void QQuickItem::setTransformOriginPoint(const QPointF & );
extern "C"
void C_ZN10QQuickItem23setTransformOriginPointERK7QPointF(void *qthis, const QPointF & arg1) {
  ((QQuickItem*)qthis)->setTransformOriginPoint(arg1);
}
// _ZN10QQuickItem23setTransformOriginPointERK7QPointF setTransformOriginPoint(const class QPointF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 321, column 10>
//   // proto:  void QQuickItem::polish();
extern "C"
void C_ZN10QQuickItem6polishEv(void *qthis) {
  ((QQuickItem*)qthis)->polish();
}
// _ZN10QQuickItem6polishEv polish()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 362, column 10>
//   // proto:  void QQuickItem::childrenChanged();
extern "C"
void C_ZN10QQuickItem15childrenChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->childrenChanged();
}
// _ZN10QQuickItem15childrenChangedEv childrenChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 364, column 10>
//   // proto:  void QQuickItem::enabledChanged();
extern "C"
void C_ZN10QQuickItem14enabledChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->enabledChanged();
}
// _ZN10QQuickItem14enabledChangedEv enabledChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 196, column 10>
//   // proto:  void QQuickItem::setParentItem(QQuickItem * parent);
extern "C"
void C_ZN10QQuickItem13setParentItemEPS_(void *qthis, QQuickItem * arg1) {
  ((QQuickItem*)qthis)->setParentItem(arg1);
}
// _ZN10QQuickItem13setParentItemEPS_ setParentItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 191, column 5>
//   // proto:  void QQuickItem::QQuickItem(QQuickItem * parent);
extern "C"
void C_ZN10QQuickItemC2EPS_(QQuickItem * arg1) {
  new QQuickItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 222, column 10>
//   // proto:  void QQuickItem::setWidth(qreal );
extern "C"
void C_ZN10QQuickItem8setWidthEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setWidth(arg1);
}
// _ZN10QQuickItem8setWidthEd setWidth(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 354, column 10>
//   // proto:  void QQuickItem::parentChanged(QQuickItem * );
extern "C"
void C_ZN10QQuickItem13parentChangedEPS_(void *qthis, QQuickItem * arg1) {
  ((QQuickItem*)qthis)->parentChanged(arg1);
}
// _ZN10QQuickItem13parentChangedEPS_ parentChanged(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 353, column 24>
//   // proto:  void QQuickItem::activeFocusOnTabChanged(bool );
extern "C"
void C_ZN10QQuickItem23activeFocusOnTabChangedEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->activeFocusOnTabChanged(arg1);
}
// _ZN10QQuickItem23activeFocusOnTabChangedEb activeFocusOnTabChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 326, column 22>
//   // proto:  void QQuickItem::forceActiveFocus(Qt::FocusReason reason);
extern "C"
void C_ZN10QQuickItem16forceActiveFocusEN2Qt11FocusReasonE(void *qthis, Qt::FocusReason arg1) {
  ((QQuickItem*)qthis)->forceActiveFocus(arg1);
}
// _ZN10QQuickItem16forceActiveFocusEN2Qt11FocusReasonE forceActiveFocus(Qt::FocusReason)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 327, column 43>
//   // proto:  QQuickItem * QQuickItem::nextItemInFocusChain(bool forward);
extern "C"
void C_ZN10QQuickItem20nextItemInFocusChainEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->nextItemInFocusChain(arg1);
}
// _ZN10QQuickItem20nextItemInFocusChainEb nextItemInFocusChain(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 301, column 10>
//   // proto:  void QQuickItem::ungrabTouchPoints();
extern "C"
void C_ZN10QQuickItem17ungrabTouchPointsEv(void *qthis) {
  ((QQuickItem*)qthis)->ungrabTouchPoints();
}
// _ZN10QQuickItem17ungrabTouchPointsEv ungrabTouchPoints()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 295, column 10>
//   // proto:  bool QQuickItem::keepMouseGrab();
extern "C"
void C_ZNK10QQuickItem13keepMouseGrabEv(void *qthis) {
  ((QQuickItem*)qthis)->keepMouseGrab();
}
// _ZNK10QQuickItem13keepMouseGrabEv keepMouseGrab()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 319, column 12>
//   // proto:  QRectF QQuickItem::mapRectFromScene(const QRectF & rect);
extern "C"
void C_ZNK10QQuickItem16mapRectFromSceneERK6QRectF(void *qthis, const QRectF & arg1) {
  ((QQuickItem*)qthis)->mapRectFromScene(arg1);
}
// _ZNK10QQuickItem16mapRectFromSceneERK6QRectF mapRectFromScene(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 350, column 10>
//   // proto:  void QQuickItem::stateChanged(const QString & );
extern "C"
void C_ZN10QQuickItem12stateChangedERK7QString(void *qthis, const QString & arg1) {
  ((QQuickItem*)qthis)->stateChanged(arg1);
}
// _ZN10QQuickItem12stateChangedERK7QString stateChanged(const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 351, column 10>
//   // proto:  void QQuickItem::focusChanged(bool );
extern "C"
void C_ZN10QQuickItem12focusChangedEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->focusChanged(arg1);
}
// _ZN10QQuickItem12focusChangedEb focusChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 216, column 13>
//   // proto:  QPointF QQuickItem::position();
extern "C"
void C_ZNK10QQuickItem8positionEv(void *qthis) {
  ((QQuickItem*)qthis)->position();
}
// _ZNK10QQuickItem8positionEv position()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 227, column 11>
//   // proto:  qreal QQuickItem::height();
extern "C"
void C_ZNK10QQuickItem6heightEv(void *qthis) {
  ((QQuickItem*)qthis)->height();
}
// _ZNK10QQuickItem6heightEv height()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 328, column 29>
//   // proto:  QQuickItem * QQuickItem::childAt(qreal x, qreal y);
extern "C"
void C_ZNK10QQuickItem7childAtEdd(void *qthis, qreal arg1, qreal arg2) {
  ((QQuickItem*)qthis)->childAt(arg1, arg2);
}
// _ZNK10QQuickItem7childAtEdd childAt(qreal, qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 287, column 13>
//   // proto:  QCursor QQuickItem::cursor();
extern "C"
void C_ZNK10QQuickItem6cursorEv(void *qthis) {
  ((QQuickItem*)qthis)->cursor();
}
// _ZNK10QQuickItem6cursorEv cursor()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 203, column 10>
//   // proto:  bool QQuickItem::clip();
extern "C"
void C_ZNK10QQuickItem4clipEv(void *qthis) {
  ((QQuickItem*)qthis)->clip();
}
// _ZNK10QQuickItem4clipEv clip()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 263, column 10>
//   // proto:  bool QQuickItem::antialiasing();
extern "C"
void C_ZNK10QQuickItem12antialiasingEv(void *qthis) {
  ((QQuickItem*)qthis)->antialiasing();
}
// _ZNK10QQuickItem12antialiasingEv antialiasing()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 194, column 19>
//   // proto:  QQuickWindow * QQuickItem::window();
extern "C"
void C_ZNK10QQuickItem6windowEv(void *qthis) {
  ((QQuickItem*)qthis)->window();
}
// _ZNK10QQuickItem6windowEv window()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 318, column 12>
//   // proto:  QRectF QQuickItem::mapRectFromItem(const QQuickItem * item, const QRectF & rect);
extern "C"
void C_ZNK10QQuickItem15mapRectFromItemEPKS_RK6QRectF(void *qthis, const QQuickItem * arg1, const QRectF & arg2) {
  ((QQuickItem*)qthis)->mapRectFromItem(arg1, arg2);
}
// _ZNK10QQuickItem15mapRectFromItemEPKS_RK6QRectF mapRectFromItem(const class QQuickItem *, const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 252, column 10>
//   // proto:  void QQuickItem::setVisible(bool );
extern "C"
void C_ZN10QQuickItem10setVisibleEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setVisible(arg1);
}
// _ZN10QQuickItem10setVisibleEb setVisible(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 268, column 10>
//   // proto:  void QQuickItem::setFlag(QQuickItem::Flag flag, bool enabled);
extern "C"
void C_ZN10QQuickItem7setFlagENS_4FlagEb(void *qthis, QQuickItem::Flag arg1, bool arg2) {
  ((QQuickItem*)qthis)->setFlag(arg1, arg2);
}
// _ZN10QQuickItem7setFlagENS_4FlagEb setFlag(enum QQuickItem::Flag, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 276, column 10>
//   // proto:  void QQuickItem::setFocus(bool );
extern "C"
void C_ZN10QQuickItem8setFocusEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setFocus(arg1);
}
// _ZN10QQuickItem8setFocusEb setFocus(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 260, column 10>
//   // proto:  bool QQuickItem::activeFocusOnTab();
extern "C"
void C_ZNK10QQuickItem16activeFocusOnTabEv(void *qthis) {
  ((QQuickItem*)qthis)->activeFocusOnTab();
}
// _ZNK10QQuickItem16activeFocusOnTabEv activeFocusOnTab()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 363, column 10>
//   // proto:  void QQuickItem::opacityChanged();
extern "C"
void C_ZN10QQuickItem14opacityChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->opacityChanged();
}
// _ZN10QQuickItem14opacityChangedEv opacityChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 365, column 10>
//   // proto:  void QQuickItem::visibleChanged();
extern "C"
void C_ZN10QQuickItem14visibleChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->visibleChanged();
}
// _ZN10QQuickItem14visibleChangedEv visibleChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 240, column 11>
//   // proto:  qreal QQuickItem::z();
extern "C"
void C_ZNK10QQuickItem1zEv(void *qthis) {
  ((QQuickItem*)qthis)->z();
}
// _ZNK10QQuickItem1zEv z()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 249, column 10>
//   // proto:  void QQuickItem::setOpacity(qreal );
extern "C"
void C_ZN10QQuickItem10setOpacityEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setOpacity(arg1);
}
// _ZN10QQuickItem10setOpacityEd setOpacity(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 269, column 10>
//   // proto:  void QQuickItem::setFlags(Flags flags);
extern "C"
void C_ZN10QQuickItem8setFlagsE6QFlagsINS_4FlagEE(void *qthis, QQuickItem::Flags arg1) {
  ((QQuickItem*)qthis)->setFlags(arg1);
}
// _ZN10QQuickItem8setFlagsE6QFlagsINS_4FlagEE setFlags(Flags)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 264, column 10>
//   // proto:  void QQuickItem::setAntialiasing(bool );
extern "C"
void C_ZN10QQuickItem15setAntialiasingEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setAntialiasing(arg1);
}
// _ZN10QQuickItem15setAntialiasingEb setAntialiasing(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 366, column 10>
//   // proto:  void QQuickItem::visibleChildrenChanged();
extern "C"
void C_ZN10QQuickItem22visibleChildrenChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->visibleChildrenChanged();
}
// _ZN10QQuickItem22visibleChildrenChangedEv visibleChildrenChanged()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 201, column 25>
//   // proto:  QList<QQuickItem *> QQuickItem::childItems();
extern "C"
void C_ZNK10QQuickItem10childItemsEv(void *qthis) {
  ((QQuickItem*)qthis)->childItems();
}
// _ZNK10QQuickItem10childItemsEv childItems()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 233, column 10>
//   // proto:  void QQuickItem::setSize(const QSizeF & size);
extern "C"
void C_ZN10QQuickItem7setSizeERK6QSizeF(void *qthis, const QSizeF & arg1) {
  ((QQuickItem*)qthis)->setSize(arg1);
}
// _ZN10QQuickItem7setSizeERK6QSizeF setSize(const class QSizeF &)
//   // proto:  void QQuickItem::~QQuickItem();
extern "C"
void C_ZN10QQuickItemD2Ev(void *qthis) {
  delete (QQuickItem*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 279, column 17>
//   // proto:  QQuickItem * QQuickItem::scopedFocusItem();
extern "C"
void C_ZNK10QQuickItem15scopedFocusItemEv(void *qthis) {
  ((QQuickItem*)qthis)->scopedFocusItem();
}
// _ZNK10QQuickItem15scopedFocusItemEv scopedFocusItem()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 306, column 36>
//   // proto:  bool QQuickItem::grabToImage(const QJSValue & callback, const QSize & targetSize);
extern "C"
void C_ZN10QQuickItem11grabToImageERK8QJSValueRK5QSize(void *qthis, const QJSValue & arg1, const QSize & arg2) {
  ((QQuickItem*)qthis)->grabToImage(arg1, arg2);
}
// _ZN10QQuickItem11grabToImageERK8QJSValueRK5QSize grabToImage(const class QJSValue &, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 355, column 10>
//   // proto:  void QQuickItem::transformOriginChanged(QQuickItem::TransformOrigin );
extern "C"
void C_ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE(void *qthis, QQuickItem::TransformOrigin arg1) {
  ((QQuickItem*)qthis)->transformOriginChanged(arg1);
}
// _ZN10QQuickItem22transformOriginChangedENS_15TransformOriginE transformOriginChanged(enum QQuickItem::TransformOrigin)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 311, column 16>
//   // proto:  QTransform QQuickItem::itemTransform(QQuickItem * , bool * );
extern "C"
void C_ZNK10QQuickItem13itemTransformEPS_Pb(void *qthis, QQuickItem * arg1, bool * arg2) {
  ((QQuickItem*)qthis)->itemTransform(arg1, arg2);
}
// _ZNK10QQuickItem13itemTransformEPS_Pb itemTransform(class QQuickItem *, _Bool *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 345, column 10>
//   // proto:  void QQuickItem::update();
extern "C"
void C_ZN10QQuickItem6updateEv(void *qthis) {
  ((QQuickItem*)qthis)->update();
}
// _ZN10QQuickItem6updateEv update()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 288, column 10>
//   // proto:  void QQuickItem::setCursor(const QCursor & cursor);
extern "C"
void C_ZN10QQuickItem9setCursorERK7QCursor(void *qthis, const QCursor & arg1) {
  ((QQuickItem*)qthis)->setCursor(arg1);
}
// _ZN10QQuickItem9setCursorERK7QCursor setCursor(const class QCursor &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 300, column 10>
//   // proto:  void QQuickItem::grabTouchPoints(const QVector<int> & ids);
extern "C"
void C_ZN10QQuickItem15grabTouchPointsERK7QVectorIiE(void *qthis, const QVector<int> & arg1) {
  ((QQuickItem*)qthis)->grabTouchPoints(arg1);
}
// _ZN10QQuickItem15grabTouchPointsERK7QVectorIiE grabTouchPoints(const QVector<int> &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 307, column 42>
//   // proto:  QSharedPointer<QQuickItemGrabResult> QQuickItem::grabToImage(const QSize & targetSize);
extern "C"
void C_ZN10QQuickItem11grabToImageERK5QSize(void *qthis, const QSize & arg1) {
  ((QQuickItem*)qthis)->grabToImage(arg1);
}
// _ZN10QQuickItem11grabToImageERK5QSize grabToImage(const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 324, column 22>
//   // proto:  void QQuickItem::mapToItem(QQmlV4Function * );
extern "C"
void C_ZNK10QQuickItem9mapToItemEP14QQmlV4Function(void *qthis, QQmlV4Function * arg1) {
  ((QQuickItem*)qthis)->mapToItem(arg1);
}
// _ZNK10QQuickItem9mapToItemEP14QQmlV4Function mapToItem(class QQmlV4Function *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 272, column 20>
//   // proto:  QRectF QQuickItem::clipRect();
extern "C"
void C_ZNK10QQuickItem8clipRectEv(void *qthis) {
  ((QQuickItem*)qthis)->clipRect();
}
// _ZNK10QQuickItem8clipRectEv clipRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 281, column 22>
//   // proto:  Qt::MouseButtons QQuickItem::acceptedMouseButtons();
extern "C"
void C_ZNK10QQuickItem20acceptedMouseButtonsEv(void *qthis) {
  ((QQuickItem*)qthis)->acceptedMouseButtons();
}
// _ZNK10QQuickItem20acceptedMouseButtonsEv acceptedMouseButtons()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 294, column 10>
//   // proto:  void QQuickItem::ungrabMouse();
extern "C"
void C_ZN10QQuickItem11ungrabMouseEv(void *qthis) {
  ((QQuickItem*)qthis)->ungrabMouse();
}
// _ZN10QQuickItem11ungrabMouseEv ungrabMouse()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 315, column 12>
//   // proto:  QRectF QQuickItem::mapRectToScene(const QRectF & rect);
extern "C"
void C_ZNK10QQuickItem14mapRectToSceneERK6QRectF(void *qthis, const QRectF & arg1) {
  ((QQuickItem*)qthis)->mapRectToScene(arg1);
}
// _ZNK10QQuickItem14mapRectToSceneERK6QRectF mapRectToScene(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 244, column 10>
//   // proto:  void QQuickItem::setRotation(qreal );
extern "C"
void C_ZN10QQuickItem11setRotationEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setRotation(arg1);
}
// _ZN10QQuickItem11setRotationEd setRotation(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 356, column 10>
//   // proto:  void QQuickItem::smoothChanged(bool );
extern "C"
void C_ZN10QQuickItem13smoothChangedEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->smoothChanged(arg1);
}
// _ZN10QQuickItem13smoothChangedEb smoothChanged(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 323, column 22>
//   // proto:  void QQuickItem::mapFromItem(QQmlV4Function * );
extern "C"
void C_ZNK10QQuickItem11mapFromItemEP14QQmlV4Function(void *qthis, QQmlV4Function * arg1) {
  ((QQuickItem*)qthis)->mapFromItem(arg1);
}
// _ZNK10QQuickItem11mapFromItemEP14QQmlV4Function mapFromItem(class QQmlV4Function *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 275, column 10>
//   // proto:  bool QQuickItem::hasFocus();
extern "C"
void C_ZNK10QQuickItem8hasFocusEv(void *qthis) {
  ((QQuickItem*)qthis)->hasFocus();
}
// _ZNK10QQuickItem8hasFocusEv hasFocus()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 217, column 10>
//   // proto:  void QQuickItem::setX(qreal );
extern "C"
void C_ZN10QQuickItem4setXEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setX(arg1);
}
// _ZN10QQuickItem4setXEd setX(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 206, column 13>
//   // proto:  QString QQuickItem::state();
extern "C"
void C_ZNK10QQuickItem5stateEv(void *qthis) {
  ((QQuickItem*)qthis)->state();
}
// _ZNK10QQuickItem5stateEv state()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 246, column 10>
//   // proto:  void QQuickItem::setScale(qreal );
extern "C"
void C_ZN10QQuickItem8setScaleEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->setScale(arg1);
}
// _ZN10QQuickItem8setScaleEd setScale(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 229, column 10>
//   // proto:  void QQuickItem::resetHeight();
extern "C"
void C_ZN10QQuickItem11resetHeightEv(void *qthis) {
  ((QQuickItem*)qthis)->resetHeight();
}
// _ZN10QQuickItem11resetHeightEv resetHeight()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 293, column 10>
//   // proto:  void QQuickItem::grabMouse();
extern "C"
void C_ZN10QQuickItem9grabMouseEv(void *qthis) {
  ((QQuickItem*)qthis)->grabMouse();
}
// _ZN10QQuickItem9grabMouseEv grabMouse()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 303, column 10>
//   // proto:  void QQuickItem::setKeepTouchGrab(bool );
extern "C"
void C_ZN10QQuickItem16setKeepTouchGrabEb(void *qthis, bool arg1) {
  ((QQuickItem*)qthis)->setKeepTouchGrab(arg1);
}
// _ZN10QQuickItem16setKeepTouchGrabEb setKeepTouchGrab(_Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 349, column 10>
//   // proto:  void QQuickItem::baselineOffsetChanged(qreal );
extern "C"
void C_ZN10QQuickItem21baselineOffsetChangedEd(void *qthis, qreal arg1) {
  ((QQuickItem*)qthis)->baselineOffsetChanged(arg1);
}
// _ZN10QQuickItem21baselineOffsetChangedEd baselineOffsetChanged(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 198, column 10>
//   // proto:  void QQuickItem::stackAfter(const QQuickItem * );
extern "C"
void C_ZN10QQuickItem10stackAfterEPKS_(void *qthis, const QQuickItem * arg1) {
  ((QQuickItem*)qthis)->stackAfter(arg1);
}
// _ZN10QQuickItem10stackAfterEPKS_ stackAfter(const class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 209, column 11>
//   // proto:  qreal QQuickItem::baselineOffset();
extern "C"
void C_ZNK10QQuickItem14baselineOffsetEv(void *qthis) {
  ((QQuickItem*)qthis)->baselineOffset();
}
// _ZNK10QQuickItem14baselineOffsetEv baselineOffset()
// <SourceLocation file '/usr/include/qt/QtQuick/qquickitem.h', line 374, column 10>
//   // proto:  void QQuickItem::zChanged();
extern "C"
void C_ZN10QQuickItem8zChangedEv(void *qthis) {
  ((QQuickItem*)qthis)->zChanged();
}
// _ZN10QQuickItem8zChangedEv zChanged()
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

