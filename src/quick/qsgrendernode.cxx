//  header block begin
// /usr/include/qt/QtQuick/qsgrendernode.h
#include <qsgrendernode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRenderNode is pure virtual: true
// QSGRenderNode has virtual projected: false
//  header block end

//  main block begin

class MyQSGRenderNode : public QSGRenderNode {
public:
  virtual ~MyQSGRenderNode() {}
// void QSGRenderNode()
MyQSGRenderNode() : QSGRenderNode() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:82
// [-2] void QSGRenderNode()
extern "C"
void* C_ZN13QSGRenderNodeC1Ev() {
  return 0; // new QSGRenderNode();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:83
// [-2] void ~QSGRenderNode()
extern "C"
void C_ZN13QSGRenderNodeD2Ev(void *this_) {
  delete (QSGRenderNode*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:85
// [4] QSGRenderNode::StateFlags changedStates()
extern "C"
void C_ZNK13QSGRenderNode13changedStatesEv(void *this_) {
  auto rv = ((QSGRenderNode*)this_)->changedStates();
/*return rv;*/
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:87
// [-2] void releaseResources()
extern "C"
void C_ZN13QSGRenderNode16releaseResourcesEv(void *this_) {
  ((QSGRenderNode*)this_)->releaseResources();
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:88
// [4] QSGRenderNode::RenderingFlags flags()
extern "C"
void C_ZNK13QSGRenderNode5flagsEv(void *this_) {
  auto rv = ((QSGRenderNode*)this_)->flags();
/*return rv;*/
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:89
// [32] QRectF rect()
extern "C"
void* C_ZNK13QSGRenderNode4rectEv(void *this_) {
  auto rv = ((QSGRenderNode*)this_)->rect();
return new QRectF(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:91
// [8] const QMatrix4x4 * matrix()
extern "C"
void* C_ZNK13QSGRenderNode6matrixEv(void *this_) {
  return (void*)((QSGRenderNode*)this_)->matrix();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:92
// [8] const QSGClipNode * clipList()
extern "C"
void* C_ZNK13QSGRenderNode8clipListEv(void *this_) {
  return (void*)((QSGRenderNode*)this_)->clipList();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:93
// [8] qreal inheritedOpacity()
extern "C"
qreal C_ZNK13QSGRenderNode16inheritedOpacityEv(void *this_) {
  return (qreal)((QSGRenderNode*)this_)->inheritedOpacity();
}
//  main block end
