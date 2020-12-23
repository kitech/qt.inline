//  header block begin

// /usr/include/qt/QtQuick/qsgtexturematerial.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgtexturematerial.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGOpaqueTextureMaterial is pure virtual: false false
// QSGOpaqueTextureMaterial has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsgopaquetexturematerial(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:51
// [-2] void QSGOpaqueTextureMaterial() 
// (12)qm3048450109 (33)_ZN24QSGOpaqueTextureMaterialC2Ev
/*void* qm3048450109()*/{
  ;
  this_ =  new QSGOpaqueTextureMaterial();
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:58
// [8] QSGTexture * texture() const
// (12)qm3006727142 (40)_ZNK24QSGOpaqueTextureMaterial7textureEv
//static
/*void qm3006727142()*/ {
  ;
  (void) ((QSGOpaqueTextureMaterial*)this_)->texture();
   auto xptr = (QSGTexture * (QSGOpaqueTextureMaterial::*)() const ) &QSGOpaqueTextureMaterial::texture;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:60
// [-2] void setMipmapFiltering(QSGTexture::Filtering) 
// (12)qm2066178490 (74)_ZN24QSGOpaqueTextureMaterial18setMipmapFilteringEN10QSGTexture9FilteringE
//static
/*void qm2066178490(QSGTexture::Filtering filteringType)*/ {
  QSGTexture::Filtering filteringType = *(QSGTexture::Filtering*)this_;
  (void) ((QSGOpaqueTextureMaterial*)this_)->setMipmapFiltering(filteringType);
   auto xptr = (void (QSGOpaqueTextureMaterial::*)(QSGTexture::Filtering) ) &QSGOpaqueTextureMaterial::setMipmapFiltering;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:61
// [4] QSGTexture::Filtering mipmapFiltering() const
// (12)qm2160628287 (49)_ZNK24QSGOpaqueTextureMaterial15mipmapFilteringEv
//static
/*void qm2160628287()*/ {
  ;
  (void) ((QSGOpaqueTextureMaterial*)this_)->mipmapFiltering();
   auto xptr = (QSGTexture::Filtering (QSGOpaqueTextureMaterial::*)() const ) &QSGOpaqueTextureMaterial::mipmapFiltering;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:63
// [-2] void setFiltering(QSGTexture::Filtering) 
// (11)qm515192748 (68)_ZN24QSGOpaqueTextureMaterial12setFilteringEN10QSGTexture9FilteringE
//static
/*void qm515192748(QSGTexture::Filtering filteringType)*/ {
  QSGTexture::Filtering filteringType = *(QSGTexture::Filtering*)this_;
  (void) ((QSGOpaqueTextureMaterial*)this_)->setFiltering(filteringType);
   auto xptr = (void (QSGOpaqueTextureMaterial::*)(QSGTexture::Filtering) ) &QSGOpaqueTextureMaterial::setFiltering;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:64
// [4] QSGTexture::Filtering filtering() const
// (12)qm3638429185 (42)_ZNK24QSGOpaqueTextureMaterial9filteringEv
//static
/*void qm3638429185()*/ {
  ;
  (void) ((QSGOpaqueTextureMaterial*)this_)->filtering();
   auto xptr = (QSGTexture::Filtering (QSGOpaqueTextureMaterial::*)() const ) &QSGOpaqueTextureMaterial::filtering;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:66
// [-2] void setHorizontalWrapMode(QSGTexture::WrapMode) 
// (12)qm2396063878 (76)_ZN24QSGOpaqueTextureMaterial21setHorizontalWrapModeEN10QSGTexture8WrapModeE
//static
/*void qm2396063878(QSGTexture::WrapMode mode)*/ {
  QSGTexture::WrapMode mode = *(QSGTexture::WrapMode*)this_;
  (void) ((QSGOpaqueTextureMaterial*)this_)->setHorizontalWrapMode(mode);
   auto xptr = (void (QSGOpaqueTextureMaterial::*)(QSGTexture::WrapMode) ) &QSGOpaqueTextureMaterial::setHorizontalWrapMode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:67
// [4] QSGTexture::WrapMode horizontalWrapMode() const
// (12)qm1616858029 (52)_ZNK24QSGOpaqueTextureMaterial18horizontalWrapModeEv
//static
/*void qm1616858029()*/ {
  ;
  (void) ((QSGOpaqueTextureMaterial*)this_)->horizontalWrapMode();
   auto xptr = (QSGTexture::WrapMode (QSGOpaqueTextureMaterial::*)() const ) &QSGOpaqueTextureMaterial::horizontalWrapMode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:69
// [-2] void setVerticalWrapMode(QSGTexture::WrapMode) 
// (12)qm1033113384 (74)_ZN24QSGOpaqueTextureMaterial19setVerticalWrapModeEN10QSGTexture8WrapModeE
//static
/*void qm1033113384(QSGTexture::WrapMode mode)*/ {
  QSGTexture::WrapMode mode = *(QSGTexture::WrapMode*)this_;
  (void) ((QSGOpaqueTextureMaterial*)this_)->setVerticalWrapMode(mode);
   auto xptr = (void (QSGOpaqueTextureMaterial::*)(QSGTexture::WrapMode) ) &QSGOpaqueTextureMaterial::setVerticalWrapMode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:70
// [4] QSGTexture::WrapMode verticalWrapMode() const
// (11)qm628098505 (50)_ZNK24QSGOpaqueTextureMaterial16verticalWrapModeEv
//static
/*void qm628098505()*/ {
  ;
  (void) ((QSGOpaqueTextureMaterial*)this_)->verticalWrapMode();
   auto xptr = (QSGTexture::WrapMode (QSGOpaqueTextureMaterial::*)() const ) &QSGOpaqueTextureMaterial::verticalWrapMode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Ignore Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:72
// [-2] void setAnisotropyLevel(QSGTexture::AnisotropyLevel) 
// (12)qm4075438776 (81)_ZN24QSGOpaqueTextureMaterial18setAnisotropyLevelEN10QSGTexture15AnisotropyLevelE
//static
/*void qm4075438776(QSGTexture::AnisotropyLevel level)*/ {
  QSGTexture::AnisotropyLevel level = *(QSGTexture::AnisotropyLevel*)this_;
  (void) ((QSGOpaqueTextureMaterial*)this_)->setAnisotropyLevel(level);
   auto xptr = (void (QSGOpaqueTextureMaterial::*)(QSGTexture::AnisotropyLevel) ) &QSGOpaqueTextureMaterial::setAnisotropyLevel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexturematerial.h:73
// [4] QSGTexture::AnisotropyLevel anisotropyLevel() const
// (12)qm3082690218 (49)_ZNK24QSGOpaqueTextureMaterial15anisotropyLevelEv
//static
/*void qm3082690218()*/ {
  ;
  (void) ((QSGOpaqueTextureMaterial*)this_)->anisotropyLevel();
   auto xptr = (QSGTexture::AnisotropyLevel (QSGOpaqueTextureMaterial::*)() const ) &QSGOpaqueTextureMaterial::anisotropyLevel;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN24QSGOpaqueTextureMaterialD2Ev(void *this_)*/ {
  delete (QSGOpaqueTextureMaterial*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsgopaquetexturematerial
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
