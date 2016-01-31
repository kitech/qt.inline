#include <qrect.h>
#include <qglobal.h>
#include <qmatrix4x4.h>
// auto generated, do not modify.
// created: Fri Jan 22 22:26:45 2016
// src-file: /QtQuick/qsgnode.h
// dst-file: /src/quick/qsgnode.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qsgnode.h>

extern "C" {

int QSGTransformNode_Class_Size()
{
  return sizeof(QSGTransformNode);
}

int QSGOpacityNode_Class_Size()
{
  return sizeof(QSGOpacityNode);
}

int QSGClipNode_Class_Size()
{
  return sizeof(QSGClipNode);
}

int QSGGeometryNode_Class_Size()
{
  return sizeof(QSGGeometryNode);
}

int QSGNodeVisitor_Class_Size()
{
  return sizeof(QSGNodeVisitor);
}

int QSGNode_Class_Size()
{
  return sizeof(QSGNode);
}

int QSGBasicGeometryNode_Class_Size()
{
  return sizeof(QSGBasicGeometryNode);
}

int QSGRootNode_Class_Size()
{
  return sizeof(QSGRootNode);
}

}; // <= extern "C" block end

// <= header block end

// main block begin =>
void __keep_qsgnode_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 283, column 23>
//   // proto:  const QMatrix4x4 & QSGTransformNode::combinedMatrix();
if (true) {
  auto f = [](QSGTransformNode flythis) {
    ((QSGTransformNode*)0)->combinedMatrix();
    flythis.combinedMatrix();
  };
  if (f == nullptr){}
}
// _ZNK16QSGTransformNode14combinedMatrixEv combinedMatrix()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 282, column 10>
//   // proto:  void QSGTransformNode::setCombinedMatrix(const QMatrix4x4 & matrix);
if (true) {
  auto f = [](QSGTransformNode flythis, const QMatrix4x4 & arg1) {
    ((QSGTransformNode*)0)->setCombinedMatrix(arg1);
    flythis.setCombinedMatrix(arg1);
  };
  if (f == nullptr){}
}
// _ZN16QSGTransformNode17setCombinedMatrixERK10QMatrix4x4 setCombinedMatrix(const class QMatrix4x4 &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 280, column 23>
//   // proto:  const QMatrix4x4 & QSGTransformNode::matrix();
if (true) {
  auto f = [](QSGTransformNode flythis) {
    ((QSGTransformNode*)0)->matrix();
    flythis.matrix();
  };
  if (f == nullptr){}
}
// _ZNK16QSGTransformNode6matrixEv matrix()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 279, column 10>
//   // proto:  void QSGTransformNode::setMatrix(const QMatrix4x4 & matrix);
if (true) {
  auto f = [](QSGTransformNode flythis, const QMatrix4x4 & arg1) {
    ((QSGTransformNode*)0)->setMatrix(arg1);
    flythis.setMatrix(arg1);
  };
  if (f == nullptr){}
}
// _ZN16QSGTransformNode9setMatrixERK10QMatrix4x4 setMatrix(const class QMatrix4x4 &)
//   // proto:  void QSGTransformNode::~QSGTransformNode();
if (true) {
  delete ((QSGTransformNode*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 276, column 5>
//   // proto:  void QSGTransformNode::QSGTransformNode();
if (true) {
  auto f = []() {
    new QSGTransformNode();
  };
  if (f == nullptr){}
}
//   // proto:  void QSGOpacityNode::~QSGOpacityNode();
if (true) {
  delete ((QSGOpacityNode*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 311, column 5>
//   // proto:  void QSGOpacityNode::QSGOpacityNode();
if (true) {
  auto f = []() {
    new QSGOpacityNode();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 314, column 10>
//   // proto:  void QSGOpacityNode::setOpacity(qreal opacity);
if (true) {
  auto f = [](QSGOpacityNode flythis, qreal arg1) {
    ((QSGOpacityNode*)0)->setOpacity(arg1);
    flythis.setOpacity(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QSGOpacityNode10setOpacityEd setOpacity(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 315, column 11>
//   // proto:  qreal QSGOpacityNode::opacity();
if (true) {
  auto f = [](QSGOpacityNode flythis) {
    ((QSGOpacityNode*)0)->opacity();
    flythis.opacity();
  };
  if (f == nullptr){}
}
// _ZNK14QSGOpacityNode7opacityEv opacity()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 318, column 11>
//   // proto:  qreal QSGOpacityNode::combinedOpacity();
if (true) {
  auto f = [](QSGOpacityNode flythis) {
    ((QSGOpacityNode*)0)->combinedOpacity();
    flythis.combinedOpacity();
  };
  if (f == nullptr){}
}
// _ZNK14QSGOpacityNode15combinedOpacityEv combinedOpacity()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 320, column 10>
//   // proto:  bool QSGOpacityNode::isSubtreeBlocked();
if (true) {
  auto f = [](QSGOpacityNode flythis) {
    ((QSGOpacityNode*)0)->isSubtreeBlocked();
    flythis.isSubtreeBlocked();
  };
  if (f == nullptr){}
}
// _ZNK14QSGOpacityNode16isSubtreeBlockedEv isSubtreeBlocked()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 317, column 10>
//   // proto:  void QSGOpacityNode::setCombinedOpacity(qreal opacity);
if (true) {
  auto f = [](QSGOpacityNode flythis, qreal arg1) {
    ((QSGOpacityNode*)0)->setCombinedOpacity(arg1);
    flythis.setCombinedOpacity(arg1);
  };
  if (f == nullptr){}
}
// _ZN14QSGOpacityNode18setCombinedOpacityEd setCombinedOpacity(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 262, column 10>
//   // proto:  void QSGClipNode::setClipRect(const QRectF & );
if (true) {
  auto f = [](QSGClipNode flythis, const QRectF & arg1) {
    ((QSGClipNode*)0)->setClipRect(arg1);
    flythis.setClipRect(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QSGClipNode11setClipRectERK6QRectF setClipRect(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 256, column 5>
//   // proto:  void QSGClipNode::QSGClipNode();
if (true) {
  auto f = []() {
    new QSGClipNode();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 260, column 10>
//   // proto:  bool QSGClipNode::isRectangular();
if (true) {
  auto f = [](QSGClipNode flythis) {
    ((QSGClipNode*)0)->isRectangular();
    flythis.isRectangular();
  };
  if (f == nullptr){}
}
// _ZNK11QSGClipNode13isRectangularEv isRectangular()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 259, column 10>
//   // proto:  void QSGClipNode::setIsRectangular(bool rectHint);
if (true) {
  auto f = [](QSGClipNode flythis, bool arg1) {
    ((QSGClipNode*)0)->setIsRectangular(arg1);
    flythis.setIsRectangular(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QSGClipNode16setIsRectangularEb setIsRectangular(_Bool)
//   // proto:  void QSGClipNode::~QSGClipNode();
if (true) {
  delete ((QSGClipNode*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 263, column 12>
//   // proto:  QRectF QSGClipNode::clipRect();
if (true) {
  auto f = [](QSGClipNode flythis) {
    ((QSGClipNode*)0)->clipRect();
    flythis.clipRect();
  };
  if (f == nullptr){}
}
// _ZNK11QSGClipNode8clipRectEv clipRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 230, column 18>
//   // proto:  QSGMaterial * QSGGeometryNode::opaqueMaterial();
if (true) {
  auto f = [](QSGGeometryNode flythis) {
    ((QSGGeometryNode*)0)->opaqueMaterial();
    flythis.opaqueMaterial();
  };
  if (f == nullptr){}
}
// _ZNK15QSGGeometryNode14opaqueMaterialEv opaqueMaterial()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 237, column 10>
//   // proto:  void QSGGeometryNode::setInheritedOpacity(qreal opacity);
if (true) {
  auto f = [](QSGGeometryNode flythis, qreal arg1) {
    ((QSGGeometryNode*)0)->setInheritedOpacity(arg1);
    flythis.setInheritedOpacity(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QSGGeometryNode19setInheritedOpacityEd setInheritedOpacity(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 226, column 10>
//   // proto:  void QSGGeometryNode::setMaterial(QSGMaterial * material);
if (true) {
  auto f = [](QSGGeometryNode flythis, QSGMaterial * arg1) {
    ((QSGGeometryNode*)0)->setMaterial(arg1);
    flythis.setMaterial(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QSGGeometryNode11setMaterialEP11QSGMaterial setMaterial(class QSGMaterial *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 235, column 9>
//   // proto:  int QSGGeometryNode::renderOrder();
if (true) {
  auto f = [](QSGGeometryNode flythis) {
    ((QSGGeometryNode*)0)->renderOrder();
    flythis.renderOrder();
  };
  if (f == nullptr){}
}
// _ZNK15QSGGeometryNode11renderOrderEv renderOrder()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 234, column 10>
//   // proto:  void QSGGeometryNode::setRenderOrder(int order);
if (true) {
  auto f = [](QSGGeometryNode flythis, int arg1) {
    ((QSGGeometryNode*)0)->setRenderOrder(arg1);
    flythis.setRenderOrder(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QSGGeometryNode14setRenderOrderEi setRenderOrder(int)
//   // proto:  void QSGGeometryNode::~QSGGeometryNode();
if (true) {
  delete ((QSGGeometryNode*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 229, column 10>
//   // proto:  void QSGGeometryNode::setOpaqueMaterial(QSGMaterial * material);
if (true) {
  auto f = [](QSGGeometryNode flythis, QSGMaterial * arg1) {
    ((QSGGeometryNode*)0)->setOpaqueMaterial(arg1);
    flythis.setOpaqueMaterial(arg1);
  };
  if (f == nullptr){}
}
// _ZN15QSGGeometryNode17setOpaqueMaterialEP11QSGMaterial setOpaqueMaterial(class QSGMaterial *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 232, column 18>
//   // proto:  QSGMaterial * QSGGeometryNode::activeMaterial();
if (true) {
  auto f = [](QSGGeometryNode flythis) {
    ((QSGGeometryNode*)0)->activeMaterial();
    flythis.activeMaterial();
  };
  if (f == nullptr){}
}
// _ZNK15QSGGeometryNode14activeMaterialEv activeMaterial()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 227, column 18>
//   // proto:  QSGMaterial * QSGGeometryNode::material();
if (true) {
  auto f = [](QSGGeometryNode flythis) {
    ((QSGGeometryNode*)0)->material();
    flythis.material();
  };
  if (f == nullptr){}
}
// _ZNK15QSGGeometryNode8materialEv material()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 223, column 5>
//   // proto:  void QSGGeometryNode::QSGGeometryNode();
if (true) {
  auto f = []() {
    new QSGGeometryNode();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 238, column 11>
//   // proto:  qreal QSGGeometryNode::inheritedOpacity();
if (true) {
  auto f = [](QSGGeometryNode flythis) {
    ((QSGGeometryNode*)0)->inheritedOpacity();
    flythis.inheritedOpacity();
  };
  if (f == nullptr){}
}
// _ZNK15QSGGeometryNode16inheritedOpacityEv inheritedOpacity()
//   // proto:  void QSGNodeVisitor::~QSGNodeVisitor();
if (true) {
  delete ((QSGNodeVisitor*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 135, column 10>
//   // proto:  void QSGNode::reparentChildNodesTo(QSGNode * newParent);
if (true) {
  auto f = [](QSGNode flythis, QSGNode * arg1) {
    ((QSGNode*)0)->reparentChildNodesTo(arg1);
    flythis.reparentChildNodesTo(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QSGNode20reparentChildNodesToEPS_ reparentChildNodesTo(class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 131, column 10>
//   // proto:  void QSGNode::prependChildNode(QSGNode * node);
if (true) {
  auto f = [](QSGNode flythis, QSGNode * arg1) {
    ((QSGNode*)0)->prependChildNode(arg1);
    flythis.prependChildNode(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QSGNode16prependChildNodeEPS_ prependChildNode(class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 150, column 18>
//   // proto:  bool QSGNode::isSubtreeBlocked();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->isSubtreeBlocked();
    flythis.isSubtreeBlocked();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode16isSubtreeBlockedEv isSubtreeBlocked()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 142, column 14>
//   // proto:  QSGNode * QSGNode::previousSibling();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->previousSibling();
    flythis.previousSibling();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode15previousSiblingEv previousSibling()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 153, column 10>
//   // proto:  void QSGNode::setFlag(QSGNode::Flag , bool );
if (true) {
  auto f = [](QSGNode flythis, QSGNode::Flag arg1, bool arg2) {
    ((QSGNode*)0)->setFlag(arg1, arg2);
    flythis.setFlag(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN7QSGNode7setFlagENS_4FlagEb setFlag(enum QSGNode::Flag, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 127, column 14>
//   // proto:  QSGNode * QSGNode::parent();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->parent();
    flythis.parent();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode6parentEv parent()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 124, column 5>
//   // proto:  void QSGNode::QSGNode();
if (true) {
  auto f = []() {
    new QSGNode();
  };
  if (f == nullptr){}
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 152, column 11>
//   // proto:  Flags QSGNode::flags();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->flags();
    flythis.flags();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 130, column 10>
//   // proto:  void QSGNode::removeAllChildNodes();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->removeAllChildNodes();
    flythis.removeAllChildNodes();
  };
  if (f == nullptr){}
}
// _ZN7QSGNode19removeAllChildNodesEv removeAllChildNodes()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 140, column 14>
//   // proto:  QSGNode * QSGNode::lastChild();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->lastChild();
    flythis.lastChild();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode9lastChildEv lastChild()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 146, column 24>
//   // proto:  void QSGNode::clearDirty();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->clearDirty();
    flythis.clearDirty();
  };
  if (f == nullptr){}
}
// _ZN7QSGNode10clearDirtyEv clearDirty()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 132, column 10>
//   // proto:  void QSGNode::appendChildNode(QSGNode * node);
if (true) {
  auto f = [](QSGNode flythis, QSGNode * arg1) {
    ((QSGNode*)0)->appendChildNode(arg1);
    flythis.appendChildNode(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QSGNode15appendChildNodeEPS_ appendChildNode(class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 148, column 30>
//   // proto:  DirtyState QSGNode::dirtyState();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->dirtyState();
    flythis.dirtyState();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode10dirtyStateEv dirtyState()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 129, column 10>
//   // proto:  void QSGNode::removeChildNode(QSGNode * node);
if (true) {
  auto f = [](QSGNode flythis, QSGNode * arg1) {
    ((QSGNode*)0)->removeChildNode(arg1);
    flythis.removeChildNode(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QSGNode15removeChildNodeEPS_ removeChildNode(class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 138, column 14>
//   // proto:  QSGNode * QSGNode::childAtIndex(int i);
if (true) {
  auto f = [](QSGNode flythis, int arg1) {
    ((QSGNode*)0)->childAtIndex(arg1);
    flythis.childAtIndex(arg1);
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode12childAtIndexEi childAtIndex(int)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 156, column 18>
//   // proto:  void QSGNode::preprocess();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->preprocess();
    flythis.preprocess();
  };
  if (f == nullptr){}
}
// _ZN7QSGNode10preprocessEv preprocess()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 144, column 21>
//   // proto:  QSGNode::NodeType QSGNode::type();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->type();
    flythis.type();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode4typeEv type()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 141, column 14>
//   // proto:  QSGNode * QSGNode::nextSibling();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->nextSibling();
    flythis.nextSibling();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode11nextSiblingEv nextSibling()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 134, column 10>
//   // proto:  void QSGNode::insertChildNodeAfter(QSGNode * node, QSGNode * after);
if (true) {
  auto f = [](QSGNode flythis, QSGNode * arg1, QSGNode * arg2) {
    ((QSGNode*)0)->insertChildNodeAfter(arg1, arg2);
    flythis.insertChildNodeAfter(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN7QSGNode20insertChildNodeAfterEPS_S0_ insertChildNodeAfter(class QSGNode *, class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 133, column 10>
//   // proto:  void QSGNode::insertChildNodeBefore(QSGNode * node, QSGNode * before);
if (true) {
  auto f = [](QSGNode flythis, QSGNode * arg1, QSGNode * arg2) {
    ((QSGNode*)0)->insertChildNodeBefore(arg1, arg2);
    flythis.insertChildNodeBefore(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN7QSGNode21insertChildNodeBeforeEPS_S0_ insertChildNodeBefore(class QSGNode *, class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 137, column 9>
//   // proto:  int QSGNode::childCount();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->childCount();
    flythis.childCount();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode10childCountEv childCount()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 154, column 10>
//   // proto:  void QSGNode::setFlags(Flags , bool );
if (true) {
  auto f = [](QSGNode flythis, QSGNode::Flags arg1, bool arg2) {
    ((QSGNode*)0)->setFlags(arg1, arg2);
    flythis.setFlags(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZN7QSGNode8setFlagsE6QFlagsINS_4FlagEEb setFlags(Flags, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 147, column 10>
//   // proto:  void QSGNode::markDirty(DirtyState bits);
if (true) {
  auto f = [](QSGNode flythis, QSGNode::DirtyState arg1) {
    ((QSGNode*)0)->markDirty(arg1);
    flythis.markDirty(arg1);
  };
  if (f == nullptr){}
}
// _ZN7QSGNode9markDirtyE6QFlagsINS_13DirtyStateBitEE markDirty(DirtyState)
//   // proto:  void QSGNode::~QSGNode();
if (true) {
  delete ((QSGNode*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 139, column 14>
//   // proto:  QSGNode * QSGNode::firstChild();
if (true) {
  auto f = [](QSGNode flythis) {
    ((QSGNode*)0)->firstChild();
    flythis.firstChild();
  };
  if (f == nullptr){}
}
// _ZNK7QSGNode10firstChildEv firstChild()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 196, column 18>
//   // proto:  QSGGeometry * QSGBasicGeometryNode::geometry();
if (true) {
  auto f = [](QSGBasicGeometryNode flythis) {
    ((QSGBasicGeometryNode*)0)->geometry();
    flythis.geometry();
  };
  if (f == nullptr){}
}
// _ZN20QSGBasicGeometryNode8geometryEv geometry()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 198, column 23>
//   // proto:  const QMatrix4x4 * QSGBasicGeometryNode::matrix();
if (true) {
  auto f = [](QSGBasicGeometryNode flythis) {
    ((QSGBasicGeometryNode*)0)->matrix();
    flythis.matrix();
  };
  if (f == nullptr){}
}
// _ZNK20QSGBasicGeometryNode6matrixEv matrix()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 199, column 24>
//   // proto:  const QSGClipNode * QSGBasicGeometryNode::clipList();
if (true) {
  auto f = [](QSGBasicGeometryNode flythis) {
    ((QSGBasicGeometryNode*)0)->clipList();
    flythis.clipList();
  };
  if (f == nullptr){}
}
// _ZNK20QSGBasicGeometryNode8clipListEv clipList()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 195, column 24>
//   // proto:  const QSGGeometry * QSGBasicGeometryNode::geometry();
if (true) {
  auto f = [](QSGBasicGeometryNode flythis) {
    ((QSGBasicGeometryNode*)0)->geometry();
    flythis.geometry();
  };
  if (f == nullptr){}
}
// _ZNK20QSGBasicGeometryNode8geometryEv geometry()
//   // proto:  void QSGBasicGeometryNode::~QSGBasicGeometryNode();
if (true) {
  delete ((QSGBasicGeometryNode*)0);
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 194, column 10>
//   // proto:  void QSGBasicGeometryNode::setGeometry(QSGGeometry * geometry);
if (true) {
  auto f = [](QSGBasicGeometryNode flythis, QSGGeometry * arg1) {
    ((QSGBasicGeometryNode*)0)->setGeometry(arg1);
    flythis.setGeometry(arg1);
  };
  if (f == nullptr){}
}
// _ZN20QSGBasicGeometryNode11setGeometryEP11QSGGeometry setGeometry(class QSGGeometry *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 294, column 5>
//   // proto:  void QSGRootNode::QSGRootNode();
if (true) {
  auto f = []() {
    new QSGRootNode();
  };
  if (f == nullptr){}
}
//   // proto:  void QSGRootNode::~QSGRootNode();
if (true) {
  delete ((QSGRootNode*)0);
}
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 283, column 23>
//   // proto:  const QMatrix4x4 & QSGTransformNode::combinedMatrix();
extern "C"
void C_ZNK16QSGTransformNode14combinedMatrixEv(void *qthis) {
  ((QSGTransformNode*)qthis)->combinedMatrix();
}
// _ZNK16QSGTransformNode14combinedMatrixEv combinedMatrix()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 282, column 10>
//   // proto:  void QSGTransformNode::setCombinedMatrix(const QMatrix4x4 & matrix);
extern "C"
void C_ZN16QSGTransformNode17setCombinedMatrixERK10QMatrix4x4(void *qthis, const QMatrix4x4 & arg1) {
  ((QSGTransformNode*)qthis)->setCombinedMatrix(arg1);
}
// _ZN16QSGTransformNode17setCombinedMatrixERK10QMatrix4x4 setCombinedMatrix(const class QMatrix4x4 &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 280, column 23>
//   // proto:  const QMatrix4x4 & QSGTransformNode::matrix();
extern "C"
void C_ZNK16QSGTransformNode6matrixEv(void *qthis) {
  ((QSGTransformNode*)qthis)->matrix();
}
// _ZNK16QSGTransformNode6matrixEv matrix()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 279, column 10>
//   // proto:  void QSGTransformNode::setMatrix(const QMatrix4x4 & matrix);
extern "C"
void C_ZN16QSGTransformNode9setMatrixERK10QMatrix4x4(void *qthis, const QMatrix4x4 & arg1) {
  ((QSGTransformNode*)qthis)->setMatrix(arg1);
}
// _ZN16QSGTransformNode9setMatrixERK10QMatrix4x4 setMatrix(const class QMatrix4x4 &)
//   // proto:  void QSGTransformNode::~QSGTransformNode();
extern "C"
void C_ZN16QSGTransformNodeD2Ev(void *qthis) {
  delete (QSGTransformNode*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 276, column 5>
//   // proto:  void QSGTransformNode::QSGTransformNode();
extern "C"
void C_ZN16QSGTransformNodeC2Ev() {
  new QSGTransformNode();
}
//   // proto:  void QSGOpacityNode::~QSGOpacityNode();
extern "C"
void C_ZN14QSGOpacityNodeD2Ev(void *qthis) {
  delete (QSGOpacityNode*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 311, column 5>
//   // proto:  void QSGOpacityNode::QSGOpacityNode();
extern "C"
void C_ZN14QSGOpacityNodeC2Ev() {
  new QSGOpacityNode();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 314, column 10>
//   // proto:  void QSGOpacityNode::setOpacity(qreal opacity);
extern "C"
void C_ZN14QSGOpacityNode10setOpacityEd(void *qthis, qreal arg1) {
  ((QSGOpacityNode*)qthis)->setOpacity(arg1);
}
// _ZN14QSGOpacityNode10setOpacityEd setOpacity(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 315, column 11>
//   // proto:  qreal QSGOpacityNode::opacity();
extern "C"
void C_ZNK14QSGOpacityNode7opacityEv(void *qthis) {
  ((QSGOpacityNode*)qthis)->opacity();
}
// _ZNK14QSGOpacityNode7opacityEv opacity()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 318, column 11>
//   // proto:  qreal QSGOpacityNode::combinedOpacity();
extern "C"
void C_ZNK14QSGOpacityNode15combinedOpacityEv(void *qthis) {
  ((QSGOpacityNode*)qthis)->combinedOpacity();
}
// _ZNK14QSGOpacityNode15combinedOpacityEv combinedOpacity()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 320, column 10>
//   // proto:  bool QSGOpacityNode::isSubtreeBlocked();
extern "C"
void C_ZNK14QSGOpacityNode16isSubtreeBlockedEv(void *qthis) {
  ((QSGOpacityNode*)qthis)->isSubtreeBlocked();
}
// _ZNK14QSGOpacityNode16isSubtreeBlockedEv isSubtreeBlocked()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 317, column 10>
//   // proto:  void QSGOpacityNode::setCombinedOpacity(qreal opacity);
extern "C"
void C_ZN14QSGOpacityNode18setCombinedOpacityEd(void *qthis, qreal arg1) {
  ((QSGOpacityNode*)qthis)->setCombinedOpacity(arg1);
}
// _ZN14QSGOpacityNode18setCombinedOpacityEd setCombinedOpacity(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 262, column 10>
//   // proto:  void QSGClipNode::setClipRect(const QRectF & );
extern "C"
void C_ZN11QSGClipNode11setClipRectERK6QRectF(void *qthis, const QRectF & arg1) {
  ((QSGClipNode*)qthis)->setClipRect(arg1);
}
// _ZN11QSGClipNode11setClipRectERK6QRectF setClipRect(const class QRectF &)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 256, column 5>
//   // proto:  void QSGClipNode::QSGClipNode();
extern "C"
void C_ZN11QSGClipNodeC2Ev() {
  new QSGClipNode();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 260, column 10>
//   // proto:  bool QSGClipNode::isRectangular();
extern "C"
void C_ZNK11QSGClipNode13isRectangularEv(void *qthis) {
  ((QSGClipNode*)qthis)->isRectangular();
}
// _ZNK11QSGClipNode13isRectangularEv isRectangular()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 259, column 10>
//   // proto:  void QSGClipNode::setIsRectangular(bool rectHint);
extern "C"
void C_ZN11QSGClipNode16setIsRectangularEb(void *qthis, bool arg1) {
  ((QSGClipNode*)qthis)->setIsRectangular(arg1);
}
// _ZN11QSGClipNode16setIsRectangularEb setIsRectangular(_Bool)
//   // proto:  void QSGClipNode::~QSGClipNode();
extern "C"
void C_ZN11QSGClipNodeD2Ev(void *qthis) {
  delete (QSGClipNode*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 263, column 12>
//   // proto:  QRectF QSGClipNode::clipRect();
extern "C"
void C_ZNK11QSGClipNode8clipRectEv(void *qthis) {
  ((QSGClipNode*)qthis)->clipRect();
}
// _ZNK11QSGClipNode8clipRectEv clipRect()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 230, column 18>
//   // proto:  QSGMaterial * QSGGeometryNode::opaqueMaterial();
extern "C"
void C_ZNK15QSGGeometryNode14opaqueMaterialEv(void *qthis) {
  ((QSGGeometryNode*)qthis)->opaqueMaterial();
}
// _ZNK15QSGGeometryNode14opaqueMaterialEv opaqueMaterial()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 237, column 10>
//   // proto:  void QSGGeometryNode::setInheritedOpacity(qreal opacity);
extern "C"
void C_ZN15QSGGeometryNode19setInheritedOpacityEd(void *qthis, qreal arg1) {
  ((QSGGeometryNode*)qthis)->setInheritedOpacity(arg1);
}
// _ZN15QSGGeometryNode19setInheritedOpacityEd setInheritedOpacity(qreal)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 226, column 10>
//   // proto:  void QSGGeometryNode::setMaterial(QSGMaterial * material);
extern "C"
void C_ZN15QSGGeometryNode11setMaterialEP11QSGMaterial(void *qthis, QSGMaterial * arg1) {
  ((QSGGeometryNode*)qthis)->setMaterial(arg1);
}
// _ZN15QSGGeometryNode11setMaterialEP11QSGMaterial setMaterial(class QSGMaterial *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 235, column 9>
//   // proto:  int QSGGeometryNode::renderOrder();
extern "C"
void C_ZNK15QSGGeometryNode11renderOrderEv(void *qthis) {
  ((QSGGeometryNode*)qthis)->renderOrder();
}
// _ZNK15QSGGeometryNode11renderOrderEv renderOrder()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 234, column 10>
//   // proto:  void QSGGeometryNode::setRenderOrder(int order);
extern "C"
void C_ZN15QSGGeometryNode14setRenderOrderEi(void *qthis, int arg1) {
  ((QSGGeometryNode*)qthis)->setRenderOrder(arg1);
}
// _ZN15QSGGeometryNode14setRenderOrderEi setRenderOrder(int)
//   // proto:  void QSGGeometryNode::~QSGGeometryNode();
extern "C"
void C_ZN15QSGGeometryNodeD2Ev(void *qthis) {
  delete (QSGGeometryNode*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 229, column 10>
//   // proto:  void QSGGeometryNode::setOpaqueMaterial(QSGMaterial * material);
extern "C"
void C_ZN15QSGGeometryNode17setOpaqueMaterialEP11QSGMaterial(void *qthis, QSGMaterial * arg1) {
  ((QSGGeometryNode*)qthis)->setOpaqueMaterial(arg1);
}
// _ZN15QSGGeometryNode17setOpaqueMaterialEP11QSGMaterial setOpaqueMaterial(class QSGMaterial *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 232, column 18>
//   // proto:  QSGMaterial * QSGGeometryNode::activeMaterial();
extern "C"
void C_ZNK15QSGGeometryNode14activeMaterialEv(void *qthis) {
  ((QSGGeometryNode*)qthis)->activeMaterial();
}
// _ZNK15QSGGeometryNode14activeMaterialEv activeMaterial()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 227, column 18>
//   // proto:  QSGMaterial * QSGGeometryNode::material();
extern "C"
void C_ZNK15QSGGeometryNode8materialEv(void *qthis) {
  ((QSGGeometryNode*)qthis)->material();
}
// _ZNK15QSGGeometryNode8materialEv material()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 223, column 5>
//   // proto:  void QSGGeometryNode::QSGGeometryNode();
extern "C"
void C_ZN15QSGGeometryNodeC2Ev() {
  new QSGGeometryNode();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 238, column 11>
//   // proto:  qreal QSGGeometryNode::inheritedOpacity();
extern "C"
void C_ZNK15QSGGeometryNode16inheritedOpacityEv(void *qthis) {
  ((QSGGeometryNode*)qthis)->inheritedOpacity();
}
// _ZNK15QSGGeometryNode16inheritedOpacityEv inheritedOpacity()
//   // proto:  void QSGNodeVisitor::~QSGNodeVisitor();
extern "C"
void C_ZN14QSGNodeVisitorD2Ev(void *qthis) {
  delete (QSGNodeVisitor*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 135, column 10>
//   // proto:  void QSGNode::reparentChildNodesTo(QSGNode * newParent);
extern "C"
void C_ZN7QSGNode20reparentChildNodesToEPS_(void *qthis, QSGNode * arg1) {
  ((QSGNode*)qthis)->reparentChildNodesTo(arg1);
}
// _ZN7QSGNode20reparentChildNodesToEPS_ reparentChildNodesTo(class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 131, column 10>
//   // proto:  void QSGNode::prependChildNode(QSGNode * node);
extern "C"
void C_ZN7QSGNode16prependChildNodeEPS_(void *qthis, QSGNode * arg1) {
  ((QSGNode*)qthis)->prependChildNode(arg1);
}
// _ZN7QSGNode16prependChildNodeEPS_ prependChildNode(class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 150, column 18>
//   // proto:  bool QSGNode::isSubtreeBlocked();
extern "C"
void C_ZNK7QSGNode16isSubtreeBlockedEv(void *qthis) {
  ((QSGNode*)qthis)->isSubtreeBlocked();
}
// _ZNK7QSGNode16isSubtreeBlockedEv isSubtreeBlocked()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 142, column 14>
//   // proto:  QSGNode * QSGNode::previousSibling();
extern "C"
void C_ZNK7QSGNode15previousSiblingEv(void *qthis) {
  ((QSGNode*)qthis)->previousSibling();
}
// _ZNK7QSGNode15previousSiblingEv previousSibling()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 153, column 10>
//   // proto:  void QSGNode::setFlag(QSGNode::Flag , bool );
extern "C"
void C_ZN7QSGNode7setFlagENS_4FlagEb(void *qthis, QSGNode::Flag arg1, bool arg2) {
  ((QSGNode*)qthis)->setFlag(arg1, arg2);
}
// _ZN7QSGNode7setFlagENS_4FlagEb setFlag(enum QSGNode::Flag, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 127, column 14>
//   // proto:  QSGNode * QSGNode::parent();
extern "C"
void C_ZNK7QSGNode6parentEv(void *qthis) {
  ((QSGNode*)qthis)->parent();
}
// _ZNK7QSGNode6parentEv parent()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 124, column 5>
//   // proto:  void QSGNode::QSGNode();
extern "C"
void C_ZN7QSGNodeC2Ev() {
  new QSGNode();
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 152, column 11>
//   // proto:  Flags QSGNode::flags();
extern "C"
void C_ZNK7QSGNode5flagsEv(void *qthis) {
  ((QSGNode*)qthis)->flags();
}
// _ZNK7QSGNode5flagsEv flags()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 130, column 10>
//   // proto:  void QSGNode::removeAllChildNodes();
extern "C"
void C_ZN7QSGNode19removeAllChildNodesEv(void *qthis) {
  ((QSGNode*)qthis)->removeAllChildNodes();
}
// _ZN7QSGNode19removeAllChildNodesEv removeAllChildNodes()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 140, column 14>
//   // proto:  QSGNode * QSGNode::lastChild();
extern "C"
void C_ZNK7QSGNode9lastChildEv(void *qthis) {
  ((QSGNode*)qthis)->lastChild();
}
// _ZNK7QSGNode9lastChildEv lastChild()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 146, column 24>
//   // proto:  void QSGNode::clearDirty();
extern "C"
void C_ZN7QSGNode10clearDirtyEv(void *qthis) {
  ((QSGNode*)qthis)->clearDirty();
}
// _ZN7QSGNode10clearDirtyEv clearDirty()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 132, column 10>
//   // proto:  void QSGNode::appendChildNode(QSGNode * node);
extern "C"
void C_ZN7QSGNode15appendChildNodeEPS_(void *qthis, QSGNode * arg1) {
  ((QSGNode*)qthis)->appendChildNode(arg1);
}
// _ZN7QSGNode15appendChildNodeEPS_ appendChildNode(class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 148, column 30>
//   // proto:  DirtyState QSGNode::dirtyState();
extern "C"
void C_ZNK7QSGNode10dirtyStateEv(void *qthis) {
  ((QSGNode*)qthis)->dirtyState();
}
// _ZNK7QSGNode10dirtyStateEv dirtyState()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 129, column 10>
//   // proto:  void QSGNode::removeChildNode(QSGNode * node);
extern "C"
void C_ZN7QSGNode15removeChildNodeEPS_(void *qthis, QSGNode * arg1) {
  ((QSGNode*)qthis)->removeChildNode(arg1);
}
// _ZN7QSGNode15removeChildNodeEPS_ removeChildNode(class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 138, column 14>
//   // proto:  QSGNode * QSGNode::childAtIndex(int i);
extern "C"
void C_ZNK7QSGNode12childAtIndexEi(void *qthis, int arg1) {
  ((QSGNode*)qthis)->childAtIndex(arg1);
}
// _ZNK7QSGNode12childAtIndexEi childAtIndex(int)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 156, column 18>
//   // proto:  void QSGNode::preprocess();
extern "C"
void C_ZN7QSGNode10preprocessEv(void *qthis) {
  ((QSGNode*)qthis)->preprocess();
}
// _ZN7QSGNode10preprocessEv preprocess()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 144, column 21>
//   // proto:  QSGNode::NodeType QSGNode::type();
extern "C"
void C_ZNK7QSGNode4typeEv(void *qthis) {
  ((QSGNode*)qthis)->type();
}
// _ZNK7QSGNode4typeEv type()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 141, column 14>
//   // proto:  QSGNode * QSGNode::nextSibling();
extern "C"
void C_ZNK7QSGNode11nextSiblingEv(void *qthis) {
  ((QSGNode*)qthis)->nextSibling();
}
// _ZNK7QSGNode11nextSiblingEv nextSibling()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 134, column 10>
//   // proto:  void QSGNode::insertChildNodeAfter(QSGNode * node, QSGNode * after);
extern "C"
void C_ZN7QSGNode20insertChildNodeAfterEPS_S0_(void *qthis, QSGNode * arg1, QSGNode * arg2) {
  ((QSGNode*)qthis)->insertChildNodeAfter(arg1, arg2);
}
// _ZN7QSGNode20insertChildNodeAfterEPS_S0_ insertChildNodeAfter(class QSGNode *, class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 133, column 10>
//   // proto:  void QSGNode::insertChildNodeBefore(QSGNode * node, QSGNode * before);
extern "C"
void C_ZN7QSGNode21insertChildNodeBeforeEPS_S0_(void *qthis, QSGNode * arg1, QSGNode * arg2) {
  ((QSGNode*)qthis)->insertChildNodeBefore(arg1, arg2);
}
// _ZN7QSGNode21insertChildNodeBeforeEPS_S0_ insertChildNodeBefore(class QSGNode *, class QSGNode *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 137, column 9>
//   // proto:  int QSGNode::childCount();
extern "C"
void C_ZNK7QSGNode10childCountEv(void *qthis) {
  ((QSGNode*)qthis)->childCount();
}
// _ZNK7QSGNode10childCountEv childCount()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 154, column 10>
//   // proto:  void QSGNode::setFlags(Flags , bool );
extern "C"
void C_ZN7QSGNode8setFlagsE6QFlagsINS_4FlagEEb(void *qthis, QSGNode::Flags arg1, bool arg2) {
  ((QSGNode*)qthis)->setFlags(arg1, arg2);
}
// _ZN7QSGNode8setFlagsE6QFlagsINS_4FlagEEb setFlags(Flags, _Bool)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 147, column 10>
//   // proto:  void QSGNode::markDirty(DirtyState bits);
extern "C"
void C_ZN7QSGNode9markDirtyE6QFlagsINS_13DirtyStateBitEE(void *qthis, QSGNode::DirtyState arg1) {
  ((QSGNode*)qthis)->markDirty(arg1);
}
// _ZN7QSGNode9markDirtyE6QFlagsINS_13DirtyStateBitEE markDirty(DirtyState)
//   // proto:  void QSGNode::~QSGNode();
extern "C"
void C_ZN7QSGNodeD2Ev(void *qthis) {
  delete (QSGNode*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 139, column 14>
//   // proto:  QSGNode * QSGNode::firstChild();
extern "C"
void C_ZNK7QSGNode10firstChildEv(void *qthis) {
  ((QSGNode*)qthis)->firstChild();
}
// _ZNK7QSGNode10firstChildEv firstChild()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 196, column 18>
//   // proto:  QSGGeometry * QSGBasicGeometryNode::geometry();
extern "C"
void C_ZN20QSGBasicGeometryNode8geometryEv(void *qthis) {
  ((QSGBasicGeometryNode*)qthis)->geometry();
}
// _ZN20QSGBasicGeometryNode8geometryEv geometry()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 198, column 23>
//   // proto:  const QMatrix4x4 * QSGBasicGeometryNode::matrix();
extern "C"
void C_ZNK20QSGBasicGeometryNode6matrixEv(void *qthis) {
  ((QSGBasicGeometryNode*)qthis)->matrix();
}
// _ZNK20QSGBasicGeometryNode6matrixEv matrix()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 199, column 24>
//   // proto:  const QSGClipNode * QSGBasicGeometryNode::clipList();
extern "C"
void C_ZNK20QSGBasicGeometryNode8clipListEv(void *qthis) {
  ((QSGBasicGeometryNode*)qthis)->clipList();
}
// _ZNK20QSGBasicGeometryNode8clipListEv clipList()
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 195, column 24>
//   // proto:  const QSGGeometry * QSGBasicGeometryNode::geometry();
extern "C"
void C_ZNK20QSGBasicGeometryNode8geometryEv(void *qthis) {
  ((QSGBasicGeometryNode*)qthis)->geometry();
}
// _ZNK20QSGBasicGeometryNode8geometryEv geometry()
//   // proto:  void QSGBasicGeometryNode::~QSGBasicGeometryNode();
extern "C"
void C_ZN20QSGBasicGeometryNodeD2Ev(void *qthis) {
  delete (QSGBasicGeometryNode*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 194, column 10>
//   // proto:  void QSGBasicGeometryNode::setGeometry(QSGGeometry * geometry);
extern "C"
void C_ZN20QSGBasicGeometryNode11setGeometryEP11QSGGeometry(void *qthis, QSGGeometry * arg1) {
  ((QSGBasicGeometryNode*)qthis)->setGeometry(arg1);
}
// _ZN20QSGBasicGeometryNode11setGeometryEP11QSGGeometry setGeometry(class QSGGeometry *)
// <SourceLocation file '/usr/include/qt/QtQuick/qsgnode.h', line 294, column 5>
//   // proto:  void QSGRootNode::QSGRootNode();
extern "C"
void C_ZN11QSGRootNodeC2Ev() {
  new QSGRootNode();
}
//   // proto:  void QSGRootNode::~QSGRootNode();
extern "C"
void C_ZN11QSGRootNodeD2Ev(void *qthis) {
  delete (QSGRootNode*)qthis;
}
// <= ext block end

// body block begin =>
// <= body block end

