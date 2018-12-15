
#include <QtQml>
#include <QtPositioning>
#include <QtWebChannel>
#include <QtQuickWidgets>
#include <QtCore>
#include <QtNetwork>
#include <QtGui>
#include <QtWidgets>
#include <QtPrintSupport>
#include <QtQuick>
#include <QtWebEngineCore>
#include <QtWebEngineWidgets>
#include "hidden_symbols.h"
//  header block end

//  main block begin
// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:126
// [32] QDataStream & operator>>(QDataStream &, QWebEngineHistory &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR17QWebEngineHistory_61(QDataStream* stream, QWebEngineHistory* history) {
  auto& rv = operator>>(*stream, *history);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:125
// [32] QDataStream & operator<<(QDataStream &, const QWebEngineHistory &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK17QWebEngineHistory_222(QDataStream* stream, QWebEngineHistory* history) {
  auto& rv = operator<<(*stream, *history);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:110
// [8] QDebug operator<<(QDebug, const QWebEngineScript &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK16QWebEngineScript_223(QDebug* arg0, QWebEngineScript* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:83
// [-2] void swap(QWebEngineHistoryItem &, QWebEngineHistoryItem &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR21QWebEngineHistoryItemS0__93(QWebEngineHistoryItem* value1, QWebEngineHistoryItem* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:106
// [-2] void swap(QWebEngineScript &, QWebEngineScript &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR16QWebEngineScriptS0__94(QWebEngineScript* value1, QWebEngineScript* value2) {
  swap(*value1, *value2);
}

//  main block end
