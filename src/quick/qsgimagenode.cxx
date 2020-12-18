//  header block begin

// /usr/include/qt/QtQuick/qsgimagenode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgimagenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGImageNode is pure virtual: true true
// QSGImageNode has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGImageNode_t {
  QByteArrayData data[1];
  char stringdata0[15];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGImageNode_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGImageNode_t qt_meta_stringdata_MyQSGImageNode = {
   {
  QT_MOC_LITERAL(0, 0, 14), // "MyQSGImageNode"
  },
  "MyQSGImageNode"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGImageNode[] = {
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
class Q_DECL_EXPORT MyQSGImageNode : public QSGImageNode {
public:
  virtual ~MyQSGImageNode() {}
// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setRect(const QRectF &)
  virtual void setRect(const QRectF & rect)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setRect", &handled, 1, (uint64_t)&rect, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGImageNode::setRect(rect);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [32] QRectF rect()
  virtual QRectF rect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"rect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setSourceRect(const QRectF &)
  virtual void setSourceRect(const QRectF & r)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setSourceRect", &handled, 1, (uint64_t)&r, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGImageNode::setSourceRect(r);
  }
  }

// Public purevirtual virtual Indirect Visibility=Default Availability=Available
// [32] QRectF sourceRect()
  virtual QRectF sourceRect() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"sourceRect", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QRectF){};}
    auto prv = (QRectF*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QRectF
    } else {
    return (QRectF){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setTexture(QSGTexture *)
  virtual void setTexture(QSGTexture * texture)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setTexture", &handled, 1, (uint64_t)texture, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGImageNode::setTexture(texture);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [8] QSGTexture * texture()
  virtual QSGTexture * texture() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"texture", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGTexture *)(irv);
      // Pointer Pointer QSGTexture *
    } else {
    return (QSGTexture *){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setFiltering(QSGTexture::Filtering)
  virtual void setFiltering(QSGTexture::Filtering filtering)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setFiltering", &handled, 1, (uint64_t)filtering, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGImageNode::setFiltering(filtering);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QSGTexture::Filtering filtering()
  virtual QSGTexture::Filtering filtering() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"filtering", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGTexture::Filtering)(int)(irv);
      // Elaborated Enum QSGTexture::Filtering
    } else {
    return (QSGTexture::Filtering){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setMipmapFiltering(QSGTexture::Filtering)
  virtual void setMipmapFiltering(QSGTexture::Filtering filtering)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setMipmapFiltering", &handled, 1, (uint64_t)filtering, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGImageNode::setMipmapFiltering(filtering);
  }
  }

// Public purevirtual virtual Direct Visibility=Default Availability=Available
// [4] QSGTexture::Filtering mipmapFiltering()
  virtual QSGTexture::Filtering mipmapFiltering() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"mipmapFiltering", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGTexture::Filtering)(int)(irv);
      // Elaborated Enum QSGTexture::Filtering
    } else {
    return (QSGTexture::Filtering){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setTextureCoordinatesTransform(QSGImageNode::TextureCoordinatesTransformMode)
  virtual void setTextureCoordinatesTransform(QFlags<QSGImageNode::TextureCoordinatesTransformFlag> mode)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setTextureCoordinatesTransform", &handled, 1, (uint64_t)mode, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGImageNode::setTextureCoordinatesTransform(mode);
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] QSGImageNode::TextureCoordinatesTransformMode textureCoordinatesTransform()
  virtual QSGImageNode::TextureCoordinatesTransformMode textureCoordinatesTransform() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textureCoordinatesTransform", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (QSGImageNode::TextureCoordinatesTransformMode)(int)(irv);
      // Typedef Record QFlags<QSGImageNode::TextureCoordinatesTransformFlag>
    } else {
    return (QSGImageNode::TextureCoordinatesTransformMode){};
  }
  }

// Public purevirtual virtual Ignore Visibility=Default Availability=Available
// [-2] void setOwnsTexture(bool)
  virtual void setOwnsTexture(bool owns)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setOwnsTexture", &handled, 1, (uint64_t)owns, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGImageNode::setOwnsTexture(owns);
  }
  }

// Public purevirtual virtual Extend Visibility=Default Availability=Available
// [1] bool ownsTexture()
  virtual bool ownsTexture() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"ownsTexture", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgimagenode(void* this_) {
  uint64_t fnptrsumval = 0;

// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:51
// [-2] void ~QSGImageNode() 
// (12)qm4182576077 (21)_ZN12QSGImageNodeD2Ev
/*void qm4182576077 (void *this_)*/ {
  delete (QSGImageNode*)(this_);
}
// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:54
// [-2] void setRect(qreal, qreal, qreal, qreal) 
// (10)qm96339267 (30)_ZN12QSGImageNode7setRectEdddd
//static
/*void qm96339267(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGImageNode*)this_)->setRect(x, y, w, h);
   auto xptr = (void (QSGImageNode::*)(double, double, double, double) ) &QSGImageNode::setRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:58
// [-2] void setSourceRect(qreal, qreal, qreal, qreal) 
// (11)qm958092558 (37)_ZN12QSGImageNode13setSourceRectEdddd
//static
/*void qm958092558(double x, double y, double w, double h)*/ {
  double x = *(double*)this_; double y = *(double*)this_; double w = *(double*)this_; double h = *(double*)this_;
  (void) ((QSGImageNode*)this_)->setSourceRect(x, y, w, h);
   auto xptr = (void (QSGImageNode::*)(double, double, double, double) ) &QSGImageNode::setSourceRect;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

  return fnptrsumval;
} // end ensure_inline_symbol_qsgimagenode
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
