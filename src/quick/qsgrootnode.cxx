//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGRootNode is pure virtual: false false
// QSGRootNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGRootNode_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGRootNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGRootNode_t qt_meta_stringdata_MyQSGRootNode = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSGRootNode"
  },
  "MyQSGRootNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGRootNode[] = {
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
class Q_DECL_EXPORT MyQSGRootNode : public QSGRootNode {
public:
  virtual ~MyQSGRootNode() {}
// void QSGRootNode()
MyQSGRootNode() : QSGRootNode() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgrootnode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:297
// [-2] void QSGRootNode() 
// (12)qm3975030646 (20)_ZN11QSGRootNodeC2Ev
/*void* qm3975030646()*/{
  ;
  this_ =  new QSGRootNode();
  this_ =  new MyQSGRootNode();
}


/*void C_ZN11QSGRootNodeD2Ev(void *this_)*/ {
  delete (QSGRootNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgrootnode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
