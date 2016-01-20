#include <qrect.h>
#include <qglobal.h>
#include <qmatrix4x4.h>
// auto generated, do not modify.
// created: Wed Jan 20 00:16:23 2016
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
} // <= main block end

// <= main block end

// use block begin =>
// <= use block end

// ext block begin =>
// <= ext block end

// body block begin =>
// <= body block end

