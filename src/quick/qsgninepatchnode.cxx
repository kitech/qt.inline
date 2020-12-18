//  header block begin

// /usr/include/qt/QtQuick/qsgninepatchnode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgninepatchnode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGNinePatchNode is pure virtual: true true
// QSGNinePatchNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGNinePatchNode_t {
  QByteArrayData data[1];
  char stringdata0[19];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGNinePatchNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGNinePatchNode_t qt_meta_stringdata_MyQSGNinePatchNode = {
   {
  QT_MOC_LITERAL(0, 0, 18), // "MyQSGNinePatchNode"
  },
  "MyQSGNinePatchNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGNinePatchNode[] = {
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
class Q_DECL_EXPORT MyQSGNinePatchNode : public QSGNinePatchNode {
public:
  virtual ~MyQSGNinePatchNode() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setTexture(QSGTexture *)
  virtual void setTexture(QSGTexture * texture)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setTexture", &handled, 1, (uint64_t)texture, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGNinePatchNode::setTexture(texture);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setBounds(const QRectF &)
  virtual void setBounds(const QRectF & bounds)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setBounds", &handled, 1, (uint64_t)&bounds, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGNinePatchNode::setBounds(bounds);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setDevicePixelRatio(qreal)
  virtual void setDevicePixelRatio(qreal ratio)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setDevicePixelRatio", &handled, 1, (uint64_t)&ratio, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGNinePatchNode::setDevicePixelRatio(ratio);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setPadding(qreal, qreal, qreal, qreal)
  virtual void setPadding(qreal left, qreal top, qreal right, qreal bottom)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setPadding", &handled, 4, (uint64_t)&left, (uint64_t)&top, (uint64_t)&right, (uint64_t)&bottom, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGNinePatchNode::setPadding(left, top, right, bottom);
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void update()
  virtual void update()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"update", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGNinePatchNode::update();
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgninepatchnode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgninepatchnode.h:51
// [-2] void ~QSGNinePatchNode() 
// (12)qm2852705574 (25)_ZN16QSGNinePatchNodeD2Ev
/*void qm2852705574 (void *this_)*/ {
  delete (QSGNinePatchNode*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgninepatchnode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
