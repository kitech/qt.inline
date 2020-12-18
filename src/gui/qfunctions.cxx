
#include <QtCore>
#include <QtGui>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_gui(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:247
// [16] const QVector4D operator+(const QVector4D &, const QVector4D &) 
// (12)qm1988950495 (19)_ZplRK9QVector4DS1_
/*void qm1988950495_49(const QVector4D & v1, const QVector4D & v2)*/ {
  const QVector4D & v1 = *(const QVector4D *)this_; const QVector4D & v2 = *(const QVector4D *)this_;
  (void) operator+(v1, v2);
  auto xptr = (const QVector4D (*)(QVector4D const&, QVector4D const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:247
// [12] const QVector3D operator+(const QVector3D &, const QVector3D &) 
// (12)qm3299616207 (19)_ZplRK9QVector3DS1_
/*void qm3299616207_50(const QVector3D & v1, const QVector3D & v2)*/ {
  const QVector3D & v1 = *(const QVector3D *)this_; const QVector3D & v2 = *(const QVector3D *)this_;
  (void) operator+(v1, v2);
  auto xptr = (const QVector3D (*)(QVector3D const&, QVector3D const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:222
// [8] const QVector2D operator+(const QVector2D &, const QVector2D &) 
// (12)qm4190899327 (19)_ZplRK9QVector2DS1_
/*void qm4190899327_51(const QVector2D & v1, const QVector2D & v2)*/ {
  const QVector2D & v1 = *(const QVector2D *)this_; const QVector2D & v2 = *(const QVector2D *)this_;
  (void) operator+(v1, v2);
  auto xptr = (const QVector2D (*)(QVector2D const&, QVector2D const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:294
// [16] const QQuaternion operator+(const QQuaternion &, const QQuaternion &) 
// (12)qm1572208722 (22)_ZplRK11QQuaternionS1_
/*void qm1572208722_52(const QQuaternion & q1, const QQuaternion & q2)*/ {
  const QQuaternion & q1 = *(const QQuaternion *)this_; const QQuaternion & q2 = *(const QQuaternion *)this_;
  (void) operator+(q1, q2);
  auto xptr = (const QQuaternion (*)(QQuaternion const&, QQuaternion const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:415
// [88] QTransform operator+(const QTransform &, qreal) 
// (12)qm2027103235 (19)_ZplRK10QTransformd
/*void qm2027103235_53(const QTransform & a, double n)*/ {
  const QTransform & a = *(const QTransform *)this_; double n = *(double*)this_;
  (void) operator+(a, n);
  auto xptr = (QTransform (*)(QTransform const&, double) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:592
// [68] QMatrix4x4 operator+(const QMatrix4x4 &, const QMatrix4x4 &) 
// (11)qm669679967 (21)_ZplRK10QMatrix4x4S1_
/*void qm669679967_54(const QMatrix4x4 & m1, const QMatrix4x4 & m2)*/ {
  const QMatrix4x4 & m1 = *(const QMatrix4x4 *)this_; const QMatrix4x4 & m2 = *(const QMatrix4x4 *)this_;
  (void) operator+(m1, m2);
  auto xptr = (QMatrix4x4 (*)(QMatrix4x4 const&, QMatrix4x4 const&) ) &operator+;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:338
// [4] QIncompatibleFlag operator|(QTextItem::RenderFlags::enum_type, int) 
// (11)qm838004330 (29)_ZorN9QTextItem10RenderFlagEi
/*void qm838004330_139(QTextItem::RenderFlag f1, int f2)*/ {
  QTextItem::RenderFlag f1 = *(QTextItem::RenderFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTextItem::RenderFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:338
// [4] QFlags<QTextItem::RenderFlags::enum_type> operator|(QTextItem::RenderFlags::enum_type, QTextItem::RenderFlags::enum_type) 
// (12)qm2484565391 (31)_ZorN9QTextItem10RenderFlagES0_
/*void qm2484565391_140(QTextItem::RenderFlag f1, QTextItem::RenderFlag f2)*/ {
  QTextItem::RenderFlag f1 = *(QTextItem::RenderFlag*)this_; QTextItem::RenderFlag f2 = *(QTextItem::RenderFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextItem::RenderFlag> (*)(QTextItem::RenderFlag, QTextItem::RenderFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:338
// [4] QFlags<QTextItem::RenderFlags::enum_type> operator|(QTextItem::RenderFlags::enum_type, QFlags<QTextItem::RenderFlags::enum_type>) 
// (12)qm2480873186 (40)_ZorN9QTextItem10RenderFlagE6QFlagsIS0_E
/*void qm2480873186_141(QTextItem::RenderFlag f1, QFlags<QTextItem::RenderFlag> f2)*/ {
  QTextItem::RenderFlag f1 = *(QTextItem::RenderFlag*)this_; QFlags<QTextItem::RenderFlag> f2 = *(QFlags<QTextItem::RenderFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextItem::RenderFlag> (*)(QTextItem::RenderFlag, QFlags<QTextItem::RenderFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:157
// [4] QIncompatibleFlag operator|(QRawFont::LayoutFlags::enum_type, int) 
// (12)qm2407260205 (28)_ZorN8QRawFont10LayoutFlagEi
/*void qm2407260205_142(QRawFont::LayoutFlag f1, int f2)*/ {
  QRawFont::LayoutFlag f1 = *(QRawFont::LayoutFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QRawFont::LayoutFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:157
// [4] QFlags<QRawFont::LayoutFlags::enum_type> operator|(QRawFont::LayoutFlags::enum_type, QRawFont::LayoutFlags::enum_type) 
// (12)qm3432464323 (30)_ZorN8QRawFont10LayoutFlagES0_
/*void qm3432464323_143(QRawFont::LayoutFlag f1, QRawFont::LayoutFlag f2)*/ {
  QRawFont::LayoutFlag f1 = *(QRawFont::LayoutFlag*)this_; QRawFont::LayoutFlag f2 = *(QRawFont::LayoutFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QRawFont::LayoutFlag> (*)(QRawFont::LayoutFlag, QRawFont::LayoutFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:157
// [4] QFlags<QRawFont::LayoutFlags::enum_type> operator|(QRawFont::LayoutFlags::enum_type, QFlags<QRawFont::LayoutFlags::enum_type>) 
// (12)qm2079281340 (39)_ZorN8QRawFont10LayoutFlagE6QFlagsIS0_E
/*void qm2079281340_144(QRawFont::LayoutFlag f1, QFlags<QRawFont::LayoutFlag> f2)*/ {
  QRawFont::LayoutFlag f1 = *(QRawFont::LayoutFlag*)this_; QFlags<QRawFont::LayoutFlag> f2 = *(QFlags<QRawFont::LayoutFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QRawFont::LayoutFlag> (*)(QRawFont::LayoutFlag, QFlags<QRawFont::LayoutFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:524
// [4] QIncompatibleFlag operator|(QPainter::RenderHints::enum_type, int) 
// (12)qm3308783258 (28)_ZorN8QPainter10RenderHintEi
/*void qm3308783258_145(QPainter::RenderHint f1, int f2)*/ {
  QPainter::RenderHint f1 = *(QPainter::RenderHint*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QPainter::RenderHint, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:524
// [4] QFlags<QPainter::RenderHints::enum_type> operator|(QPainter::RenderHints::enum_type, QPainter::RenderHints::enum_type) 
// (11)qm779750066 (30)_ZorN8QPainter10RenderHintES0_
/*void qm779750066_146(QPainter::RenderHint f1, QPainter::RenderHint f2)*/ {
  QPainter::RenderHint f1 = *(QPainter::RenderHint*)this_; QPainter::RenderHint f2 = *(QPainter::RenderHint*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QPainter::RenderHint> (*)(QPainter::RenderHint, QPainter::RenderHint) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainter.h:524
// [4] QFlags<QPainter::RenderHints::enum_type> operator|(QPainter::RenderHints::enum_type, QFlags<QPainter::RenderHints::enum_type>) 
// (12)qm1759618925 (39)_ZorN8QPainter10RenderHintE6QFlagsIS0_E
/*void qm1759618925_147(QPainter::RenderHint f1, QFlags<QPainter::RenderHint> f2)*/ {
  QPainter::RenderHint f1 = *(QPainter::RenderHint*)this_; QFlags<QPainter::RenderHint> f2 = *(QFlags<QPainter::RenderHint>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QPainter::RenderHint> (*)(QPainter::RenderHint, QFlags<QPainter::RenderHint>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:145
// [4] QIncompatibleFlag operator|(QOpenGLDebugMessage::Severities::enum_type, int) 
// (10)qm77120539 (37)_ZorN19QOpenGLDebugMessage8SeverityEi
/*void qm77120539_148(QOpenGLDebugMessage::Severity f1, int f2)*/ {
  QOpenGLDebugMessage::Severity f1 = *(QOpenGLDebugMessage::Severity*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QOpenGLDebugMessage::Severity, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:145
// [4] QFlags<QOpenGLDebugMessage::Severities::enum_type> operator|(QOpenGLDebugMessage::Severities::enum_type, QOpenGLDebugMessage::Severities::enum_type) 
// (12)qm2039005572 (39)_ZorN19QOpenGLDebugMessage8SeverityES0_
/*void qm2039005572_149(QOpenGLDebugMessage::Severity f1, QOpenGLDebugMessage::Severity f2)*/ {
  QOpenGLDebugMessage::Severity f1 = *(QOpenGLDebugMessage::Severity*)this_; QOpenGLDebugMessage::Severity f2 = *(QOpenGLDebugMessage::Severity*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLDebugMessage::Severity> (*)(QOpenGLDebugMessage::Severity, QOpenGLDebugMessage::Severity) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:145
// [4] QFlags<QOpenGLDebugMessage::Severities::enum_type> operator|(QOpenGLDebugMessage::Severities::enum_type, QFlags<QOpenGLDebugMessage::Severities::enum_type>) 
// (12)qm4033631979 (48)_ZorN19QOpenGLDebugMessage8SeverityE6QFlagsIS0_E
/*void qm4033631979_150(QOpenGLDebugMessage::Severity f1, QFlags<QOpenGLDebugMessage::Severity> f2)*/ {
  QOpenGLDebugMessage::Severity f1 = *(QOpenGLDebugMessage::Severity*)this_; QFlags<QOpenGLDebugMessage::Severity> f2 = *(QFlags<QOpenGLDebugMessage::Severity>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLDebugMessage::Severity> (*)(QOpenGLDebugMessage::Severity, QFlags<QOpenGLDebugMessage::Severity>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:143
// [4] QIncompatibleFlag operator|(QOpenGLDebugMessage::Sources::enum_type, int) 
// (12)qm3971450090 (35)_ZorN19QOpenGLDebugMessage6SourceEi
/*void qm3971450090_151(QOpenGLDebugMessage::Source f1, int f2)*/ {
  QOpenGLDebugMessage::Source f1 = *(QOpenGLDebugMessage::Source*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QOpenGLDebugMessage::Source, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:143
// [4] QFlags<QOpenGLDebugMessage::Sources::enum_type> operator|(QOpenGLDebugMessage::Sources::enum_type, QOpenGLDebugMessage::Sources::enum_type) 
// (10)qm49526983 (37)_ZorN19QOpenGLDebugMessage6SourceES0_
/*void qm49526983_152(QOpenGLDebugMessage::Source f1, QOpenGLDebugMessage::Source f2)*/ {
  QOpenGLDebugMessage::Source f1 = *(QOpenGLDebugMessage::Source*)this_; QOpenGLDebugMessage::Source f2 = *(QOpenGLDebugMessage::Source*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLDebugMessage::Source> (*)(QOpenGLDebugMessage::Source, QOpenGLDebugMessage::Source) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:143
// [4] QFlags<QOpenGLDebugMessage::Sources::enum_type> operator|(QOpenGLDebugMessage::Sources::enum_type, QFlags<QOpenGLDebugMessage::Sources::enum_type>) 
// (11)qm736533057 (46)_ZorN19QOpenGLDebugMessage6SourceE6QFlagsIS0_E
/*void qm736533057_153(QOpenGLDebugMessage::Source f1, QFlags<QOpenGLDebugMessage::Source> f2)*/ {
  QOpenGLDebugMessage::Source f1 = *(QOpenGLDebugMessage::Source*)this_; QFlags<QOpenGLDebugMessage::Source> f2 = *(QFlags<QOpenGLDebugMessage::Source>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLDebugMessage::Source> (*)(QOpenGLDebugMessage::Source, QFlags<QOpenGLDebugMessage::Source>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:144
// [4] QIncompatibleFlag operator|(QOpenGLDebugMessage::Types::enum_type, int) 
// (11)qm704307506 (33)_ZorN19QOpenGLDebugMessage4TypeEi
/*void qm704307506_154(QOpenGLDebugMessage::Type f1, int f2)*/ {
  QOpenGLDebugMessage::Type f1 = *(QOpenGLDebugMessage::Type*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QOpenGLDebugMessage::Type, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:144
// [4] QFlags<QOpenGLDebugMessage::Types::enum_type> operator|(QOpenGLDebugMessage::Types::enum_type, QOpenGLDebugMessage::Types::enum_type) 
// (12)qm1992992586 (35)_ZorN19QOpenGLDebugMessage4TypeES0_
/*void qm1992992586_155(QOpenGLDebugMessage::Type f1, QOpenGLDebugMessage::Type f2)*/ {
  QOpenGLDebugMessage::Type f1 = *(QOpenGLDebugMessage::Type*)this_; QOpenGLDebugMessage::Type f2 = *(QOpenGLDebugMessage::Type*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLDebugMessage::Type> (*)(QOpenGLDebugMessage::Type, QOpenGLDebugMessage::Type) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:144
// [4] QFlags<QOpenGLDebugMessage::Types::enum_type> operator|(QOpenGLDebugMessage::Types::enum_type, QFlags<QOpenGLDebugMessage::Types::enum_type>) 
// (12)qm3023040904 (44)_ZorN19QOpenGLDebugMessage4TypeE6QFlagsIS0_E
/*void qm3023040904_156(QOpenGLDebugMessage::Type f1, QFlags<QOpenGLDebugMessage::Type> f2)*/ {
  QOpenGLDebugMessage::Type f1 = *(QOpenGLDebugMessage::Type*)this_; QFlags<QOpenGLDebugMessage::Type> f2 = *(QFlags<QOpenGLDebugMessage::Type>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLDebugMessage::Type> (*)(QOpenGLDebugMessage::Type, QFlags<QOpenGLDebugMessage::Type>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:427
// [4] QIncompatibleFlag operator|(QOpenGLFunctions::OpenGLFeatures::enum_type, int) 
// (12)qm4178086945 (40)_ZorN16QOpenGLFunctions13OpenGLFeatureEi
/*void qm4178086945_157(QOpenGLFunctions::OpenGLFeature f1, int f2)*/ {
  QOpenGLFunctions::OpenGLFeature f1 = *(QOpenGLFunctions::OpenGLFeature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QOpenGLFunctions::OpenGLFeature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:427
// [4] QFlags<QOpenGLFunctions::OpenGLFeatures::enum_type> operator|(QOpenGLFunctions::OpenGLFeatures::enum_type, QOpenGLFunctions::OpenGLFeatures::enum_type) 
// (11)qm606481359 (42)_ZorN16QOpenGLFunctions13OpenGLFeatureES0_
/*void qm606481359_158(QOpenGLFunctions::OpenGLFeature f1, QOpenGLFunctions::OpenGLFeature f2)*/ {
  QOpenGLFunctions::OpenGLFeature f1 = *(QOpenGLFunctions::OpenGLFeature*)this_; QOpenGLFunctions::OpenGLFeature f2 = *(QOpenGLFunctions::OpenGLFeature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLFunctions::OpenGLFeature> (*)(QOpenGLFunctions::OpenGLFeature, QOpenGLFunctions::OpenGLFeature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglfunctions.h:427
// [4] QFlags<QOpenGLFunctions::OpenGLFeatures::enum_type> operator|(QOpenGLFunctions::OpenGLFeatures::enum_type, QFlags<QOpenGLFunctions::OpenGLFeatures::enum_type>) 
// (11)qm423575938 (51)_ZorN16QOpenGLFunctions13OpenGLFeatureE6QFlagsIS0_E
/*void qm423575938_159(QOpenGLFunctions::OpenGLFeature f1, QFlags<QOpenGLFunctions::OpenGLFeature> f2)*/ {
  QOpenGLFunctions::OpenGLFeature f1 = *(QOpenGLFunctions::OpenGLFeature*)this_; QFlags<QOpenGLFunctions::OpenGLFeature> f2 = *(QFlags<QOpenGLFunctions::OpenGLFeature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLFunctions::OpenGLFeature> (*)(QOpenGLFunctions::OpenGLFeature, QFlags<QOpenGLFunctions::OpenGLFeature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:179
// [4] QIncompatibleFlag operator|(QSurfaceFormat::FormatOptions::enum_type, int) 
// (12)qm2234317522 (37)_ZorN14QSurfaceFormat12FormatOptionEi
/*void qm2234317522_160(QSurfaceFormat::FormatOption f1, int f2)*/ {
  QSurfaceFormat::FormatOption f1 = *(QSurfaceFormat::FormatOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSurfaceFormat::FormatOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:179
// [4] QFlags<QSurfaceFormat::FormatOptions::enum_type> operator|(QSurfaceFormat::FormatOptions::enum_type, QSurfaceFormat::FormatOptions::enum_type) 
// (12)qm2731618716 (39)_ZorN14QSurfaceFormat12FormatOptionES0_
/*void qm2731618716_161(QSurfaceFormat::FormatOption f1, QSurfaceFormat::FormatOption f2)*/ {
  QSurfaceFormat::FormatOption f1 = *(QSurfaceFormat::FormatOption*)this_; QSurfaceFormat::FormatOption f2 = *(QSurfaceFormat::FormatOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSurfaceFormat::FormatOption> (*)(QSurfaceFormat::FormatOption, QSurfaceFormat::FormatOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qsurfaceformat.h:179
// [4] QFlags<QSurfaceFormat::FormatOptions::enum_type> operator|(QSurfaceFormat::FormatOptions::enum_type, QFlags<QSurfaceFormat::FormatOptions::enum_type>) 
// (12)qm3601588800 (48)_ZorN14QSurfaceFormat12FormatOptionE6QFlagsIS0_E
/*void qm3601588800_162(QSurfaceFormat::FormatOption f1, QFlags<QSurfaceFormat::FormatOption> f2)*/ {
  QSurfaceFormat::FormatOption f1 = *(QSurfaceFormat::FormatOption*)this_; QFlags<QSurfaceFormat::FormatOption> f2 = *(QFlags<QSurfaceFormat::FormatOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSurfaceFormat::FormatOption> (*)(QSurfaceFormat::FormatOption, QFlags<QSurfaceFormat::FormatOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:653
// [4] QIncompatibleFlag operator|(QOpenGLTexture::Features::enum_type, int) 
// (12)qm2135963906 (31)_ZorN14QOpenGLTexture7FeatureEi
/*void qm2135963906_163(QOpenGLTexture::Feature f1, int f2)*/ {
  QOpenGLTexture::Feature f1 = *(QOpenGLTexture::Feature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QOpenGLTexture::Feature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:653
// [4] QFlags<QOpenGLTexture::Features::enum_type> operator|(QOpenGLTexture::Features::enum_type, QOpenGLTexture::Features::enum_type) 
// (11)qm562339317 (33)_ZorN14QOpenGLTexture7FeatureES0_
/*void qm562339317_164(QOpenGLTexture::Feature f1, QOpenGLTexture::Feature f2)*/ {
  QOpenGLTexture::Feature f1 = *(QOpenGLTexture::Feature*)this_; QOpenGLTexture::Feature f2 = *(QOpenGLTexture::Feature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLTexture::Feature> (*)(QOpenGLTexture::Feature, QOpenGLTexture::Feature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengltexture.h:653
// [4] QFlags<QOpenGLTexture::Features::enum_type> operator|(QOpenGLTexture::Features::enum_type, QFlags<QOpenGLTexture::Features::enum_type>) 
// (11)qm843089690 (42)_ZorN14QOpenGLTexture7FeatureE6QFlagsIS0_E
/*void qm843089690_165(QOpenGLTexture::Feature f1, QFlags<QOpenGLTexture::Feature> f2)*/ {
  QOpenGLTexture::Feature f1 = *(QOpenGLTexture::Feature*)this_; QFlags<QOpenGLTexture::Feature> f2 = *(QFlags<QOpenGLTexture::Feature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLTexture::Feature> (*)(QOpenGLTexture::Feature, QFlags<QOpenGLTexture::Feature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:158
// [4] QIncompatibleFlag operator|(QImageIOPlugin::Capabilities::enum_type, int) 
// (12)qm1479179319 (35)_ZorN14QImageIOPlugin10CapabilityEi
/*void qm1479179319_166(QImageIOPlugin::Capability f1, int f2)*/ {
  QImageIOPlugin::Capability f1 = *(QImageIOPlugin::Capability*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QImageIOPlugin::Capability, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:158
// [4] QFlags<QImageIOPlugin::Capabilities::enum_type> operator|(QImageIOPlugin::Capabilities::enum_type, QImageIOPlugin::Capabilities::enum_type) 
// (12)qm2231618854 (37)_ZorN14QImageIOPlugin10CapabilityES0_
/*void qm2231618854_167(QImageIOPlugin::Capability f1, QImageIOPlugin::Capability f2)*/ {
  QImageIOPlugin::Capability f1 = *(QImageIOPlugin::Capability*)this_; QImageIOPlugin::Capability f2 = *(QImageIOPlugin::Capability*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QImageIOPlugin::Capability> (*)(QImageIOPlugin::Capability, QImageIOPlugin::Capability) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimageiohandler.h:158
// [4] QFlags<QImageIOPlugin::Capabilities::enum_type> operator|(QImageIOPlugin::Capabilities::enum_type, QFlags<QImageIOPlugin::Capabilities::enum_type>) 
// (12)qm2245037732 (46)_ZorN14QImageIOPlugin10CapabilityE6QFlagsIS0_E
/*void qm2245037732_168(QImageIOPlugin::Capability f1, QFlags<QImageIOPlugin::Capability> f2)*/ {
  QImageIOPlugin::Capability f1 = *(QImageIOPlugin::Capability*)this_; QFlags<QImageIOPlugin::Capability> f2 = *(QFlags<QImageIOPlugin::Capability>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QImageIOPlugin::Capability> (*)(QImageIOPlugin::Capability, QFlags<QImageIOPlugin::Capability>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:327
// [4] QIncompatibleFlag operator|(QTextDocument::FindFlags::enum_type, int) 
// (11)qm907880058 (31)_ZorN13QTextDocument8FindFlagEi
/*void qm907880058_169(QTextDocument::FindFlag f1, int f2)*/ {
  QTextDocument::FindFlag f1 = *(QTextDocument::FindFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTextDocument::FindFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:327
// [4] QFlags<QTextDocument::FindFlags::enum_type> operator|(QTextDocument::FindFlags::enum_type, QTextDocument::FindFlags::enum_type) 
// (12)qm1265248947 (33)_ZorN13QTextDocument8FindFlagES0_
/*void qm1265248947_170(QTextDocument::FindFlag f1, QTextDocument::FindFlag f2)*/ {
  QTextDocument::FindFlag f1 = *(QTextDocument::FindFlag*)this_; QTextDocument::FindFlag f2 = *(QTextDocument::FindFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextDocument::FindFlag> (*)(QTextDocument::FindFlag, QTextDocument::FindFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextdocument.h:327
// [4] QFlags<QTextDocument::FindFlags::enum_type> operator|(QTextDocument::FindFlags::enum_type, QFlags<QTextDocument::FindFlags::enum_type>) 
// (12)qm3104559967 (42)_ZorN13QTextDocument8FindFlagE6QFlagsIS0_E
/*void qm3104559967_171(QTextDocument::FindFlag f1, QFlags<QTextDocument::FindFlag> f2)*/ {
  QTextDocument::FindFlag f1 = *(QTextDocument::FindFlag*)this_; QFlags<QTextDocument::FindFlag> f2 = *(QFlags<QTextDocument::FindFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextDocument::FindFlag> (*)(QTextDocument::FindFlag, QFlags<QTextDocument::FindFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:101
// [4] QIncompatibleFlag operator|(QOpenGLShader::ShaderType::enum_type, int) 
// (11)qm706349644 (37)_ZorN13QOpenGLShader13ShaderTypeBitEi
/*void qm706349644_172(QOpenGLShader::ShaderTypeBit f1, int f2)*/ {
  QOpenGLShader::ShaderTypeBit f1 = *(QOpenGLShader::ShaderTypeBit*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QOpenGLShader::ShaderTypeBit, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:101
// [4] QFlags<QOpenGLShader::ShaderType::enum_type> operator|(QOpenGLShader::ShaderType::enum_type, QOpenGLShader::ShaderType::enum_type) 
// (12)qm4037987106 (39)_ZorN13QOpenGLShader13ShaderTypeBitES0_
/*void qm4037987106_173(QOpenGLShader::ShaderTypeBit f1, QOpenGLShader::ShaderTypeBit f2)*/ {
  QOpenGLShader::ShaderTypeBit f1 = *(QOpenGLShader::ShaderTypeBit*)this_; QOpenGLShader::ShaderTypeBit f2 = *(QOpenGLShader::ShaderTypeBit*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLShader::ShaderTypeBit> (*)(QOpenGLShader::ShaderTypeBit, QOpenGLShader::ShaderTypeBit) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglshaderprogram.h:101
// [4] QFlags<QOpenGLShader::ShaderType::enum_type> operator|(QOpenGLShader::ShaderType::enum_type, QFlags<QOpenGLShader::ShaderType::enum_type>) 
// (12)qm1673591027 (48)_ZorN13QOpenGLShader13ShaderTypeBitE6QFlagsIS0_E
/*void qm1673591027_174(QOpenGLShader::ShaderTypeBit f1, QFlags<QOpenGLShader::ShaderTypeBit> f2)*/ {
  QOpenGLShader::ShaderTypeBit f1 = *(QOpenGLShader::ShaderTypeBit*)this_; QFlags<QOpenGLShader::ShaderTypeBit> f2 = *(QFlags<QOpenGLShader::ShaderTypeBit>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLShader::ShaderTypeBit> (*)(QOpenGLShader::ShaderTypeBit, QFlags<QOpenGLShader::ShaderTypeBit>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:139
// [4] QIncompatibleFlag operator|(QOpenGLBuffer::RangeAccessFlags::enum_type, int) 
// (12)qm1535194712 (39)_ZorN13QOpenGLBuffer15RangeAccessFlagEi
/*void qm1535194712_175(QOpenGLBuffer::RangeAccessFlag f1, int f2)*/ {
  QOpenGLBuffer::RangeAccessFlag f1 = *(QOpenGLBuffer::RangeAccessFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QOpenGLBuffer::RangeAccessFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:139
// [4] QFlags<QOpenGLBuffer::RangeAccessFlags::enum_type> operator|(QOpenGLBuffer::RangeAccessFlags::enum_type, QOpenGLBuffer::RangeAccessFlags::enum_type) 
// (12)qm4050588011 (41)_ZorN13QOpenGLBuffer15RangeAccessFlagES0_
/*void qm4050588011_176(QOpenGLBuffer::RangeAccessFlag f1, QOpenGLBuffer::RangeAccessFlag f2)*/ {
  QOpenGLBuffer::RangeAccessFlag f1 = *(QOpenGLBuffer::RangeAccessFlag*)this_; QOpenGLBuffer::RangeAccessFlag f2 = *(QOpenGLBuffer::RangeAccessFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLBuffer::RangeAccessFlag> (*)(QOpenGLBuffer::RangeAccessFlag, QOpenGLBuffer::RangeAccessFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglbuffer.h:139
// [4] QFlags<QOpenGLBuffer::RangeAccessFlags::enum_type> operator|(QOpenGLBuffer::RangeAccessFlags::enum_type, QFlags<QOpenGLBuffer::RangeAccessFlags::enum_type>) 
// (11)qm656040161 (50)_ZorN13QOpenGLBuffer15RangeAccessFlagE6QFlagsIS0_E
/*void qm656040161_177(QOpenGLBuffer::RangeAccessFlag f1, QFlags<QOpenGLBuffer::RangeAccessFlag> f2)*/ {
  QOpenGLBuffer::RangeAccessFlag f1 = *(QOpenGLBuffer::RangeAccessFlag*)this_; QFlags<QOpenGLBuffer::RangeAccessFlag> f2 = *(QFlags<QOpenGLBuffer::RangeAccessFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QOpenGLBuffer::RangeAccessFlag> (*)(QOpenGLBuffer::RangeAccessFlag, QFlags<QOpenGLBuffer::RangeAccessFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:93
// [4] QIncompatibleFlag operator|(QTouchDevice::Capabilities::enum_type, int) 
// (12)qm3601670951 (37)_ZorN12QTouchDevice14CapabilityFlagEi
/*void qm3601670951_178(QTouchDevice::CapabilityFlag f1, int f2)*/ {
  QTouchDevice::CapabilityFlag f1 = *(QTouchDevice::CapabilityFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTouchDevice::CapabilityFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:93
// [4] QFlags<QTouchDevice::Capabilities::enum_type> operator|(QTouchDevice::Capabilities::enum_type, QTouchDevice::Capabilities::enum_type) 
// (11)qm873799061 (39)_ZorN12QTouchDevice14CapabilityFlagES0_
/*void qm873799061_179(QTouchDevice::CapabilityFlag f1, QTouchDevice::CapabilityFlag f2)*/ {
  QTouchDevice::CapabilityFlag f1 = *(QTouchDevice::CapabilityFlag*)this_; QTouchDevice::CapabilityFlag f2 = *(QTouchDevice::CapabilityFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTouchDevice::CapabilityFlag> (*)(QTouchDevice::CapabilityFlag, QTouchDevice::CapabilityFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtouchdevice.h:93
// [4] QFlags<QTouchDevice::Capabilities::enum_type> operator|(QTouchDevice::Capabilities::enum_type, QFlags<QTouchDevice::Capabilities::enum_type>) 
// (11)qm666660292 (48)_ZorN12QTouchDevice14CapabilityFlagE6QFlagsIS0_E
/*void qm666660292_180(QTouchDevice::CapabilityFlag f1, QFlags<QTouchDevice::CapabilityFlag> f2)*/ {
  QTouchDevice::CapabilityFlag f1 = *(QTouchDevice::CapabilityFlag*)this_; QFlags<QTouchDevice::CapabilityFlag> f2 = *(QFlags<QTouchDevice::CapabilityFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTouchDevice::CapabilityFlag> (*)(QTouchDevice::CapabilityFlag, QFlags<QTouchDevice::CapabilityFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:340
// [4] QIncompatibleFlag operator|(QPaintEngine::DirtyFlags::enum_type, int) 
// (12)qm2792510939 (31)_ZorN12QPaintEngine9DirtyFlagEi
/*void qm2792510939_181(QPaintEngine::DirtyFlag f1, int f2)*/ {
  QPaintEngine::DirtyFlag f1 = *(QPaintEngine::DirtyFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QPaintEngine::DirtyFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:340
// [4] QFlags<QPaintEngine::DirtyFlags::enum_type> operator|(QPaintEngine::DirtyFlags::enum_type, QPaintEngine::DirtyFlags::enum_type) 
// (11)qm897193970 (33)_ZorN12QPaintEngine9DirtyFlagES0_
/*void qm897193970_182(QPaintEngine::DirtyFlag f1, QPaintEngine::DirtyFlag f2)*/ {
  QPaintEngine::DirtyFlag f1 = *(QPaintEngine::DirtyFlag*)this_; QPaintEngine::DirtyFlag f2 = *(QPaintEngine::DirtyFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QPaintEngine::DirtyFlag> (*)(QPaintEngine::DirtyFlag, QPaintEngine::DirtyFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:340
// [4] QFlags<QPaintEngine::DirtyFlags::enum_type> operator|(QPaintEngine::DirtyFlags::enum_type, QFlags<QPaintEngine::DirtyFlags::enum_type>) 
// (11)qm953971400 (42)_ZorN12QPaintEngine9DirtyFlagE6QFlagsIS0_E
/*void qm953971400_183(QPaintEngine::DirtyFlag f1, QFlags<QPaintEngine::DirtyFlag> f2)*/ {
  QPaintEngine::DirtyFlag f1 = *(QPaintEngine::DirtyFlag*)this_; QFlags<QPaintEngine::DirtyFlag> f2 = *(QFlags<QPaintEngine::DirtyFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QPaintEngine::DirtyFlag> (*)(QPaintEngine::DirtyFlag, QFlags<QPaintEngine::DirtyFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:339
// [4] QIncompatibleFlag operator|(QPaintEngine::PaintEngineFeatures::enum_type, int) 
// (11)qm447800766 (41)_ZorN12QPaintEngine18PaintEngineFeatureEi
/*void qm447800766_184(QPaintEngine::PaintEngineFeature f1, int f2)*/ {
  QPaintEngine::PaintEngineFeature f1 = *(QPaintEngine::PaintEngineFeature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QPaintEngine::PaintEngineFeature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:339
// [4] QFlags<QPaintEngine::PaintEngineFeatures::enum_type> operator|(QPaintEngine::PaintEngineFeatures::enum_type, QPaintEngine::PaintEngineFeatures::enum_type) 
// (12)qm3868297054 (43)_ZorN12QPaintEngine18PaintEngineFeatureES0_
/*void qm3868297054_185(QPaintEngine::PaintEngineFeature f1, QPaintEngine::PaintEngineFeature f2)*/ {
  QPaintEngine::PaintEngineFeature f1 = *(QPaintEngine::PaintEngineFeature*)this_; QPaintEngine::PaintEngineFeature f2 = *(QPaintEngine::PaintEngineFeature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QPaintEngine::PaintEngineFeature> (*)(QPaintEngine::PaintEngineFeature, QPaintEngine::PaintEngineFeature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpaintengine.h:339
// [4] QFlags<QPaintEngine::PaintEngineFeatures::enum_type> operator|(QPaintEngine::PaintEngineFeatures::enum_type, QFlags<QPaintEngine::PaintEngineFeatures::enum_type>) 
// (12)qm2160143277 (52)_ZorN12QPaintEngine18PaintEngineFeatureE6QFlagsIS0_E
/*void qm2160143277_186(QPaintEngine::PaintEngineFeature f1, QFlags<QPaintEngine::PaintEngineFeature> f2)*/ {
  QPaintEngine::PaintEngineFeature f1 = *(QPaintEngine::PaintEngineFeature*)this_; QFlags<QPaintEngine::PaintEngineFeature> f2 = *(QFlags<QPaintEngine::PaintEngineFeature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QPaintEngine::PaintEngineFeature> (*)(QPaintEngine::PaintEngineFeature, QFlags<QPaintEngine::PaintEngineFeature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1040
// [4] QIncompatibleFlag operator|(QTouchEvent::TouchPoint::InfoFlags::enum_type, int) 
// (12)qm1846596226 (41)_ZorN11QTouchEvent10TouchPoint8InfoFlagEi
/*void qm1846596226_187(QTouchEvent::TouchPoint::InfoFlag f1, int f2)*/ {
  QTouchEvent::TouchPoint::InfoFlag f1 = *(QTouchEvent::TouchPoint::InfoFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTouchEvent::TouchPoint::InfoFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1040
// [4] QFlags<QTouchEvent::TouchPoint::InfoFlags::enum_type> operator|(QTouchEvent::TouchPoint::InfoFlags::enum_type, QTouchEvent::TouchPoint::InfoFlags::enum_type) 
// (11)qm885268047 (43)_ZorN11QTouchEvent10TouchPoint8InfoFlagES1_
/*void qm885268047_188(QTouchEvent::TouchPoint::InfoFlag f1, QTouchEvent::TouchPoint::InfoFlag f2)*/ {
  QTouchEvent::TouchPoint::InfoFlag f1 = *(QTouchEvent::TouchPoint::InfoFlag*)this_; QTouchEvent::TouchPoint::InfoFlag f2 = *(QTouchEvent::TouchPoint::InfoFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTouchEvent::TouchPoint::InfoFlag> (*)(QTouchEvent::TouchPoint::InfoFlag, QTouchEvent::TouchPoint::InfoFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:1040
// [4] QFlags<QTouchEvent::TouchPoint::InfoFlags::enum_type> operator|(QTouchEvent::TouchPoint::InfoFlags::enum_type, QFlags<QTouchEvent::TouchPoint::InfoFlags::enum_type>) 
// (12)qm3856800902 (52)_ZorN11QTouchEvent10TouchPoint8InfoFlagE6QFlagsIS1_E
/*void qm3856800902_189(QTouchEvent::TouchPoint::InfoFlag f1, QFlags<QTouchEvent::TouchPoint::InfoFlag> f2)*/ {
  QTouchEvent::TouchPoint::InfoFlag f1 = *(QTouchEvent::TouchPoint::InfoFlag*)this_; QFlags<QTouchEvent::TouchPoint::InfoFlag> f2 = *(QFlags<QTouchEvent::TouchPoint::InfoFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTouchEvent::TouchPoint::InfoFlag> (*)(QTouchEvent::TouchPoint::InfoFlag, QFlags<QTouchEvent::TouchPoint::InfoFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:149
// [4] QIncompatibleFlag operator|(QTextOption::Flags::enum_type, int) 
// (12)qm1522846161 (25)_ZorN11QTextOption4FlagEi
/*void qm1522846161_190(QTextOption::Flag f1, int f2)*/ {
  QTextOption::Flag f1 = *(QTextOption::Flag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTextOption::Flag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:149
// [4] QFlags<QTextOption::Flags::enum_type> operator|(QTextOption::Flags::enum_type, QTextOption::Flags::enum_type) 
// (11)qm908909729 (27)_ZorN11QTextOption4FlagES0_
/*void qm908909729_191(QTextOption::Flag f1, QTextOption::Flag f2)*/ {
  QTextOption::Flag f1 = *(QTextOption::Flag*)this_; QTextOption::Flag f2 = *(QTextOption::Flag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextOption::Flag> (*)(QTextOption::Flag, QTextOption::Flag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextoption.h:149
// [4] QFlags<QTextOption::Flags::enum_type> operator|(QTextOption::Flags::enum_type, QFlags<QTextOption::Flags::enum_type>) 
// (12)qm2455697977 (36)_ZorN11QTextOption4FlagE6QFlagsIS0_E
/*void qm2455697977_192(QTextOption::Flag f1, QFlags<QTextOption::Flag> f2)*/ {
  QTextOption::Flag f1 = *(QTextOption::Flag*)this_; QFlags<QTextOption::Flag> f2 = *(QFlags<QTextOption::Flag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextOption::Flag> (*)(QTextOption::Flag, QFlags<QTextOption::Flag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:413
// [4] QIncompatibleFlag operator|(QTextFormat::PageBreakFlags::enum_type, int) 
// (11)qm638480544 (35)_ZorN11QTextFormat13PageBreakFlagEi
/*void qm638480544_193(QTextFormat::PageBreakFlag f1, int f2)*/ {
  QTextFormat::PageBreakFlag f1 = *(QTextFormat::PageBreakFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTextFormat::PageBreakFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:413
// [4] QFlags<QTextFormat::PageBreakFlags::enum_type> operator|(QTextFormat::PageBreakFlags::enum_type, QTextFormat::PageBreakFlags::enum_type) 
// (12)qm2998264820 (37)_ZorN11QTextFormat13PageBreakFlagES0_
/*void qm2998264820_194(QTextFormat::PageBreakFlag f1, QTextFormat::PageBreakFlag f2)*/ {
  QTextFormat::PageBreakFlag f1 = *(QTextFormat::PageBreakFlag*)this_; QTextFormat::PageBreakFlag f2 = *(QTextFormat::PageBreakFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextFormat::PageBreakFlag> (*)(QTextFormat::PageBreakFlag, QTextFormat::PageBreakFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:413
// [4] QFlags<QTextFormat::PageBreakFlags::enum_type> operator|(QTextFormat::PageBreakFlags::enum_type, QFlags<QTextFormat::PageBreakFlags::enum_type>) 
// (11)qm151509744 (46)_ZorN11QTextFormat13PageBreakFlagE6QFlagsIS0_E
/*void qm151509744_195(QTextFormat::PageBreakFlag f1, QFlags<QTextFormat::PageBreakFlag> f2)*/ {
  QTextFormat::PageBreakFlag f1 = *(QTextFormat::PageBreakFlag*)this_; QFlags<QTextFormat::PageBreakFlag> f2 = *(QFlags<QTextFormat::PageBreakFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextFormat::PageBreakFlag> (*)(QTextFormat::PageBreakFlag, QFlags<QTextFormat::PageBreakFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:446
// [4] QIncompatibleFlag operator|(QAccessible::Relation::enum_type, int) 
// (12)qm2037627314 (34)_ZorN11QAccessible12RelationFlagEi
/*void qm2037627314_196(QAccessible::RelationFlag f1, int f2)*/ {
  QAccessible::RelationFlag f1 = *(QAccessible::RelationFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QAccessible::RelationFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:446
// [4] QFlags<QAccessible::Relation::enum_type> operator|(QAccessible::Relation::enum_type, QAccessible::Relation::enum_type) 
// (11)qm687453774 (36)_ZorN11QAccessible12RelationFlagES0_
/*void qm687453774_197(QAccessible::RelationFlag f1, QAccessible::RelationFlag f2)*/ {
  QAccessible::RelationFlag f1 = *(QAccessible::RelationFlag*)this_; QAccessible::RelationFlag f2 = *(QAccessible::RelationFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAccessible::RelationFlag> (*)(QAccessible::RelationFlag, QAccessible::RelationFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qaccessible.h:446
// [4] QFlags<QAccessible::Relation::enum_type> operator|(QAccessible::Relation::enum_type, QFlags<QAccessible::Relation::enum_type>) 
// (12)qm4141696889 (45)_ZorN11QAccessible12RelationFlagE6QFlagsIS0_E
/*void qm4141696889_198(QAccessible::RelationFlag f1, QFlags<QAccessible::RelationFlag> f2)*/ {
  QAccessible::RelationFlag f1 = *(QAccessible::RelationFlag*)this_; QFlags<QAccessible::RelationFlag> f2 = *(QFlags<QAccessible::RelationFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAccessible::RelationFlag> (*)(QAccessible::RelationFlag, QFlags<QAccessible::RelationFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:272
// [16] const QVector4D operator-(const QVector4D &) 
// (12)qm2514506386 (16)_ZngRK9QVector4D
/*void qm2514506386_24(const QVector4D & vector)*/ {
  const QVector4D & vector = *(const QVector4D *)this_;
  (void) operator-(vector);
  auto xptr = (const QVector4D (*)(QVector4D const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:272
// [12] const QVector3D operator-(const QVector3D &) 
// (12)qm3668034645 (16)_ZngRK9QVector3D
/*void qm3668034645_25(const QVector3D & vector)*/ {
  const QVector3D & vector = *(const QVector3D *)this_;
  (void) operator-(vector);
  auto xptr = (const QVector3D (*)(QVector3D const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:247
// [8] const QVector2D operator-(const QVector2D &) 
// (12)qm3283809556 (16)_ZngRK9QVector2D
/*void qm3283809556_26(const QVector2D & vector)*/ {
  const QVector2D & vector = *(const QVector2D *)this_;
  (void) operator-(vector);
  auto xptr = (const QVector2D (*)(QVector2D const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:314
// [16] const QQuaternion operator-(const QQuaternion &) 
// (12)qm2499622811 (19)_ZngRK11QQuaternion
/*void qm2499622811_27(const QQuaternion & quaternion)*/ {
  const QQuaternion & quaternion = *(const QQuaternion *)this_;
  (void) operator-(quaternion);
  auto xptr = (const QQuaternion (*)(QQuaternion const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:952
// [68] QMatrix4x4 operator-(const QMatrix4x4 &) 
// (12)qm1649697710 (18)_ZngRK10QMatrix4x4
/*void qm1649697710_28(const QMatrix4x4 & matrix)*/ {
  const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_;
  (void) operator-(matrix);
  auto xptr = (QMatrix4x4 (*)(QMatrix4x4 const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:241
// [1] bool operator!=(const QVector4D &, const QVector4D &) 
// (12)qm4253193962 (19)_ZneRK9QVector4DS1_
/*void qm4253193962_50(const QVector4D & v1, const QVector4D & v2)*/ {
  const QVector4D & v1 = *(const QVector4D *)this_; const QVector4D & v2 = *(const QVector4D *)this_;
  (void) operator!=(v1, v2);
  auto xptr = (bool (*)(QVector4D const&, QVector4D const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:241
// [1] bool operator!=(const QVector3D &, const QVector3D &) 
// (12)qm1336036090 (19)_ZneRK9QVector3DS1_
/*void qm1336036090_51(const QVector3D & v1, const QVector3D & v2)*/ {
  const QVector3D & v1 = *(const QVector3D *)this_; const QVector3D & v2 = *(const QVector3D *)this_;
  (void) operator!=(v1, v2);
  auto xptr = (bool (*)(QVector3D const&, QVector3D const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:216
// [1] bool operator!=(const QVector2D &, const QVector2D &) 
// (12)qm1925342026 (19)_ZneRK9QVector2DS1_
/*void qm1925342026_52(const QVector2D & v1, const QVector2D & v2)*/ {
  const QVector2D & v1 = *(const QVector2D *)this_; const QVector2D & v2 = *(const QVector2D *)this_;
  (void) operator!=(v1, v2);
  auto xptr = (bool (*)(QVector2D const&, QVector2D const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:299
// [1] bool operator!=(const QPageSize &, const QPageSize &) 
// (11)qm146706279 (19)_ZneRK9QPageSizeS1_
/*void qm146706279_53(const QPageSize & lhs, const QPageSize & rhs)*/ {
  const QPageSize & lhs = *(const QPageSize *)this_; const QPageSize & rhs = *(const QPageSize *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QPageSize const&, QPageSize const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:130
// [1] bool operator!=(const QCursor &, const QCursor &) 
// (12)qm3721043896 (17)_ZneRK7QCursorS1_
/*void qm3721043896_54(const QCursor & lhs, const QCursor & rhs)*/ {
  const QCursor & lhs = *(const QCursor *)this_; const QCursor & rhs = *(const QCursor *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QCursor const&, QCursor const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:121
// [1] bool operator!=(const QOpenGLVersionProfile &, const QOpenGLVersionProfile &) 
// (12)qm1926006605 (32)_ZneRK21QOpenGLVersionProfileS1_
/*void qm1926006605_55(const QOpenGLVersionProfile & lhs, const QOpenGLVersionProfile & rhs)*/ {
  const QOpenGLVersionProfile & lhs = *(const QOpenGLVersionProfile *)this_; const QOpenGLVersionProfile & rhs = *(const QOpenGLVersionProfile *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QOpenGLVersionProfile const&, QOpenGLVersionProfile const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:117
// [1] bool operator!=(const QOpenGLVersionStatus &, const QOpenGLVersionStatus &) 
// (12)qm3558985989 (31)_ZneRK20QOpenGLVersionStatusS1_
/*void qm3558985989_56(const QOpenGLVersionStatus & lhs, const QOpenGLVersionStatus & rhs)*/ {
  const QOpenGLVersionStatus & lhs = *(const QOpenGLVersionStatus *)this_; const QOpenGLVersionStatus & rhs = *(const QOpenGLVersionStatus *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QOpenGLVersionStatus const&, QOpenGLVersionStatus const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:289
// [1] bool operator!=(const QQuaternion &, const QQuaternion &) 
// (12)qm2060156365 (22)_ZneRK11QQuaternionS1_
/*void qm2060156365_57(const QQuaternion & q1, const QQuaternion & q2)*/ {
  const QQuaternion & q1 = *(const QQuaternion *)this_; const QQuaternion & q2 = *(const QQuaternion *)this_;
  (void) operator!=(q1, q2);
  auto xptr = (bool (*)(QQuaternion const&, QQuaternion const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:142
// [1] bool operator!=(const QPageLayout &, const QPageLayout &) 
// (11)qm891824619 (22)_ZneRK11QPageLayoutS1_
/*void qm891824619_58(const QPageLayout & lhs, const QPageLayout & rhs)*/ {
  const QPageLayout & lhs = *(const QPageLayout *)this_; const QPageLayout & rhs = *(const QPageLayout *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QPageLayout const&, QPageLayout const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:141
// [1] bool operator!=(const QColorSpace &, const QColorSpace &) 
// (12)qm1750802007 (22)_ZneRK11QColorSpaceS1_
/*void qm1750802007_59(const QColorSpace & colorSpace1, const QColorSpace & colorSpace2)*/ {
  const QColorSpace & colorSpace1 = *(const QColorSpace *)this_; const QColorSpace & colorSpace2 = *(const QColorSpace *)this_;
  (void) operator!=(colorSpace1, colorSpace2);
  auto xptr = (bool (*)(QColorSpace const&, QColorSpace const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:877
// [1] bool operator!=(QPointingDeviceUniqueId, QPointingDeviceUniqueId) 
// (12)qm2525675140 (31)_Zne23QPointingDeviceUniqueIdS_
/*void qm2525675140_60(QPointingDeviceUniqueId lhs, QPointingDeviceUniqueId rhs)*/ {
  QPointingDeviceUniqueId lhs = *(QPointingDeviceUniqueId*)this_; QPointingDeviceUniqueId rhs = *(QPointingDeviceUniqueId*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QPointingDeviceUniqueId, QPointingDeviceUniqueId) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:257
// [16] const QVector4D operator*(float, const QVector4D &) 
// (11)qm757483987 (17)_ZmlfRK9QVector4D
/*void qm757483987_27(float factor, const QVector4D & vector)*/ {
  float factor = *(float*)this_; const QVector4D & vector = *(const QVector4D *)this_;
  (void) operator*(factor, vector);
  auto xptr = (const QVector4D (*)(float, QVector4D const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:257
// [12] const QVector3D operator*(float, const QVector3D &) 
// (12)qm1650974484 (17)_ZmlfRK9QVector3D
/*void qm1650974484_28(float factor, const QVector3D & vector)*/ {
  float factor = *(float*)this_; const QVector3D & vector = *(const QVector3D *)this_;
  (void) operator*(factor, vector);
  auto xptr = (const QVector3D (*)(float, QVector3D const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:232
// [8] const QVector2D operator*(float, const QVector2D &) 
// (12)qm2071785045 (17)_ZmlfRK9QVector2D
/*void qm2071785045_29(float factor, const QVector2D & vector)*/ {
  float factor = *(float*)this_; const QVector2D & vector = *(const QVector2D *)this_;
  (void) operator*(factor, vector);
  auto xptr = (const QVector2D (*)(float, QVector2D const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:304
// [16] const QQuaternion operator*(float, const QQuaternion &) 
// (12)qm1049918667 (20)_ZmlfRK11QQuaternion
/*void qm1049918667_30(float factor, const QQuaternion & quaternion)*/ {
  float factor = *(float*)this_; const QQuaternion & quaternion = *(const QQuaternion *)this_;
  (void) operator*(factor, quaternion);
  auto xptr = (const QQuaternion (*)(float, QQuaternion const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:975
// [68] QMatrix4x4 operator*(float, const QMatrix4x4 &) 
// (10)qm22244544 (19)_ZmlfRK10QMatrix4x4
/*void qm22244544_31(float factor, const QMatrix4x4 & matrix)*/ {
  float factor = *(float*)this_; const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_;
  (void) operator*(factor, matrix);
  auto xptr = (QMatrix4x4 (*)(float, QMatrix4x4 const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:262
// [16] const QVector4D operator*(const QVector4D &, float) 
// (11)qm906127438 (17)_ZmlRK9QVector4Df
/*void qm906127438_32(const QVector4D & vector, float factor)*/ {
  const QVector4D & vector = *(const QVector4D *)this_; float factor = *(float*)this_;
  (void) operator*(vector, factor);
  auto xptr = (const QVector4D (*)(QVector4D const&, float) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:267
// [16] const QVector4D operator*(const QVector4D &, const QVector4D &) 
// (12)qm1935918000 (19)_ZmlRK9QVector4DS1_
/*void qm1935918000_33(const QVector4D & v1, const QVector4D & v2)*/ {
  const QVector4D & v1 = *(const QVector4D *)this_; const QVector4D & v2 = *(const QVector4D *)this_;
  (void) operator*(v1, v2);
  auto xptr = (const QVector4D (*)(QVector4D const&, QVector4D const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:796
// [16] QVector4D operator*(const QVector4D &, const QMatrix4x4 &) 
// (12)qm4026955960 (30)_ZmlRK9QVector4DRK10QMatrix4x4
/*void qm4026955960_34(const QVector4D & vector, const QMatrix4x4 & matrix)*/ {
  const QVector4D & vector = *(const QVector4D *)this_; const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_;
  (void) operator*(vector, matrix);
  auto xptr = (QVector4D (*)(QVector4D const&, QMatrix4x4 const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:262
// [12] const QVector3D operator*(const QVector3D &, float) 
// (11)qm860716747 (17)_ZmlRK9QVector3Df
/*void qm860716747_35(const QVector3D & vector, float factor)*/ {
  const QVector3D & vector = *(const QVector3D *)this_; float factor = *(float*)this_;
  (void) operator*(vector, factor);
  auto xptr = (const QVector3D (*)(QVector3D const&, float) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:267
// [12] const QVector3D operator*(const QVector3D &, const QVector3D &) 
// (12)qm3242401696 (19)_ZmlRK9QVector3DS1_
/*void qm3242401696_36(const QVector3D & v1, const QVector3D & v2)*/ {
  const QVector3D & v1 = *(const QVector3D *)this_; const QVector3D & v2 = *(const QVector3D *)this_;
  (void) operator*(v1, v2);
  auto xptr = (const QVector3D (*)(QVector3D const&, QVector3D const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:728
// [12] QVector3D operator*(const QVector3D &, const QMatrix4x4 &) 
// (11)qm234848461 (30)_ZmlRK9QVector3DRK10QMatrix4x4
/*void qm234848461_37(const QVector3D & vector, const QMatrix4x4 & matrix)*/ {
  const QVector3D & vector = *(const QVector3D *)this_; const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_;
  (void) operator*(vector, matrix);
  auto xptr = (QVector3D (*)(QVector3D const&, QMatrix4x4 const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:237
// [8] const QVector2D operator*(const QVector2D &, float) 
// (11)qm848237820 (17)_ZmlRK9QVector2Df
/*void qm848237820_38(const QVector2D & vector, float factor)*/ {
  const QVector2D & vector = *(const QVector2D *)this_; float factor = *(float*)this_;
  (void) operator*(vector, factor);
  auto xptr = (const QVector2D (*)(QVector2D const&, float) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:242
// [8] const QVector2D operator*(const QVector2D &, const QVector2D &) 
// (12)qm4230166032 (19)_ZmlRK9QVector2DS1_
/*void qm4230166032_39(const QVector2D & v1, const QVector2D & v2)*/ {
  const QVector2D & v1 = *(const QVector2D *)this_; const QVector2D & v2 = *(const QVector2D *)this_;
  (void) operator*(v1, v2);
  auto xptr = (const QVector2D (*)(QVector2D const&, QVector2D const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:156
// [8] QPolygonF operator*(const QPolygonF &, const QMatrix &) 
// (12)qm3475359197 (26)_ZmlRK9QPolygonFRK7QMatrix
/*void qm3475359197_40(const QPolygonF & a, const QMatrix & m)*/ {
  const QPolygonF & a = *(const QPolygonF *)this_; const QMatrix & m = *(const QMatrix *)this_;
  (void) operator*(a, m);
  auto xptr = (QPolygonF (*)(QPolygonF const&, QMatrix const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:406
// [8] QPolygonF operator*(const QPolygonF &, const QTransform &) 
// (11)qm790970872 (30)_ZmlRK9QPolygonFRK10QTransform
/*void qm790970872_41(const QPolygonF & a, const QTransform & m)*/ {
  const QPolygonF & a = *(const QPolygonF *)this_; const QTransform & m = *(const QTransform *)this_;
  (void) operator*(a, m);
  auto xptr = (QPolygonF (*)(QPolygonF const&, QTransform const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:154
// [8] QPolygon operator*(const QPolygon &, const QMatrix &) 
// (12)qm2861476890 (25)_ZmlRK8QPolygonRK7QMatrix
/*void qm2861476890_42(const QPolygon & a, const QMatrix & m)*/ {
  const QPolygon & a = *(const QPolygon *)this_; const QMatrix & m = *(const QMatrix *)this_;
  (void) operator*(a, m);
  auto xptr = (QPolygon (*)(QPolygon const&, QMatrix const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:404
// [8] QPolygon operator*(const QPolygon &, const QTransform &) 
// (12)qm4086470429 (29)_ZmlRK8QPolygonRK10QTransform
/*void qm4086470429_43(const QPolygon & a, const QTransform & m)*/ {
  const QPolygon & a = *(const QPolygon *)this_; const QTransform & m = *(const QTransform *)this_;
  (void) operator*(a, m);
  auto xptr = (QPolygon (*)(QPolygon const&, QTransform const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:158
// [8] QRegion operator*(const QRegion &, const QMatrix &) 
// (11)qm272344618 (24)_ZmlRK7QRegionRK7QMatrix
/*void qm272344618_44(const QRegion & r, const QMatrix & m)*/ {
  const QRegion & r = *(const QRegion *)this_; const QMatrix & m = *(const QMatrix *)this_;
  (void) operator*(r, m);
  auto xptr = (QRegion (*)(QRegion const&, QMatrix const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:408
// [8] QRegion operator*(const QRegion &, const QTransform &) 
// (12)qm3156797957 (28)_ZmlRK7QRegionRK10QTransform
/*void qm3156797957_45(const QRegion & r, const QTransform & m)*/ {
  const QRegion & r = *(const QRegion *)this_; const QTransform & m = *(const QTransform *)this_;
  (void) operator*(r, m);
  auto xptr = (QRegion (*)(QRegion const&, QTransform const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:148
// [16] QPointF operator*(const QPointF &, const QMatrix &) 
// (11)qm128551655 (24)_ZmlRK7QPointFRK7QMatrix
/*void qm128551655_46(const QPointF & p, const QMatrix & m)*/ {
  const QPointF & p = *(const QPointF *)this_; const QMatrix & m = *(const QMatrix *)this_;
  (void) operator*(p, m);
  auto xptr = (QPointF (*)(QPointF const&, QMatrix const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:398
// [16] QPointF operator*(const QPointF &, const QTransform &) 
// (12)qm3388739077 (28)_ZmlRK7QPointFRK10QTransform
/*void qm3388739077_47(const QPointF & p, const QTransform & m)*/ {
  const QPointF & p = *(const QPointF *)this_; const QTransform & m = *(const QTransform *)this_;
  (void) operator*(p, m);
  auto xptr = (QPointF (*)(QPointF const&, QTransform const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:863
// [16] QPointF operator*(const QPointF &, const QMatrix4x4 &) 
// (12)qm1753141866 (28)_ZmlRK7QPointFRK10QMatrix4x4
/*void qm1753141866_48(const QPointF & point, const QMatrix4x4 & matrix)*/ {
  const QPointF & point = *(const QPointF *)this_; const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_;
  (void) operator*(point, matrix);
  auto xptr = (QPointF (*)(QPointF const&, QMatrix4x4 const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:146
// [8] QPoint operator*(const QPoint &, const QMatrix &) 
// (12)qm2715049267 (23)_ZmlRK6QPointRK7QMatrix
/*void qm2715049267_49(const QPoint & p, const QMatrix & m)*/ {
  const QPoint & p = *(const QPoint *)this_; const QMatrix & m = *(const QMatrix *)this_;
  (void) operator*(p, m);
  auto xptr = (QPoint (*)(QPoint const&, QMatrix const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:396
// [8] QPoint operator*(const QPoint &, const QTransform &) 
// (12)qm1294467608 (27)_ZmlRK6QPointRK10QTransform
/*void qm1294467608_50(const QPoint & p, const QTransform & m)*/ {
  const QPoint & p = *(const QPoint *)this_; const QTransform & m = *(const QTransform *)this_;
  (void) operator*(p, m);
  auto xptr = (QPoint (*)(QPoint const&, QTransform const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:842
// [8] QPoint operator*(const QPoint &, const QMatrix4x4 &) 
// (12)qm3970621047 (27)_ZmlRK6QPointRK10QMatrix4x4
/*void qm3970621047_51(const QPoint & point, const QMatrix4x4 & matrix)*/ {
  const QPoint & point = *(const QPoint *)this_; const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_;
  (void) operator*(point, matrix);
  auto xptr = (QPoint (*)(QPoint const&, QMatrix4x4 const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:150
// [32] QLineF operator*(const QLineF &, const QMatrix &) 
// (11)qm610693285 (23)_ZmlRK6QLineFRK7QMatrix
/*void qm610693285_52(const QLineF & l, const QMatrix & m)*/ {
  const QLineF & l = *(const QLineF *)this_; const QMatrix & m = *(const QMatrix *)this_;
  (void) operator*(l, m);
  auto xptr = (QLineF (*)(QLineF const&, QMatrix const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:400
// [32] QLineF operator*(const QLineF &, const QTransform &) 
// (12)qm2931282502 (27)_ZmlRK6QLineFRK10QTransform
/*void qm2931282502_53(const QLineF & l, const QTransform & m)*/ {
  const QLineF & l = *(const QLineF *)this_; const QTransform & m = *(const QTransform *)this_;
  (void) operator*(l, m);
  auto xptr = (QLineF (*)(QLineF const&, QTransform const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:152
// [16] QLine operator*(const QLine &, const QMatrix &) 
// (11)qm422043509 (22)_ZmlRK5QLineRK7QMatrix
/*void qm422043509_54(const QLine & l, const QMatrix & m)*/ {
  const QLine & l = *(const QLine *)this_; const QMatrix & m = *(const QMatrix *)this_;
  (void) operator*(l, m);
  auto xptr = (QLine (*)(QLine const&, QMatrix const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:402
// [16] QLine operator*(const QLine &, const QTransform &) 
// (12)qm3956098007 (26)_ZmlRK5QLineRK10QTransform
/*void qm3956098007_55(const QLine & l, const QTransform & m)*/ {
  const QLine & l = *(const QLine *)this_; const QTransform & m = *(const QTransform *)this_;
  (void) operator*(l, m);
  auto xptr = (QLine (*)(QLine const&, QTransform const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:366
// [8] QPainterPath operator*(const QPainterPath &, const QTransform &) 
// (12)qm1628978606 (34)_ZmlRK12QPainterPathRK10QTransform
/*void qm1628978606_56(const QPainterPath & p, const QTransform & m)*/ {
  const QPainterPath & p = *(const QPainterPath *)this_; const QTransform & m = *(const QTransform *)this_;
  (void) operator*(p, m);
  auto xptr = (QPainterPath (*)(QPainterPath const&, QTransform const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:309
// [16] const QQuaternion operator*(const QQuaternion &, float) 
// (12)qm1318475107 (20)_ZmlRK11QQuaternionf
/*void qm1318475107_57(const QQuaternion & quaternion, float factor)*/ {
  const QQuaternion & quaternion = *(const QQuaternion *)this_; float factor = *(float*)this_;
  (void) operator*(quaternion, factor);
  auto xptr = (const QQuaternion (*)(QQuaternion const&, float) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:258
// [16] const QQuaternion operator*(const QQuaternion &, const QQuaternion &) 
// (11)qm186756570 (22)_ZmlRK11QQuaternionS1_
/*void qm186756570_58(const QQuaternion & q1, const QQuaternion & q2)*/ {
  const QQuaternion & q1 = *(const QQuaternion *)this_; const QQuaternion & q2 = *(const QQuaternion *)this_;
  (void) operator*(q1, q2);
  auto xptr = (const QQuaternion (*)(QQuaternion const&, QQuaternion const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:349
// [12] QVector3D operator*(const QQuaternion &, const QVector3D &) 
// (11)qm310546831 (31)_ZmlRK11QQuaternionRK9QVector3D
/*void qm310546831_59(const QQuaternion & quaternion, const QVector3D & vec)*/ {
  const QQuaternion & quaternion = *(const QQuaternion *)this_; const QVector3D & vec = *(const QVector3D *)this_;
  (void) operator*(quaternion, vec);
  auto xptr = (QVector3D (*)(QQuaternion const&, QVector3D const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:411
// [88] QTransform operator*(const QTransform &, qreal) 
// (12)qm2101091948 (19)_ZmlRK10QTransformd
/*void qm2101091948_60(const QTransform & a, double n)*/ {
  const QTransform & a = *(const QTransform *)this_; double n = *(double*)this_;
  (void) operator*(a, n);
  auto xptr = (QTransform (*)(QTransform const&, double) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:998
// [68] QMatrix4x4 operator*(const QMatrix4x4 &, float) 
// (12)qm1319010645 (19)_ZmlRK10QMatrix4x4f
/*void qm1319010645_61(const QMatrix4x4 & matrix, float factor)*/ {
  const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_; float factor = *(float*)this_;
  (void) operator*(matrix, factor);
  auto xptr = (QMatrix4x4 (*)(QMatrix4x4 const&, float) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:638
// [68] QMatrix4x4 operator*(const QMatrix4x4 &, const QMatrix4x4 &) 
// (10)qm58927722 (21)_ZmlRK10QMatrix4x4S1_
/*void qm58927722_62(const QMatrix4x4 & m1, const QMatrix4x4 & m2)*/ {
  const QMatrix4x4 & m1 = *(const QMatrix4x4 *)this_; const QMatrix4x4 & m2 = *(const QMatrix4x4 *)this_;
  (void) operator*(m1, m2);
  auto xptr = (QMatrix4x4 (*)(QMatrix4x4 const&, QMatrix4x4 const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:818
// [16] QVector4D operator*(const QMatrix4x4 &, const QVector4D &) 
// (12)qm1883114300 (30)_ZmlRK10QMatrix4x4RK9QVector4D
/*void qm1883114300_63(const QMatrix4x4 & matrix, const QVector4D & vector)*/ {
  const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_; const QVector4D & vector = *(const QVector4D *)this_;
  (void) operator*(matrix, vector);
  auto xptr = (QVector4D (*)(QMatrix4x4 const&, QVector4D const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:753
// [12] QVector3D operator*(const QMatrix4x4 &, const QVector3D &) 
// (12)qm1065328123 (30)_ZmlRK10QMatrix4x4RK9QVector3D
/*void qm1065328123_64(const QMatrix4x4 & matrix, const QVector3D & vector)*/ {
  const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_; const QVector3D & vector = *(const QVector3D *)this_;
  (void) operator*(matrix, vector);
  auto xptr = (QVector3D (*)(QMatrix4x4 const&, QVector3D const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:917
// [16] QPointF operator*(const QMatrix4x4 &, const QPointF &) 
// (12)qm1005198030 (28)_ZmlRK10QMatrix4x4RK7QPointF
/*void qm1005198030_65(const QMatrix4x4 & matrix, const QPointF & point)*/ {
  const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_; const QPointF & point = *(const QPointF *)this_;
  (void) operator*(matrix, point);
  auto xptr = (QPointF (*)(QMatrix4x4 const&, QPointF const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:885
// [8] QPoint operator*(const QMatrix4x4 &, const QPoint &) 
// (11)qm757562868 (27)_ZmlRK10QMatrix4x4RK6QPoint
/*void qm757562868_66(const QMatrix4x4 & matrix, const QPoint & point)*/ {
  const QMatrix4x4 & matrix = *(const QMatrix4x4 *)this_; const QPoint & point = *(const QPoint *)this_;
  (void) operator*(matrix, point);
  auto xptr = (QPoint (*)(QMatrix4x4 const&, QPoint const&) ) &operator*;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:252
// [16] const QVector4D operator-(const QVector4D &, const QVector4D &) 
// (11)qm154803878 (19)_ZmiRK9QVector4DS1_
/*void qm154803878_29(const QVector4D & v1, const QVector4D & v2)*/ {
  const QVector4D & v1 = *(const QVector4D *)this_; const QVector4D & v2 = *(const QVector4D *)this_;
  (void) operator-(v1, v2);
  auto xptr = (const QVector4D (*)(QVector4D const&, QVector4D const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:252
// [12] const QVector3D operator-(const QVector3D &, const QVector3D &) 
// (12)qm3139093174 (19)_ZmiRK9QVector3DS1_
/*void qm3139093174_30(const QVector3D & v1, const QVector3D & v2)*/ {
  const QVector3D & v1 = *(const QVector3D *)this_; const QVector3D & v2 = *(const QVector3D *)this_;
  (void) operator-(v1, v2);
  auto xptr = (const QVector3D (*)(QVector3D const&, QVector3D const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:227
// [8] const QVector2D operator-(const QVector2D &, const QVector2D &) 
// (12)qm2256202502 (19)_ZmiRK9QVector2DS1_
/*void qm2256202502_31(const QVector2D & v1, const QVector2D & v2)*/ {
  const QVector2D & v1 = *(const QVector2D *)this_; const QVector2D & v2 = *(const QVector2D *)this_;
  (void) operator-(v1, v2);
  auto xptr = (const QVector2D (*)(QVector2D const&, QVector2D const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:299
// [16] const QQuaternion operator-(const QQuaternion &, const QQuaternion &) 
// (11)qm900407392 (22)_ZmiRK11QQuaternionS1_
/*void qm900407392_32(const QQuaternion & q1, const QQuaternion & q2)*/ {
  const QQuaternion & q1 = *(const QQuaternion *)this_; const QQuaternion & q2 = *(const QQuaternion *)this_;
  (void) operator-(q1, q2);
  auto xptr = (const QQuaternion (*)(QQuaternion const&, QQuaternion const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:417
// [88] QTransform operator-(const QTransform &, qreal) 
// (11)qm124109690 (19)_ZmiRK10QTransformd
/*void qm124109690_33(const QTransform & a, double n)*/ {
  const QTransform & a = *(const QTransform *)this_; double n = *(double*)this_;
  (void) operator-(a, n);
  auto xptr = (QTransform (*)(QTransform const&, double) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:615
// [68] QMatrix4x4 operator-(const QMatrix4x4 &, const QMatrix4x4 &) 
// (12)qm3883486093 (21)_ZmiRK10QMatrix4x4S1_
/*void qm3883486093_34(const QMatrix4x4 & m1, const QMatrix4x4 & m2)*/ {
  const QMatrix4x4 & m1 = *(const QMatrix4x4 *)this_; const QMatrix4x4 & m2 = *(const QMatrix4x4 *)this_;
  (void) operator-(m1, m2);
  auto xptr = (QMatrix4x4 (*)(QMatrix4x4 const&, QMatrix4x4 const&) ) &operator-;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:236
// [1] bool operator==(const QVector4D &, const QVector4D &) 
// (12)qm2048848105 (19)_ZeqRK9QVector4DS1_
/*void qm2048848105_48(const QVector4D & v1, const QVector4D & v2)*/ {
  const QVector4D & v1 = *(const QVector4D *)this_; const QVector4D & v2 = *(const QVector4D *)this_;
  (void) operator==(v1, v2);
  auto xptr = (bool (*)(QVector4D const&, QVector4D const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:236
// [1] bool operator==(const QVector3D &, const QVector3D &) 
// (12)qm3359517945 (19)_ZeqRK9QVector3DS1_
/*void qm3359517945_49(const QVector3D & v1, const QVector3D & v2)*/ {
  const QVector3D & v1 = *(const QVector3D *)this_; const QVector3D & v2 = *(const QVector3D *)this_;
  (void) operator==(v1, v2);
  auto xptr = (bool (*)(QVector3D const&, QVector3D const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:211
// [1] bool operator==(const QVector2D &, const QVector2D &) 
// (12)qm4116579657 (19)_ZeqRK9QVector2DS1_
/*void qm4116579657_50(const QVector2D & v1, const QVector2D & v2)*/ {
  const QVector2D & v1 = *(const QVector2D *)this_; const QVector2D & v2 = *(const QVector2D *)this_;
  (void) operator==(v1, v2);
  auto xptr = (bool (*)(QVector2D const&, QVector2D const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:114
// [1] bool operator==(const QOpenGLVersionProfile &, const QOpenGLVersionProfile &) 
// (12)qm3753726848 (32)_ZeqRK21QOpenGLVersionProfileS1_
/*void qm3753726848_51(const QOpenGLVersionProfile & lhs, const QOpenGLVersionProfile & rhs)*/ {
  const QOpenGLVersionProfile & lhs = *(const QOpenGLVersionProfile *)this_; const QOpenGLVersionProfile & rhs = *(const QOpenGLVersionProfile *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QOpenGLVersionProfile const&, QOpenGLVersionProfile const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:112
// [1] bool operator==(const QOpenGLVersionStatus &, const QOpenGLVersionStatus &) 
// (12)qm3262995055 (31)_ZeqRK20QOpenGLVersionStatusS1_
/*void qm3262995055_52(const QOpenGLVersionStatus & lhs, const QOpenGLVersionStatus & rhs)*/ {
  const QOpenGLVersionStatus & lhs = *(const QOpenGLVersionStatus *)this_; const QOpenGLVersionStatus & rhs = *(const QOpenGLVersionStatus *)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QOpenGLVersionStatus const&, QOpenGLVersionStatus const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:185
// [1] bool operator==(const QQuaternion &, const QQuaternion &) 
// (12)qm2996031581 (22)_ZeqRK11QQuaternionS1_
/*void qm2996031581_53(const QQuaternion & q1, const QQuaternion & q2)*/ {
  const QQuaternion & q1 = *(const QQuaternion *)this_; const QQuaternion & q2 = *(const QQuaternion *)this_;
  (void) operator==(q1, q2);
  auto xptr = (bool (*)(QQuaternion const&, QQuaternion const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:841
// [1] bool operator==(QKeyEvent *, QKeySequence::StandardKey) 
// (12)qm4012429942 (44)_ZeqP9QKeyEventN12QKeySequence11StandardKeyE
/*void qm4012429942_54(QKeyEvent * e, QKeySequence::StandardKey key)*/ {
  QKeyEvent * e = *(QKeyEvent **)this_; QKeySequence::StandardKey key = *(QKeySequence::StandardKey*)this_;
  (void) operator==(e, key);
  auto xptr = (bool (*)(QKeyEvent*, QKeySequence::StandardKey) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qevent.h:842
// [1] bool operator==(QKeySequence::StandardKey, QKeyEvent *) 
// (12)qm1401946070 (44)_ZeqN12QKeySequence11StandardKeyEP9QKeyEvent
/*void qm1401946070_55(QKeySequence::StandardKey key, QKeyEvent * e)*/ {
  QKeySequence::StandardKey key = *(QKeySequence::StandardKey*)this_; QKeyEvent * e = *(QKeyEvent **)this_;
  (void) operator==(key, e);
  auto xptr = (bool (*)(QKeySequence::StandardKey, QKeyEvent*) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:277
// [16] const QVector4D operator/(const QVector4D &, float) 
// (12)qm4109736406 (17)_ZdvRK9QVector4Df
/*void qm4109736406_16(const QVector4D & vector, float divisor)*/ {
  const QVector4D & vector = *(const QVector4D *)this_; float divisor = *(float*)this_;
  (void) operator/(vector, divisor);
  auto xptr = (const QVector4D (*)(QVector4D const&, float) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:282
// [16] const QVector4D operator/(const QVector4D &, const QVector4D &) 
// (9)qm4309983 (19)_ZdvRK9QVector4DS1_
/*void qm4309983_17(const QVector4D & vector, const QVector4D & divisor)*/ {
  const QVector4D & vector = *(const QVector4D *)this_; const QVector4D & divisor = *(const QVector4D *)this_;
  (void) operator/(vector, divisor);
  auto xptr = (const QVector4D (*)(QVector4D const&, QVector4D const&) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:277
// [12] const QVector3D operator/(const QVector3D &, float) 
// (12)qm4055535443 (17)_ZdvRK9QVector3Df
/*void qm4055535443_18(const QVector3D & vector, float divisor)*/ {
  const QVector3D & vector = *(const QVector3D *)this_; float divisor = *(float*)this_;
  (void) operator/(vector, divisor);
  auto xptr = (const QVector3D (*)(QVector3D const&, float) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:282
// [12] const QVector3D operator/(const QVector3D &, const QVector3D &) 
// (12)qm2992709583 (19)_ZdvRK9QVector3DS1_
/*void qm2992709583_19(const QVector3D & vector, const QVector3D & divisor)*/ {
  const QVector3D & vector = *(const QVector3D *)this_; const QVector3D & divisor = *(const QVector3D *)this_;
  (void) operator/(vector, divisor);
  auto xptr = (const QVector3D (*)(QVector3D const&, QVector3D const&) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:252
// [8] const QVector2D operator/(const QVector2D &, float) 
// (12)qm4034454884 (17)_ZdvRK9QVector2Df
/*void qm4034454884_20(const QVector2D & vector, float divisor)*/ {
  const QVector2D & vector = *(const QVector2D *)this_; float divisor = *(float*)this_;
  (void) operator/(vector, divisor);
  auto xptr = (const QVector2D (*)(QVector2D const&, float) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:257
// [8] const QVector2D operator/(const QVector2D &, const QVector2D &) 
// (12)qm2399221375 (19)_ZdvRK9QVector2DS1_
/*void qm2399221375_21(const QVector2D & vector, const QVector2D & divisor)*/ {
  const QVector2D & vector = *(const QVector2D *)this_; const QVector2D & divisor = *(const QVector2D *)this_;
  (void) operator/(vector, divisor);
  auto xptr = (const QVector2D (*)(QVector2D const&, QVector2D const&) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:319
// [16] const QQuaternion operator/(const QQuaternion &, float) 
// (12)qm2481458090 (20)_ZdvRK11QQuaternionf
/*void qm2481458090_22(const QQuaternion & quaternion, float divisor)*/ {
  const QQuaternion & quaternion = *(const QQuaternion *)this_; float divisor = *(float*)this_;
  (void) operator/(quaternion, divisor);
  auto xptr = (const QQuaternion (*)(QQuaternion const&, float) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:413
// [88] QTransform operator/(const QTransform &, qreal) 
// (11)qm236854787 (19)_ZdvRK10QTransformd
/*void qm236854787_23(const QTransform & a, double n)*/ {
  const QTransform & a = *(const QTransform *)this_; double n = *(double*)this_;
  (void) operator/(a, n);
  auto xptr = (QTransform (*)(QTransform const&, double) ) &operator/;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:225
// [8] QRgba64 qRgba64(quint64) 
// (12)qm2006672096 (11)_Z7qRgba64y
/*void qm2006672096(unsigned long long c)*/ {
  unsigned long long c = *(unsigned long long*)this_;
  (void) qRgba64(c);
  auto xptr = (QRgba64 (*)(unsigned long long) ) &qRgba64;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:220
// [8] QRgba64 qRgba64(quint16, quint16, quint16, quint16) 
// (12)qm3676068778 (14)_Z7qRgba64tttt
/*void qm3676068778_1(unsigned short r, unsigned short g, unsigned short b, unsigned short a)*/ {
  unsigned short r = *(unsigned short*)this_; unsigned short g = *(unsigned short*)this_; unsigned short b = *(unsigned short*)this_; unsigned short a = *(unsigned short*)this_;
  (void) qRgba64(r, g, b, a);
  auto xptr = (QRgba64 (*)(unsigned short, unsigned short, unsigned short, unsigned short) ) &qRgba64;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:78
// [1] bool qIsGray(QRgb) 
// (12)qm1762851583 (11)_Z7qIsGrayj
/*void qm1762851583(unsigned int rgb)*/ {
  unsigned int rgb = *(unsigned int*)this_;
  (void) qIsGray(rgb);
  auto xptr = (bool (*)(unsigned int) ) &qIsGray;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:57
// [4] int qGreen(QRgb) 
// (12)qm3236345552 (10)_Z6qGreenj
/*void qm3236345552(unsigned int rgb)*/ {
  unsigned int rgb = *(unsigned int*)this_;
  (void) qGreen(rgb);
  auto xptr = (int (*)(unsigned int) ) &qGreen;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:243
// [4] uint qGreen(QRgba64) 
// (12)qm2057440704 (17)_Z6qGreen7QRgba64
/*void qm2057440704_1(QRgba64 rgb)*/ {
  QRgba64 rgb = *(QRgba64*)this_;
  (void) qGreen(rgb);
  auto xptr = (unsigned int (*)(QRgba64) ) &qGreen;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:63
// [4] int qAlpha(QRgb) 
// (11)qm568874015 (10)_Z6qAlphaj
/*void qm568874015(unsigned int rgb)*/ {
  unsigned int rgb = *(unsigned int*)this_;
  (void) qAlpha(rgb);
  auto xptr = (int (*)(unsigned int) ) &qAlpha;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:249
// [4] uint qAlpha(QRgba64) 
// (12)qm3397959703 (17)_Z6qAlpha7QRgba64
/*void qm3397959703_1(QRgba64 rgb)*/ {
  QRgba64 rgb = *(QRgba64*)this_;
  (void) qAlpha(rgb);
  auto xptr = (unsigned int (*)(QRgba64) ) &qAlpha;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:69
// [4] QRgb qRgba(int, int, int, int) 
// (12)qm4281085712 (12)_Z5qRgbaiiii
/*void qm4281085712(int r, int g, int b, int a)*/ {
  int r = *(int*)this_; int g = *(int*)this_; int b = *(int*)this_; int a = *(int*)this_;
  (void) qRgba(r, g, b, a);
  auto xptr = (unsigned int (*)(int, int, int, int) ) &qRgba;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglcontext.h:108
// [4] uint qHash(const QOpenGLVersionProfile &, uint) 
// (12)qm1295424094 (34)_Z5qHashRK21QOpenGLVersionProfilej
/*void qm1295424094_18(const QOpenGLVersionProfile & v, unsigned int seed)*/ {
  const QOpenGLVersionProfile & v = *(const QOpenGLVersionProfile *)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(v, seed);
  auto xptr = (unsigned int (*)(QOpenGLVersionProfile const&, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglversionfunctions.h:106
// [4] uint qHash(const QOpenGLVersionStatus &, uint) 
// (12)qm1995539202 (33)_Z5qHashRK20QOpenGLVersionStatusj
/*void qm1995539202_19(const QOpenGLVersionStatus & v, unsigned int seed)*/ {
  const QOpenGLVersionStatus & v = *(const QOpenGLVersionStatus *)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(v, seed);
  auto xptr = (unsigned int (*)(QOpenGLVersionStatus const&, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:75
// [4] int qGray(QRgb) 
// (12)qm2219517494 (9)_Z5qGrayj
/*void qm2219517494(unsigned int rgb)*/ {
  unsigned int rgb = *(unsigned int*)this_;
  (void) qGray(rgb);
  auto xptr = (int (*)(unsigned int) ) &qGray;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:72
// [4] int qGray(int, int, int) 
// (12)qm2564765047 (11)_Z5qGrayiii
/*void qm2564765047_1(int r, int g, int b)*/ {
  int r = *(int*)this_; int g = *(int*)this_; int b = *(int*)this_;
  (void) qGray(r, g, b);
  auto xptr = (int (*)(int, int, int) ) &qGray;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:60
// [4] int qBlue(QRgb) 
// (10)qm20307739 (9)_Z5qBluej
/*void qm20307739(unsigned int rgb)*/ {
  unsigned int rgb = *(unsigned int*)this_;
  (void) qBlue(rgb);
  auto xptr = (int (*)(unsigned int) ) &qBlue;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:246
// [4] uint qBlue(QRgba64) 
// (12)qm2615612617 (16)_Z5qBlue7QRgba64
/*void qm2615612617_1(QRgba64 rgb)*/ {
  QRgba64 rgb = *(QRgba64*)this_;
  (void) qBlue(rgb);
  auto xptr = (unsigned int (*)(QRgba64) ) &qBlue;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmapcache.h:97
// [-2] void swap(QPixmapCache::Key &, QPixmapCache::Key &) 
// (12)qm1402637685 (31)_Z4swapRN12QPixmapCache3KeyES1_
/*void qm1402637685_35(QPixmapCache::Key & value1, QPixmapCache::Key & value2)*/ {
  QPixmapCache::Key & value1 = *(QPixmapCache::Key *)this_; QPixmapCache::Key & value2 = *(QPixmapCache::Key *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPixmapCache::Key&, QPixmapCache::Key&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:175
// [-2] void swap(QPolygonF &, QPolygonF &) 
// (12)qm3485969649 (21)_Z4swapR9QPolygonFS0_
/*void qm3485969649_36(QPolygonF & value1, QPolygonF & value2)*/ {
  QPolygonF & value1 = *(QPolygonF *)this_; QPolygonF & value2 = *(QPolygonF *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPolygonF&, QPolygonF&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagesize.h:296
// [-2] void swap(QPageSize &, QPageSize &) 
// (12)qm3588060469 (21)_Z4swapR9QPageSizeS0_
/*void qm3588060469_37(QPageSize & value1, QPageSize & value2)*/ {
  QPageSize & value1 = *(QPageSize *)this_; QPageSize & value2 = *(QPageSize *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPageSize&, QPageSize&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qglyphrun.h:126
// [-2] void swap(QGlyphRun &, QGlyphRun &) 
// (12)qm1715445623 (21)_Z4swapR9QGlyphRunS0_
/*void qm1715445623_38(QGlyphRun & value1, QGlyphRun & value2)*/ {
  QGlyphRun & value1 = *(QGlyphRun *)this_; QGlyphRun & value2 = *(QGlyphRun *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QGlyphRun&, QGlyphRun&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontinfo.h:85
// [-2] void swap(QFontInfo &, QFontInfo &) 
// (12)qm2246288703 (21)_Z4swapR9QFontInfoS0_
/*void qm2246288703_39(QFontInfo & value1, QFontInfo & value2)*/ {
  QFontInfo & value1 = *(QFontInfo *)this_; QFontInfo & value2 = *(QFontInfo *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QFontInfo&, QFontInfo&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrawfont.h:155
// [-2] void swap(QRawFont &, QRawFont &) 
// (12)qm1033674329 (20)_Z4swapR8QRawFontS0_
/*void qm1033674329_40(QRawFont & value1, QRawFont & value2)*/ {
  QRawFont & value1 = *(QRawFont *)this_; QRawFont & value2 = *(QRawFont *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QRawFont&, QRawFont&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpolygon.h:100
// [-2] void swap(QPolygon &, QPolygon &) 
// (12)qm1623617814 (20)_Z4swapR8QPolygonS0_
/*void qm1623617814_41(QPolygon & value1, QPolygon & value2)*/ {
  QPolygon & value1 = *(QPolygon *)this_; QPolygon & value2 = *(QPolygon *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPolygon&, QPolygon&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpicture.h:119
// [-2] void swap(QPicture &, QPicture &) 
// (12)qm2856586322 (20)_Z4swapR8QPictureS0_
/*void qm2856586322_42(QPicture & value1, QPicture & value2)*/ {
  QPicture & value1 = *(QPicture *)this_; QPicture & value2 = *(QPicture *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPicture&, QPicture&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpalette.h:198
// [-2] void swap(QPalette &, QPalette &) 
// (12)qm1292438937 (20)_Z4swapR8QPaletteS0_
/*void qm1292438937_43(QPalette & value1, QPalette & value2)*/ {
  QPalette & value1 = *(QPalette *)this_; QPalette & value2 = *(QPalette *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPalette&, QPalette&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qregion.h:182
// [-2] void swap(QRegion &, QRegion &) 
// (12)qm1663581125 (19)_Z4swapR7QRegionS0_
/*void qm1663581125_44(QRegion & value1, QRegion & value2)*/ {
  QRegion & value1 = *(QRegion *)this_; QRegion & value2 = *(QRegion *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QRegion&, QRegion&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixmap.h:213
// [-2] void swap(QPixmap &, QPixmap &) 
// (11)qm528496368 (19)_Z4swapR7QPixmapS0_
/*void qm528496368_45(QPixmap & value1, QPixmap & value2)*/ {
  QPixmap & value1 = *(QPixmap *)this_; QPixmap & value2 = *(QPixmap *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPixmap&, QPixmap&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcursor.h:127
// [-2] void swap(QCursor &, QCursor &) 
// (11)qm692856431 (19)_Z4swapR7QCursorS0_
/*void qm692856431_46(QCursor & value1, QCursor & value2)*/ {
  QCursor & value1 = *(QCursor *)this_; QCursor & value2 = *(QCursor *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QCursor&, QCursor&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbitmap.h:87
// [-2] void swap(QBitmap &, QBitmap &) 
// (12)qm1511405171 (19)_Z4swapR7QBitmapS0_
/*void qm1511405171_47(QBitmap & value1, QBitmap & value2)*/ {
  QBitmap & value1 = *(QBitmap *)this_; QBitmap & value2 = *(QBitmap *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QBitmap&, QBitmap&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qimage.h:395
// [-2] void swap(QImage &, QImage &) 
// (12)qm1702619958 (18)_Z4swapR6QImageS0_
/*void qm1702619958_48(QImage & value1, QImage & value2)*/ {
  QImage & value1 = *(QImage *)this_; QImage & value2 = *(QImage *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QImage&, QImage&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qbrush.h:137
// [-2] void swap(QBrush &, QBrush &) 
// (12)qm1456124501 (18)_Z4swapR6QBrushS0_
/*void qm1456124501_49(QBrush & value1, QBrush & value2)*/ {
  QBrush & value1 = *(QBrush *)this_; QBrush & value2 = *(QBrush *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QBrush&, QBrush&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qicon.h:141
// [-2] void swap(QIcon &, QIcon &) 
// (12)qm3067933168 (17)_Z4swapR5QIconS0_
/*void qm3067933168_50(QIcon & value1, QIcon & value2)*/ {
  QIcon & value1 = *(QIcon *)this_; QIcon & value2 = *(QIcon *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QIcon&, QIcon&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfont.h:348
// [-2] void swap(QFont &, QFont &) 
// (11)qm898817833 (17)_Z4swapR5QFontS0_
/*void qm898817833_51(QFont & value1, QFont & value2)*/ {
  QFont & value1 = *(QFont *)this_; QFont & value2 = *(QFont *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QFont&, QFont&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpen.h:131
// [-2] void swap(QPen &, QPen &) 
// (12)qm3579268640 (16)_Z4swapR4QPenS0_
/*void qm3579268640_52(QPen & value1, QPen & value2)*/ {
  QPen & value1 = *(QPen *)this_; QPen & value2 = *(QPen *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPen&, QPen&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopenglpixeltransferoptions.h:94
// [-2] void swap(QOpenGLPixelTransferOptions &, QOpenGLPixelTransferOptions &) 
// (12)qm3772832264 (40)_Z4swapR27QOpenGLPixelTransferOptionsS0_
/*void qm3772832264_53(QOpenGLPixelTransferOptions & value1, QOpenGLPixelTransferOptions & value2)*/ {
  QOpenGLPixelTransferOptions & value1 = *(QOpenGLPixelTransferOptions *)this_; QOpenGLPixelTransferOptions & value2 = *(QOpenGLPixelTransferOptions *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QOpenGLPixelTransferOptions&, QOpenGLPixelTransferOptions&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:1102
// [-2] void swap(QTextTableCellFormat &, QTextTableCellFormat &) 
// (12)qm1777091189 (33)_Z4swapR20QTextTableCellFormatS0_
/*void qm1777091189_54(QTextTableCellFormat & value1, QTextTableCellFormat & value2)*/ {
  QTextTableCellFormat & value1 = *(QTextTableCellFormat *)this_; QTextTableCellFormat & value2 = *(QTextTableCellFormat *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTextTableCellFormat&, QTextTableCellFormat&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qopengldebug.h:142
// [-2] void swap(QOpenGLDebugMessage &, QOpenGLDebugMessage &) 
// (12)qm4022957888 (32)_Z4swapR19QOpenGLDebugMessageS0_
/*void qm4022957888_55(QOpenGLDebugMessage & value1, QOpenGLDebugMessage & value2)*/ {
  QOpenGLDebugMessage & value1 = *(QOpenGLDebugMessage *)this_; QOpenGLDebugMessage & value2 = *(QOpenGLDebugMessage *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QOpenGLDebugMessage&, QOpenGLDebugMessage&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:995
// [-2] void swap(QTextTableFormat &, QTextTableFormat &) 
// (12)qm1773612018 (29)_Z4swapR16QTextTableFormatS0_
/*void qm1773612018_56(QTextTableFormat & value1, QTextTableFormat & value2)*/ {
  QTextTableFormat & value1 = *(QTextTableFormat *)this_; QTextTableFormat & value2 = *(QTextTableFormat *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTextTableFormat&, QTextTableFormat&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:816
// [-2] void swap(QTextImageFormat &, QTextImageFormat &) 
// (12)qm1996131210 (29)_Z4swapR16QTextImageFormatS0_
/*void qm1996131210_57(QTextImageFormat & value1, QTextImageFormat & value2)*/ {
  QTextImageFormat & value1 = *(QTextImageFormat *)this_; QTextImageFormat & value2 = *(QTextImageFormat *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTextImageFormat&, QTextImageFormat&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:919
// [-2] void swap(QTextFrameFormat &, QTextFrameFormat &) 
// (12)qm1370887191 (29)_Z4swapR16QTextFrameFormatS0_
/*void qm1370887191_58(QTextFrameFormat & value1, QTextFrameFormat & value2)*/ {
  QTextFrameFormat & value1 = *(QTextFrameFormat *)this_; QTextFrameFormat & value2 = *(QTextFrameFormat *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTextFrameFormat&, QTextFrameFormat&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:709
// [-2] void swap(QTextBlockFormat &, QTextBlockFormat &) 
// (12)qm2742417869 (29)_Z4swapR16QTextBlockFormatS0_
/*void qm2742417869_59(QTextBlockFormat & value1, QTextBlockFormat & value2)*/ {
  QTextBlockFormat & value1 = *(QTextBlockFormat *)this_; QTextBlockFormat & value2 = *(QTextBlockFormat *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTextBlockFormat&, QTextBlockFormat&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:774
// [-2] void swap(QTextListFormat &, QTextListFormat &) 
// (11)qm200865570 (28)_Z4swapR15QTextListFormatS0_
/*void qm200865570_60(QTextListFormat & value1, QTextListFormat & value2)*/ {
  QTextListFormat & value1 = *(QTextListFormat *)this_; QTextListFormat & value2 = *(QTextListFormat *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTextListFormat&, QTextListFormat&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:601
// [-2] void swap(QTextCharFormat &, QTextCharFormat &) 
// (12)qm1286169397 (28)_Z4swapR15QTextCharFormatS0_
/*void qm1286169397_61(QTextCharFormat & value1, QTextCharFormat & value2)*/ {
  QTextCharFormat & value1 = *(QTextCharFormat *)this_; QTextCharFormat & value2 = *(QTextCharFormat *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTextCharFormat&, QTextCharFormat&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolortransform.h:87
// [-2] void swap(QColorTransform &, QColorTransform &) 
// (12)qm2654600898 (28)_Z4swapR15QColorTransformS0_
/*void qm2654600898_62(QColorTransform & value1, QColorTransform & value2)*/ {
  QColorTransform & value1 = *(QColorTransform *)this_; QColorTransform & value2 = *(QColorTransform *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QColorTransform&, QColorTransform&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:230
// [-2] void swap(QFontMetricsF &, QFontMetricsF &) 
// (12)qm3726005175 (26)_Z4swapR13QFontMetricsFS0_
/*void qm3726005175_63(QFontMetricsF & value1, QFontMetricsF & value2)*/ {
  QFontMetricsF & value1 = *(QFontMetricsF *)this_; QFontMetricsF & value2 = *(QFontMetricsF *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QFontMetricsF&, QFontMetricsF&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpainterpath.h:253
// [-2] void swap(QPainterPath &, QPainterPath &) 
// (12)qm1787308344 (25)_Z4swapR12QPainterPathS0_
/*void qm1787308344_64(QPainterPath & value1, QPainterPath & value2)*/ {
  QPainterPath & value1 = *(QPainterPath *)this_; QPainterPath & value2 = *(QPainterPath *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPainterPath&, QPainterPath&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qkeysequence.h:224
// [-2] void swap(QKeySequence &, QKeySequence &) 
// (12)qm1954542613 (25)_Z4swapR12QKeySequenceS0_
/*void qm1954542613_65(QKeySequence & value1, QKeySequence & value2)*/ {
  QKeySequence & value1 = *(QKeySequence *)this_; QKeySequence & value2 = *(QKeySequence *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QKeySequence&, QKeySequence&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qfontmetrics.h:150
// [-2] void swap(QFontMetrics &, QFontMetrics &) 
// (12)qm2248128051 (25)_Z4swapR12QFontMetricsS0_
/*void qm2248128051_66(QFontMetrics & value1, QFontMetrics & value2)*/ {
  QFontMetrics & value1 = *(QFontMetrics *)this_; QFontMetrics & value2 = *(QFontMetrics *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QFontMetrics&, QFontMetrics&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextformat.h:408
// [-2] void swap(QTextFormat &, QTextFormat &) 
// (11)qm676668897 (24)_Z4swapR11QTextFormatS0_
/*void qm676668897_67(QTextFormat & value1, QTextFormat & value2)*/ {
  QTextFormat & value1 = *(QTextFormat *)this_; QTextFormat & value2 = *(QTextFormat *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTextFormat&, QTextFormat&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtextcursor.h:237
// [-2] void swap(QTextCursor &, QTextCursor &) 
// (11)qm742313755 (24)_Z4swapR11QTextCursorS0_
/*void qm742313755_68(QTextCursor & value1, QTextCursor & value2)*/ {
  QTextCursor & value1 = *(QTextCursor *)this_; QTextCursor & value2 = *(QTextCursor *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QTextCursor&, QTextCursor&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstatictext.h:102
// [-2] void swap(QStaticText &, QStaticText &) 
// (11)qm805919585 (24)_Z4swapR11QStaticTextS0_
/*void qm805919585_69(QStaticText & value1, QStaticText & value2)*/ {
  QStaticText & value1 = *(QStaticText *)this_; QStaticText & value2 = *(QStaticText *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QStaticText&, QStaticText&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpagelayout.h:139
// [-2] void swap(QPageLayout &, QPageLayout &) 
// (12)qm1149498060 (24)_Z4swapR11QPageLayoutS0_
/*void qm1149498060_70(QPageLayout & value1, QPageLayout & value2)*/ {
  QPageLayout & value1 = *(QPageLayout *)this_; QPageLayout & value2 = *(QPageLayout *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QPageLayout&, QPageLayout&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qcolorspace.h:146
// [-2] void swap(QColorSpace &, QColorSpace &) 
// (11)qm435209584 (24)_Z4swapR11QColorSpaceS0_
/*void qm435209584_71(QColorSpace & value1, QColorSpace & value2)*/ {
  QColorSpace & value1 = *(QColorSpace *)this_; QColorSpace & value2 = *(QColorSpace *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QColorSpace&, QColorSpace&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:66
// [4] QRgb qRgb(int, int, int) 
// (11)qm995966167 (10)_Z4qRgbiii
/*void qm995966167(int r, int g, int b)*/ {
  int r = *(int*)this_; int g = *(int*)this_; int b = *(int*)this_;
  (void) qRgb(r, g, b);
  auto xptr = (unsigned int (*)(int, int, int) ) &qRgb;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:54
// [4] int qRed(QRgb) 
// (12)qm3057052729 (8)_Z4qRedj
/*void qm3057052729(unsigned int rgb)*/ {
  unsigned int rgb = *(unsigned int*)this_;
  (void) qRed(rgb);
  auto xptr = (int (*)(unsigned int) ) &qRed;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:240
// [4] uint qRed(QRgba64) 
// (12)qm2251179404 (15)_Z4qRed7QRgba64
/*void qm2251179404_1(QRgba64 rgb)*/ {
  QRgba64 rgb = *(QRgba64*)this_;
  (void) qRed(rgb);
  auto xptr = (unsigned int (*)(QRgba64) ) &qRed;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:298
// [8] QPixelFormat qPixelFormatGrayscale(uchar, QPixelFormat::TypeInterpretation) 
// (12)qm4066497087 (62)_Z21qPixelFormatGrayscalehN12QPixelFormat18TypeInterpretationE
/*void qm4066497087(unsigned char channelSize, QPixelFormat::TypeInterpretation typeInt)*/ {
  unsigned char channelSize = *(unsigned char*)this_; QPixelFormat::TypeInterpretation typeInt = *(QPixelFormat::TypeInterpretation*)this_;
  (void) qPixelFormatGrayscale(channelSize, typeInt);
  auto xptr = (QPixelFormat (*)(unsigned char, QPixelFormat::TypeInterpretation) ) &qPixelFormatGrayscale;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:314
// [8] QPixelFormat qPixelFormatAlpha(uchar, QPixelFormat::TypeInterpretation) 
// (12)qm3765833854 (58)_Z17qPixelFormatAlphahN12QPixelFormat18TypeInterpretationE
/*void qm3765833854(unsigned char channelSize, QPixelFormat::TypeInterpretation typeInt)*/ {
  unsigned char channelSize = *(unsigned char*)this_; QPixelFormat::TypeInterpretation typeInt = *(QPixelFormat::TypeInterpretation*)this_;
  (void) qPixelFormatAlpha(channelSize, typeInt);
  auto xptr = (QPixelFormat (*)(unsigned char, QPixelFormat::TypeInterpretation) ) &qPixelFormatAlpha;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:276
// [8] QPixelFormat qPixelFormatRgba(uchar, uchar, uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::AlphaPremultiplied, QPixelFormat::TypeInterpretation) 
// (12)qm3205741864 (119)_Z16qPixelFormatRgbahhhhN12QPixelFormat10AlphaUsageENS_13AlphaPositionENS_18AlphaPremultipliedENS_18TypeInterpretationE
/*void qm3205741864(unsigned char red, unsigned char green, unsigned char blue, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::AlphaPremultiplied pmul, QPixelFormat::TypeInterpretation typeInt)*/ {
  unsigned char red = *(unsigned char*)this_; unsigned char green = *(unsigned char*)this_; unsigned char blue = *(unsigned char*)this_; unsigned char alfa = *(unsigned char*)this_; QPixelFormat::AlphaUsage usage = *(QPixelFormat::AlphaUsage*)this_; QPixelFormat::AlphaPosition position = *(QPixelFormat::AlphaPosition*)this_; QPixelFormat::AlphaPremultiplied pmul = *(QPixelFormat::AlphaPremultiplied*)this_; QPixelFormat::TypeInterpretation typeInt = *(QPixelFormat::TypeInterpretation*)this_;
  (void) qPixelFormatRgba(red, green, blue, alfa, usage, position, pmul, typeInt);
  auto xptr = (QPixelFormat (*)(unsigned char, unsigned char, unsigned char, unsigned char, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::AlphaPremultiplied, QPixelFormat::TypeInterpretation) ) &qPixelFormatRgba;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:330
// [8] QPixelFormat qPixelFormatCmyk(uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::TypeInterpretation) 
// (12)qm2810192667 (93)_Z16qPixelFormatCmykhhN12QPixelFormat10AlphaUsageENS_13AlphaPositionENS_18TypeInterpretationE
/*void qm2810192667(unsigned char channelSize, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::TypeInterpretation typeInt)*/ {
  unsigned char channelSize = *(unsigned char*)this_; unsigned char alfa = *(unsigned char*)this_; QPixelFormat::AlphaUsage usage = *(QPixelFormat::AlphaUsage*)this_; QPixelFormat::AlphaPosition position = *(QPixelFormat::AlphaPosition*)this_; QPixelFormat::TypeInterpretation typeInt = *(QPixelFormat::TypeInterpretation*)this_;
  (void) qPixelFormatCmyk(channelSize, alfa, usage, position, typeInt);
  auto xptr = (QPixelFormat (*)(unsigned char, unsigned char, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::TypeInterpretation) ) &qPixelFormatCmyk;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:387
// [8] QPixelFormat qPixelFormatYuv(QPixelFormat::YUVLayout, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::AlphaPremultiplied, QPixelFormat::TypeInterpretation, QPixelFormat::ByteOrder) 
// (8)qm824968 (143)_Z15qPixelFormatYuvN12QPixelFormat9YUVLayoutEhNS_10AlphaUsageENS_13AlphaPositionENS_18AlphaPremultipliedENS_18TypeInterpretationENS_9ByteOrderE
/*void qm824968(QPixelFormat::YUVLayout layout, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::AlphaPremultiplied p_mul, QPixelFormat::TypeInterpretation typeInt, QPixelFormat::ByteOrder b_order)*/ {
  QPixelFormat::YUVLayout layout = *(QPixelFormat::YUVLayout*)this_; unsigned char alfa = *(unsigned char*)this_; QPixelFormat::AlphaUsage usage = *(QPixelFormat::AlphaUsage*)this_; QPixelFormat::AlphaPosition position = *(QPixelFormat::AlphaPosition*)this_; QPixelFormat::AlphaPremultiplied p_mul = *(QPixelFormat::AlphaPremultiplied*)this_; QPixelFormat::TypeInterpretation typeInt = *(QPixelFormat::TypeInterpretation*)this_; QPixelFormat::ByteOrder b_order = *(QPixelFormat::ByteOrder*)this_;
  (void) qPixelFormatYuv(layout, alfa, usage, position, p_mul, typeInt, b_order);
  auto xptr = (QPixelFormat (*)(QPixelFormat::YUVLayout, unsigned char, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::AlphaPremultiplied, QPixelFormat::TypeInterpretation, QPixelFormat::ByteOrder) ) &qPixelFormatYuv;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:368
// [8] QPixelFormat qPixelFormatHsv(uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::TypeInterpretation) 
// (11)qm721496816 (92)_Z15qPixelFormatHsvhhN12QPixelFormat10AlphaUsageENS_13AlphaPositionENS_18TypeInterpretationE
/*void qm721496816(unsigned char channelSize, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::TypeInterpretation typeInt)*/ {
  unsigned char channelSize = *(unsigned char*)this_; unsigned char alfa = *(unsigned char*)this_; QPixelFormat::AlphaUsage usage = *(QPixelFormat::AlphaUsage*)this_; QPixelFormat::AlphaPosition position = *(QPixelFormat::AlphaPosition*)this_; QPixelFormat::TypeInterpretation typeInt = *(QPixelFormat::TypeInterpretation*)this_;
  (void) qPixelFormatHsv(channelSize, alfa, usage, position, typeInt);
  auto xptr = (QPixelFormat (*)(unsigned char, unsigned char, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::TypeInterpretation) ) &qPixelFormatHsv;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qpixelformat.h:349
// [8] QPixelFormat qPixelFormatHsl(uchar, uchar, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::TypeInterpretation) 
// (12)qm3324172899 (92)_Z15qPixelFormatHslhhN12QPixelFormat10AlphaUsageENS_13AlphaPositionENS_18TypeInterpretationE
/*void qm3324172899(unsigned char channelSize, unsigned char alfa, QPixelFormat::AlphaUsage usage, QPixelFormat::AlphaPosition position, QPixelFormat::TypeInterpretation typeInt)*/ {
  unsigned char channelSize = *(unsigned char*)this_; unsigned char alfa = *(unsigned char*)this_; QPixelFormat::AlphaUsage usage = *(QPixelFormat::AlphaUsage*)this_; QPixelFormat::AlphaPosition position = *(QPixelFormat::AlphaPosition*)this_; QPixelFormat::TypeInterpretation typeInt = *(QPixelFormat::TypeInterpretation*)this_;
  (void) qPixelFormatHsl(channelSize, alfa, usage, position, typeInt);
  auto xptr = (QPixelFormat (*)(unsigned char, unsigned char, QPixelFormat::AlphaUsage, QPixelFormat::AlphaPosition, QPixelFormat::TypeInterpretation) ) &qPixelFormatHsl;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:96
// [4] QRgb qUnpremultiply(QRgb) 
// (12)qm4289233440 (19)_Z14qUnpremultiplyj
/*void qm4289233440(unsigned int p)*/ {
  unsigned int p = *(unsigned int*)this_;
  (void) qUnpremultiply(p);
  auto xptr = (unsigned int (*)(unsigned int) ) &qUnpremultiply;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:235
// [8] QRgba64 qUnpremultiply(QRgba64) 
// (12)qm3468459133 (26)_Z14qUnpremultiply7QRgba64
/*void qm3468459133_1(QRgba64 c)*/ {
  QRgba64 c = *(QRgba64*)this_;
  (void) qUnpremultiply(c);
  auto xptr = (QRgba64 (*)(QRgba64) ) &qUnpremultiply;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector4d.h:287
// [1] bool qFuzzyCompare(const QVector4D &, const QVector4D &) 
// (12)qm1599990616 (32)_Z13qFuzzyCompareRK9QVector4DS1_
/*void qm1599990616_3(const QVector4D & v1, const QVector4D & v2)*/ {
  const QVector4D & v1 = *(const QVector4D *)this_; const QVector4D & v2 = *(const QVector4D *)this_;
  (void) qFuzzyCompare(v1, v2);
  auto xptr = (bool (*)(QVector4D const&, QVector4D const&) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector3d.h:287
// [1] bool qFuzzyCompare(const QVector3D &, const QVector3D &) 
// (12)qm3984406344 (32)_Z13qFuzzyCompareRK9QVector3DS1_
/*void qm3984406344_4(const QVector3D & v1, const QVector3D & v2)*/ {
  const QVector3D & v1 = *(const QVector3D *)this_; const QVector3D & v2 = *(const QVector3D *)this_;
  (void) qFuzzyCompare(v1, v2);
  auto xptr = (bool (*)(QVector3D const&, QVector3D const&) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qvector2d.h:262
// [1] bool qFuzzyCompare(const QVector2D &, const QVector2D &) 
// (12)qm3491569400 (32)_Z13qFuzzyCompareRK9QVector2DS1_
/*void qm3491569400_5(const QVector2D & v1, const QVector2D & v2)*/ {
  const QVector2D & v1 = *(const QVector2D *)this_; const QVector2D & v2 = *(const QVector2D *)this_;
  (void) qFuzzyCompare(v1, v2);
  auto xptr = (bool (*)(QVector2D const&, QVector2D const&) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix.h:168
// [1] bool qFuzzyCompare(const QMatrix &, const QMatrix &) 
// (11)qm351118487 (30)_Z13qFuzzyCompareRK7QMatrixS1_
/*void qm351118487_6(const QMatrix & m1, const QMatrix & m2)*/ {
  const QMatrix & m1 = *(const QMatrix *)this_; const QMatrix & m2 = *(const QMatrix *)this_;
  (void) qFuzzyCompare(m1, m2);
  auto xptr = (bool (*)(QMatrix const&, QMatrix const&) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qquaternion.h:324
// [1] bool qFuzzyCompare(const QQuaternion &, const QQuaternion &) 
// (11)qm820813807 (35)_Z13qFuzzyCompareRK11QQuaternionS1_
/*void qm820813807_7(const QQuaternion & q1, const QQuaternion & q2)*/ {
  const QQuaternion & q1 = *(const QQuaternion *)this_; const QQuaternion & q2 = *(const QQuaternion *)this_;
  (void) qFuzzyCompare(q1, q2);
  auto xptr = (bool (*)(QQuaternion const&, QQuaternion const&) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qtransform.h:370
// [1] bool qFuzzyCompare(const QTransform &, const QTransform &) 
// (12)qm3441505257 (34)_Z13qFuzzyCompareRK10QTransformS1_
/*void qm3441505257_8(const QTransform & t1, const QTransform & t2)*/ {
  const QTransform & t1 = *(const QTransform *)this_; const QTransform & t2 = *(const QTransform *)this_;
  (void) qFuzzyCompare(t1, t2);
  auto xptr = (bool (*)(QTransform const&, QTransform const&) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qmatrix4x4.h:1021
// [1] bool qFuzzyCompare(const QMatrix4x4 &, const QMatrix4x4 &) 
// (12)qm2693912394 (34)_Z13qFuzzyCompareRK10QMatrix4x4S1_
/*void qm2693912394_9(const QMatrix4x4 & m1, const QMatrix4x4 & m2)*/ {
  const QMatrix4x4 & m1 = *(const QMatrix4x4 *)this_; const QMatrix4x4 & m2 = *(const QMatrix4x4 *)this_;
  (void) qFuzzyCompare(m1, m2);
  auto xptr = (bool (*)(QMatrix4x4 const&, QMatrix4x4 const&) ) &qFuzzyCompare;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgb.h:81
// [4] QRgb qPremultiply(QRgb) 
// (12)qm4104007902 (17)_Z12qPremultiplyj
/*void qm4104007902(unsigned int x)*/ {
  unsigned int x = *(unsigned int*)this_;
  (void) qPremultiply(x);
  auto xptr = (unsigned int (*)(unsigned int) ) &qPremultiply;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qrgba64.h:230
// [8] QRgba64 qPremultiply(QRgba64) 
// (12)qm1419724192 (24)_Z12qPremultiply7QRgba64
/*void qm1419724192_1(QRgba64 c)*/ {
  QRgba64 c = *(QRgba64*)this_;
  (void) qPremultiply(c);
  auto xptr = (QRgba64 (*)(QRgba64) ) &qPremultiply;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_gui

//  main block end
