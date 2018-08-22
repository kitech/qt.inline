//  header block begin
// since 0x050800
// /usr/include/qt/QtQuick/qsgimagenode.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgimagenode.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGImageNode is pure virtual: true
// QSGImageNode has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQSGImageNode : public QSGImageNode {
public:
  virtual ~MyQSGImageNode() {}
// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
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

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:53
// [-2] void setRect(const QRectF &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:55
// [32] QRectF rect()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:57
// [-2] void setSourceRect(const QRectF &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:59
// [32] QRectF sourceRect()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:61
// [-2] void setTexture(QSGTexture *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:62
// [8] QSGTexture * texture()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:64
// [-2] void setFiltering(QSGTexture::Filtering)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:65
// [4] QSGTexture::Filtering filtering()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:67
// [-2] void setMipmapFiltering(QSGTexture::Filtering)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:68
// [4] QSGTexture::Filtering mipmapFiltering()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:79
// [-2] void setTextureCoordinatesTransform(QSGImageNode::TextureCoordinatesTransformMode)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:80
// [4] QSGImageNode::TextureCoordinatesTransformMode textureCoordinatesTransform()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:82
// [-2] void setOwnsTexture(bool)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:83
// [1] bool ownsTexture()
// Public inline virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:51
// [-2] void ~QSGImageNode()
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNodeD2Ev(void *this_) {
  delete (QSGImageNode*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:53
// [-2] void setRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode7setRectERK6QRectF(void *this_, QRectF* rect) {
  ((QSGImageNode*)this_)->setRect(*rect);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:54
// [-2] void setRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode7setRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QSGImageNode*)this_)->setRect(x, y, w, h);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:55
// [32] QRectF rect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSGImageNode4rectEv(void *this_) {
  auto rv = ((QSGImageNode*)this_)->rect();
return new QRectF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:57
// [-2] void setSourceRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode13setSourceRectERK6QRectF(void *this_, QRectF* r) {
  ((QSGImageNode*)this_)->setSourceRect(*r);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:58
// [-2] void setSourceRect(qreal, qreal, qreal, qreal)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode13setSourceRectEdddd(void *this_, qreal x, qreal y, qreal w, qreal h) {
  ((QSGImageNode*)this_)->setSourceRect(x, y, w, h);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:59
// [32] QRectF sourceRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSGImageNode10sourceRectEv(void *this_) {
  auto rv = ((QSGImageNode*)this_)->sourceRect();
return new QRectF(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:61
// [-2] void setTexture(QSGTexture *)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode10setTextureEP10QSGTexture(void *this_, QSGTexture * texture) {
  ((QSGImageNode*)this_)->setTexture(texture);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:62
// [8] QSGTexture * texture()
extern "C" Q_DECL_EXPORT
void* C_ZNK12QSGImageNode7textureEv(void *this_) {
  return (void*)((QSGImageNode*)this_)->texture();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:64
// [-2] void setFiltering(QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode12setFilteringEN10QSGTexture9FilteringE(void *this_, QSGTexture::Filtering filtering) {
  ((QSGImageNode*)this_)->setFiltering(filtering);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:65
// [4] QSGTexture::Filtering filtering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK12QSGImageNode9filteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGImageNode*)this_)->filtering();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:67
// [-2] void setMipmapFiltering(QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode18setMipmapFilteringEN10QSGTexture9FilteringE(void *this_, QSGTexture::Filtering filtering) {
  ((QSGImageNode*)this_)->setMipmapFiltering(filtering);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:68
// [4] QSGTexture::Filtering mipmapFiltering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK12QSGImageNode15mipmapFilteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGImageNode*)this_)->mipmapFiltering();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:79
// [-2] void setTextureCoordinatesTransform(QSGImageNode::TextureCoordinatesTransformMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode30setTextureCoordinatesTransformE6QFlagsINS_31TextureCoordinatesTransformFlagEE(void *this_, QFlags<QSGImageNode::TextureCoordinatesTransformFlag> mode) {
  ((QSGImageNode*)this_)->setTextureCoordinatesTransform(mode);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:80
// [4] QSGImageNode::TextureCoordinatesTransformMode textureCoordinatesTransform()
extern "C" Q_DECL_EXPORT
QSGImageNode::TextureCoordinatesTransformMode* C_ZNK12QSGImageNode27textureCoordinatesTransformEv(void *this_) {
  auto rv = ((QSGImageNode*)this_)->textureCoordinatesTransform();
return new QSGImageNode::TextureCoordinatesTransformMode(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:82
// [-2] void setOwnsTexture(bool)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode14setOwnsTextureEb(void *this_, bool owns) {
  ((QSGImageNode*)this_)->setOwnsTexture(owns);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:83
// [1] bool ownsTexture()
extern "C" Q_DECL_EXPORT
bool C_ZNK12QSGImageNode11ownsTextureEv(void *this_) {
  return (bool)((QSGImageNode*)this_)->ownsTexture();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:85
// [-2] void rebuildGeometry(QSGGeometry *, QSGTexture *, const QRectF &, QRectF, QSGImageNode::TextureCoordinatesTransformMode)
extern "C" Q_DECL_EXPORT
void C_ZN12QSGImageNode15rebuildGeometryEP11QSGGeometryP10QSGTextureRK6QRectFS4_6QFlagsINS_31TextureCoordinatesTransformFlagEE(QSGGeometry * g, QSGTexture * texture, QRectF* rect, QRectF* sourceRect, QFlags<QSGImageNode::TextureCoordinatesTransformFlag> texCoordMode) {
  QSGImageNode::rebuildGeometry(g, texture, *rect, *sourceRect, texCoordMode);
}

//  main block end
