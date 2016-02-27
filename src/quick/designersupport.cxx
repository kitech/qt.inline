// auto generated, do not modify.
// created: Fri Feb 26 23:38:18 2016
// src-file: /QtQuick/designersupport.h
// dst-file: /src/quick/designersupport.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <designersupport.h>


#include <qobject.h>
#include <qlist.h>
#include <qmetatype.h>
#include <qtransform.h>
#include <qstring.h>
#include <qpair.h>
#include <qsslkey.h>
#include <qimage.h>
// <= header block end

// main block begin =>
void __keep_designersupport_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int DesignerSupport_Class_Size()
{
  return sizeof(DesignerSupport);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 144, column 17>
//   // proto: static void DesignerSupport::createOpenGLContext(QQuickWindow * window);
// _ZN15DesignerSupport19createOpenGLContextEP12QQuickWindow createOpenGLContext(class QQuickWindow *)
extern "C"
void
C_ZN15DesignerSupport19createOpenGLContextEP12QQuickWindow(QQuickWindow * arg1) {
  DesignerSupport::createOpenGLContext(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 131, column 17>
//   // proto: static void DesignerSupport::setRootItem(QQuickView * view, QQuickItem * item);
// _ZN15DesignerSupport11setRootItemEP10QQuickViewP10QQuickItem setRootItem(class QQuickView *, class QQuickItem *)
extern "C"
void
C_ZN15DesignerSupport11setRootItemEP10QQuickViewP10QQuickItem(QQuickView * arg1,
QQuickItem * arg2) {
  DesignerSupport::setRootItem(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 115, column 17>
//   // proto: static bool DesignerSupport::hasAnchor(QQuickItem * item, const QString & name);
// _ZN15DesignerSupport9hasAnchorEP10QQuickItemRK7QString hasAnchor(class QQuickItem *, const class QString &)
extern "C"
bool
C_ZN15DesignerSupport9hasAnchorEP10QQuickItemRK7QString(QQuickItem * arg1,
const QString* arg2) {
  auto ret =
  DesignerSupport::hasAnchor(arg1,
*((const QString*)arg2));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 119, column 17>
//   // proto: static void DesignerSupport::resetAnchor(QQuickItem * item, const QString & name);
// _ZN15DesignerSupport11resetAnchorEP10QQuickItemRK7QString resetAnchor(class QQuickItem *, const class QString &)
extern "C"
void
C_ZN15DesignerSupport11resetAnchorEP10QQuickItemRK7QString(QQuickItem * arg1,
const QString* arg2) {
  DesignerSupport::resetAnchor(arg1,
*((const QString*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 146, column 17>
//   // proto: static void DesignerSupport::polishItems(QQuickWindow * window);
// _ZN15DesignerSupport11polishItemsEP12QQuickWindow polishItems(class QQuickWindow *)
extern "C"
void
C_ZN15DesignerSupport11polishItemsEP12QQuickWindow(QQuickWindow * arg1) {
  DesignerSupport::polishItems(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 102, column 10>
//   // proto:  void DesignerSupport::derefFromEffectItem(QQuickItem * referencedItem, bool unhide);
// _ZN15DesignerSupport19derefFromEffectItemEP10QQuickItemb derefFromEffectItem(class QQuickItem *, _Bool)
extern "C"
void
C_ZN15DesignerSupport19derefFromEffectItemEP10QQuickItemb(void *qthis,
QQuickItem * arg1,
bool arg2) {
  ((DesignerSupport*)qthis)->derefFromEffectItem(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 136, column 17>
//   // proto: static void DesignerSupport::updateDirtyNode(QQuickItem * item);
// _ZN15DesignerSupport15updateDirtyNodeEP10QQuickItem updateDirtyNode(class QQuickItem *)
extern "C"
void
C_ZN15DesignerSupport15updateDirtyNodeEP10QQuickItem(QQuickItem * arg1) {
  DesignerSupport::updateDirtyNode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 123, column 28>
//   // proto: static QList<QObject *> DesignerSupport::statesForItem(QQuickItem * item);
// _ZN15DesignerSupport13statesForItemEP10QQuickItem statesForItem(class QQuickItem *)
extern "C"
QList<QObject *>*
C_ZN15DesignerSupport13statesForItemEP10QQuickItem(QQuickItem * arg1) {
  auto ret =
  DesignerSupport::statesForItem(arg1);
  return new QList<QObject *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 117, column 24>
//   // proto: static QQuickItem * DesignerSupport::anchorCenterInTargetItem(QQuickItem * item);
// _ZN15DesignerSupport24anchorCenterInTargetItemEP10QQuickItem anchorCenterInTargetItem(class QQuickItem *)
extern "C"
void*
C_ZN15DesignerSupport24anchorCenterInTargetItemEP10QQuickItem(QQuickItem * arg1) {
  auto ret =
  DesignerSupport::anchorCenterInTargetItem(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 106, column 17>
//   // proto: static bool DesignerSupport::isDirty(QQuickItem * referencedItem, DesignerSupport::DirtyType dirtyType);
// _ZN15DesignerSupport7isDirtyEP10QQuickItemNS_9DirtyTypeE isDirty(class QQuickItem *, enum DesignerSupport::DirtyType)
extern "C"
bool
C_ZN15DesignerSupport7isDirtyEP10QQuickItemNS_9DirtyTypeE(QQuickItem * arg1,
DesignerSupport::DirtyType arg2) {
  auto ret =
  DesignerSupport::isDirty(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 142, column 17>
//   // proto: static void DesignerSupport::enableComponentComplete();
// _ZN15DesignerSupport23enableComponentCompleteEv enableComponentComplete()
extern "C"
void
C_ZN15DesignerSupport23enableComponentCompleteEv() {
  DesignerSupport::enableComponentComplete();
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 139, column 17>
//   // proto: static void DesignerSupport::activateDesignerMode();
// _ZN15DesignerSupport20activateDesignerModeEv activateDesignerMode()
extern "C"
void
C_ZN15DesignerSupport20activateDesignerModeEv() {
  DesignerSupport::activateDesignerMode();
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 98, column 5>
//   // proto:  void DesignerSupport::DesignerSupport();
extern "C"
DesignerSupport*
C_ZN15DesignerSupportC2Ev() {
  auto ret = new DesignerSupport();
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 129, column 17>
//   // proto: static void DesignerSupport::refreshExpressions(QQmlContext * context);
// _ZN15DesignerSupport18refreshExpressionsEP11QQmlContext refreshExpressions(class QQmlContext *)
extern "C"
void
C_ZN15DesignerSupport18refreshExpressionsEP11QQmlContext(QQmlContext * arg1) {
  DesignerSupport::refreshExpressions(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 127, column 16>
//   // proto: static int DesignerSupport::borderWidth(QQuickItem * item);
// _ZN15DesignerSupport11borderWidthEP10QQuickItem borderWidth(class QQuickItem *)
extern "C"
int
C_ZN15DesignerSupport11borderWidthEP10QQuickItem(QQuickItem * arg1) {
  auto ret =
  DesignerSupport::borderWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 133, column 17>
//   // proto: static bool DesignerSupport::isValidWidth(QQuickItem * item);
// _ZN15DesignerSupport12isValidWidthEP10QQuickItem isValidWidth(class QQuickItem *)
extern "C"
bool
C_ZN15DesignerSupport12isValidWidthEP10QQuickItem(QQuickItem * arg1) {
  auto ret =
  DesignerSupport::isValidWidth(arg1);
  return ret; // 0 TypeKind.BOOL
}
//   // proto:  void DesignerSupport::~DesignerSupport();
extern "C"
void C_ZN15DesignerSupportD2Ev(void *qthis) {
  delete (DesignerSupport*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 111, column 23>
//   // proto: static QTransform DesignerSupport::parentTransform(QQuickItem * referencedItem);
// _ZN15DesignerSupport15parentTransformEP10QQuickItem parentTransform(class QQuickItem *)
extern "C"
QTransform*
C_ZN15DesignerSupport15parentTransformEP10QQuickItem(QQuickItem * arg1) {
  auto ret =
  DesignerSupport::parentTransform(arg1);
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 141, column 17>
//   // proto: static void DesignerSupport::disableComponentComplete();
// _ZN15DesignerSupport24disableComponentCompleteEv disableComponentComplete()
extern "C"
void
C_ZN15DesignerSupport24disableComponentCompleteEv() {
  DesignerSupport::disableComponentComplete();
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 134, column 17>
//   // proto: static bool DesignerSupport::isValidHeight(QQuickItem * item);
// _ZN15DesignerSupport13isValidHeightEP10QQuickItem isValidHeight(class QQuickItem *)
extern "C"
bool
C_ZN15DesignerSupport13isValidHeightEP10QQuickItem(QQuickItem * arg1) {
  auto ret =
  DesignerSupport::isValidHeight(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 110, column 23>
//   // proto: static QTransform DesignerSupport::windowTransform(QQuickItem * referencedItem);
// _ZN15DesignerSupport15windowTransformEP10QQuickItem windowTransform(class QQuickItem *)
extern "C"
QTransform*
C_ZN15DesignerSupport15windowTransformEP10QQuickItem(QQuickItem * arg1) {
  auto ret =
  DesignerSupport::windowTransform(arg1);
  return new QTransform(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 118, column 37>
//   // proto: static QPair<QString, QObject *> DesignerSupport::anchorLineTarget(QQuickItem * item, const QString & name, QQmlContext * context);
// _ZN15DesignerSupport16anchorLineTargetEP10QQuickItemRK7QStringP11QQmlContext anchorLineTarget(class QQuickItem *, const class QString &, class QQmlContext *)
extern "C"
QPair<QString, QObject *>*
C_ZN15DesignerSupport16anchorLineTargetEP10QQuickItemRK7QStringP11QQmlContext(QQuickItem * arg1,
const QString* arg2,
QQmlContext * arg3) {
  auto ret =
  DesignerSupport::anchorLineTarget(arg1,
*((const QString*)arg2),
arg3);
  return new QPair<QString, QObject *>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 113, column 17>
//   // proto: static bool DesignerSupport::isAnchoredTo(QQuickItem * fromItem, QQuickItem * toItem);
// _ZN15DesignerSupport12isAnchoredToEP10QQuickItemS1_ isAnchoredTo(class QQuickItem *, class QQuickItem *)
extern "C"
bool
C_ZN15DesignerSupport12isAnchoredToEP10QQuickItemS1_(QQuickItem * arg1,
QQuickItem * arg2) {
  auto ret =
  DesignerSupport::isAnchoredTo(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 116, column 24>
//   // proto: static QQuickItem * DesignerSupport::anchorFillTargetItem(QQuickItem * item);
// _ZN15DesignerSupport20anchorFillTargetItemEP10QQuickItem anchorFillTargetItem(class QQuickItem *)
extern "C"
void*
C_ZN15DesignerSupport20anchorFillTargetItemEP10QQuickItem(QQuickItem * arg1) {
  auto ret =
  DesignerSupport::anchorFillTargetItem(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 108, column 17>
//   // proto: static void DesignerSupport::resetDirty(QQuickItem * referencedItem);
// _ZN15DesignerSupport10resetDirtyEP10QQuickItem resetDirty(class QQuickItem *)
extern "C"
void
C_ZN15DesignerSupport10resetDirtyEP10QQuickItem(QQuickItem * arg1) {
  DesignerSupport::resetDirty(arg1);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 104, column 12>
//   // proto:  QImage DesignerSupport::renderImageForItem(QQuickItem * referencedItem, const QRectF & boundingRect, const QSize & imageSize);
// _ZN15DesignerSupport18renderImageForItemEP10QQuickItemRK6QRectFRK5QSize renderImageForItem(class QQuickItem *, const class QRectF &, const class QSize &)
extern "C"
QImage*
C_ZN15DesignerSupport18renderImageForItemEP10QQuickItemRK6QRectFRK5QSize(void *qthis,
QQuickItem * arg1,
const QRectF* arg2,
const QSize* arg3) {
  auto ret =
  ((DesignerSupport*)qthis)->renderImageForItem(arg1,
*((const QRectF*)arg2),
*((const QSize*)arg3));
  return new QImage(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 101, column 10>
//   // proto:  void DesignerSupport::refFromEffectItem(QQuickItem * referencedItem, bool hide);
// _ZN15DesignerSupport17refFromEffectItemEP10QQuickItemb refFromEffectItem(class QQuickItem *, _Bool)
extern "C"
void
C_ZN15DesignerSupport17refFromEffectItemEP10QQuickItemb(void *qthis,
QQuickItem * arg1,
bool arg2) {
  ((DesignerSupport*)qthis)->refFromEffectItem(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 114, column 17>
//   // proto: static bool DesignerSupport::areChildrenAnchoredTo(QQuickItem * fromItem, QQuickItem * toItem);
// _ZN15DesignerSupport21areChildrenAnchoredToEP10QQuickItemS1_ areChildrenAnchoredTo(class QQuickItem *, class QQuickItem *)
extern "C"
bool
C_ZN15DesignerSupport21areChildrenAnchoredToEP10QQuickItemS1_(QQuickItem * arg1,
QQuickItem * arg2) {
  auto ret =
  DesignerSupport::areChildrenAnchoredTo(arg1,
arg2);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 125, column 17>
//   // proto: static bool DesignerSupport::isComponentComplete(QQuickItem * item);
// _ZN15DesignerSupport19isComponentCompleteEP10QQuickItem isComponentComplete(class QQuickItem *)
extern "C"
bool
C_ZN15DesignerSupport19isComponentCompleteEP10QQuickItem(QQuickItem * arg1) {
  auto ret =
  DesignerSupport::isComponentComplete(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 107, column 17>
//   // proto: static void DesignerSupport::addDirty(QQuickItem * referencedItem, DesignerSupport::DirtyType dirtyType);
// _ZN15DesignerSupport8addDirtyEP10QQuickItemNS_9DirtyTypeE addDirty(class QQuickItem *, enum DesignerSupport::DirtyType)
extern "C"
void
C_ZN15DesignerSupport8addDirtyEP10QQuickItemNS_9DirtyTypeE(QQuickItem * arg1,
DesignerSupport::DirtyType arg2) {
  DesignerSupport::addDirty(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 138, column 17>
//   // proto: static void DesignerSupport::activateDesignerWindowManager();
// _ZN15DesignerSupport29activateDesignerWindowManagerEv activateDesignerWindowManager()
extern "C"
void
C_ZN15DesignerSupport29activateDesignerWindowManagerEv() {
  DesignerSupport::activateDesignerWindowManager();
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 120, column 17>
//   // proto: static void DesignerSupport::emitComponentCompleteSignalForAttachedProperty(QQuickItem * item);
// _ZN15DesignerSupport46emitComponentCompleteSignalForAttachedPropertyEP10QQuickItem emitComponentCompleteSignalForAttachedProperty(class QQuickItem *)
extern "C"
void
C_ZN15DesignerSupport46emitComponentCompleteSignalForAttachedPropertyEP10QQuickItem(QQuickItem * arg1) {
  DesignerSupport::emitComponentCompleteSignalForAttachedProperty(arg1);
}
// <= ext block end

// body block begin =>
// <= body block end

