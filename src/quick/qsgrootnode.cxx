//  header block begin
// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRootNode is pure virtual: false
// QSGRootNode has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGRootNode : public QSGRootNode {
public:
  virtual ~MyQSGRootNode() {}
// void QSGRootNode()
MyQSGRootNode() : QSGRootNode() {}
};

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:302
// [-2] void QSGRootNode()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGRootNodeC2Ev() {
  return  new QSGRootNode();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:303
// [-2] void ~QSGRootNode()
extern "C" Q_DECL_EXPORT
void C_ZN11QSGRootNodeD2Ev(void *this_) {
  delete (QSGRootNode*)(this_);
}
//  main block end
