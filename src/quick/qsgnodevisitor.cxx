//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGNodeVisitor is pure virtual: false
// QSGNodeVisitor has virtual projected: true
//  header block end

//  main block begin

class MyQSGNodeVisitor : public QSGNodeVisitor {
public:
  virtual ~MyQSGNodeVisitor() {}
// void enterTransformNode(class QSGTransformNode *)
  virtual void enterTransformNode(QSGTransformNode * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"enterTransformNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::enterTransformNode(arg0);
  }
  }
// void leaveTransformNode(class QSGTransformNode *)
  virtual void leaveTransformNode(QSGTransformNode * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"leaveTransformNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::leaveTransformNode(arg0);
  }
  }
// void enterClipNode(class QSGClipNode *)
  virtual void enterClipNode(QSGClipNode * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"enterClipNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::enterClipNode(arg0);
  }
  }
// void leaveClipNode(class QSGClipNode *)
  virtual void leaveClipNode(QSGClipNode * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"leaveClipNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::leaveClipNode(arg0);
  }
  }
// void enterGeometryNode(class QSGGeometryNode *)
  virtual void enterGeometryNode(QSGGeometryNode * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"enterGeometryNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::enterGeometryNode(arg0);
  }
  }
// void leaveGeometryNode(class QSGGeometryNode *)
  virtual void leaveGeometryNode(QSGGeometryNode * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"leaveGeometryNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::leaveGeometryNode(arg0);
  }
  }
// void enterOpacityNode(class QSGOpacityNode *)
  virtual void enterOpacityNode(QSGOpacityNode * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"enterOpacityNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::enterOpacityNode(arg0);
  }
  }
// void leaveOpacityNode(class QSGOpacityNode *)
  virtual void leaveOpacityNode(QSGOpacityNode * arg0) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"leaveOpacityNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::leaveOpacityNode(arg0);
  }
  }
// void visitNode(class QSGNode *)
  virtual void visitNode(QSGNode * n) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"visitNode", &handled, 1, (uint64_t)n, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::visitNode(n);
  }
  }
// void visitChildren(class QSGNode *)
  virtual void visitChildren(QSGNode * n) {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr(this, (char*)"visitChildren", &handled, 1, (uint64_t)n, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // VoidVoidvoid
    } else {
    QSGNodeVisitor::visitChildren(n);
  }
  }
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:337
// [-2] void ~QSGNodeVisitor()
extern "C"
void C_ZN14QSGNodeVisitorD2Ev(void *this_) {
  delete (QSGNodeVisitor*)(this_);
}
//  main block end
