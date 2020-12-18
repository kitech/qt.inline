
#include <QtCore>
#include <QtGui>
#include <QtNetwork>
#include <QtMultimedia>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_multimedia(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:261
// [4] QIncompatibleFlag operator|(QCamera::LockTypes::enum_type, int) 
// (12)qm1902676999 (24)_ZorN7QCamera8LockTypeEi
/*void qm1902676999_199(QCamera::LockType f1, int f2)*/ {
  QCamera::LockType f1 = *(QCamera::LockType*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QCamera::LockType, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:261
// [4] QFlags<QCamera::LockTypes::enum_type> operator|(QCamera::LockTypes::enum_type, QCamera::LockTypes::enum_type) 
// (12)qm3891798155 (26)_ZorN7QCamera8LockTypeES0_
/*void qm3891798155_200(QCamera::LockType f1, QCamera::LockType f2)*/ {
  QCamera::LockType f1 = *(QCamera::LockType*)this_; QCamera::LockType f2 = *(QCamera::LockType*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCamera::LockType> (*)(QCamera::LockType, QCamera::LockType) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:261
// [4] QFlags<QCamera::LockTypes::enum_type> operator|(QCamera::LockTypes::enum_type, QFlags<QCamera::LockTypes::enum_type>) 
// (12)qm2880117725 (35)_ZorN7QCamera8LockTypeE6QFlagsIS0_E
/*void qm2880117725_201(QCamera::LockType f1, QFlags<QCamera::LockType> f2)*/ {
  QCamera::LockType f1 = *(QCamera::LockType*)this_; QFlags<QCamera::LockType> f2 = *(QFlags<QCamera::LockType>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCamera::LockType> (*)(QCamera::LockType, QFlags<QCamera::LockType>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:105
// [4] QIncompatibleFlag operator|(QMediaServiceProviderHint::Features::enum_type, int) 
// (12)qm3929484862 (42)_ZorN25QMediaServiceProviderHint7FeatureEi
/*void qm3929484862_202(QMediaServiceProviderHint::Feature f1, int f2)*/ {
  QMediaServiceProviderHint::Feature f1 = *(QMediaServiceProviderHint::Feature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QMediaServiceProviderHint::Feature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:105
// [4] QFlags<QMediaServiceProviderHint::Features::enum_type> operator|(QMediaServiceProviderHint::Features::enum_type, QMediaServiceProviderHint::Features::enum_type) 
// (12)qm3517248682 (44)_ZorN25QMediaServiceProviderHint7FeatureES0_
/*void qm3517248682_203(QMediaServiceProviderHint::Feature f1, QMediaServiceProviderHint::Feature f2)*/ {
  QMediaServiceProviderHint::Feature f1 = *(QMediaServiceProviderHint::Feature*)this_; QMediaServiceProviderHint::Feature f2 = *(QMediaServiceProviderHint::Feature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMediaServiceProviderHint::Feature> (*)(QMediaServiceProviderHint::Feature, QMediaServiceProviderHint::Feature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:105
// [4] QFlags<QMediaServiceProviderHint::Features::enum_type> operator|(QMediaServiceProviderHint::Features::enum_type, QFlags<QMediaServiceProviderHint::Features::enum_type>) 
// (12)qm2317390504 (53)_ZorN25QMediaServiceProviderHint7FeatureE6QFlagsIS0_E
/*void qm2317390504_204(QMediaServiceProviderHint::Feature f1, QFlags<QMediaServiceProviderHint::Feature> f2)*/ {
  QMediaServiceProviderHint::Feature f1 = *(QMediaServiceProviderHint::Feature*)this_; QFlags<QMediaServiceProviderHint::Feature> f2 = *(QFlags<QMediaServiceProviderHint::Feature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMediaServiceProviderHint::Feature> (*)(QMediaServiceProviderHint::Feature, QFlags<QMediaServiceProviderHint::Feature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:63
// [4] QIncompatibleFlag operator|(QVideoFilterRunnable::RunFlags::enum_type, int) 
// (12)qm1655168318 (37)_ZorN20QVideoFilterRunnable7RunFlagEi
/*void qm1655168318_205(QVideoFilterRunnable::RunFlag f1, int f2)*/ {
  QVideoFilterRunnable::RunFlag f1 = *(QVideoFilterRunnable::RunFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QVideoFilterRunnable::RunFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:63
// [4] QFlags<QVideoFilterRunnable::RunFlags::enum_type> operator|(QVideoFilterRunnable::RunFlags::enum_type, QVideoFilterRunnable::RunFlags::enum_type) 
// (12)qm4111523740 (39)_ZorN20QVideoFilterRunnable7RunFlagES0_
/*void qm4111523740_206(QVideoFilterRunnable::RunFlag f1, QVideoFilterRunnable::RunFlag f2)*/ {
  QVideoFilterRunnable::RunFlag f1 = *(QVideoFilterRunnable::RunFlag*)this_; QVideoFilterRunnable::RunFlag f2 = *(QVideoFilterRunnable::RunFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QVideoFilterRunnable::RunFlag> (*)(QVideoFilterRunnable::RunFlag, QVideoFilterRunnable::RunFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qabstractvideofilter.h:63
// [4] QFlags<QVideoFilterRunnable::RunFlags::enum_type> operator|(QVideoFilterRunnable::RunFlags::enum_type, QFlags<QVideoFilterRunnable::RunFlags::enum_type>) 
// (11)qm990935395 (48)_ZorN20QVideoFilterRunnable7RunFlagE6QFlagsIS0_E
/*void qm990935395_207(QVideoFilterRunnable::RunFlag f1, QFlags<QVideoFilterRunnable::RunFlag> f2)*/ {
  QVideoFilterRunnable::RunFlag f1 = *(QVideoFilterRunnable::RunFlag*)this_; QFlags<QVideoFilterRunnable::RunFlag> f2 = *(QFlags<QVideoFilterRunnable::RunFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QVideoFilterRunnable::RunFlag> (*)(QVideoFilterRunnable::RunFlag, QFlags<QVideoFilterRunnable::RunFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:149
// [4] QIncompatibleFlag operator|(QCameraImageCapture::CaptureDestinations::enum_type, int) 
// (11)qm273258086 (48)_ZorN19QCameraImageCapture18CaptureDestinationEi
/*void qm273258086_208(QCameraImageCapture::CaptureDestination f1, int f2)*/ {
  QCameraImageCapture::CaptureDestination f1 = *(QCameraImageCapture::CaptureDestination*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QCameraImageCapture::CaptureDestination, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:149
// [4] QFlags<QCameraImageCapture::CaptureDestinations::enum_type> operator|(QCameraImageCapture::CaptureDestinations::enum_type, QCameraImageCapture::CaptureDestinations::enum_type) 
// (12)qm1719460406 (50)_ZorN19QCameraImageCapture18CaptureDestinationES0_
/*void qm1719460406_209(QCameraImageCapture::CaptureDestination f1, QCameraImageCapture::CaptureDestination f2)*/ {
  QCameraImageCapture::CaptureDestination f1 = *(QCameraImageCapture::CaptureDestination*)this_; QCameraImageCapture::CaptureDestination f2 = *(QCameraImageCapture::CaptureDestination*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCameraImageCapture::CaptureDestination> (*)(QCameraImageCapture::CaptureDestination, QCameraImageCapture::CaptureDestination) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:149
// [4] QFlags<QCameraImageCapture::CaptureDestinations::enum_type> operator|(QCameraImageCapture::CaptureDestinations::enum_type, QFlags<QCameraImageCapture::CaptureDestinations::enum_type>) 
// (12)qm2209772993 (59)_ZorN19QCameraImageCapture18CaptureDestinationE6QFlagsIS0_E
/*void qm2209772993_210(QCameraImageCapture::CaptureDestination f1, QFlags<QCameraImageCapture::CaptureDestination> f2)*/ {
  QCameraImageCapture::CaptureDestination f1 = *(QCameraImageCapture::CaptureDestination*)this_; QFlags<QCameraImageCapture::CaptureDestination> f2 = *(QFlags<QCameraImageCapture::CaptureDestination>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCameraImageCapture::CaptureDestination> (*)(QCameraImageCapture::CaptureDestination, QFlags<QCameraImageCapture::CaptureDestination>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:183
// [4] QIncompatibleFlag operator|(QCameraExposure::FlashModes::enum_type, int) 
// (12)qm1732000485 (34)_ZorN15QCameraExposure9FlashModeEi
/*void qm1732000485_211(QCameraExposure::FlashMode f1, int f2)*/ {
  QCameraExposure::FlashMode f1 = *(QCameraExposure::FlashMode*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QCameraExposure::FlashMode, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:183
// [4] QFlags<QCameraExposure::FlashModes::enum_type> operator|(QCameraExposure::FlashModes::enum_type, QCameraExposure::FlashModes::enum_type) 
// (12)qm2847060232 (36)_ZorN15QCameraExposure9FlashModeES0_
/*void qm2847060232_212(QCameraExposure::FlashMode f1, QCameraExposure::FlashMode f2)*/ {
  QCameraExposure::FlashMode f1 = *(QCameraExposure::FlashMode*)this_; QCameraExposure::FlashMode f2 = *(QCameraExposure::FlashMode*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCameraExposure::FlashMode> (*)(QCameraExposure::FlashMode, QCameraExposure::FlashMode) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:183
// [4] QFlags<QCameraExposure::FlashModes::enum_type> operator|(QCameraExposure::FlashModes::enum_type, QFlags<QCameraExposure::FlashModes::enum_type>) 
// (12)qm3262173715 (45)_ZorN15QCameraExposure9FlashModeE6QFlagsIS0_E
/*void qm3262173715_213(QCameraExposure::FlashMode f1, QFlags<QCameraExposure::FlashMode> f2)*/ {
  QCameraExposure::FlashMode f1 = *(QCameraExposure::FlashMode*)this_; QFlags<QCameraExposure::FlashMode> f2 = *(QFlags<QCameraExposure::FlashMode>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCameraExposure::FlashMode> (*)(QCameraExposure::FlashMode, QFlags<QCameraExposure::FlashMode>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:170
// [4] QIncompatibleFlag operator|(QCameraFocus::FocusModes::enum_type, int) 
// (12)qm1152753372 (31)_ZorN12QCameraFocus9FocusModeEi
/*void qm1152753372_214(QCameraFocus::FocusMode f1, int f2)*/ {
  QCameraFocus::FocusMode f1 = *(QCameraFocus::FocusMode*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QCameraFocus::FocusMode, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:170
// [4] QFlags<QCameraFocus::FocusModes::enum_type> operator|(QCameraFocus::FocusModes::enum_type, QCameraFocus::FocusModes::enum_type) 
// (12)qm1988982986 (33)_ZorN12QCameraFocus9FocusModeES0_
/*void qm1988982986_215(QCameraFocus::FocusMode f1, QCameraFocus::FocusMode f2)*/ {
  QCameraFocus::FocusMode f1 = *(QCameraFocus::FocusMode*)this_; QCameraFocus::FocusMode f2 = *(QCameraFocus::FocusMode*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCameraFocus::FocusMode> (*)(QCameraFocus::FocusMode, QCameraFocus::FocusMode) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:170
// [4] QFlags<QCameraFocus::FocusModes::enum_type> operator|(QCameraFocus::FocusModes::enum_type, QFlags<QCameraFocus::FocusModes::enum_type>) 
// (12)qm2364268160 (42)_ZorN12QCameraFocus9FocusModeE6QFlagsIS0_E
/*void qm2364268160_216(QCameraFocus::FocusMode f1, QFlags<QCameraFocus::FocusMode> f2)*/ {
  QCameraFocus::FocusMode f1 = *(QCameraFocus::FocusMode*)this_; QFlags<QCameraFocus::FocusMode> f2 = *(QFlags<QCameraFocus::FocusMode>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QCameraFocus::FocusMode> (*)(QCameraFocus::FocusMode, QFlags<QCameraFocus::FocusMode>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:275
// [1] bool operator!=(const QCamera::FrameRateRange &, const QCamera::FrameRateRange &) 
// (12)qm3111919069 (35)_ZneRKN7QCamera14FrameRateRangeES2_
/*void qm3111919069_61(const QCamera::FrameRateRange & r1, const QCamera::FrameRateRange & r2)*/ {
  const QCamera::FrameRateRange & r1 = *(const QCamera::FrameRateRange *)this_; const QCamera::FrameRateRange & r2 = *(const QCamera::FrameRateRange *)this_;
  (void) operator!=(r1, r2);
  auto xptr = (bool (*)(QCamera::FrameRateRange const&, QCamera::FrameRateRange const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:96
// [1] bool operator!=(const QCameraViewfinderSettings &, const QCameraViewfinderSettings &) 
// (12)qm3677375088 (36)_ZneRK25QCameraViewfinderSettingsS1_
/*void qm3677375088_62(const QCameraViewfinderSettings & lhs, const QCameraViewfinderSettings & rhs)*/ {
  const QCameraViewfinderSettings & lhs = *(const QCameraViewfinderSettings *)this_; const QCameraViewfinderSettings & rhs = *(const QCameraViewfinderSettings *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QCameraViewfinderSettings const&, QCameraViewfinderSettings const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:299
// [8] QDebug operator<<(QDebug, QCamera::Position) 
// (12)qm1536027671 (30)_Zls6QDebugN7QCamera8PositionE
/*void qm1536027671_2(QDebug dbg, QCamera::Position value)*/ {
  QDebug dbg = *(QDebug*)this_; QCamera::Position value = *(QCamera::Position*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCamera::Position) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:296
// [8] QDebug operator<<(QDebug, QCamera::LockType) 
// (12)qm1580803498 (30)_Zls6QDebugN7QCamera8LockTypeE
/*void qm1580803498_3(QDebug dbg, QCamera::LockType value)*/ {
  QDebug dbg = *(QDebug*)this_; QCamera::LockType value = *(QCamera::LockType*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCamera::LockType) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:293
// [8] QDebug operator<<(QDebug, QCamera::Status) 
// (11)qm185483422 (28)_Zls6QDebugN7QCamera6StatusE
/*void qm185483422_4(QDebug dbg, QCamera::Status value)*/ {
  QDebug dbg = *(QDebug*)this_; QCamera::Status value = *(QCamera::Status*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCamera::Status) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:292
// [8] QDebug operator<<(QDebug, QCamera::State) 
// (12)qm1852134137 (27)_Zls6QDebugN7QCamera5StateE
/*void qm1852134137_5(QDebug dbg, QCamera::State value)*/ {
  QDebug dbg = *(QDebug*)this_; QCamera::State value = *(QCamera::State*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCamera::State) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:294
// [8] QDebug operator<<(QDebug, QCamera::Error) 
// (12)qm1677096617 (27)_Zls6QDebugN7QCamera5ErrorE
/*void qm1677096617_6(QDebug dbg, QCamera::Error value)*/ {
  QDebug dbg = *(QDebug*)this_; QCamera::Error value = *(QCamera::Error*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCamera::Error) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:298
// [8] QDebug operator<<(QDebug, QCamera::LockChangeReason) 
// (12)qm3752010318 (39)_Zls6QDebugN7QCamera16LockChangeReasonE
/*void qm3752010318_7(QDebug dbg, QCamera::LockChangeReason value)*/ {
  QDebug dbg = *(QDebug*)this_; QCamera::LockChangeReason value = *(QCamera::LockChangeReason*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCamera::LockChangeReason) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:295
// [8] QDebug operator<<(QDebug, QCamera::CaptureMode) 
// (11)qm918718066 (34)_Zls6QDebugN7QCamera11CaptureModeE
/*void qm918718066_8(QDebug dbg, QCamera::CaptureMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QCamera::CaptureMode value = *(QCamera::CaptureMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCamera::CaptureMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:297
// [8] QDebug operator<<(QDebug, QCamera::LockStatus) 
// (12)qm3308215624 (33)_Zls6QDebugN7QCamera10LockStatusE
/*void qm3308215624_9(QDebug dbg, QCamera::LockStatus value)*/ {
  QDebug dbg = *(QDebug*)this_; QCamera::LockStatus value = *(QCamera::LockStatus*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCamera::LockStatus) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessingcontrol.h:95
// [8] QDebug operator<<(QDebug, QCameraImageProcessingControl::ProcessingParameter) 
// (12)qm3278020642 (65)_Zls6QDebugN29QCameraImageProcessingControl19ProcessingParameterE
/*void qm3278020642_10(QDebug dbg, QCameraImageProcessingControl::ProcessingParameter value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraImageProcessingControl::ProcessingParameter value = *(QCameraImageProcessingControl::ProcessingParameter*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraImageProcessingControl::ProcessingParameter) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:139
// [8] QDebug operator<<(QDebug, QCameraImageProcessing::WhiteBalanceMode) 
// (12)qm2264773559 (55)_Zls6QDebugN22QCameraImageProcessing16WhiteBalanceModeE
/*void qm2264773559_11(QDebug dbg, QCameraImageProcessing::WhiteBalanceMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraImageProcessing::WhiteBalanceMode value = *(QCameraImageProcessing::WhiteBalanceMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraImageProcessing::WhiteBalanceMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimageprocessing.h:140
// [8] QDebug operator<<(QDebug, QCameraImageProcessing::ColorFilter) 
// (12)qm1068670859 (50)_Zls6QDebugN22QCameraImageProcessing11ColorFilterE
/*void qm1068670859_12(QDebug dbg, QCameraImageProcessing::ColorFilter value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraImageProcessing::ColorFilter value = *(QCameraImageProcessing::ColorFilter*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraImageProcessing::ColorFilter) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposurecontrol.h:100
// [8] QDebug operator<<(QDebug, QCameraExposureControl::ExposureParameter) 
// (12)qm1343241215 (56)_Zls6QDebugN22QCameraExposureControl17ExposureParameterE
/*void qm1343241215_13(QDebug dbg, QCameraExposureControl::ExposureParameter value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraExposureControl::ExposureParameter value = *(QCameraExposureControl::ExposureParameter*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraExposureControl::ExposureParameter) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediastreamscontrol.h:86
// [8] QDebug operator<<(QDebug, QMediaStreamsControl::StreamType) 
// (12)qm4279531408 (47)_Zls6QDebugN20QMediaStreamsControl10StreamTypeE
/*void qm4279531408_14(QDebug dbg, QMediaStreamsControl::StreamType value)*/ {
  QDebug dbg = *(QDebug*)this_; QMediaStreamsControl::StreamType value = *(QMediaStreamsControl::StreamType*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QMediaStreamsControl::StreamType) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:157
// [8] QDebug operator<<(QDebug, QCameraImageCapture::Error) 
// (12)qm3924656678 (40)_Zls6QDebugN19QCameraImageCapture5ErrorE
/*void qm3924656678_15(QDebug dbg, QCameraImageCapture::Error value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraImageCapture::Error value = *(QCameraImageCapture::Error*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraImageCapture::Error) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraimagecapture.h:158
// [8] QDebug operator<<(QDebug, QCameraImageCapture::CaptureDestination) 
// (11)qm878176054 (54)_Zls6QDebugN19QCameraImageCapture18CaptureDestinationE
/*void qm878176054_16(QDebug dbg, QCameraImageCapture::CaptureDestination value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraImageCapture::CaptureDestination value = *(QCameraImageCapture::CaptureDestination*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraImageCapture::CaptureDestination) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:192
// [8] QDebug operator<<(QDebug, QCameraExposure::FlashMode) 
// (12)qm1103998020 (40)_Zls6QDebugN15QCameraExposure9FlashModeE
/*void qm1103998020_17(QDebug dbg, QCameraExposure::FlashMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraExposure::FlashMode value = *(QCameraExposure::FlashMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraExposure::FlashMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:193
// [8] QDebug operator<<(QDebug, QCameraExposure::MeteringMode) 
// (12)qm3409360582 (44)_Zls6QDebugN15QCameraExposure12MeteringModeE
/*void qm3409360582_18(QDebug dbg, QCameraExposure::MeteringMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraExposure::MeteringMode value = *(QCameraExposure::MeteringMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraExposure::MeteringMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraexposure.h:191
// [8] QDebug operator<<(QDebug, QCameraExposure::ExposureMode) 
// (12)qm1973423460 (44)_Zls6QDebugN15QCameraExposure12ExposureModeE
/*void qm1973423460_19(QDebug dbg, QCameraExposure::ExposureMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraExposure::ExposureMode value = *(QCameraExposure::ExposureMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraExposure::ExposureMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:220
// [8] QDebug operator<<(QDebug, QMediaRecorder::Status) 
// (11)qm255980677 (36)_Zls6QDebugN14QMediaRecorder6StatusE
/*void qm255980677_20(QDebug dbg, QMediaRecorder::Status value)*/ {
  QDebug dbg = *(QDebug*)this_; QMediaRecorder::Status value = *(QMediaRecorder::Status*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QMediaRecorder::Status) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:219
// [8] QDebug operator<<(QDebug, QMediaRecorder::State) 
// (12)qm4210515071 (35)_Zls6QDebugN14QMediaRecorder5StateE
/*void qm4210515071_21(QDebug dbg, QMediaRecorder::State value)*/ {
  QDebug dbg = *(QDebug*)this_; QMediaRecorder::State value = *(QMediaRecorder::State*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QMediaRecorder::State) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediarecorder.h:221
// [8] QDebug operator<<(QDebug, QMediaRecorder::Error) 
// (12)qm4150556719 (35)_Zls6QDebugN14QMediaRecorder5ErrorE
/*void qm4150556719_22(QDebug dbg, QMediaRecorder::Error value)*/ {
  QDebug dbg = *(QDebug*)this_; QMediaRecorder::Error value = *(QMediaRecorder::Error*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QMediaRecorder::Error) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:146
// [8] QDebug operator<<(QDebug, QMediaPlaylist::Error) 
// (12)qm1644600744 (35)_Zls6QDebugN14QMediaPlaylist5ErrorE
/*void qm1644600744_23(QDebug dbg, QMediaPlaylist::Error value)*/ {
  QDebug dbg = *(QDebug*)this_; QMediaPlaylist::Error value = *(QMediaPlaylist::Error*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QMediaPlaylist::Error) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplaylist.h:145
// [8] QDebug operator<<(QDebug, QMediaPlaylist::PlaybackMode) 
// (12)qm2382711765 (43)_Zls6QDebugN14QMediaPlaylist12PlaybackModeE
/*void qm2382711765_24(QDebug dbg, QMediaPlaylist::PlaybackMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QMediaPlaylist::PlaybackMode value = *(QMediaPlaylist::PlaybackMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QMediaPlaylist::PlaybackMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:138
// [8] QDebug operator<<(QDebug, QAudioDecoder::State) 
// (12)qm1364034913 (34)_Zls6QDebugN13QAudioDecoder5StateE
/*void qm1364034913_25(QDebug dbg, QAudioDecoder::State value)*/ {
  QDebug dbg = *(QDebug*)this_; QAudioDecoder::State value = *(QAudioDecoder::State*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QAudioDecoder::State) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qaudiodecoder.h:139
// [8] QDebug operator<<(QDebug, QAudioDecoder::Error) 
// (12)qm1558094129 (34)_Zls6QDebugN13QAudioDecoder5ErrorE
/*void qm1558094129_26(QDebug dbg, QAudioDecoder::Error value)*/ {
  QDebug dbg = *(QDebug*)this_; QAudioDecoder::Error value = *(QAudioDecoder::Error*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QAudioDecoder::Error) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:260
// [8] QDebug operator<<(QDebug, QMediaPlayer::State) 
// (12)qm4194870891 (33)_Zls6QDebugN12QMediaPlayer5StateE
/*void qm4194870891_27(QDebug dbg, QMediaPlayer::State value)*/ {
  QDebug dbg = *(QDebug*)this_; QMediaPlayer::State value = *(QMediaPlayer::State*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QMediaPlayer::State) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:262
// [8] QDebug operator<<(QDebug, QMediaPlayer::Error) 
// (12)qm4154163771 (33)_Zls6QDebugN12QMediaPlayer5ErrorE
/*void qm4154163771_28(QDebug dbg, QMediaPlayer::Error value)*/ {
  QDebug dbg = *(QDebug*)this_; QMediaPlayer::Error value = *(QMediaPlayer::Error*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QMediaPlayer::Error) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaplayer.h:261
// [8] QDebug operator<<(QDebug, QMediaPlayer::MediaStatus) 
// (12)qm1657858435 (40)_Zls6QDebugN12QMediaPlayer11MediaStatusE
/*void qm1657858435_29(QDebug dbg, QMediaPlayer::MediaStatus value)*/ {
  QDebug dbg = *(QDebug*)this_; QMediaPlayer::MediaStatus value = *(QMediaPlayer::MediaStatus*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QMediaPlayer::MediaStatus) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:177
// [8] QDebug operator<<(QDebug, QCameraFocus::FocusMode) 
// (12)qm2108859051 (37)_Zls6QDebugN12QCameraFocus9FocusModeE
/*void qm2108859051_30(QDebug dbg, QCameraFocus::FocusMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraFocus::FocusMode value = *(QCameraFocus::FocusMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraFocus::FocusMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamerafocus.h:178
// [8] QDebug operator<<(QDebug, QCameraFocus::FocusPointMode) 
// (12)qm1261727381 (43)_Zls6QDebugN12QCameraFocus14FocusPointModeE
/*void qm1261727381_31(QDebug dbg, QCameraFocus::FocusPointMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QCameraFocus::FocusPointMode value = *(QCameraFocus::FocusPointMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QCameraFocus::FocusPointMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:156
// [8] QDebug operator<<(QDebug, QRadioTuner::State) 
// (12)qm1994561258 (32)_Zls6QDebugN11QRadioTuner5StateE
/*void qm1994561258_32(QDebug dbg, QRadioTuner::State value)*/ {
  QDebug dbg = *(QDebug*)this_; QRadioTuner::State value = *(QRadioTuner::State*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QRadioTuner::State) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:158
// [8] QDebug operator<<(QDebug, QRadioTuner::Error) 
// (12)qm2071048890 (32)_Zls6QDebugN11QRadioTuner5ErrorE
/*void qm2071048890_33(QDebug dbg, QRadioTuner::Error value)*/ {
  QDebug dbg = *(QDebug*)this_; QRadioTuner::Error value = *(QRadioTuner::Error*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QRadioTuner::Error) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:157
// [8] QDebug operator<<(QDebug, QRadioTuner::Band) 
// (12)qm3126244797 (31)_Zls6QDebugN11QRadioTuner4BandE
/*void qm3126244797_34(QDebug dbg, QRadioTuner::Band value)*/ {
  QDebug dbg = *(QDebug*)this_; QRadioTuner::Band value = *(QRadioTuner::Band*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QRadioTuner::Band) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:159
// [8] QDebug operator<<(QDebug, QRadioTuner::StereoMode) 
// (12)qm3961129615 (38)_Zls6QDebugN11QRadioTuner10StereoModeE
/*void qm3961129615_35(QDebug dbg, QRadioTuner::StereoMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QRadioTuner::StereoMode value = *(QRadioTuner::StereoMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QRadioTuner::StereoMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiotuner.h:160
// [8] QDebug operator<<(QDebug, QRadioTuner::SearchMode) 
// (11)qm122664151 (38)_Zls6QDebugN11QRadioTuner10SearchModeE
/*void qm122664151_36(QDebug dbg, QRadioTuner::SearchMode value)*/ {
  QDebug dbg = *(QDebug*)this_; QRadioTuner::SearchMode value = *(QRadioTuner::SearchMode*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QRadioTuner::SearchMode) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:131
// [8] QDebug operator<<(QDebug, QRadioData::Error) 
// (12)qm3608554132 (31)_Zls6QDebugN10QRadioData5ErrorE
/*void qm3608554132_37(QDebug dbg, QRadioData::Error value)*/ {
  QDebug dbg = *(QDebug*)this_; QRadioData::Error value = *(QRadioData::Error*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QRadioData::Error) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qradiodata.h:132
// [8] QDebug operator<<(QDebug, QRadioData::ProgramType) 
// (12)qm2190038610 (38)_Zls6QDebugN10QRadioData11ProgramTypeE
/*void qm2190038610_38(QDebug dbg, QRadioData::ProgramType value)*/ {
  QDebug dbg = *(QDebug*)this_; QRadioData::ProgramType value = *(QRadioData::ProgramType*)this_;
  (void) operator<<(dbg, value);
  auto xptr = (QDebug (*)(QDebug, QRadioData::ProgramType) ) &operator<<;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcamera.h:267
// [1] bool operator==(const QCamera::FrameRateRange &, const QCamera::FrameRateRange &) 
// (12)qm3797768658 (35)_ZeqRKN7QCamera14FrameRateRangeES2_
/*void qm3797768658_56(const QCamera::FrameRateRange & r1, const QCamera::FrameRateRange & r2)*/ {
  const QCamera::FrameRateRange & r1 = *(const QCamera::FrameRateRange *)this_; const QCamera::FrameRateRange & r2 = *(const QCamera::FrameRateRange *)this_;
  (void) operator==(r1, r2);
  auto xptr = (bool (*)(QCamera::FrameRateRange const&, QCamera::FrameRateRange const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qcameraviewfindersettings.h:94
// [-2] void swap(QCameraViewfinderSettings &, QCameraViewfinderSettings &) 
// (12)qm3154839640 (38)_Z4swapR25QCameraViewfinderSettingsS0_
/*void qm3154839640_72(QCameraViewfinderSettings & value1, QCameraViewfinderSettings & value2)*/ {
  QCameraViewfinderSettings & value1 = *(QCameraViewfinderSettings *)this_; QCameraViewfinderSettings & value2 = *(QCameraViewfinderSettings *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QCameraViewfinderSettings&, QCameraViewfinderSettings&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_multimedia

//  main block end
