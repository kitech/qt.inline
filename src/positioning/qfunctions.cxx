
#include <QtCore>
#include <QtPositioning>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtPositioning/qgeocoordinate.h:125
// [4] uint qHash(const QGeoCoordinate &, uint)
extern "C" Q_DECL_EXPORT
uint C_Z5qHashRK14QGeoCoordinatej_42(QGeoCoordinate* coordinate, uint seed) {
  return (uint)qHash(*coordinate, seed);
}

//  main block end
