
#include <QtCore>
#include <QtNetwork>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_network(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssl.h:124
// [4] QIncompatibleFlag operator|(QSsl::SslOptions::enum_type, int) 
// (12)qm1808645686 (22)_ZorN4QSsl9SslOptionEi
/*void qm1808645686_217(QSsl::SslOption f1, int f2)*/ {
  QSsl::SslOption f1 = *(QSsl::SslOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSsl::SslOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssl.h:124
// [4] QFlags<QSsl::SslOptions::enum_type> operator|(QSsl::SslOptions::enum_type, QSsl::SslOptions::enum_type) 
// (12)qm3916590108 (24)_ZorN4QSsl9SslOptionES0_
/*void qm3916590108_218(QSsl::SslOption f1, QSsl::SslOption f2)*/ {
  QSsl::SslOption f1 = *(QSsl::SslOption*)this_; QSsl::SslOption f2 = *(QSsl::SslOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSsl::SslOption> (*)(QSsl::SslOption, QSsl::SslOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssl.h:124
// [4] QFlags<QSsl::SslOptions::enum_type> operator|(QSsl::SslOptions::enum_type, QFlags<QSsl::SslOptions::enum_type>) 
// (12)qm1828796228 (33)_ZorN4QSsl9SslOptionE6QFlagsIS0_E
/*void qm1828796228_219(QSsl::SslOption f1, QFlags<QSsl::SslOption> f2)*/ {
  QSsl::SslOption f1 = *(QSsl::SslOption*)this_; QFlags<QSsl::SslOption> f2 = *(QFlags<QSsl::SslOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSsl::SslOption> (*)(QSsl::SslOption, QFlags<QSsl::SslOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:101
// [4] QIncompatibleFlag operator|(QNetworkConfigurationManager::Capabilities::enum_type, int) 
// (12)qm2692253149 (49)_ZorN28QNetworkConfigurationManager10CapabilityEi
/*void qm2692253149_220(QNetworkConfigurationManager::Capability f1, int f2)*/ {
  QNetworkConfigurationManager::Capability f1 = *(QNetworkConfigurationManager::Capability*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QNetworkConfigurationManager::Capability, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:101
// [4] QFlags<QNetworkConfigurationManager::Capabilities::enum_type> operator|(QNetworkConfigurationManager::Capabilities::enum_type, QNetworkConfigurationManager::Capabilities::enum_type) 
// (12)qm3857933482 (51)_ZorN28QNetworkConfigurationManager10CapabilityES0_
/*void qm3857933482_221(QNetworkConfigurationManager::Capability f1, QNetworkConfigurationManager::Capability f2)*/ {
  QNetworkConfigurationManager::Capability f1 = *(QNetworkConfigurationManager::Capability*)this_; QNetworkConfigurationManager::Capability f2 = *(QNetworkConfigurationManager::Capability*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QNetworkConfigurationManager::Capability> (*)(QNetworkConfigurationManager::Capability, QNetworkConfigurationManager::Capability) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfigmanager.h:101
// [4] QFlags<QNetworkConfigurationManager::Capabilities::enum_type> operator|(QNetworkConfigurationManager::Capabilities::enum_type, QFlags<QNetworkConfigurationManager::Capabilities::enum_type>) 
// (12)qm3694769371 (60)_ZorN28QNetworkConfigurationManager10CapabilityE6QFlagsIS0_E
/*void qm3694769371_222(QNetworkConfigurationManager::Capability f1, QFlags<QNetworkConfigurationManager::Capability> f2)*/ {
  QNetworkConfigurationManager::Capability f1 = *(QNetworkConfigurationManager::Capability*)this_; QFlags<QNetworkConfigurationManager::Capability> f2 = *(QFlags<QNetworkConfigurationManager::Capability>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QNetworkConfigurationManager::Capability> (*)(QNetworkConfigurationManager::Capability, QFlags<QNetworkConfigurationManager::Capability>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:174
// [4] QIncompatibleFlag operator|(QNetworkInterface::InterfaceFlags::enum_type, int) 
// (12)qm2200315501 (41)_ZorN17QNetworkInterface13InterfaceFlagEi
/*void qm2200315501_223(QNetworkInterface::InterfaceFlag f1, int f2)*/ {
  QNetworkInterface::InterfaceFlag f1 = *(QNetworkInterface::InterfaceFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QNetworkInterface::InterfaceFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:174
// [4] QFlags<QNetworkInterface::InterfaceFlags::enum_type> operator|(QNetworkInterface::InterfaceFlags::enum_type, QNetworkInterface::InterfaceFlags::enum_type) 
// (12)qm1323899678 (43)_ZorN17QNetworkInterface13InterfaceFlagES0_
/*void qm1323899678_224(QNetworkInterface::InterfaceFlag f1, QNetworkInterface::InterfaceFlag f2)*/ {
  QNetworkInterface::InterfaceFlag f1 = *(QNetworkInterface::InterfaceFlag*)this_; QNetworkInterface::InterfaceFlag f2 = *(QNetworkInterface::InterfaceFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QNetworkInterface::InterfaceFlag> (*)(QNetworkInterface::InterfaceFlag, QNetworkInterface::InterfaceFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:174
// [4] QFlags<QNetworkInterface::InterfaceFlags::enum_type> operator|(QNetworkInterface::InterfaceFlags::enum_type, QFlags<QNetworkInterface::InterfaceFlags::enum_type>) 
// (11)qm213157083 (52)_ZorN17QNetworkInterface13InterfaceFlagE6QFlagsIS0_E
/*void qm213157083_225(QNetworkInterface::InterfaceFlag f1, QFlags<QNetworkInterface::InterfaceFlag> f2)*/ {
  QNetworkInterface::InterfaceFlag f1 = *(QNetworkInterface::InterfaceFlag*)this_; QFlags<QNetworkInterface::InterfaceFlag> f2 = *(QFlags<QNetworkInterface::InterfaceFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QNetworkInterface::InterfaceFlag> (*)(QNetworkInterface::InterfaceFlag, QFlags<QNetworkInterface::InterfaceFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:245
// [4] QIncompatibleFlag operator|(QAbstractSocket::PauseModes::enum_type, int) 
// (11)qm260679083 (34)_ZorN15QAbstractSocket9PauseModeEi
/*void qm260679083_226(QAbstractSocket::PauseMode f1, int f2)*/ {
  QAbstractSocket::PauseMode f1 = *(QAbstractSocket::PauseMode*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QAbstractSocket::PauseMode, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:245
// [4] QFlags<QAbstractSocket::PauseModes::enum_type> operator|(QAbstractSocket::PauseModes::enum_type, QAbstractSocket::PauseModes::enum_type) 
// (12)qm2818061795 (36)_ZorN15QAbstractSocket9PauseModeES0_
/*void qm2818061795_227(QAbstractSocket::PauseMode f1, QAbstractSocket::PauseMode f2)*/ {
  QAbstractSocket::PauseMode f1 = *(QAbstractSocket::PauseMode*)this_; QAbstractSocket::PauseMode f2 = *(QAbstractSocket::PauseMode*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractSocket::PauseMode> (*)(QAbstractSocket::PauseMode, QAbstractSocket::PauseMode) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:245
// [4] QFlags<QAbstractSocket::PauseModes::enum_type> operator|(QAbstractSocket::PauseModes::enum_type, QFlags<QAbstractSocket::PauseModes::enum_type>) 
// (12)qm1997737282 (45)_ZorN15QAbstractSocket9PauseModeE6QFlagsIS0_E
/*void qm1997737282_228(QAbstractSocket::PauseMode f1, QFlags<QAbstractSocket::PauseMode> f2)*/ {
  QAbstractSocket::PauseMode f1 = *(QAbstractSocket::PauseMode*)this_; QFlags<QAbstractSocket::PauseMode> f2 = *(QFlags<QAbstractSocket::PauseMode>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractSocket::PauseMode> (*)(QAbstractSocket::PauseMode, QFlags<QAbstractSocket::PauseMode>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:244
// [4] QIncompatibleFlag operator|(QAbstractSocket::BindMode::enum_type, int) 
// (12)qm1691335729 (33)_ZorN15QAbstractSocket8BindFlagEi
/*void qm1691335729_229(QAbstractSocket::BindFlag f1, int f2)*/ {
  QAbstractSocket::BindFlag f1 = *(QAbstractSocket::BindFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QAbstractSocket::BindFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:244
// [4] QFlags<QAbstractSocket::BindMode::enum_type> operator|(QAbstractSocket::BindMode::enum_type, QAbstractSocket::BindMode::enum_type) 
// (12)qm1211995381 (35)_ZorN15QAbstractSocket8BindFlagES0_
/*void qm1211995381_230(QAbstractSocket::BindFlag f1, QAbstractSocket::BindFlag f2)*/ {
  QAbstractSocket::BindFlag f1 = *(QAbstractSocket::BindFlag*)this_; QAbstractSocket::BindFlag f2 = *(QAbstractSocket::BindFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractSocket::BindFlag> (*)(QAbstractSocket::BindFlag, QAbstractSocket::BindFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractsocket.h:244
// [4] QFlags<QAbstractSocket::BindMode::enum_type> operator|(QAbstractSocket::BindMode::enum_type, QFlags<QAbstractSocket::BindMode::enum_type>) 
// (12)qm3071920336 (44)_ZorN15QAbstractSocket8BindFlagE6QFlagsIS0_E
/*void qm3071920336_231(QAbstractSocket::BindFlag f1, QFlags<QAbstractSocket::BindFlag> f2)*/ {
  QAbstractSocket::BindFlag f1 = *(QAbstractSocket::BindFlag*)this_; QFlags<QAbstractSocket::BindFlag> f2 = *(QFlags<QAbstractSocket::BindFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractSocket::BindFlag> (*)(QAbstractSocket::BindFlag, QFlags<QAbstractSocket::BindFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:216
// [4] QIncompatibleFlag operator|(QNetworkProxy::Capabilities::enum_type, int) 
// (12)qm4192227931 (34)_ZorN13QNetworkProxy10CapabilityEi
/*void qm4192227931_232(QNetworkProxy::Capability f1, int f2)*/ {
  QNetworkProxy::Capability f1 = *(QNetworkProxy::Capability*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QNetworkProxy::Capability, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:216
// [4] QFlags<QNetworkProxy::Capabilities::enum_type> operator|(QNetworkProxy::Capabilities::enum_type, QNetworkProxy::Capabilities::enum_type) 
// (12)qm2426226056 (36)_ZorN13QNetworkProxy10CapabilityES0_
/*void qm2426226056_233(QNetworkProxy::Capability f1, QNetworkProxy::Capability f2)*/ {
  QNetworkProxy::Capability f1 = *(QNetworkProxy::Capability*)this_; QNetworkProxy::Capability f2 = *(QNetworkProxy::Capability*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QNetworkProxy::Capability> (*)(QNetworkProxy::Capability, QNetworkProxy::Capability) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:216
// [4] QFlags<QNetworkProxy::Capabilities::enum_type> operator|(QNetworkProxy::Capabilities::enum_type, QFlags<QNetworkProxy::Capabilities::enum_type>) 
// (12)qm3313817596 (45)_ZorN13QNetworkProxy10CapabilityE6QFlagsIS0_E
/*void qm3313817596_234(QNetworkProxy::Capability f1, QFlags<QNetworkProxy::Capability> f2)*/ {
  QNetworkProxy::Capability f1 = *(QNetworkProxy::Capability*)this_; QFlags<QNetworkProxy::Capability> f2 = *(QFlags<QNetworkProxy::Capability>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QNetworkProxy::Capability> (*)(QNetworkProxy::Capability, QFlags<QNetworkProxy::Capability>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:105
// [4] QIncompatibleFlag operator|(QLocalServer::SocketOptions::enum_type, int) 
// (12)qm2090785772 (35)_ZorN12QLocalServer12SocketOptionEi
/*void qm2090785772_235(QLocalServer::SocketOption f1, int f2)*/ {
  QLocalServer::SocketOption f1 = *(QLocalServer::SocketOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QLocalServer::SocketOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:105
// [4] QFlags<QLocalServer::SocketOptions::enum_type> operator|(QLocalServer::SocketOptions::enum_type, QLocalServer::SocketOptions::enum_type) 
// (12)qm2944254733 (37)_ZorN12QLocalServer12SocketOptionES0_
/*void qm2944254733_236(QLocalServer::SocketOption f1, QLocalServer::SocketOption f2)*/ {
  QLocalServer::SocketOption f1 = *(QLocalServer::SocketOption*)this_; QLocalServer::SocketOption f2 = *(QLocalServer::SocketOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QLocalServer::SocketOption> (*)(QLocalServer::SocketOption, QLocalServer::SocketOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qlocalserver.h:105
// [4] QFlags<QLocalServer::SocketOptions::enum_type> operator|(QLocalServer::SocketOptions::enum_type, QFlags<QLocalServer::SocketOptions::enum_type>) 
// (12)qm2325614030 (46)_ZorN12QLocalServer12SocketOptionE6QFlagsIS0_E
/*void qm2325614030_237(QLocalServer::SocketOption f1, QFlags<QLocalServer::SocketOption> f2)*/ {
  QLocalServer::SocketOption f1 = *(QLocalServer::SocketOption*)this_; QFlags<QLocalServer::SocketOption> f2 = *(QFlags<QLocalServer::SocketOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QLocalServer::SocketOption> (*)(QLocalServer::SocketOption, QFlags<QLocalServer::SocketOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:162
// [4] QIncompatibleFlag operator|(QHostAddress::ConversionMode::enum_type, int) 
// (12)qm3674289263 (41)_ZorN12QHostAddress18ConversionModeFlagEi
/*void qm3674289263_238(QHostAddress::ConversionModeFlag f1, int f2)*/ {
  QHostAddress::ConversionModeFlag f1 = *(QHostAddress::ConversionModeFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QHostAddress::ConversionModeFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:162
// [4] QFlags<QHostAddress::ConversionMode::enum_type> operator|(QHostAddress::ConversionMode::enum_type, QHostAddress::ConversionMode::enum_type) 
// (12)qm2405847283 (43)_ZorN12QHostAddress18ConversionModeFlagES0_
/*void qm2405847283_239(QHostAddress::ConversionModeFlag f1, QHostAddress::ConversionModeFlag f2)*/ {
  QHostAddress::ConversionModeFlag f1 = *(QHostAddress::ConversionModeFlag*)this_; QHostAddress::ConversionModeFlag f2 = *(QHostAddress::ConversionModeFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QHostAddress::ConversionModeFlag> (*)(QHostAddress::ConversionModeFlag, QHostAddress::ConversionModeFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:162
// [4] QFlags<QHostAddress::ConversionMode::enum_type> operator|(QHostAddress::ConversionMode::enum_type, QFlags<QHostAddress::ConversionMode::enum_type>) 
// (11)qm399535062 (52)_ZorN12QHostAddress18ConversionModeFlagE6QFlagsIS0_E
/*void qm399535062_240(QHostAddress::ConversionModeFlag f1, QFlags<QHostAddress::ConversionModeFlag> f2)*/ {
  QHostAddress::ConversionModeFlag f1 = *(QHostAddress::ConversionModeFlag*)this_; QFlags<QHostAddress::ConversionModeFlag> f2 = *(QFlags<QHostAddress::ConversionModeFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QHostAddress::ConversionModeFlag> (*)(QHostAddress::ConversionModeFlag, QFlags<QHostAddress::ConversionModeFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:90
// [4] QIncompatibleFlag operator|(QHstsPolicy::PolicyFlags::enum_type, int) 
// (12)qm1822631504 (32)_ZorN11QHstsPolicy10PolicyFlagEi
/*void qm1822631504_241(QHstsPolicy::PolicyFlag f1, int f2)*/ {
  QHstsPolicy::PolicyFlag f1 = *(QHstsPolicy::PolicyFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QHstsPolicy::PolicyFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:90
// [4] QFlags<QHstsPolicy::PolicyFlags::enum_type> operator|(QHstsPolicy::PolicyFlags::enum_type, QHstsPolicy::PolicyFlags::enum_type) 
// (11)qm604093477 (34)_ZorN11QHstsPolicy10PolicyFlagES0_
/*void qm604093477_242(QHstsPolicy::PolicyFlag f1, QHstsPolicy::PolicyFlag f2)*/ {
  QHstsPolicy::PolicyFlag f1 = *(QHstsPolicy::PolicyFlag*)this_; QHstsPolicy::PolicyFlag f2 = *(QHstsPolicy::PolicyFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QHstsPolicy::PolicyFlag> (*)(QHstsPolicy::PolicyFlag, QHstsPolicy::PolicyFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:90
// [4] QFlags<QHstsPolicy::PolicyFlags::enum_type> operator|(QHstsPolicy::PolicyFlags::enum_type, QFlags<QHstsPolicy::PolicyFlags::enum_type>) 
// (12)qm2574839821 (43)_ZorN11QHstsPolicy10PolicyFlagE6QFlagsIS0_E
/*void qm2574839821_243(QHstsPolicy::PolicyFlag f1, QFlags<QHstsPolicy::PolicyFlag> f2)*/ {
  QHstsPolicy::PolicyFlag f1 = *(QHstsPolicy::PolicyFlag*)this_; QFlags<QHstsPolicy::PolicyFlag> f2 = *(QFlags<QHstsPolicy::PolicyFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QHstsPolicy::PolicyFlag> (*)(QHstsPolicy::PolicyFlag, QFlags<QHstsPolicy::PolicyFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:84
// [1] bool operator!=(const QSslPreSharedKeyAuthenticator &, const QSslPreSharedKeyAuthenticator &) 
// (11)qm693217444 (40)_ZneRK29QSslPreSharedKeyAuthenticatorS1_
/*void qm693217444_63(const QSslPreSharedKeyAuthenticator & lhs, const QSslPreSharedKeyAuthenticator & rhs)*/ {
  const QSslPreSharedKeyAuthenticator & lhs = *(const QSslPreSharedKeyAuthenticator *)this_; const QSslPreSharedKeyAuthenticator & rhs = *(const QSslPreSharedKeyAuthenticator *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QSslPreSharedKeyAuthenticator const&, QSslPreSharedKeyAuthenticator const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:68
// [1] bool operator!=(const QSslDiffieHellmanParameters &, const QSslDiffieHellmanParameters &) 
// (12)qm3984408238 (38)_ZneRK27QSslDiffieHellmanParametersS1_
/*void qm3984408238_64(const QSslDiffieHellmanParameters & lhs, const QSslDiffieHellmanParameters & rhs)*/ {
  const QSslDiffieHellmanParameters & lhs = *(const QSslDiffieHellmanParameters *)this_; const QSslDiffieHellmanParameters & rhs = *(const QSslDiffieHellmanParameters *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QSslDiffieHellmanParameters const&, QSslDiffieHellmanParameters const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttp2configuration.h:93
// [1] bool operator!=(const QHttp2Configuration &, const QHttp2Configuration &) 
// (12)qm2917541629 (30)_ZneRK19QHttp2ConfigurationS1_
/*void qm2917541629_65(const QHttp2Configuration & lhs, const QHttp2Configuration & rhs)*/ {
  const QHttp2Configuration & lhs = *(const QHttp2Configuration *)this_; const QHttp2Configuration & rhs = *(const QHttp2Configuration *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QHttp2Configuration const&, QHttp2Configuration const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qocspresponse.h:108
// [1] bool operator!=(const QOcspResponse &, const QOcspResponse &) 
// (12)qm1851574805 (24)_ZneRK13QOcspResponseS1_
/*void qm1851574805_66(const QOcspResponse & lhs, const QOcspResponse & rhs)*/ {
  const QOcspResponse & lhs = *(const QOcspResponse *)this_; const QOcspResponse & rhs = *(const QOcspResponse *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QOcspResponse const&, QOcspResponse const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:94
// [1] bool operator!=(const QHstsPolicy &, const QHstsPolicy &) 
// (12)qm2275423622 (22)_ZneRK11QHstsPolicyS1_
/*void qm2275423622_67(const QHstsPolicy & lhs, const QHstsPolicy & rhs)*/ {
  const QHstsPolicy & lhs = *(const QHstsPolicy *)this_; const QHstsPolicy & rhs = *(const QHstsPolicy *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QHstsPolicy const&, QHstsPolicy const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:167
// [1] bool operator!=(QHostAddress::SpecialAddress, const QHostAddress &) 
// (12)qm2321161509 (40)_ZneN12QHostAddress14SpecialAddressERKS_
/*void qm2321161509_68(QHostAddress::SpecialAddress lhs, const QHostAddress & rhs)*/ {
  QHostAddress::SpecialAddress lhs = *(QHostAddress::SpecialAddress*)this_; const QHostAddress & rhs = *(const QHostAddress *)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QHostAddress::SpecialAddress, QHostAddress const&) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:96
// [1] bool operator!=(QSslEllipticCurve, QSslEllipticCurve) 
// (12)qm1228452857 (25)_Zne17QSslEllipticCurveS_
/*void qm1228452857_69(QSslEllipticCurve lhs, QSslEllipticCurve rhs)*/ {
  QSslEllipticCurve lhs = *(QSslEllipticCurve*)this_; QSslEllipticCurve rhs = *(QSslEllipticCurve*)this_;
  (void) operator!=(lhs, rhs);
  auto xptr = (bool (*)(QSslEllipticCurve, QSslEllipticCurve) ) &operator!=;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:165
// [1] bool operator==(QHostAddress::SpecialAddress, const QHostAddress &) 
// (12)qm2092756438 (40)_ZeqN12QHostAddress14SpecialAddressERKS_
/*void qm2092756438_57(QHostAddress::SpecialAddress address1, const QHostAddress & address2)*/ {
  QHostAddress::SpecialAddress address1 = *(QHostAddress::SpecialAddress*)this_; const QHostAddress & address2 = *(const QHostAddress *)this_;
  (void) operator==(address1, address2);
  auto xptr = (bool (*)(QHostAddress::SpecialAddress, QHostAddress const&) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:93
// [1] bool operator==(QSslEllipticCurve, QSslEllipticCurve) 
// (12)qm3392278691 (25)_Zeq17QSslEllipticCurveS_
/*void qm3392278691_58(QSslEllipticCurve lhs, QSslEllipticCurve rhs)*/ {
  QSslEllipticCurve lhs = *(QSslEllipticCurve*)this_; QSslEllipticCurve rhs = *(QSslEllipticCurve*)this_;
  (void) operator==(lhs, rhs);
  auto xptr = (bool (*)(QSslEllipticCurve, QSslEllipticCurve) ) &operator==;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:90
// [4] uint qHash(QSslEllipticCurve, uint) 
// (12)qm1747224751 (28)_Z5qHash17QSslEllipticCurvej
/*void qm1747224751_20(QSslEllipticCurve curve, unsigned int seed)*/ {
  QSslEllipticCurve curve = *(QSslEllipticCurve*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(curve, seed);
  auto xptr = (unsigned int (*)(QSslEllipticCurve, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslellipticcurve.h:55
// [4] uint qHash(QSslEllipticCurve, uint) 
// (12)qm1747224751 (28)_Z5qHash17QSslEllipticCurvej
/*void qm1747224751_21(QSslEllipticCurve curve, unsigned int seed)*/ {
  QSslEllipticCurve curve = *(QSslEllipticCurve*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(curve, seed);
  auto xptr = (unsigned int (*)(QSslEllipticCurve, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslerror.h:125
// [-2] void swap(QSslError &, QSslError &) 
// (12)qm1901201870 (21)_Z4swapR9QSslErrorS0_
/*void qm1901201870_73(QSslError & value1, QSslError & value2)*/ {
  QSslError & value1 = *(QSslError *)this_; QSslError & value2 = *(QSslError *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QSslError&, QSslError&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttpmultipart.h:84
// [-2] void swap(QHttpPart &, QHttpPart &) 
// (12)qm2753017895 (21)_Z4swapR9QHttpPartS0_
/*void qm2753017895_74(QHttpPart & value1, QHttpPart & value2)*/ {
  QHttpPart & value1 = *(QHttpPart *)this_; QHttpPart & value2 = *(QHttpPart *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QHttpPart&, QHttpPart&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostinfo.h:159
// [-2] void swap(QHostInfo &, QHostInfo &) 
// (12)qm2316970783 (21)_Z4swapR9QHostInfoS0_
/*void qm2316970783_75(QHostInfo & value1, QHostInfo & value2)*/ {
  QHostInfo & value1 = *(QHostInfo *)this_; QHostInfo & value2 = *(QHostInfo *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QHostInfo&, QHostInfo&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslkey.h:102
// [-2] void swap(QSslKey &, QSslKey &) 
// (10)qm26906730 (19)_Z4swapR7QSslKeyS0_
/*void qm26906730_76(QSslKey & value1, QSslKey & value2)*/ {
  QSslKey & value1 = *(QSslKey *)this_; QSslKey & value2 = *(QSslKey *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QSslKey&, QSslKey&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslpresharedkeyauthenticator.h:89
// [-2] void swap(QSslPreSharedKeyAuthenticator &, QSslPreSharedKeyAuthenticator &) 
// (10)qm48926716 (42)_Z4swapR29QSslPreSharedKeyAuthenticatorS0_
/*void qm48926716_77(QSslPreSharedKeyAuthenticator & value1, QSslPreSharedKeyAuthenticator & value2)*/ {
  QSslPreSharedKeyAuthenticator & value1 = *(QSslPreSharedKeyAuthenticator *)this_; QSslPreSharedKeyAuthenticator & value2 = *(QSslPreSharedKeyAuthenticator *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QSslPreSharedKeyAuthenticator&, QSslPreSharedKeyAuthenticator&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qssldiffiehellmanparameters.h:112
// [-2] void swap(QSslDiffieHellmanParameters &, QSslDiffieHellmanParameters &) 
// (12)qm2304082343 (40)_Z4swapR27QSslDiffieHellmanParametersS0_
/*void qm2304082343_78(QSslDiffieHellmanParameters & value1, QSslDiffieHellmanParameters & value2)*/ {
  QSslDiffieHellmanParameters & value1 = *(QSslDiffieHellmanParameters *)this_; QSslDiffieHellmanParameters & value2 = *(QSslDiffieHellmanParameters *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QSslDiffieHellmanParameters&, QSslDiffieHellmanParameters&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificateextension.h:76
// [-2] void swap(QSslCertificateExtension &, QSslCertificateExtension &) 
// (12)qm3079680631 (37)_Z4swapR24QSslCertificateExtensionS0_
/*void qm3079680631_79(QSslCertificateExtension & value1, QSslCertificateExtension & value2)*/ {
  QSslCertificateExtension & value1 = *(QSslCertificateExtension *)this_; QSslCertificateExtension & value2 = *(QSslCertificateExtension *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QSslCertificateExtension&, QSslCertificateExtension&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:127
// [-2] void swap(QDnsMailExchangeRecord &, QDnsMailExchangeRecord &) 
// (12)qm4001453882 (35)_Z4swapR22QDnsMailExchangeRecordS0_
/*void qm4001453882_80(QDnsMailExchangeRecord & value1, QDnsMailExchangeRecord & value2)*/ {
  QDnsMailExchangeRecord & value1 = *(QDnsMailExchangeRecord *)this_; QDnsMailExchangeRecord & value2 = *(QDnsMailExchangeRecord *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QDnsMailExchangeRecord&, QDnsMailExchangeRecord&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkconfiguration.h:141
// [-2] void swap(QNetworkConfiguration &, QNetworkConfiguration &) 
// (12)qm4024786709 (34)_Z4swapR21QNetworkConfigurationS0_
/*void qm4024786709_81(QNetworkConfiguration & value1, QNetworkConfiguration & value2)*/ {
  QNetworkConfiguration & value1 = *(QNetworkConfiguration *)this_; QNetworkConfiguration & value2 = *(QNetworkConfiguration *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QNetworkConfiguration&, QNetworkConfiguration&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qabstractnetworkcache.h:105
// [-2] void swap(QNetworkCacheMetaData &, QNetworkCacheMetaData &) 
// (12)qm1902430401 (34)_Z4swapR21QNetworkCacheMetaDataS0_
/*void qm1902430401_82(QNetworkCacheMetaData & value1, QNetworkCacheMetaData & value2)*/ {
  QNetworkCacheMetaData & value1 = *(QNetworkCacheMetaData *)this_; QNetworkCacheMetaData & value2 = *(QNetworkCacheMetaData *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QNetworkCacheMetaData&, QNetworkCacheMetaData&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:104
// [-2] void swap(QDnsHostAddressRecord &, QDnsHostAddressRecord &) 
// (12)qm1065497618 (34)_Z4swapR21QDnsHostAddressRecordS0_
/*void qm1065497618_83(QDnsHostAddressRecord & value1, QDnsHostAddressRecord & value2)*/ {
  QDnsHostAddressRecord & value1 = *(QDnsHostAddressRecord *)this_; QDnsHostAddressRecord & value2 = *(QDnsHostAddressRecord *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QDnsHostAddressRecord&, QDnsHostAddressRecord&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:103
// [-2] void swap(QNetworkAddressEntry &, QNetworkAddressEntry &) 
// (12)qm2681629736 (33)_Z4swapR20QNetworkAddressEntryS0_
/*void qm2681629736_84(QNetworkAddressEntry & value1, QNetworkAddressEntry & value2)*/ {
  QNetworkAddressEntry & value1 = *(QNetworkAddressEntry *)this_; QNetworkAddressEntry & value2 = *(QNetworkAddressEntry *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QNetworkAddressEntry&, QNetworkAddressEntry&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:82
// [-2] void swap(QDnsDomainNameRecord &, QDnsDomainNameRecord &) 
// (11)qm897300294 (33)_Z4swapR20QDnsDomainNameRecordS0_
/*void qm897300294_85(QDnsDomainNameRecord & value1, QDnsDomainNameRecord & value2)*/ {
  QDnsDomainNameRecord & value1 = *(QDnsDomainNameRecord *)this_; QDnsDomainNameRecord & value2 = *(QDnsDomainNameRecord *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QDnsDomainNameRecord&, QDnsDomainNameRecord&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhttp2configuration.h:89
// [-2] void swap(QHttp2Configuration &, QHttp2Configuration &) 
// (12)qm3055642656 (32)_Z4swapR19QHttp2ConfigurationS0_
/*void qm3055642656_86(QHttp2Configuration & value1, QHttp2Configuration & value2)*/ {
  QHttp2Configuration & value1 = *(QHttp2Configuration *)this_; QHttp2Configuration & value2 = *(QHttp2Configuration *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QHttp2Configuration&, QHttp2Configuration&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:137
// [-2] void swap(QNetworkProxyQuery &, QNetworkProxyQuery &) 
// (12)qm1235118227 (31)_Z4swapR18QNetworkProxyQueryS0_
/*void qm1235118227_87(QNetworkProxyQuery & value1, QNetworkProxyQuery & value2)*/ {
  QNetworkProxyQuery & value1 = *(QNetworkProxyQuery *)this_; QNetworkProxyQuery & value2 = *(QNetworkProxyQuery *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QNetworkProxyQuery&, QNetworkProxyQuery&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslconfiguration.h:211
// [-2] void swap(QSslConfiguration &, QSslConfiguration &) 
// (11)qm751898202 (30)_Z4swapR17QSslConfigurationS0_
/*void qm751898202_88(QSslConfiguration & value1, QSslConfiguration & value2)*/ {
  QSslConfiguration & value1 = *(QSslConfiguration *)this_; QSslConfiguration & value2 = *(QSslConfiguration *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QSslConfiguration&, QSslConfiguration&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkinterface.h:172
// [-2] void swap(QNetworkInterface &, QNetworkInterface &) 
// (12)qm1336714739 (30)_Z4swapR17QNetworkInterfaceS0_
/*void qm1336714739_89(QNetworkInterface & value1, QNetworkInterface & value2)*/ {
  QNetworkInterface & value1 = *(QNetworkInterface *)this_; QNetworkInterface & value2 = *(QNetworkInterface *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QNetworkInterface&, QNetworkInterface&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:152
// [-2] void swap(QDnsServiceRecord &, QDnsServiceRecord &) 
// (11)qm306135914 (30)_Z4swapR17QDnsServiceRecordS0_
/*void qm306135914_90(QDnsServiceRecord & value1, QDnsServiceRecord & value2)*/ {
  QDnsServiceRecord & value1 = *(QDnsServiceRecord *)this_; QDnsServiceRecord & value2 = *(QDnsServiceRecord *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QDnsServiceRecord&, QDnsServiceRecord&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkdatagram.h:115
// [-2] void swap(QNetworkDatagram &, QNetworkDatagram &) 
// (12)qm1506454452 (29)_Z4swapR16QNetworkDatagramS0_
/*void qm1506454452_91(QNetworkDatagram & value1, QNetworkDatagram & value2)*/ {
  QNetworkDatagram & value1 = *(QNetworkDatagram *)this_; QNetworkDatagram & value2 = *(QNetworkDatagram *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QNetworkDatagram&, QNetworkDatagram&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcertificate.h:185
// [-2] void swap(QSslCertificate &, QSslCertificate &) 
// (12)qm2659396434 (28)_Z4swapR15QSslCertificateS0_
/*void qm2659396434_92(QSslCertificate & value1, QSslCertificate & value2)*/ {
  QSslCertificate & value1 = *(QSslCertificate *)this_; QSslCertificate & value2 = *(QSslCertificate *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QSslCertificate&, QSslCertificate&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkrequest.h:201
// [-2] void swap(QNetworkRequest &, QNetworkRequest &) 
// (12)qm3552632983 (28)_Z4swapR15QNetworkRequestS0_
/*void qm3552632983_93(QNetworkRequest & value1, QNetworkRequest & value2)*/ {
  QNetworkRequest & value1 = *(QNetworkRequest *)this_; QNetworkRequest & value2 = *(QNetworkRequest *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QNetworkRequest&, QNetworkRequest&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkcookie.h:111
// [-2] void swap(QNetworkCookie &, QNetworkCookie &) 
// (12)qm3426194935 (27)_Z4swapR14QNetworkCookieS0_
/*void qm3426194935_94(QNetworkCookie & value1, QNetworkCookie & value2)*/ {
  QNetworkCookie & value1 = *(QNetworkCookie *)this_; QNetworkCookie & value2 = *(QNetworkCookie *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QNetworkCookie&, QNetworkCookie&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qdnslookup.h:174
// [-2] void swap(QDnsTextRecord &, QDnsTextRecord &) 
// (12)qm2331168048 (27)_Z4swapR14QDnsTextRecordS0_
/*void qm2331168048_95(QDnsTextRecord & value1, QDnsTextRecord & value2)*/ {
  QDnsTextRecord & value1 = *(QDnsTextRecord *)this_; QDnsTextRecord & value2 = *(QDnsTextRecord *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QDnsTextRecord&, QDnsTextRecord&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qocspresponse.h:110
// [-2] void swap(QOcspResponse &, QOcspResponse &) 
// (10)qm71259299 (26)_Z4swapR13QOcspResponseS0_
/*void qm71259299_96(QOcspResponse & value1, QOcspResponse & value2)*/ {
  QOcspResponse & value1 = *(QOcspResponse *)this_; QOcspResponse & value2 = *(QOcspResponse *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QOcspResponse&, QOcspResponse&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qnetworkproxy.h:215
// [-2] void swap(QNetworkProxy &, QNetworkProxy &) 
// (11)qm608551426 (26)_Z4swapR13QNetworkProxyS0_
/*void qm608551426_97(QNetworkProxy & value1, QNetworkProxy & value2)*/ {
  QNetworkProxy & value1 = *(QNetworkProxy *)this_; QNetworkProxy & value2 = *(QNetworkProxy *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QNetworkProxy&, QNetworkProxy&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhostaddress.h:163
// [-2] void swap(QHostAddress &, QHostAddress &) 
// (12)qm3121454526 (25)_Z4swapR12QHostAddressS0_
/*void qm3121454526_98(QHostAddress & value1, QHostAddress & value2)*/ {
  QHostAddress & value1 = *(QHostAddress *)this_; QHostAddress & value2 = *(QHostAddress *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QHostAddress&, QHostAddress&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qhstspolicy.h:89
// [-2] void swap(QHstsPolicy &, QHstsPolicy &) 
// (12)qm4127977121 (24)_Z4swapR11QHstsPolicyS0_
/*void qm4127977121_99(QHstsPolicy & value1, QHstsPolicy & value2)*/ {
  QHstsPolicy & value1 = *(QHstsPolicy *)this_; QHstsPolicy & value2 = *(QHstsPolicy *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QHstsPolicy&, QHstsPolicy&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtNetwork/qsslcipher.h:88
// [-2] void swap(QSslCipher &, QSslCipher &) 
// (12)qm1555603425 (23)_Z4swapR10QSslCipherS0_
/*void qm1555603425_100(QSslCipher & value1, QSslCipher & value2)*/ {
  QSslCipher & value1 = *(QSslCipher *)this_; QSslCipher & value2 = *(QSslCipher *)this_;
  (void) swap(value1, value2);
  auto xptr = (void (*)(QSslCipher&, QSslCipher&) ) &swap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_network

//  main block end
