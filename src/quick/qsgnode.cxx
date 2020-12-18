//  header block begin

// /usr/include/qt/QtQuick/qsgnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGNode is pure virtual: false false
// QSGNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGNode_t {
  QByteArrayData data[1];
  char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGNode_t qt_meta_stringdata_MyQSGNode = {
   {
  QT_MOC_LITERAL(0, 0, 9), // "MyQSGNode"
  },
  "MyQSGNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGNode[] = {
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
class Q_DECL_EXPORT MyQSGNode : public QSGNode {
public:
  virtual ~MyQSGNode() {}
// void QSGNode()
MyQSGNode() : QSGNode() {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgnode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:128
// [8] QSGNode * parent() const
// (12)qm3612625457 (21)_ZNK7QSGNode6parentEv
//static
/*void qm3612625457()*/ {
  ;
  (void) ((QSGNode*)this_)->parent();
   auto xptr = (QSGNode * (QSGNode::*)() const ) &QSGNode::parent;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:140
// [8] QSGNode * firstChild() const
// (12)qm1989976825 (26)_ZNK7QSGNode10firstChildEv
//static
/*void qm1989976825()*/ {
  ;
  (void) ((QSGNode*)this_)->firstChild();
   auto xptr = (QSGNode * (QSGNode::*)() const ) &QSGNode::firstChild;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:141
// [8] QSGNode * lastChild() const
// (12)qm1463249788 (24)_ZNK7QSGNode9lastChildEv
//static
/*void qm1463249788()*/ {
  ;
  (void) ((QSGNode*)this_)->lastChild();
   auto xptr = (QSGNode * (QSGNode::*)() const ) &QSGNode::lastChild;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:142
// [8] QSGNode * nextSibling() const
// (12)qm2137134682 (27)_ZNK7QSGNode11nextSiblingEv
//static
/*void qm2137134682()*/ {
  ;
  (void) ((QSGNode*)this_)->nextSibling();
   auto xptr = (QSGNode * (QSGNode::*)() const ) &QSGNode::nextSibling;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:143
// [8] QSGNode * previousSibling() const
// (11)qm363134015 (31)_ZNK7QSGNode15previousSiblingEv
//static
/*void qm363134015()*/ {
  ;
  (void) ((QSGNode*)this_)->previousSibling();
   auto xptr = (QSGNode * (QSGNode::*)() const ) &QSGNode::previousSibling;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:145
// [4] QSGNode::NodeType type() const
// (11)qm552090084 (19)_ZNK7QSGNode4typeEv
//static
/*void qm552090084()*/ {
  ;
  (void) ((QSGNode*)this_)->type();
   auto xptr = (QSGNode::NodeType (QSGNode::*)() const ) &QSGNode::type;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:153
// [4] QSGNode::Flags flags() const
// (12)qm2161598758 (20)_ZNK7QSGNode5flagsEv
//static
/*void qm2161598758()*/ {
  ;
  (void) ((QSGNode*)this_)->flags();
   auto xptr = (QFlags<QSGNode::Flag> (QSGNode::*)() const ) &QSGNode::flags;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline virtual Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:157
// [-2] void preprocess() 
// (12)qm3807514627 (25)_ZN7QSGNode10preprocessEv
//static
/*void qm3807514627()*/ {
  ;
  (void) ((QSGNode*)this_)->preprocess();
   auto xptr = (void (QSGNode::*)() ) &QSGNode::preprocess;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN7QSGNodeD2Ev(void *this_)*/ {
  delete (QSGNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgnode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
