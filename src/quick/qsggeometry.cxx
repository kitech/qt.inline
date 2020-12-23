//  header block begin

// /usr/include/qt/QtQuick/qsggeometry.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsggeometry.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGGeometry is pure virtual: false false
// QSGGeometry has virtual projected: false
//  header block end

//  main block begin


extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qsggeometry(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:146
// [-2] void QSGGeometry(const QSGGeometry::AttributeSet &, int, int, int) 
// (12)qm2625391281 (42)_ZN11QSGGeometryC2ERKNS_12AttributeSetEiii
/*void* qm2625391281(const QSGGeometry::AttributeSet & attribs, int vertexCount, int indexCount, int indexType)*/{
  const QSGGeometry::AttributeSet & attribs = *(const QSGGeometry::AttributeSet *)this_; int vertexCount = *(int*)this_; int indexCount = *(int*)this_; int indexType = *(int*)this_;
  this_ =  new QSGGeometry(attribs, vertexCount, indexCount, indexType);
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:154
// [4] unsigned int drawingMode() const
// (12)qm2838973523 (32)_ZNK11QSGGeometry11drawingModeEv
//static
/*void qm2838973523()*/ {
  ;
  (void) ((QSGGeometry*)this_)->drawingMode();
   auto xptr = (unsigned int (QSGGeometry::*)() const ) &QSGGeometry::drawingMode;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:158
// [4] int vertexCount() const
// (12)qm2897254002 (32)_ZNK11QSGGeometry11vertexCountEv
//static
/*void qm2897254002()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexCount();
   auto xptr = (int (QSGGeometry::*)() const ) &QSGGeometry::vertexCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:160
// [8] void * vertexData() 
// (12)qm2047811878 (30)_ZN11QSGGeometry10vertexDataEv
//static
/*void qm2047811878()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexData();
   auto xptr = (void * (QSGGeometry::*)() ) &QSGGeometry::vertexData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:161
// [8] QSGGeometry::Point2D * vertexDataAsPoint2D() 
// (12)qm3298197770 (39)_ZN11QSGGeometry19vertexDataAsPoint2DEv
//static
/*void qm3298197770()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexDataAsPoint2D();
   auto xptr = (QSGGeometry::Point2D * (QSGGeometry::*)() ) &QSGGeometry::vertexDataAsPoint2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:162
// [8] QSGGeometry::TexturedPoint2D * vertexDataAsTexturedPoint2D() 
// (12)qm2861666189 (47)_ZN11QSGGeometry27vertexDataAsTexturedPoint2DEv
//static
/*void qm2861666189()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexDataAsTexturedPoint2D();
   auto xptr = (QSGGeometry::TexturedPoint2D * (QSGGeometry::*)() ) &QSGGeometry::vertexDataAsTexturedPoint2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:163
// [8] QSGGeometry::ColoredPoint2D * vertexDataAsColoredPoint2D() 
// (12)qm2286231786 (46)_ZN11QSGGeometry26vertexDataAsColoredPoint2DEv
//static
/*void qm2286231786()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexDataAsColoredPoint2D();
   auto xptr = (QSGGeometry::ColoredPoint2D * (QSGGeometry::*)() ) &QSGGeometry::vertexDataAsColoredPoint2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:165
// [8] const void * vertexData() const
// (12)qm3066778587 (31)_ZNK11QSGGeometry10vertexDataEv
//static
/*void qm3066778587()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexData();
   auto xptr = (const void * (QSGGeometry::*)() const ) &QSGGeometry::vertexData;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:166
// [8] const QSGGeometry::Point2D * vertexDataAsPoint2D() const
// (11)qm321017469 (40)_ZNK11QSGGeometry19vertexDataAsPoint2DEv
//static
/*void qm321017469()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexDataAsPoint2D();
   auto xptr = (const QSGGeometry::Point2D * (QSGGeometry::*)() const ) &QSGGeometry::vertexDataAsPoint2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:167
// [8] const QSGGeometry::TexturedPoint2D * vertexDataAsTexturedPoint2D() const
// (12)qm3639531749 (48)_ZNK11QSGGeometry27vertexDataAsTexturedPoint2DEv
//static
/*void qm3639531749()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexDataAsTexturedPoint2D();
   auto xptr = (const QSGGeometry::TexturedPoint2D * (QSGGeometry::*)() const ) &QSGGeometry::vertexDataAsTexturedPoint2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:168
// [8] const QSGGeometry::ColoredPoint2D * vertexDataAsColoredPoint2D() const
// (12)qm4034252076 (47)_ZNK11QSGGeometry26vertexDataAsColoredPoint2DEv
//static
/*void qm4034252076()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexDataAsColoredPoint2D();
   auto xptr = (const QSGGeometry::ColoredPoint2D * (QSGGeometry::*)() const ) &QSGGeometry::vertexDataAsColoredPoint2D;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:170
// [4] int indexType() const
// (11)qm606521313 (29)_ZNK11QSGGeometry9indexTypeEv
//static
/*void qm606521313()*/ {
  ;
  (void) ((QSGGeometry*)this_)->indexType();
   auto xptr = (int (QSGGeometry::*)() const ) &QSGGeometry::indexType;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:172
// [4] int indexCount() const
// (12)qm3941975562 (31)_ZNK11QSGGeometry10indexCountEv
//static
/*void qm3941975562()*/ {
  ;
  (void) ((QSGGeometry*)this_)->indexCount();
   auto xptr = (int (QSGGeometry::*)() const ) &QSGGeometry::indexCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:175
// [8] uint * indexDataAsUInt() 
// (12)qm3557951163 (35)_ZN11QSGGeometry15indexDataAsUIntEv
//static
/*void qm3557951163()*/ {
  ;
  (void) ((QSGGeometry*)this_)->indexDataAsUInt();
   auto xptr = (unsigned int * (QSGGeometry::*)() ) &QSGGeometry::indexDataAsUInt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:176
// [8] quint16 * indexDataAsUShort() 
// (12)qm1033019158 (37)_ZN11QSGGeometry17indexDataAsUShortEv
//static
/*void qm1033019158()*/ {
  ;
  (void) ((QSGGeometry*)this_)->indexDataAsUShort();
   auto xptr = (unsigned short * (QSGGeometry::*)() ) &QSGGeometry::indexDataAsUShort;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:178
// [4] int sizeOfIndex() const
// (12)qm1415775467 (32)_ZNK11QSGGeometry11sizeOfIndexEv
//static
/*void qm1415775467()*/ {
  ;
  (void) ((QSGGeometry*)this_)->sizeOfIndex();
   auto xptr = (int (QSGGeometry::*)() const ) &QSGGeometry::sizeOfIndex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:181
// [8] const uint * indexDataAsUInt() const
// (12)qm1416191134 (36)_ZNK11QSGGeometry15indexDataAsUIntEv
//static
/*void qm1416191134()*/ {
  ;
  (void) ((QSGGeometry*)this_)->indexDataAsUInt();
   auto xptr = (const unsigned int * (QSGGeometry::*)() const ) &QSGGeometry::indexDataAsUInt;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:182
// [8] const quint16 * indexDataAsUShort() const
// (12)qm1591703392 (38)_ZNK11QSGGeometry17indexDataAsUShortEv
//static
/*void qm1591703392()*/ {
  ;
  (void) ((QSGGeometry*)this_)->indexDataAsUShort();
   auto xptr = (const unsigned short * (QSGGeometry::*)() const ) &QSGGeometry::indexDataAsUShort;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:184
// [4] int attributeCount() const
// (12)qm3833007418 (35)_ZNK11QSGGeometry14attributeCountEv
//static
/*void qm3833007418()*/ {
  ;
  (void) ((QSGGeometry*)this_)->attributeCount();
   auto xptr = (int (QSGGeometry::*)() const ) &QSGGeometry::attributeCount;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:185
// [8] const QSGGeometry::Attribute * attributes() const
// (12)qm3675723967 (31)_ZNK11QSGGeometry10attributesEv
//static
/*void qm3675723967()*/ {
  ;
  (void) ((QSGGeometry*)this_)->attributes();
   auto xptr = (const QSGGeometry::Attribute * (QSGGeometry::*)() const ) &QSGGeometry::attributes;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:186
// [4] int sizeOfVertex() const
// (11)qm414039409 (33)_ZNK11QSGGeometry12sizeOfVertexEv
//static
/*void qm414039409()*/ {
  ;
  (void) ((QSGGeometry*)this_)->sizeOfVertex();
   auto xptr = (int (QSGGeometry::*)() const ) &QSGGeometry::sizeOfVertex;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:193
// [4] QSGGeometry::DataPattern indexDataPattern() const
// (11)qm420646641 (37)_ZNK11QSGGeometry16indexDataPatternEv
//static
/*void qm420646641()*/ {
  ;
  (void) ((QSGGeometry*)this_)->indexDataPattern();
   auto xptr = (QSGGeometry::DataPattern (QSGGeometry::*)() const ) &QSGGeometry::indexDataPattern;
   fnptrsumval += (uint64_t)(void*&)xptr;
}

// Public inline Direct Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:196
// [4] QSGGeometry::DataPattern vertexDataPattern() const
// (11)qm122814765 (38)_ZNK11QSGGeometry17vertexDataPatternEv
//static
/*void qm122814765()*/ {
  ;
  (void) ((QSGGeometry*)this_)->vertexDataPattern();
   auto xptr = (QSGGeometry::DataPattern (QSGGeometry::*)() const ) &QSGGeometry::vertexDataPattern;
   fnptrsumval += (uint64_t)(void*&)xptr;
}


/*void C_ZN11QSGGeometryD2Ev(void *this_)*/ {
  delete (QSGGeometry*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qsggeometry
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
