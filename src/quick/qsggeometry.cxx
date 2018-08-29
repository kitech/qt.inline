//  header block begin
// /usr/include/qt/QtQuick/qsggeometry.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsggeometry.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGGeometry is pure virtual: false
// QSGGeometry has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGGeometry_t {
  QByteArrayData data[1];
  char stringdata0[14];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGGeometry_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGGeometry_t qt_meta_stringdata_MyQSGGeometry = {
   {
  QT_MOC_LITERAL(0, 0, 13), // "MyQSGGeometry"
  },
  "MyQSGGeometry"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGGeometry[] = {
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
class Q_DECL_EXPORT MyQSGGeometry : public QSGGeometry {
public:
  virtual ~MyQSGGeometry() {}
// void QSGGeometry(const QSGGeometry::AttributeSet &, int, int, int)
MyQSGGeometry(const QSGGeometry::AttributeSet & attribs, int vertexCount, int indexCount, int indexType) : QSGGeometry(attribs, vertexCount, indexCount, indexType) {}
};
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:138
// [16] const QSGGeometry::AttributeSet & defaultAttributes_Point2D()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry25defaultAttributes_Point2DEv() {
  auto& rv = QSGGeometry::defaultAttributes_Point2D();
return new QSGGeometry::AttributeSet(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:139
// [16] const QSGGeometry::AttributeSet & defaultAttributes_TexturedPoint2D()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry33defaultAttributes_TexturedPoint2DEv() {
  auto& rv = QSGGeometry::defaultAttributes_TexturedPoint2D();
return new QSGGeometry::AttributeSet(rv);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:140
// [16] const QSGGeometry::AttributeSet & defaultAttributes_ColoredPoint2D()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry32defaultAttributes_ColoredPoint2DEv() {
  auto& rv = QSGGeometry::defaultAttributes_ColoredPoint2D();
return new QSGGeometry::AttributeSet(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:142
// [-2] void QSGGeometry(const QSGGeometry::AttributeSet &, int, int, int)
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometryC2ERKNS_12AttributeSetEiii(const QSGGeometry::AttributeSet & attribs, int vertexCount, int indexCount, int indexType) {
  return  new QSGGeometry(attribs, vertexCount, indexCount, indexType);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:146
// [-2] void ~QSGGeometry()
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometryD2Ev(void *this_) {
  delete (QSGGeometry*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:149
// [-2] void setDrawingMode(unsigned int)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry14setDrawingModeEj(void *this_, unsigned int mode) {
  ((QSGGeometry*)this_)->setDrawingMode(mode);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:150
// [4] unsigned int drawingMode()
extern "C" Q_DECL_EXPORT
unsigned int C_ZNK11QSGGeometry11drawingModeEv(void *this_) {
  return (unsigned int)((QSGGeometry*)this_)->drawingMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:152
// [-2] void allocate(int, int)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry8allocateEii(void *this_, int vertexCount, int indexCount) {
  ((QSGGeometry*)this_)->allocate(vertexCount, indexCount);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:154
// [4] int vertexCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QSGGeometry11vertexCountEv(void *this_) {
  return (int)((QSGGeometry*)this_)->vertexCount();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:156
// [8] void * vertexData()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry10vertexDataEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->vertexData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:157
// [8] QSGGeometry::Point2D * vertexDataAsPoint2D()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry19vertexDataAsPoint2DEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->vertexDataAsPoint2D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:158
// [8] QSGGeometry::TexturedPoint2D * vertexDataAsTexturedPoint2D()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry27vertexDataAsTexturedPoint2DEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->vertexDataAsTexturedPoint2D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:159
// [8] QSGGeometry::ColoredPoint2D * vertexDataAsColoredPoint2D()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry26vertexDataAsColoredPoint2DEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->vertexDataAsColoredPoint2D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:161
// [8] const void * vertexData()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGGeometry10vertexDataEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->vertexData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:162
// [8] const QSGGeometry::Point2D * vertexDataAsPoint2D()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGGeometry19vertexDataAsPoint2DEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->vertexDataAsPoint2D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:163
// [8] const QSGGeometry::TexturedPoint2D * vertexDataAsTexturedPoint2D()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGGeometry27vertexDataAsTexturedPoint2DEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->vertexDataAsTexturedPoint2D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:164
// [8] const QSGGeometry::ColoredPoint2D * vertexDataAsColoredPoint2D()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGGeometry26vertexDataAsColoredPoint2DEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->vertexDataAsColoredPoint2D();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:166
// [4] int indexType()
extern "C" Q_DECL_EXPORT
int C_ZNK11QSGGeometry9indexTypeEv(void *this_) {
  return (int)((QSGGeometry*)this_)->indexType();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:168
// [4] int indexCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QSGGeometry10indexCountEv(void *this_) {
  return (int)((QSGGeometry*)this_)->indexCount();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:170
// [8] void * indexData()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry9indexDataEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->indexData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:171
// [8] uint * indexDataAsUInt()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry15indexDataAsUIntEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->indexDataAsUInt();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:172
// [8] quint16 * indexDataAsUShort()
extern "C" Q_DECL_EXPORT
void* C_ZN11QSGGeometry17indexDataAsUShortEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->indexDataAsUShort();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:174
// [4] int sizeOfIndex()
extern "C" Q_DECL_EXPORT
int C_ZNK11QSGGeometry11sizeOfIndexEv(void *this_) {
  return (int)((QSGGeometry*)this_)->sizeOfIndex();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:176
// [8] const void * indexData()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGGeometry9indexDataEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->indexData();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:177
// [8] const uint * indexDataAsUInt()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGGeometry15indexDataAsUIntEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->indexDataAsUInt();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:178
// [8] const quint16 * indexDataAsUShort()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGGeometry17indexDataAsUShortEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->indexDataAsUShort();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:180
// [4] int attributeCount()
extern "C" Q_DECL_EXPORT
int C_ZNK11QSGGeometry14attributeCountEv(void *this_) {
  return (int)((QSGGeometry*)this_)->attributeCount();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:181
// [8] const QSGGeometry::Attribute * attributes()
extern "C" Q_DECL_EXPORT
void* C_ZNK11QSGGeometry10attributesEv(void *this_) {
  return (void*)((QSGGeometry*)this_)->attributes();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:182
// [4] int sizeOfVertex()
extern "C" Q_DECL_EXPORT
int C_ZNK11QSGGeometry12sizeOfVertexEv(void *this_) {
  return (int)((QSGGeometry*)this_)->sizeOfVertex();
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:184
// [-2] void updateRectGeometry(QSGGeometry *, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry18updateRectGeometryEPS_RK6QRectF(QSGGeometry * g, QRectF* rect) {
  QSGGeometry::updateRectGeometry(g, *rect);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:185
// [-2] void updateTexturedRectGeometry(QSGGeometry *, const QRectF &, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry26updateTexturedRectGeometryEPS_RK6QRectFS3_(QSGGeometry * g, QRectF* rect, QRectF* sourceRect) {
  QSGGeometry::updateTexturedRectGeometry(g, *rect, *sourceRect);
}

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:186
// [-2] void updateColoredRectGeometry(QSGGeometry *, const QRectF &)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry25updateColoredRectGeometryEPS_RK6QRectF(QSGGeometry * g, QRectF* rect) {
  QSGGeometry::updateColoredRectGeometry(g, *rect);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:188
// [-2] void setIndexDataPattern(QSGGeometry::DataPattern)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry19setIndexDataPatternENS_11DataPatternE(void *this_, QSGGeometry::DataPattern p) {
  ((QSGGeometry*)this_)->setIndexDataPattern(p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:189
// [4] QSGGeometry::DataPattern indexDataPattern()
extern "C" Q_DECL_EXPORT
QSGGeometry::DataPattern C_ZNK11QSGGeometry16indexDataPatternEv(void *this_) {
  return (QSGGeometry::DataPattern)((QSGGeometry*)this_)->indexDataPattern();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:191
// [-2] void setVertexDataPattern(QSGGeometry::DataPattern)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry20setVertexDataPatternENS_11DataPatternE(void *this_, QSGGeometry::DataPattern p) {
  ((QSGGeometry*)this_)->setVertexDataPattern(p);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:192
// [4] QSGGeometry::DataPattern vertexDataPattern()
extern "C" Q_DECL_EXPORT
QSGGeometry::DataPattern C_ZNK11QSGGeometry17vertexDataPatternEv(void *this_) {
  return (QSGGeometry::DataPattern)((QSGGeometry*)this_)->vertexDataPattern();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:194
// [-2] void markIndexDataDirty()
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry18markIndexDataDirtyEv(void *this_) {
  ((QSGGeometry*)this_)->markIndexDataDirty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:195
// [-2] void markVertexDataDirty()
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry19markVertexDataDirtyEv(void *this_) {
  ((QSGGeometry*)this_)->markVertexDataDirty();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:197
// [4] float lineWidth()
extern "C" Q_DECL_EXPORT
float C_ZNK11QSGGeometry9lineWidthEv(void *this_) {
  return (float)((QSGGeometry*)this_)->lineWidth();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsggeometry.h:198
// [-2] void setLineWidth(float)
extern "C" Q_DECL_EXPORT
void C_ZN11QSGGeometry12setLineWidthEf(void *this_, float w) {
  ((QSGGeometry*)this_)->setLineWidth(w);
}

//  main block end
