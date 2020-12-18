//  header block begin

// /usr/include/qt/QtQuick/qsgrendernode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgrendernode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRenderNode is pure virtual: true true
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
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
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

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgrendernode(void* this_) {
  uint64_t fnptrsumval = 0;


/*void C_ZN13QSGRenderNodeD2Ev(void *this_)*/ {
  delete (QSGRenderNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgrendernode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
