//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGNodeVisitor is pure virtual: false
// QSGNodeVisitor has virtual projected: true
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGNodeVisitor_t {
  QByteArrayData data[1];
  char stringdata0[17];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGNodeVisitor_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGNodeVisitor_t qt_meta_stringdata_MyQSGNodeVisitor = {
   {
  QT_MOC_LITERAL(0, 0, 16), // "MyQSGNodeVisitor"
  },
  "MyQSGNodeVisitor"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGNodeVisitor[] = {
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
class Q_DECL_EXPORT MyQSGNodeVisitor : public QSGNodeVisitor {
public:
  virtual ~MyQSGNodeVisitor() {}
// Protected inline virtual Visibility=Default Availability=Available
// [-2] void enterTransformNode(QSGTransformNode *)
  virtual void enterTransformNode(QSGTransformNode * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"enterTransformNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::enterTransformNode(arg0);
  }
  }

// Protected inline virtual Visibility=Default Availability=Available
// [-2] void leaveTransformNode(QSGTransformNode *)
  virtual void leaveTransformNode(QSGTransformNode * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"leaveTransformNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::leaveTransformNode(arg0);
  }
  }

// Protected inline virtual Visibility=Default Availability=Available
// [-2] void enterClipNode(QSGClipNode *)
  virtual void enterClipNode(QSGClipNode * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"enterClipNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::enterClipNode(arg0);
  }
  }

// Protected inline virtual Visibility=Default Availability=Available
// [-2] void leaveClipNode(QSGClipNode *)
  virtual void leaveClipNode(QSGClipNode * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"leaveClipNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::leaveClipNode(arg0);
  }
  }

// Protected inline virtual Visibility=Default Availability=Available
// [-2] void enterGeometryNode(QSGGeometryNode *)
  virtual void enterGeometryNode(QSGGeometryNode * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"enterGeometryNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::enterGeometryNode(arg0);
  }
  }

// Protected inline virtual Visibility=Default Availability=Available
// [-2] void leaveGeometryNode(QSGGeometryNode *)
  virtual void leaveGeometryNode(QSGGeometryNode * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"leaveGeometryNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::leaveGeometryNode(arg0);
  }
  }

// Protected inline virtual Visibility=Default Availability=Available
// [-2] void enterOpacityNode(QSGOpacityNode *)
  virtual void enterOpacityNode(QSGOpacityNode * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"enterOpacityNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::enterOpacityNode(arg0);
  }
  }

// Protected inline virtual Visibility=Default Availability=Available
// [-2] void leaveOpacityNode(QSGOpacityNode *)
  virtual void leaveOpacityNode(QSGOpacityNode * arg0)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"leaveOpacityNode", &handled, 1, (uint64_t)arg0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::leaveOpacityNode(arg0);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void visitNode(QSGNode *)
  virtual void visitNode(QSGNode * n)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visitNode", &handled, 1, (uint64_t)n, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::visitNode(n);
  }
  }

// Protected virtual Visibility=Default Availability=Available
// [-2] void visitChildren(QSGNode *)
  virtual void visitChildren(QSGNode * n)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"visitChildren", &handled, 1, (uint64_t)n, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    QSGNodeVisitor::visitChildren(n);
  }
  }

};

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:340
// [-2] void enterTransformNode(QSGTransformNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor18enterTransformNodeEP16QSGTransformNode(void *this_, QSGTransformNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::enterTransformNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:341
// [-2] void leaveTransformNode(QSGTransformNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor18leaveTransformNodeEP16QSGTransformNode(void *this_, QSGTransformNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::leaveTransformNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:342
// [-2] void enterClipNode(QSGClipNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor13enterClipNodeEP11QSGClipNode(void *this_, QSGClipNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::enterClipNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:343
// [-2] void leaveClipNode(QSGClipNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor13leaveClipNodeEP11QSGClipNode(void *this_, QSGClipNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::leaveClipNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:344
// [-2] void enterGeometryNode(QSGGeometryNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor17enterGeometryNodeEP15QSGGeometryNode(void *this_, QSGGeometryNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::enterGeometryNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:345
// [-2] void leaveGeometryNode(QSGGeometryNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor17leaveGeometryNodeEP15QSGGeometryNode(void *this_, QSGGeometryNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::leaveGeometryNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:346
// [-2] void enterOpacityNode(QSGOpacityNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor16enterOpacityNodeEP14QSGOpacityNode(void *this_, QSGOpacityNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::enterOpacityNode(arg0);
}

// Protected inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:347
// [-2] void leaveOpacityNode(QSGOpacityNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor16leaveOpacityNodeEP14QSGOpacityNode(void *this_, QSGOpacityNode * arg0) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::leaveOpacityNode(arg0);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:348
// [-2] void visitNode(QSGNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor9visitNodeEP7QSGNode(void *this_, QSGNode * n) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::visitNode(n);
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:349
// [-2] void visitChildren(QSGNode *)
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitor13visitChildrenEP7QSGNode(void *this_, QSGNode * n) {
  ((QSGNodeVisitor*)this_)->QSGNodeVisitor::visitChildren(n);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:337
// [-2] void ~QSGNodeVisitor()
extern "C" Q_DECL_EXPORT
void C_ZN14QSGNodeVisitorD2Ev(void *this_) {
  delete (QSGNodeVisitor*)(this_);
}
//  main block end
