#include <qimage.h>
#include <qsslkey.h>
#include <qpair.h>
#include <qtransform.h>
#include <qmetatype.h>
#include <qlist.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/designersupport.h
// dst-file: /src/quick/designersupport.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <designersupport.h>

extern "C" {

int DesignerSupport_Class_Size()
{
  return sizeof(DesignerSupport);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_designersupport_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 144, column 17>
//   // proto: static void DesignerSupport::createOpenGLContext(QQuickWindow * window);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickWindow * arg1) {
    ((DesignerSupport*)0)->createOpenGLContext(arg1);
    flythis.createOpenGLContext(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport19createOpenGLContextEP12QQuickWindow createOpenGLContext(class QQuickWindow *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 131, column 17>
//   // proto: static void DesignerSupport::setRootItem(QQuickView * view, QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickView * arg1, QQuickItem * arg2) {
    ((DesignerSupport*)0)->setRootItem(arg1, arg2);
    flythis.setRootItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport11setRootItemEP10QQuickViewP10QQuickItem setRootItem(class QQuickView *, class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 115, column 17>
//   // proto: static bool DesignerSupport::hasAnchor(QQuickItem * item, const QString & name);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, const QString & arg2) {
    ((DesignerSupport*)0)->hasAnchor(arg1, arg2);
    flythis.hasAnchor(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport9hasAnchorEP10QQuickItemRK7QString hasAnchor(class QQuickItem *, const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 119, column 17>
//   // proto: static void DesignerSupport::resetAnchor(QQuickItem * item, const QString & name);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, const QString & arg2) {
    ((DesignerSupport*)0)->resetAnchor(arg1, arg2);
    flythis.resetAnchor(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport11resetAnchorEP10QQuickItemRK7QString resetAnchor(class QQuickItem *, const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 146, column 17>
//   // proto: static void DesignerSupport::polishItems(QQuickWindow * window);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickWindow * arg1) {
    ((DesignerSupport*)0)->polishItems(arg1);
    flythis.polishItems(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport11polishItemsEP12QQuickWindow polishItems(class QQuickWindow *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 102, column 10>
//   // proto:  void DesignerSupport::derefFromEffectItem(QQuickItem * referencedItem, bool unhide);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, bool arg2) {
    ((DesignerSupport*)0)->derefFromEffectItem(arg1, arg2);
    flythis.derefFromEffectItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport19derefFromEffectItemEP10QQuickItemb derefFromEffectItem(class QQuickItem *, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 136, column 17>
//   // proto: static void DesignerSupport::updateDirtyNode(QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->updateDirtyNode(arg1);
    flythis.updateDirtyNode(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport15updateDirtyNodeEP10QQuickItem updateDirtyNode(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 123, column 28>
//   // proto: static QList<QObject *> DesignerSupport::statesForItem(QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->statesForItem(arg1);
    flythis.statesForItem(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport13statesForItemEP10QQuickItem statesForItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 117, column 24>
//   // proto: static QQuickItem * DesignerSupport::anchorCenterInTargetItem(QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->anchorCenterInTargetItem(arg1);
    flythis.anchorCenterInTargetItem(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport24anchorCenterInTargetItemEP10QQuickItem anchorCenterInTargetItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 106, column 17>
//   // proto: static bool DesignerSupport::isDirty(QQuickItem * referencedItem, DesignerSupport::DirtyType dirtyType);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, DesignerSupport::DirtyType arg2) {
    ((DesignerSupport*)0)->isDirty(arg1, arg2);
    flythis.isDirty(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport7isDirtyEP10QQuickItemNS_9DirtyTypeE isDirty(class QQuickItem *, enum DesignerSupport::DirtyType)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 142, column 17>
//   // proto: static void DesignerSupport::enableComponentComplete();
if (true) {
  auto f = [](DesignerSupport flythis) {
    ((DesignerSupport*)0)->enableComponentComplete();
    flythis.enableComponentComplete();
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport23enableComponentCompleteEv enableComponentComplete()
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 139, column 17>
//   // proto: static void DesignerSupport::activateDesignerMode();
if (true) {
  auto f = [](DesignerSupport flythis) {
    ((DesignerSupport*)0)->activateDesignerMode();
    flythis.activateDesignerMode();
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport20activateDesignerModeEv activateDesignerMode()
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 98, column 5>
//   // proto:  void DesignerSupport::DesignerSupport();
if (true) {
  auto f = []() {
    new DesignerSupport();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 129, column 17>
//   // proto: static void DesignerSupport::refreshExpressions(QQmlContext * context);
if (true) {
  auto f = [](DesignerSupport flythis, QQmlContext * arg1) {
    ((DesignerSupport*)0)->refreshExpressions(arg1);
    flythis.refreshExpressions(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport18refreshExpressionsEP11QQmlContext refreshExpressions(class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 127, column 16>
//   // proto: static int DesignerSupport::borderWidth(QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->borderWidth(arg1);
    flythis.borderWidth(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport11borderWidthEP10QQuickItem borderWidth(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 133, column 17>
//   // proto: static bool DesignerSupport::isValidWidth(QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->isValidWidth(arg1);
    flythis.isValidWidth(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport12isValidWidthEP10QQuickItem isValidWidth(class QQuickItem *)
//   // proto:  void DesignerSupport::~DesignerSupport();
if (true) {
  delete ((DesignerSupport*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 111, column 23>
//   // proto: static QTransform DesignerSupport::parentTransform(QQuickItem * referencedItem);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->parentTransform(arg1);
    flythis.parentTransform(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport15parentTransformEP10QQuickItem parentTransform(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 141, column 17>
//   // proto: static void DesignerSupport::disableComponentComplete();
if (true) {
  auto f = [](DesignerSupport flythis) {
    ((DesignerSupport*)0)->disableComponentComplete();
    flythis.disableComponentComplete();
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport24disableComponentCompleteEv disableComponentComplete()
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 134, column 17>
//   // proto: static bool DesignerSupport::isValidHeight(QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->isValidHeight(arg1);
    flythis.isValidHeight(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport13isValidHeightEP10QQuickItem isValidHeight(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 110, column 23>
//   // proto: static QTransform DesignerSupport::windowTransform(QQuickItem * referencedItem);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->windowTransform(arg1);
    flythis.windowTransform(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport15windowTransformEP10QQuickItem windowTransform(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 118, column 37>
//   // proto: static QPair<QString, QObject *> DesignerSupport::anchorLineTarget(QQuickItem * item, const QString & name, QQmlContext * context);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, const QString & arg2, QQmlContext * arg3) {
    ((DesignerSupport*)0)->anchorLineTarget(arg1, arg2, arg3);
    flythis.anchorLineTarget(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport16anchorLineTargetEP10QQuickItemRK7QStringP11QQmlContext anchorLineTarget(class QQuickItem *, const class QString &, class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 113, column 17>
//   // proto: static bool DesignerSupport::isAnchoredTo(QQuickItem * fromItem, QQuickItem * toItem);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, QQuickItem * arg2) {
    ((DesignerSupport*)0)->isAnchoredTo(arg1, arg2);
    flythis.isAnchoredTo(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport12isAnchoredToEP10QQuickItemS1_ isAnchoredTo(class QQuickItem *, class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 116, column 24>
//   // proto: static QQuickItem * DesignerSupport::anchorFillTargetItem(QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->anchorFillTargetItem(arg1);
    flythis.anchorFillTargetItem(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport20anchorFillTargetItemEP10QQuickItem anchorFillTargetItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 108, column 17>
//   // proto: static void DesignerSupport::resetDirty(QQuickItem * referencedItem);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->resetDirty(arg1);
    flythis.resetDirty(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport10resetDirtyEP10QQuickItem resetDirty(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 104, column 12>
//   // proto:  QImage DesignerSupport::renderImageForItem(QQuickItem * referencedItem, const QRectF & boundingRect, const QSize & imageSize);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, const QRectF & arg2, const QSize & arg3) {
    ((DesignerSupport*)0)->renderImageForItem(arg1, arg2, arg3);
    flythis.renderImageForItem(arg1, arg2, arg3);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport18renderImageForItemEP10QQuickItemRK6QRectFRK5QSize renderImageForItem(class QQuickItem *, const class QRectF &, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 101, column 10>
//   // proto:  void DesignerSupport::refFromEffectItem(QQuickItem * referencedItem, bool hide);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, bool arg2) {
    ((DesignerSupport*)0)->refFromEffectItem(arg1, arg2);
    flythis.refFromEffectItem(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport17refFromEffectItemEP10QQuickItemb refFromEffectItem(class QQuickItem *, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 114, column 17>
//   // proto: static bool DesignerSupport::areChildrenAnchoredTo(QQuickItem * fromItem, QQuickItem * toItem);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, QQuickItem * arg2) {
    ((DesignerSupport*)0)->areChildrenAnchoredTo(arg1, arg2);
    flythis.areChildrenAnchoredTo(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport21areChildrenAnchoredToEP10QQuickItemS1_ areChildrenAnchoredTo(class QQuickItem *, class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 125, column 17>
//   // proto: static bool DesignerSupport::isComponentComplete(QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->isComponentComplete(arg1);
    flythis.isComponentComplete(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport19isComponentCompleteEP10QQuickItem isComponentComplete(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 107, column 17>
//   // proto: static void DesignerSupport::addDirty(QQuickItem * referencedItem, DesignerSupport::DirtyType dirtyType);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1, DesignerSupport::DirtyType arg2) {
    ((DesignerSupport*)0)->addDirty(arg1, arg2);
    flythis.addDirty(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport8addDirtyEP10QQuickItemNS_9DirtyTypeE addDirty(class QQuickItem *, enum DesignerSupport::DirtyType)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 138, column 17>
//   // proto: static void DesignerSupport::activateDesignerWindowManager();
if (true) {
  auto f = [](DesignerSupport flythis) {
    ((DesignerSupport*)0)->activateDesignerWindowManager();
    flythis.activateDesignerWindowManager();
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport29activateDesignerWindowManagerEv activateDesignerWindowManager()
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 120, column 17>
//   // proto: static void DesignerSupport::emitComponentCompleteSignalForAttachedProperty(QQuickItem * item);
if (true) {
  auto f = [](DesignerSupport flythis, QQuickItem * arg1) {
    ((DesignerSupport*)0)->emitComponentCompleteSignalForAttachedProperty(arg1);
    flythis.emitComponentCompleteSignalForAttachedProperty(arg1);
  };
  if (f == nullptr){}
}
// _ZN15DesignerSupport46emitComponentCompleteSignalForAttachedPropertyEP10QQuickItem emitComponentCompleteSignalForAttachedProperty(class QQuickItem *)
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 144, column 17>
//   // proto: static void DesignerSupport::createOpenGLContext(QQuickWindow * window);
extern "C"
void C_ZN15DesignerSupport19createOpenGLContextEP12QQuickWindow(void *qthis, QQuickWindow * arg1) {
  ((DesignerSupport*)qthis)->createOpenGLContext(arg1);
}
// _ZN15DesignerSupport19createOpenGLContextEP12QQuickWindow createOpenGLContext(class QQuickWindow *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 131, column 17>
//   // proto: static void DesignerSupport::setRootItem(QQuickView * view, QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport11setRootItemEP10QQuickViewP10QQuickItem(void *qthis, QQuickView * arg1, QQuickItem * arg2) {
  ((DesignerSupport*)qthis)->setRootItem(arg1, arg2);
}
// _ZN15DesignerSupport11setRootItemEP10QQuickViewP10QQuickItem setRootItem(class QQuickView *, class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 115, column 17>
//   // proto: static bool DesignerSupport::hasAnchor(QQuickItem * item, const QString & name);
extern "C"
void C_ZN15DesignerSupport9hasAnchorEP10QQuickItemRK7QString(void *qthis, QQuickItem * arg1, const QString & arg2) {
  ((DesignerSupport*)qthis)->hasAnchor(arg1, arg2);
}
// _ZN15DesignerSupport9hasAnchorEP10QQuickItemRK7QString hasAnchor(class QQuickItem *, const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 119, column 17>
//   // proto: static void DesignerSupport::resetAnchor(QQuickItem * item, const QString & name);
extern "C"
void C_ZN15DesignerSupport11resetAnchorEP10QQuickItemRK7QString(void *qthis, QQuickItem * arg1, const QString & arg2) {
  ((DesignerSupport*)qthis)->resetAnchor(arg1, arg2);
}
// _ZN15DesignerSupport11resetAnchorEP10QQuickItemRK7QString resetAnchor(class QQuickItem *, const class QString &)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 146, column 17>
//   // proto: static void DesignerSupport::polishItems(QQuickWindow * window);
extern "C"
void C_ZN15DesignerSupport11polishItemsEP12QQuickWindow(void *qthis, QQuickWindow * arg1) {
  ((DesignerSupport*)qthis)->polishItems(arg1);
}
// _ZN15DesignerSupport11polishItemsEP12QQuickWindow polishItems(class QQuickWindow *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 102, column 10>
//   // proto:  void DesignerSupport::derefFromEffectItem(QQuickItem * referencedItem, bool unhide);
extern "C"
void C_ZN15DesignerSupport19derefFromEffectItemEP10QQuickItemb(void *qthis, QQuickItem * arg1, bool arg2) {
  ((DesignerSupport*)qthis)->derefFromEffectItem(arg1, arg2);
}
// _ZN15DesignerSupport19derefFromEffectItemEP10QQuickItemb derefFromEffectItem(class QQuickItem *, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 136, column 17>
//   // proto: static void DesignerSupport::updateDirtyNode(QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport15updateDirtyNodeEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->updateDirtyNode(arg1);
}
// _ZN15DesignerSupport15updateDirtyNodeEP10QQuickItem updateDirtyNode(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 123, column 28>
//   // proto: static QList<QObject *> DesignerSupport::statesForItem(QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport13statesForItemEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->statesForItem(arg1);
}
// _ZN15DesignerSupport13statesForItemEP10QQuickItem statesForItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 117, column 24>
//   // proto: static QQuickItem * DesignerSupport::anchorCenterInTargetItem(QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport24anchorCenterInTargetItemEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->anchorCenterInTargetItem(arg1);
}
// _ZN15DesignerSupport24anchorCenterInTargetItemEP10QQuickItem anchorCenterInTargetItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 106, column 17>
//   // proto: static bool DesignerSupport::isDirty(QQuickItem * referencedItem, DesignerSupport::DirtyType dirtyType);
extern "C"
void C_ZN15DesignerSupport7isDirtyEP10QQuickItemNS_9DirtyTypeE(void *qthis, QQuickItem * arg1, DesignerSupport::DirtyType arg2) {
  ((DesignerSupport*)qthis)->isDirty(arg1, arg2);
}
// _ZN15DesignerSupport7isDirtyEP10QQuickItemNS_9DirtyTypeE isDirty(class QQuickItem *, enum DesignerSupport::DirtyType)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 142, column 17>
//   // proto: static void DesignerSupport::enableComponentComplete();
extern "C"
void C_ZN15DesignerSupport23enableComponentCompleteEv(void *qthis) {
  ((DesignerSupport*)qthis)->enableComponentComplete();
}
// _ZN15DesignerSupport23enableComponentCompleteEv enableComponentComplete()
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 139, column 17>
//   // proto: static void DesignerSupport::activateDesignerMode();
extern "C"
void C_ZN15DesignerSupport20activateDesignerModeEv(void *qthis) {
  ((DesignerSupport*)qthis)->activateDesignerMode();
}
// _ZN15DesignerSupport20activateDesignerModeEv activateDesignerMode()
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 98, column 5>
//   // proto:  void DesignerSupport::DesignerSupport();
extern "C"
void C_ZN15DesignerSupportC2Ev() {
  new DesignerSupport();
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 129, column 17>
//   // proto: static void DesignerSupport::refreshExpressions(QQmlContext * context);
extern "C"
void C_ZN15DesignerSupport18refreshExpressionsEP11QQmlContext(void *qthis, QQmlContext * arg1) {
  ((DesignerSupport*)qthis)->refreshExpressions(arg1);
}
// _ZN15DesignerSupport18refreshExpressionsEP11QQmlContext refreshExpressions(class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 127, column 16>
//   // proto: static int DesignerSupport::borderWidth(QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport11borderWidthEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->borderWidth(arg1);
}
// _ZN15DesignerSupport11borderWidthEP10QQuickItem borderWidth(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 133, column 17>
//   // proto: static bool DesignerSupport::isValidWidth(QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport12isValidWidthEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->isValidWidth(arg1);
}
// _ZN15DesignerSupport12isValidWidthEP10QQuickItem isValidWidth(class QQuickItem *)
//   // proto:  void DesignerSupport::~DesignerSupport();
extern "C"
void C_ZN15DesignerSupportD2Ev(void *qthis) {
  delete (DesignerSupport*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 111, column 23>
//   // proto: static QTransform DesignerSupport::parentTransform(QQuickItem * referencedItem);
extern "C"
void C_ZN15DesignerSupport15parentTransformEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->parentTransform(arg1);
}
// _ZN15DesignerSupport15parentTransformEP10QQuickItem parentTransform(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 141, column 17>
//   // proto: static void DesignerSupport::disableComponentComplete();
extern "C"
void C_ZN15DesignerSupport24disableComponentCompleteEv(void *qthis) {
  ((DesignerSupport*)qthis)->disableComponentComplete();
}
// _ZN15DesignerSupport24disableComponentCompleteEv disableComponentComplete()
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 134, column 17>
//   // proto: static bool DesignerSupport::isValidHeight(QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport13isValidHeightEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->isValidHeight(arg1);
}
// _ZN15DesignerSupport13isValidHeightEP10QQuickItem isValidHeight(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 110, column 23>
//   // proto: static QTransform DesignerSupport::windowTransform(QQuickItem * referencedItem);
extern "C"
void C_ZN15DesignerSupport15windowTransformEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->windowTransform(arg1);
}
// _ZN15DesignerSupport15windowTransformEP10QQuickItem windowTransform(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 118, column 37>
//   // proto: static QPair<QString, QObject *> DesignerSupport::anchorLineTarget(QQuickItem * item, const QString & name, QQmlContext * context);
extern "C"
void C_ZN15DesignerSupport16anchorLineTargetEP10QQuickItemRK7QStringP11QQmlContext(void *qthis, QQuickItem * arg1, const QString & arg2, QQmlContext * arg3) {
  ((DesignerSupport*)qthis)->anchorLineTarget(arg1, arg2, arg3);
}
// _ZN15DesignerSupport16anchorLineTargetEP10QQuickItemRK7QStringP11QQmlContext anchorLineTarget(class QQuickItem *, const class QString &, class QQmlContext *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 113, column 17>
//   // proto: static bool DesignerSupport::isAnchoredTo(QQuickItem * fromItem, QQuickItem * toItem);
extern "C"
void C_ZN15DesignerSupport12isAnchoredToEP10QQuickItemS1_(void *qthis, QQuickItem * arg1, QQuickItem * arg2) {
  ((DesignerSupport*)qthis)->isAnchoredTo(arg1, arg2);
}
// _ZN15DesignerSupport12isAnchoredToEP10QQuickItemS1_ isAnchoredTo(class QQuickItem *, class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 116, column 24>
//   // proto: static QQuickItem * DesignerSupport::anchorFillTargetItem(QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport20anchorFillTargetItemEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->anchorFillTargetItem(arg1);
}
// _ZN15DesignerSupport20anchorFillTargetItemEP10QQuickItem anchorFillTargetItem(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 108, column 17>
//   // proto: static void DesignerSupport::resetDirty(QQuickItem * referencedItem);
extern "C"
void C_ZN15DesignerSupport10resetDirtyEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->resetDirty(arg1);
}
// _ZN15DesignerSupport10resetDirtyEP10QQuickItem resetDirty(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 104, column 12>
//   // proto:  QImage DesignerSupport::renderImageForItem(QQuickItem * referencedItem, const QRectF & boundingRect, const QSize & imageSize);
extern "C"
void C_ZN15DesignerSupport18renderImageForItemEP10QQuickItemRK6QRectFRK5QSize(void *qthis, QQuickItem * arg1, const QRectF & arg2, const QSize & arg3) {
  ((DesignerSupport*)qthis)->renderImageForItem(arg1, arg2, arg3);
}
// _ZN15DesignerSupport18renderImageForItemEP10QQuickItemRK6QRectFRK5QSize renderImageForItem(class QQuickItem *, const class QRectF &, const class QSize &)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 101, column 10>
//   // proto:  void DesignerSupport::refFromEffectItem(QQuickItem * referencedItem, bool hide);
extern "C"
void C_ZN15DesignerSupport17refFromEffectItemEP10QQuickItemb(void *qthis, QQuickItem * arg1, bool arg2) {
  ((DesignerSupport*)qthis)->refFromEffectItem(arg1, arg2);
}
// _ZN15DesignerSupport17refFromEffectItemEP10QQuickItemb refFromEffectItem(class QQuickItem *, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 114, column 17>
//   // proto: static bool DesignerSupport::areChildrenAnchoredTo(QQuickItem * fromItem, QQuickItem * toItem);
extern "C"
void C_ZN15DesignerSupport21areChildrenAnchoredToEP10QQuickItemS1_(void *qthis, QQuickItem * arg1, QQuickItem * arg2) {
  ((DesignerSupport*)qthis)->areChildrenAnchoredTo(arg1, arg2);
}
// _ZN15DesignerSupport21areChildrenAnchoredToEP10QQuickItemS1_ areChildrenAnchoredTo(class QQuickItem *, class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 125, column 17>
//   // proto: static bool DesignerSupport::isComponentComplete(QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport19isComponentCompleteEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->isComponentComplete(arg1);
}
// _ZN15DesignerSupport19isComponentCompleteEP10QQuickItem isComponentComplete(class QQuickItem *)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 107, column 17>
//   // proto: static void DesignerSupport::addDirty(QQuickItem * referencedItem, DesignerSupport::DirtyType dirtyType);
extern "C"
void C_ZN15DesignerSupport8addDirtyEP10QQuickItemNS_9DirtyTypeE(void *qthis, QQuickItem * arg1, DesignerSupport::DirtyType arg2) {
  ((DesignerSupport*)qthis)->addDirty(arg1, arg2);
}
// _ZN15DesignerSupport8addDirtyEP10QQuickItemNS_9DirtyTypeE addDirty(class QQuickItem *, enum DesignerSupport::DirtyType)
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 138, column 17>
//   // proto: static void DesignerSupport::activateDesignerWindowManager();
extern "C"
void C_ZN15DesignerSupport29activateDesignerWindowManagerEv(void *qthis) {
  ((DesignerSupport*)qthis)->activateDesignerWindowManager();
}
// _ZN15DesignerSupport29activateDesignerWindowManagerEv activateDesignerWindowManager()
// <SourceLocation file '/usr/include/qt/QtQuick/designersupport.h', line 120, column 17>
//   // proto: static void DesignerSupport::emitComponentCompleteSignalForAttachedProperty(QQuickItem * item);
extern "C"
void C_ZN15DesignerSupport46emitComponentCompleteSignalForAttachedPropertyEP10QQuickItem(void *qthis, QQuickItem * arg1) {
  ((DesignerSupport*)qthis)->emitComponentCompleteSignalForAttachedProperty(arg1);
}
// _ZN15DesignerSupport46emitComponentCompleteSignalForAttachedPropertyEP10QQuickItem emitComponentCompleteSignalForAttachedProperty(class QQuickItem *)
// <= ext block end

// body block begin =>
// <= body block end

