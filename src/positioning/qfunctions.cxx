
#include <QtCore>
#include <QtPositioning>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:106
// [32] QDataStream & operator>>(QDataStream &, QGeoPositionInfo::Attribute &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamRN16QGeoPositionInfo9AttributeE_55(QDataStream* stream, QGeoPositionInfo::Attribute & attr) {
  auto& rv = operator>>(*stream, attr);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:106
// [32] QDataStream & operator>>(QDataStream &, QGeoShape &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR9QGeoShape_56(QDataStream* stream, QGeoShape* shape) {
  auto& rv = operator>>(*stream, *shape);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:55
// [32] QDataStream & operator>>(QDataStream &, QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR19QGeoAreaMonitorInfo_57(QDataStream* arg0, QGeoAreaMonitorInfo* arg1) {
  auto& rv = operator>>(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:107
// [32] QDataStream & operator>>(QDataStream &, QGeoSatelliteInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR17QGeoSatelliteInfo_58(QDataStream* stream, QGeoSatelliteInfo* info) {
  auto& rv = operator>>(*stream, *info);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:108
// [32] QDataStream & operator>>(QDataStream &, QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR16QGeoPositionInfo_59(QDataStream* stream, QGeoPositionInfo* info) {
  auto& rv = operator>>(*stream, *info);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:129
// [32] QDataStream & operator>>(QDataStream &, QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR14QGeoCoordinate_60(QDataStream* stream, QGeoCoordinate* coordinate) {
  auto& rv = operator>>(*stream, *coordinate);
return &rv;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:110
// [4] QIncompatibleFlag operator|(QGeoPositionInfoSource::PositioningMethods::enum_type, int)
extern "C" Q_DECL_EXPORT
void C_ZorN22QGeoPositionInfoSource17PositioningMethodEi_239(QGeoPositionInfoSource::PositioningMethods::enum_type f1, int f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:110
// [4] QFlags<QGeoPositionInfoSource::PositioningMethods::enum_type> operator|(QGeoPositionInfoSource::PositioningMethods::enum_type, QGeoPositionInfoSource::PositioningMethods::enum_type)
extern "C" Q_DECL_EXPORT
void C_ZorN22QGeoPositionInfoSource17PositioningMethodES0__240(QGeoPositionInfoSource::PositioningMethods::enum_type f1, QGeoPositionInfoSource::PositioningMethods::enum_type f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfosource.h:110
// [4] QFlags<QGeoPositionInfoSource::PositioningMethods::enum_type> operator|(QGeoPositionInfoSource::PositioningMethods::enum_type, QFlags<QGeoPositionInfoSource::PositioningMethods::enum_type>)
extern "C" Q_DECL_EXPORT
void C_ZorN22QGeoPositionInfoSource17PositioningMethodE6QFlagsIS0_E_241(QGeoPositionInfoSource::PositioningMethods::enum_type f1, QFlags<QGeoPositionInfoSource::PositioningMethod> f2) {
  auto rv = operator|(f1, f2);
/*return rv;*/
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:105
// [32] QDataStream & operator<<(QDataStream &, const QGeoShape &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK9QGeoShape_204(QDataStream* stream, QGeoShape* shape) {
  auto& rv = operator<<(*stream, *shape);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:54
// [32] QDataStream & operator<<(QDataStream &, const QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK19QGeoAreaMonitorInfo_205(QDataStream* arg0, QGeoAreaMonitorInfo* arg1) {
  auto& rv = operator<<(*arg0, *arg1);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:106
// [32] QDataStream & operator<<(QDataStream &, const QGeoSatelliteInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK17QGeoSatelliteInfo_206(QDataStream* stream, QGeoSatelliteInfo* info) {
  auto& rv = operator<<(*stream, *info);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:107
// [32] QDataStream & operator<<(QDataStream &, const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK16QGeoPositionInfo_207(QDataStream* stream, QGeoPositionInfo* info) {
  auto& rv = operator<<(*stream, *info);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:128
// [32] QDataStream & operator<<(QDataStream &, const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK14QGeoCoordinate_208(QDataStream* stream, QGeoCoordinate* coordinate) {
  auto& rv = operator<<(*stream, *coordinate);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:105
// [32] QDataStream & operator<<(QDataStream &, QGeoPositionInfo::Attribute)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamN16QGeoPositionInfo9AttributeE_209(QDataStream* stream, QGeoPositionInfo::Attribute attr) {
  auto& rv = operator<<(*stream, attr);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoshape.h:101
// [8] QDebug operator<<(QDebug, const QGeoShape &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK9QGeoShape_210(QDebug* arg0, QGeoShape* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeoareamonitorinfo.h:98
// [8] QDebug operator<<(QDebug, const QGeoAreaMonitorInfo &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK19QGeoAreaMonitorInfo_211(QDebug* arg0, QGeoAreaMonitorInfo* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeosatelliteinfo.h:102
// [8] QDebug operator<<(QDebug, const QGeoSatelliteInfo &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK17QGeoSatelliteInfo_212(QDebug* dbg, QGeoSatelliteInfo* info) {
  auto rv = operator<<(*dbg, *info);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeopositioninfo.h:101
// [8] QDebug operator<<(QDebug, const QGeoPositionInfo &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK16QGeoPositionInfo_213(QDebug* dbg, QGeoPositionInfo* info) {
  auto rv = operator<<(*dbg, *info);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:122
// [8] QDebug operator<<(QDebug, const QGeoCoordinate &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK14QGeoCoordinate_214(QDebug* arg0, QGeoCoordinate* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:125
// [4] uint qHash(const QGeoCoordinate &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK14QGeoCoordinatej_49(QGeoCoordinate* coordinate, uint seed) {
  return (uint)qHash(*coordinate, seed);
}

//  main block end
