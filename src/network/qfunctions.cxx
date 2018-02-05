
#include <QtCore>
#include <QtNetwork>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:115
// [4] uint qHash(const class QSslError &, uint)
extern "C"
uint C_Z5qHashRK9QSslErrorj_36(QSslError* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:59
// [4] uint qHash(const class QSslDiffieHellmanParameters &, uint)
extern "C"
uint C_Z5qHashRK27QSslDiffieHellmanParametersj_37(QSslDiffieHellmanParameters* dhparam, uint seed) {
  return (uint)qHash(*dhparam, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:71
// [4] uint qHash(const class QSslCertificate &, uint)
extern "C"
uint C_Z5qHashRK15QSslCertificatej_38(QSslCertificate* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:69
// [4] uint qHash(const class QHostAddress &, uint)
extern "C"
uint C_Z5qHashRK12QHostAddressj_39(QHostAddress* key, uint seed) {
  return (uint)qHash(*key, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:55
// [4] uint qHash(class QSslEllipticCurve, uint)
extern "C"
uint C_Z5qHash17QSslEllipticCurvej_40(QSslEllipticCurve* curve, uint seed) {
  return (uint)qHash(*curve, seed);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:90
// [4] uint qHash(class QSslEllipticCurve, uint)
extern "C"
uint C_Z5qHash17QSslEllipticCurvej_41(QSslEllipticCurve* curve, uint seed) {
  return (uint)qHash(*curve, seed);
}

//  main block end
