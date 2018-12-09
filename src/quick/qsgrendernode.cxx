//  header block begin

// since 0x050800
// /usr/include/qt/QtQuick/qsgrendernode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgrendernode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRenderNode is pure virtual: true
// QSGRenderNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGRenderNode_t {
  QByteArrayData data[1];
  char stringdata0[16];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGRenderNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGRenderNode_t qt_meta_stringdata_MyQSGRenderNode = {
   {
  QT_MOC_LITERAL(0, 0, 15), // "MyQSGRenderNode"
  },
  "MyQSGRenderNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGRenderNode[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQSGRenderNode : public QSGRenderNode {
public:
  virtual ~MyQSGRenderNode() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void render(const QSGRenderNode::RenderState *)
  virtual void render(const QSGRenderNode::RenderState * state)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"render", &handled, 1, (uint64_t)state, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGRenderNode::render(state);
  }
  }

// void QSGRenderNode()
MyQSGRenderNode() : QSGRenderNode() {}
};

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:86
// [-2] void render(const QSGRenderNode::RenderState *)
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:82
// [-2] void QSGRenderNode()
extern "C" Q_DECL_EXPORT
void* C_ZN13QSGRenderNodeC2Ev() {
  return 0; // new QSGRenderNode();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:83
// [-2] void ~QSGRenderNode()
extern "C" Q_DECL_EXPORT
void C_ZN13QSGRenderNodeD2Ev(void *this_) {
  delete (QSGRenderNode*)(this_);
}
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:85
// [4] QSGRenderNode::StateFlags changedStates()
extern "C" Q_DECL_EXPORT
QSGRenderNode::StateFlags* C_ZNK13QSGRenderNode13changedStatesEv(void *this_) {
  auto rv = ((QSGRenderNode*)this_)->changedStates();
return new QSGRenderNode::StateFlags(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:86
// [-2] void render(const QSGRenderNode::RenderState *)
extern "C" Q_DECL_EXPORT
void C_ZN13QSGRenderNode6renderEPKNS_11RenderStateE(void *this_, const QSGRenderNode::RenderState * state) {
  ((QSGRenderNode*)this_)->render(state);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:87
// [-2] void releaseResources()
extern "C" Q_DECL_EXPORT
void C_ZN13QSGRenderNode16releaseResourcesEv(void *this_) {
  ((QSGRenderNode*)this_)->releaseResources();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:88
// [4] QSGRenderNode::RenderingFlags flags()
extern "C" Q_DECL_EXPORT
QSGRenderNode::RenderingFlags* C_ZNK13QSGRenderNode5flagsEv(void *this_) {
  auto rv = ((QSGRenderNode*)this_)->flags();
return new QSGRenderNode::RenderingFlags(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:89
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSGRenderNode4rectEv(void *this_) {
  auto rv = ((QSGRenderNode*)this_)->rect();
return new QRectF(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:91
// [8] const QMatrix4x4 * matrix()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSGRenderNode6matrixEv(void *this_) {
  return (void*)((QSGRenderNode*)this_)->matrix();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:92
// [8] const QSGClipNode * clipList()
extern "C" Q_DECL_EXPORT
void* C_ZNK13QSGRenderNode8clipListEv(void *this_) {
  return (void*)((QSGRenderNode*)this_)->clipList();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:93
// [8] qreal inheritedOpacity()
extern "C" Q_DECL_EXPORT
qreal C_ZNK13QSGRenderNode16inheritedOpacityEv(void *this_) {
  return (qreal)((QSGRenderNode*)this_)->inheritedOpacity();
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
