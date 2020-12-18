
#include <QtCore>
#include <QtNetwork>
#include <QtGui>
#include <QtQml>
#include <QtQuick>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_quick(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:357
// [4] QIncompatibleFlag operator|(QSGNode::Flags::enum_type, int) 
// (12)qm2754171284 (20)_ZorN7QSGNode4FlagEi
/*void qm2754171284_256(QSGNode::Flag f1, int f2)*/ {
  QSGNode::Flag f1 = *(QSGNode::Flag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGNode::Flag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:357
// [4] QFlags<QSGNode::Flags::enum_type> operator|(QSGNode::Flags::enum_type, QSGNode::Flags::enum_type) 
// (12)qm1173783162 (22)_ZorN7QSGNode4FlagES0_
/*void qm1173783162_257(QSGNode::Flag f1, QSGNode::Flag f2)*/ {
  QSGNode::Flag f1 = *(QSGNode::Flag*)this_; QSGNode::Flag f2 = *(QSGNode::Flag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGNode::Flag> (*)(QSGNode::Flag, QSGNode::Flag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:357
// [4] QFlags<QSGNode::Flags::enum_type> operator|(QSGNode::Flags::enum_type, QFlags<QSGNode::Flags::enum_type>) 
// (12)qm3332761421 (31)_ZorN7QSGNode4FlagE6QFlagsIS0_E
/*void qm3332761421_258(QSGNode::Flag f1, QFlags<QSGNode::Flag> f2)*/ {
  QSGNode::Flag f1 = *(QSGNode::Flag*)this_; QFlags<QSGNode::Flag> f2 = *(QFlags<QSGNode::Flag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGNode::Flag> (*)(QSGNode::Flag, QFlags<QSGNode::Flag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:356
// [4] QIncompatibleFlag operator|(QSGNode::DirtyState::enum_type, int) 
// (12)qm2606639843 (30)_ZorN7QSGNode13DirtyStateBitEi
/*void qm2606639843_259(QSGNode::DirtyStateBit f1, int f2)*/ {
  QSGNode::DirtyStateBit f1 = *(QSGNode::DirtyStateBit*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGNode::DirtyStateBit, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:356
// [4] QFlags<QSGNode::DirtyState::enum_type> operator|(QSGNode::DirtyState::enum_type, QSGNode::DirtyState::enum_type) 
// (12)qm3797940872 (32)_ZorN7QSGNode13DirtyStateBitES0_
/*void qm3797940872_260(QSGNode::DirtyStateBit f1, QSGNode::DirtyStateBit f2)*/ {
  QSGNode::DirtyStateBit f1 = *(QSGNode::DirtyStateBit*)this_; QSGNode::DirtyStateBit f2 = *(QSGNode::DirtyStateBit*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGNode::DirtyStateBit> (*)(QSGNode::DirtyStateBit, QSGNode::DirtyStateBit) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgnode.h:356
// [4] QFlags<QSGNode::DirtyState::enum_type> operator|(QSGNode::DirtyState::enum_type, QFlags<QSGNode::DirtyState::enum_type>) 
// (12)qm3610915231 (41)_ZorN7QSGNode13DirtyStateBitE6QFlagsIS0_E
/*void qm3610915231_261(QSGNode::DirtyStateBit f1, QFlags<QSGNode::DirtyStateBit> f2)*/ {
  QSGNode::DirtyStateBit f1 = *(QSGNode::DirtyStateBit*)this_; QFlags<QSGNode::DirtyStateBit> f2 = *(QFlags<QSGNode::DirtyStateBit>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGNode::DirtyStateBit> (*)(QSGNode::DirtyStateBit, QFlags<QSGNode::DirtyStateBit>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:94
// [4] QIncompatibleFlag operator|(QSGSimpleTextureNode::TextureCoordinatesTransformMode::enum_type, int) 
// (12)qm2808521426 (62)_ZorN20QSGSimpleTextureNode31TextureCoordinatesTransformFlagEi
/*void qm2808521426_262(QSGSimpleTextureNode::TextureCoordinatesTransformFlag f1, int f2)*/ {
  QSGSimpleTextureNode::TextureCoordinatesTransformFlag f1 = *(QSGSimpleTextureNode::TextureCoordinatesTransformFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGSimpleTextureNode::TextureCoordinatesTransformFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:94
// [4] QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformMode::enum_type> operator|(QSGSimpleTextureNode::TextureCoordinatesTransformMode::enum_type, QSGSimpleTextureNode::TextureCoordinatesTransformMode::enum_type) 
// (12)qm3345074704 (64)_ZorN20QSGSimpleTextureNode31TextureCoordinatesTransformFlagES0_
/*void qm3345074704_263(QSGSimpleTextureNode::TextureCoordinatesTransformFlag f1, QSGSimpleTextureNode::TextureCoordinatesTransformFlag f2)*/ {
  QSGSimpleTextureNode::TextureCoordinatesTransformFlag f1 = *(QSGSimpleTextureNode::TextureCoordinatesTransformFlag*)this_; QSGSimpleTextureNode::TextureCoordinatesTransformFlag f2 = *(QSGSimpleTextureNode::TextureCoordinatesTransformFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag> (*)(QSGSimpleTextureNode::TextureCoordinatesTransformFlag, QSGSimpleTextureNode::TextureCoordinatesTransformFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgsimpletexturenode.h:94
// [4] QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformMode::enum_type> operator|(QSGSimpleTextureNode::TextureCoordinatesTransformMode::enum_type, QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformMode::enum_type>) 
// (12)qm2357708878 (73)_ZorN20QSGSimpleTextureNode31TextureCoordinatesTransformFlagE6QFlagsIS0_E
/*void qm2357708878_264(QSGSimpleTextureNode::TextureCoordinatesTransformFlag f1, QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag> f2)*/ {
  QSGSimpleTextureNode::TextureCoordinatesTransformFlag f1 = *(QSGSimpleTextureNode::TextureCoordinatesTransformFlag*)this_; QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag> f2 = *(QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag> (*)(QSGSimpleTextureNode::TextureCoordinatesTransformFlag, QFlags<QSGSimpleTextureNode::TextureCoordinatesTransformFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:113
// [4] QIncompatibleFlag operator|(QSGRendererInterface::ShaderCompilationTypes::enum_type, int) 
// (11)qm307630007 (52)_ZorN20QSGRendererInterface21ShaderCompilationTypeEi
/*void qm307630007_265(QSGRendererInterface::ShaderCompilationType f1, int f2)*/ {
  QSGRendererInterface::ShaderCompilationType f1 = *(QSGRendererInterface::ShaderCompilationType*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGRendererInterface::ShaderCompilationType, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:113
// [4] QFlags<QSGRendererInterface::ShaderCompilationTypes::enum_type> operator|(QSGRendererInterface::ShaderCompilationTypes::enum_type, QSGRendererInterface::ShaderCompilationTypes::enum_type) 
// (12)qm2005680023 (54)_ZorN20QSGRendererInterface21ShaderCompilationTypeES0_
/*void qm2005680023_266(QSGRendererInterface::ShaderCompilationType f1, QSGRendererInterface::ShaderCompilationType f2)*/ {
  QSGRendererInterface::ShaderCompilationType f1 = *(QSGRendererInterface::ShaderCompilationType*)this_; QSGRendererInterface::ShaderCompilationType f2 = *(QSGRendererInterface::ShaderCompilationType*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGRendererInterface::ShaderCompilationType> (*)(QSGRendererInterface::ShaderCompilationType, QSGRendererInterface::ShaderCompilationType) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:113
// [4] QFlags<QSGRendererInterface::ShaderCompilationTypes::enum_type> operator|(QSGRendererInterface::ShaderCompilationTypes::enum_type, QFlags<QSGRendererInterface::ShaderCompilationTypes::enum_type>) 
// (12)qm1099262788 (63)_ZorN20QSGRendererInterface21ShaderCompilationTypeE6QFlagsIS0_E
/*void qm1099262788_267(QSGRendererInterface::ShaderCompilationType f1, QFlags<QSGRendererInterface::ShaderCompilationType> f2)*/ {
  QSGRendererInterface::ShaderCompilationType f1 = *(QSGRendererInterface::ShaderCompilationType*)this_; QFlags<QSGRendererInterface::ShaderCompilationType> f2 = *(QFlags<QSGRendererInterface::ShaderCompilationType>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGRendererInterface::ShaderCompilationType> (*)(QSGRendererInterface::ShaderCompilationType, QFlags<QSGRendererInterface::ShaderCompilationType>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:114
// [4] QIncompatibleFlag operator|(QSGRendererInterface::ShaderSourceTypes::enum_type, int) 
// (12)qm2141813272 (47)_ZorN20QSGRendererInterface16ShaderSourceTypeEi
/*void qm2141813272_268(QSGRendererInterface::ShaderSourceType f1, int f2)*/ {
  QSGRendererInterface::ShaderSourceType f1 = *(QSGRendererInterface::ShaderSourceType*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGRendererInterface::ShaderSourceType, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:114
// [4] QFlags<QSGRendererInterface::ShaderSourceTypes::enum_type> operator|(QSGRendererInterface::ShaderSourceTypes::enum_type, QSGRendererInterface::ShaderSourceTypes::enum_type) 
// (12)qm2122086397 (49)_ZorN20QSGRendererInterface16ShaderSourceTypeES0_
/*void qm2122086397_269(QSGRendererInterface::ShaderSourceType f1, QSGRendererInterface::ShaderSourceType f2)*/ {
  QSGRendererInterface::ShaderSourceType f1 = *(QSGRendererInterface::ShaderSourceType*)this_; QSGRendererInterface::ShaderSourceType f2 = *(QSGRendererInterface::ShaderSourceType*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGRendererInterface::ShaderSourceType> (*)(QSGRendererInterface::ShaderSourceType, QSGRendererInterface::ShaderSourceType) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendererinterface.h:114
// [4] QFlags<QSGRendererInterface::ShaderSourceTypes::enum_type> operator|(QSGRendererInterface::ShaderSourceTypes::enum_type, QFlags<QSGRendererInterface::ShaderSourceTypes::enum_type>) 
// (11)qm834785847 (58)_ZorN20QSGRendererInterface16ShaderSourceTypeE6QFlagsIS0_E
/*void qm834785847_270(QSGRendererInterface::ShaderSourceType f1, QFlags<QSGRendererInterface::ShaderSourceType> f2)*/ {
  QSGRendererInterface::ShaderSourceType f1 = *(QSGRendererInterface::ShaderSourceType*)this_; QFlags<QSGRendererInterface::ShaderSourceType> f2 = *(QFlags<QSGRendererInterface::ShaderSourceType>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGRendererInterface::ShaderSourceType> (*)(QSGRendererInterface::ShaderSourceType, QFlags<QSGRendererInterface::ShaderSourceType>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialrhishader.h:178
// [4] QIncompatibleFlag operator|(QSGMaterialRhiShader::Flags::enum_type, int) 
// (12)qm2672555427 (34)_ZorN20QSGMaterialRhiShader4FlagEi
/*void qm2672555427_271(QSGMaterialRhiShader::Flag f1, int f2)*/ {
  QSGMaterialRhiShader::Flag f1 = *(QSGMaterialRhiShader::Flag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGMaterialRhiShader::Flag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialrhishader.h:178
// [4] QFlags<QSGMaterialRhiShader::Flags::enum_type> operator|(QSGMaterialRhiShader::Flags::enum_type, QSGMaterialRhiShader::Flags::enum_type) 
// (10)qm71991005 (36)_ZorN20QSGMaterialRhiShader4FlagES0_
/*void qm71991005_272(QSGMaterialRhiShader::Flag f1, QSGMaterialRhiShader::Flag f2)*/ {
  QSGMaterialRhiShader::Flag f1 = *(QSGMaterialRhiShader::Flag*)this_; QSGMaterialRhiShader::Flag f2 = *(QSGMaterialRhiShader::Flag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGMaterialRhiShader::Flag> (*)(QSGMaterialRhiShader::Flag, QSGMaterialRhiShader::Flag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialrhishader.h:178
// [4] QFlags<QSGMaterialRhiShader::Flags::enum_type> operator|(QSGMaterialRhiShader::Flags::enum_type, QFlags<QSGMaterialRhiShader::Flags::enum_type>) 
// (12)qm3447059824 (45)_ZorN20QSGMaterialRhiShader4FlagE6QFlagsIS0_E
/*void qm3447059824_273(QSGMaterialRhiShader::Flag f1, QFlags<QSGMaterialRhiShader::Flag> f2)*/ {
  QSGMaterialRhiShader::Flag f1 = *(QSGMaterialRhiShader::Flag*)this_; QFlags<QSGMaterialRhiShader::Flag> f2 = *(QFlags<QSGMaterialRhiShader::Flag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGMaterialRhiShader::Flag> (*)(QSGMaterialRhiShader::Flag, QFlags<QSGMaterialRhiShader::Flag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialrhishader.h:177
// [4] QIncompatibleFlag operator|(QSGMaterialRhiShader::GraphicsPipelineState::ColorMask::enum_type, int) 
// (12)qm3158873778 (72)_ZorN20QSGMaterialRhiShader21GraphicsPipelineState18ColorMaskComponentEi
/*void qm3158873778_274(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent f1, int f2)*/ {
  QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent f1 = *(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialrhishader.h:177
// [4] QFlags<QSGMaterialRhiShader::GraphicsPipelineState::ColorMask::enum_type> operator|(QSGMaterialRhiShader::GraphicsPipelineState::ColorMask::enum_type, QSGMaterialRhiShader::GraphicsPipelineState::ColorMask::enum_type) 
// (12)qm2587066221 (74)_ZorN20QSGMaterialRhiShader21GraphicsPipelineState18ColorMaskComponentES1_
/*void qm2587066221_275(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent f1, QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent f2)*/ {
  QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent f1 = *(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent*)this_; QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent f2 = *(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent> (*)(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent, QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialrhishader.h:177
// [4] QFlags<QSGMaterialRhiShader::GraphicsPipelineState::ColorMask::enum_type> operator|(QSGMaterialRhiShader::GraphicsPipelineState::ColorMask::enum_type, QFlags<QSGMaterialRhiShader::GraphicsPipelineState::ColorMask::enum_type>) 
// (12)qm3614138959 (83)_ZorN20QSGMaterialRhiShader21GraphicsPipelineState18ColorMaskComponentE6QFlagsIS1_E
/*void qm3614138959_276(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent f1, QFlags<QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent> f2)*/ {
  QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent f1 = *(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent*)this_; QFlags<QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent> f2 = *(QFlags<QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent> (*)(QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent, QFlags<QSGMaterialRhiShader::GraphicsPipelineState::ColorMaskComponent>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:118
// [4] QIncompatibleFlag operator|(QSGAbstractRenderer::ClearMode::enum_type, int) 
// (12)qm2799796396 (42)_ZorN19QSGAbstractRenderer12ClearModeBitEi
/*void qm2799796396_277(QSGAbstractRenderer::ClearModeBit f1, int f2)*/ {
  QSGAbstractRenderer::ClearModeBit f1 = *(QSGAbstractRenderer::ClearModeBit*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGAbstractRenderer::ClearModeBit, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:118
// [4] QFlags<QSGAbstractRenderer::ClearMode::enum_type> operator|(QSGAbstractRenderer::ClearMode::enum_type, QSGAbstractRenderer::ClearMode::enum_type) 
// (12)qm2747129355 (44)_ZorN19QSGAbstractRenderer12ClearModeBitES0_
/*void qm2747129355_278(QSGAbstractRenderer::ClearModeBit f1, QSGAbstractRenderer::ClearModeBit f2)*/ {
  QSGAbstractRenderer::ClearModeBit f1 = *(QSGAbstractRenderer::ClearModeBit*)this_; QSGAbstractRenderer::ClearModeBit f2 = *(QSGAbstractRenderer::ClearModeBit*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGAbstractRenderer::ClearModeBit> (*)(QSGAbstractRenderer::ClearModeBit, QSGAbstractRenderer::ClearModeBit) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgabstractrenderer.h:118
// [4] QFlags<QSGAbstractRenderer::ClearMode::enum_type> operator|(QSGAbstractRenderer::ClearMode::enum_type, QFlags<QSGAbstractRenderer::ClearMode::enum_type>) 
// (12)qm2783252302 (53)_ZorN19QSGAbstractRenderer12ClearModeBitE6QFlagsIS0_E
/*void qm2783252302_279(QSGAbstractRenderer::ClearModeBit f1, QFlags<QSGAbstractRenderer::ClearModeBit> f2)*/ {
  QSGAbstractRenderer::ClearModeBit f1 = *(QSGAbstractRenderer::ClearModeBit*)this_; QFlags<QSGAbstractRenderer::ClearModeBit> f2 = *(QFlags<QSGAbstractRenderer::ClearModeBit>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGAbstractRenderer::ClearModeBit> (*)(QSGAbstractRenderer::ClearModeBit, QFlags<QSGAbstractRenderer::ClearModeBit>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialshader.h:132
// [4] QIncompatibleFlag operator|(QSGMaterialShader::RenderState::DirtyStates::enum_type, int) 
// (12)qm2047952485 (51)_ZorN17QSGMaterialShader11RenderState10DirtyStateEi
/*void qm2047952485_280(QSGMaterialShader::RenderState::DirtyState f1, int f2)*/ {
  QSGMaterialShader::RenderState::DirtyState f1 = *(QSGMaterialShader::RenderState::DirtyState*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGMaterialShader::RenderState::DirtyState, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialshader.h:132
// [4] QFlags<QSGMaterialShader::RenderState::DirtyStates::enum_type> operator|(QSGMaterialShader::RenderState::DirtyStates::enum_type, QSGMaterialShader::RenderState::DirtyStates::enum_type) 
// (12)qm3533256760 (53)_ZorN17QSGMaterialShader11RenderState10DirtyStateES1_
/*void qm3533256760_281(QSGMaterialShader::RenderState::DirtyState f1, QSGMaterialShader::RenderState::DirtyState f2)*/ {
  QSGMaterialShader::RenderState::DirtyState f1 = *(QSGMaterialShader::RenderState::DirtyState*)this_; QSGMaterialShader::RenderState::DirtyState f2 = *(QSGMaterialShader::RenderState::DirtyState*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGMaterialShader::RenderState::DirtyState> (*)(QSGMaterialShader::RenderState::DirtyState, QSGMaterialShader::RenderState::DirtyState) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterialshader.h:132
// [4] QFlags<QSGMaterialShader::RenderState::DirtyStates::enum_type> operator|(QSGMaterialShader::RenderState::DirtyStates::enum_type, QFlags<QSGMaterialShader::RenderState::DirtyStates::enum_type>) 
// (12)qm3425085859 (62)_ZorN17QSGMaterialShader11RenderState10DirtyStateE6QFlagsIS1_E
/*void qm3425085859_282(QSGMaterialShader::RenderState::DirtyState f1, QFlags<QSGMaterialShader::RenderState::DirtyState> f2)*/ {
  QSGMaterialShader::RenderState::DirtyState f1 = *(QSGMaterialShader::RenderState::DirtyState*)this_; QFlags<QSGMaterialShader::RenderState::DirtyState> f2 = *(QFlags<QSGMaterialShader::RenderState::DirtyState>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGMaterialShader::RenderState::DirtyState> (*)(QSGMaterialShader::RenderState::DirtyState, QFlags<QSGMaterialShader::RenderState::DirtyState>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:138
// [4] QIncompatibleFlag operator|(QQuickPaintedItem::PerformanceHints::enum_type, int) 
// (12)qm2007492338 (43)_ZorN17QQuickPaintedItem15PerformanceHintEi
/*void qm2007492338_283(QQuickPaintedItem::PerformanceHint f1, int f2)*/ {
  QQuickPaintedItem::PerformanceHint f1 = *(QQuickPaintedItem::PerformanceHint*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QQuickPaintedItem::PerformanceHint, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:138
// [4] QFlags<QQuickPaintedItem::PerformanceHints::enum_type> operator|(QQuickPaintedItem::PerformanceHints::enum_type, QQuickPaintedItem::PerformanceHints::enum_type) 
// (11)qm592755706 (45)_ZorN17QQuickPaintedItem15PerformanceHintES0_
/*void qm592755706_284(QQuickPaintedItem::PerformanceHint f1, QQuickPaintedItem::PerformanceHint f2)*/ {
  QQuickPaintedItem::PerformanceHint f1 = *(QQuickPaintedItem::PerformanceHint*)this_; QQuickPaintedItem::PerformanceHint f2 = *(QQuickPaintedItem::PerformanceHint*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QQuickPaintedItem::PerformanceHint> (*)(QQuickPaintedItem::PerformanceHint, QQuickPaintedItem::PerformanceHint) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickpainteditem.h:138
// [4] QFlags<QQuickPaintedItem::PerformanceHints::enum_type> operator|(QQuickPaintedItem::PerformanceHints::enum_type, QFlags<QQuickPaintedItem::PerformanceHints::enum_type>) 
// (11)qm887849300 (54)_ZorN17QQuickPaintedItem15PerformanceHintE6QFlagsIS0_E
/*void qm887849300_285(QQuickPaintedItem::PerformanceHint f1, QFlags<QQuickPaintedItem::PerformanceHint> f2)*/ {
  QQuickPaintedItem::PerformanceHint f1 = *(QQuickPaintedItem::PerformanceHint*)this_; QFlags<QQuickPaintedItem::PerformanceHint> f2 = *(QFlags<QQuickPaintedItem::PerformanceHint>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QQuickPaintedItem::PerformanceHint> (*)(QQuickPaintedItem::PerformanceHint, QFlags<QQuickPaintedItem::PerformanceHint>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:100
// [4] QIncompatibleFlag operator|(QSGRenderNode::StateFlags::enum_type, int) 
// (12)qm3670719632 (32)_ZorN13QSGRenderNode9StateFlagEi
/*void qm3670719632_286(QSGRenderNode::StateFlag f1, int f2)*/ {
  QSGRenderNode::StateFlag f1 = *(QSGRenderNode::StateFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGRenderNode::StateFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:100
// [4] QFlags<QSGRenderNode::StateFlags::enum_type> operator|(QSGRenderNode::StateFlags::enum_type, QSGRenderNode::StateFlags::enum_type) 
// (12)qm4280395608 (34)_ZorN13QSGRenderNode9StateFlagES0_
/*void qm4280395608_287(QSGRenderNode::StateFlag f1, QSGRenderNode::StateFlag f2)*/ {
  QSGRenderNode::StateFlag f1 = *(QSGRenderNode::StateFlag*)this_; QSGRenderNode::StateFlag f2 = *(QSGRenderNode::StateFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGRenderNode::StateFlag> (*)(QSGRenderNode::StateFlag, QSGRenderNode::StateFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:100
// [4] QFlags<QSGRenderNode::StateFlags::enum_type> operator|(QSGRenderNode::StateFlags::enum_type, QFlags<QSGRenderNode::StateFlags::enum_type>) 
// (11)qm234957954 (43)_ZorN13QSGRenderNode9StateFlagE6QFlagsIS0_E
/*void qm234957954_288(QSGRenderNode::StateFlag f1, QFlags<QSGRenderNode::StateFlag> f2)*/ {
  QSGRenderNode::StateFlag f1 = *(QSGRenderNode::StateFlag*)this_; QFlags<QSGRenderNode::StateFlag> f2 = *(QFlags<QSGRenderNode::StateFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGRenderNode::StateFlag> (*)(QSGRenderNode::StateFlag, QFlags<QSGRenderNode::StateFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:101
// [4] QIncompatibleFlag operator|(QSGRenderNode::RenderingFlags::enum_type, int) 
// (12)qm3651600138 (37)_ZorN13QSGRenderNode13RenderingFlagEi
/*void qm3651600138_289(QSGRenderNode::RenderingFlag f1, int f2)*/ {
  QSGRenderNode::RenderingFlag f1 = *(QSGRenderNode::RenderingFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGRenderNode::RenderingFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:101
// [4] QFlags<QSGRenderNode::RenderingFlags::enum_type> operator|(QSGRenderNode::RenderingFlags::enum_type, QSGRenderNode::RenderingFlags::enum_type) 
// (12)qm2606421646 (39)_ZorN13QSGRenderNode13RenderingFlagES0_
/*void qm2606421646_290(QSGRenderNode::RenderingFlag f1, QSGRenderNode::RenderingFlag f2)*/ {
  QSGRenderNode::RenderingFlag f1 = *(QSGRenderNode::RenderingFlag*)this_; QSGRenderNode::RenderingFlag f2 = *(QSGRenderNode::RenderingFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGRenderNode::RenderingFlag> (*)(QSGRenderNode::RenderingFlag, QSGRenderNode::RenderingFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgrendernode.h:101
// [4] QFlags<QSGRenderNode::RenderingFlags::enum_type> operator|(QSGRenderNode::RenderingFlags::enum_type, QFlags<QSGRenderNode::RenderingFlags::enum_type>) 
// (12)qm1961643170 (48)_ZorN13QSGRenderNode13RenderingFlagE6QFlagsIS0_E
/*void qm1961643170_291(QSGRenderNode::RenderingFlag f1, QFlags<QSGRenderNode::RenderingFlag> f2)*/ {
  QSGRenderNode::RenderingFlag f1 = *(QSGRenderNode::RenderingFlag*)this_; QFlags<QSGRenderNode::RenderingFlag> f2 = *(QFlags<QSGRenderNode::RenderingFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGRenderNode::RenderingFlag> (*)(QSGRenderNode::RenderingFlag, QFlags<QSGRenderNode::RenderingFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:92
// [4] QIncompatibleFlag operator|(QSGImageNode::TextureCoordinatesTransformMode::enum_type, int) 
// (12)qm3053822116 (54)_ZorN12QSGImageNode31TextureCoordinatesTransformFlagEi
/*void qm3053822116_292(QSGImageNode::TextureCoordinatesTransformFlag f1, int f2)*/ {
  QSGImageNode::TextureCoordinatesTransformFlag f1 = *(QSGImageNode::TextureCoordinatesTransformFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGImageNode::TextureCoordinatesTransformFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:92
// [4] QFlags<QSGImageNode::TextureCoordinatesTransformMode::enum_type> operator|(QSGImageNode::TextureCoordinatesTransformMode::enum_type, QSGImageNode::TextureCoordinatesTransformMode::enum_type) 
// (12)qm1342858287 (56)_ZorN12QSGImageNode31TextureCoordinatesTransformFlagES0_
/*void qm1342858287_293(QSGImageNode::TextureCoordinatesTransformFlag f1, QSGImageNode::TextureCoordinatesTransformFlag f2)*/ {
  QSGImageNode::TextureCoordinatesTransformFlag f1 = *(QSGImageNode::TextureCoordinatesTransformFlag*)this_; QSGImageNode::TextureCoordinatesTransformFlag f2 = *(QSGImageNode::TextureCoordinatesTransformFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGImageNode::TextureCoordinatesTransformFlag> (*)(QSGImageNode::TextureCoordinatesTransformFlag, QSGImageNode::TextureCoordinatesTransformFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgimagenode.h:92
// [4] QFlags<QSGImageNode::TextureCoordinatesTransformMode::enum_type> operator|(QSGImageNode::TextureCoordinatesTransformMode::enum_type, QFlags<QSGImageNode::TextureCoordinatesTransformMode::enum_type>) 
// (12)qm1259998231 (65)_ZorN12QSGImageNode31TextureCoordinatesTransformFlagE6QFlagsIS0_E
/*void qm1259998231_294(QSGImageNode::TextureCoordinatesTransformFlag f1, QFlags<QSGImageNode::TextureCoordinatesTransformFlag> f2)*/ {
  QSGImageNode::TextureCoordinatesTransformFlag f1 = *(QSGImageNode::TextureCoordinatesTransformFlag*)this_; QFlags<QSGImageNode::TextureCoordinatesTransformFlag> f2 = *(QFlags<QSGImageNode::TextureCoordinatesTransformFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGImageNode::TextureCoordinatesTransformFlag> (*)(QSGImageNode::TextureCoordinatesTransformFlag, QFlags<QSGImageNode::TextureCoordinatesTransformFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:83
// [4] QIncompatibleFlag operator|(QSGMaterial::Flags::enum_type, int) 
// (12)qm3785455635 (25)_ZorN11QSGMaterial4FlagEi
/*void qm3785455635_295(QSGMaterial::Flag f1, int f2)*/ {
  QSGMaterial::Flag f1 = *(QSGMaterial::Flag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSGMaterial::Flag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:83
// [4] QFlags<QSGMaterial::Flags::enum_type> operator|(QSGMaterial::Flags::enum_type, QSGMaterial::Flags::enum_type) 
// (12)qm1938182418 (27)_ZorN11QSGMaterial4FlagES0_
/*void qm1938182418_296(QSGMaterial::Flag f1, QSGMaterial::Flag f2)*/ {
  QSGMaterial::Flag f1 = *(QSGMaterial::Flag*)this_; QSGMaterial::Flag f2 = *(QSGMaterial::Flag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGMaterial::Flag> (*)(QSGMaterial::Flag, QSGMaterial::Flag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgmaterial.h:83
// [4] QFlags<QSGMaterial::Flags::enum_type> operator|(QSGMaterial::Flags::enum_type, QFlags<QSGMaterial::Flags::enum_type>) 
// (12)qm2546434453 (36)_ZorN11QSGMaterial4FlagE6QFlagsIS0_E
/*void qm2546434453_297(QSGMaterial::Flag f1, QFlags<QSGMaterial::Flag> f2)*/ {
  QSGMaterial::Flag f1 = *(QSGMaterial::Flag*)this_; QFlags<QSGMaterial::Flag> f2 = *(QFlags<QSGMaterial::Flag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSGMaterial::Flag> (*)(QSGMaterial::Flag, QFlags<QSGMaterial::Flag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:471
// [4] QIncompatibleFlag operator|(QQuickItem::Flags::enum_type, int) 
// (12)qm3899584988 (24)_ZorN10QQuickItem4FlagEi
/*void qm3899584988_298(QQuickItem::Flag f1, int f2)*/ {
  QQuickItem::Flag f1 = *(QQuickItem::Flag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QQuickItem::Flag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:471
// [4] QFlags<QQuickItem::Flags::enum_type> operator|(QQuickItem::Flags::enum_type, QQuickItem::Flags::enum_type) 
// (12)qm2877335768 (26)_ZorN10QQuickItem4FlagES0_
/*void qm2877335768_299(QQuickItem::Flag f1, QQuickItem::Flag f2)*/ {
  QQuickItem::Flag f1 = *(QQuickItem::Flag*)this_; QQuickItem::Flag f2 = *(QQuickItem::Flag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QQuickItem::Flag> (*)(QQuickItem::Flag, QQuickItem::Flag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qquickitem.h:471
// [4] QFlags<QQuickItem::Flags::enum_type> operator|(QQuickItem::Flags::enum_type, QFlags<QQuickItem::Flags::enum_type>) 
// (12)qm3350703194 (35)_ZorN10QQuickItem4FlagE6QFlagsIS0_E
/*void qm3350703194_300(QQuickItem::Flag f1, QFlags<QQuickItem::Flag> f2)*/ {
  QQuickItem::Flag f1 = *(QQuickItem::Flag*)this_; QFlags<QQuickItem::Flag> f2 = *(QFlags<QQuickItem::Flag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QQuickItem::Flag> (*)(QQuickItem::Flag, QFlags<QQuickItem::Flag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_quick

//  main block end
