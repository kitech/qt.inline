//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#endif
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
// Protected inline virtual Visibility=Default Availability=Available
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

// Protected inline virtual Visibility=Default Availability=Available
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

// Protected inline virtual Visibility=Default Availability=Available
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

// Protected inline virtual Visibility=Default Availability=Available
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

// Protected inline virtual Visibility=Default Availability=Available
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

// Protected inline virtual Visibility=Default Availability=Available
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

// Protected inline virtual Visibility=Default Availability=Available
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

// Protected inline virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected virtual Visibility=Default Availability=Available
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

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:340
// [-2] void enterTransformNode(class QSGTransformNode *)
extern "C"
void C_ZN14QSGNodeVisitor18enterTransformNodeEP16QSGTransformNode(void *this_, QSGTransformNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::enterTransformNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:341
// [-2] void leaveTransformNode(class QSGTransformNode *)
extern "C"
void C_ZN14QSGNodeVisitor18leaveTransformNodeEP16QSGTransformNode(void *this_, QSGTransformNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::leaveTransformNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:342
// [-2] void enterClipNode(class QSGClipNode *)
extern "C"
void C_ZN14QSGNodeVisitor13enterClipNodeEP11QSGClipNode(void *this_, QSGClipNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::enterClipNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:343
// [-2] void leaveClipNode(class QSGClipNode *)
extern "C"
void C_ZN14QSGNodeVisitor13leaveClipNodeEP11QSGClipNode(void *this_, QSGClipNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::leaveClipNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:344
// [-2] void enterGeometryNode(class QSGGeometryNode *)
extern "C"
void C_ZN14QSGNodeVisitor17enterGeometryNodeEP15QSGGeometryNode(void *this_, QSGGeometryNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::enterGeometryNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:345
// [-2] void leaveGeometryNode(class QSGGeometryNode *)
extern "C"
void C_ZN14QSGNodeVisitor17leaveGeometryNodeEP15QSGGeometryNode(void *this_, QSGGeometryNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::leaveGeometryNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:346
// [-2] void enterOpacityNode(class QSGOpacityNode *)
extern "C"
void C_ZN14QSGNodeVisitor16enterOpacityNodeEP14QSGOpacityNode(void *this_, QSGOpacityNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::enterOpacityNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:347
// [-2] void leaveOpacityNode(class QSGOpacityNode *)
extern "C"
void C_ZN14QSGNodeVisitor16leaveOpacityNodeEP14QSGOpacityNode(void *this_, QSGOpacityNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::leaveOpacityNode(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:348
// [-2] void visitNode(class QSGNode *)
extern "C"
void C_ZN14QSGNodeVisitor9visitNodeEP7QSGNode(void *this_, QSGNode * n) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::visitNode(n);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:349
// [-2] void visitChildren(class QSGNode *)
extern "C"
void C_ZN14QSGNodeVisitor13visitChildrenEP7QSGNode(void *this_, QSGNode * n) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::visitChildren(n);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:337
// [-2] void ~QSGNodeVisitor()
extern "C"
void C_ZN14QSGNodeVisitorD2Ev(void *this_) {
  delete (QSGNodeVisitor*)(this_);
}
//  main block end
