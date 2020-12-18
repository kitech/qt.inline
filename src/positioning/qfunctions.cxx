
#include <QtCore>
#include <QtPositioning>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_positioning(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:122
// [4] QIncompatibleFlag operator|(QGeoPositionInfoSource::PositioningMethods::enum_type, int) 
// (12)qm4293521180 (50)_ZorN22QGeoPositionInfoSource17PositioningMethodEi
/*void qm4293521180_244(QGeoPositionInfoSource::PositioningMethod f1, int f2)*/ {
  QGeoPositionInfoSource::PositioningMethod f1 = *(QGeoPositionInfoSource::PositioningMethod*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QGeoPositionInfoSource::PositioningMethod, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:122
// [4] QFlags<QGeoPositionInfoSource::PositioningMethods::enum_type> operator|(QGeoPositionInfoSource::PositioningMethods::enum_type, QGeoPositionInfoSource::PositioningMethods::enum_type) 
// (12)qm2591380850 (52)_ZorN22QGeoPositionInfoSource17PositioningMethodES0_
/*void qm2591380850_245(QGeoPositionInfoSource::PositioningMethod f1, QGeoPositionInfoSource::PositioningMethod f2)*/ {
  QGeoPositionInfoSource::PositioningMethod f1 = *(QGeoPositionInfoSource::PositioningMethod*)this_; QGeoPositionInfoSource::PositioningMethod f2 = *(QGeoPositionInfoSource::PositioningMethod*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGeoPositionInfoSource::PositioningMethod> (*)(QGeoPositionInfoSource::PositioningMethod, QGeoPositionInfoSource::PositioningMethod) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:122
// [4] QFlags<QGeoPositionInfoSource::PositioningMethods::enum_type> operator|(QGeoPositionInfoSource::PositioningMethods::enum_type, QFlags<QGeoPositionInfoSource::PositioningMethods::enum_type>) 
// (11)qm724788421 (61)_ZorN22QGeoPositionInfoSource17PositioningMethodE6QFlagsIS0_E
/*void qm724788421_246(QGeoPositionInfoSource::PositioningMethod f1, QFlags<QGeoPositionInfoSource::PositioningMethod> f2)*/ {
  QGeoPositionInfoSource::PositioningMethod f1 = *(QGeoPositionInfoSource::PositioningMethod*)this_; QFlags<QGeoPositionInfoSource::PositioningMethod> f2 = *(QFlags<QGeoPositionInfoSource::PositioningMethod>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGeoPositionInfoSource::PositioningMethod> (*)(QGeoPositionInfoSource::PositioningMethod, QFlags<QGeoPositionInfoSource::PositioningMethod>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_positioning

//  main block end
