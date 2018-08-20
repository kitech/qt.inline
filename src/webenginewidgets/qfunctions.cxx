
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
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:124
// [32] QDataStream & operator>>(QDataStream &, QWebEngineHistory &)
extern "C" Q_DECL_EXPORT
void* C_ZrsR11QDataStreamR17QWebEngineHistory_61(QDataStream* stream, QWebEngineHistory* history) {
  auto& rv = operator>>(*stream, *history);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:123
// [32] QDataStream & operator<<(QDataStream &, const QWebEngineHistory &)
extern "C" Q_DECL_EXPORT
void* C_ZlsR11QDataStreamRK17QWebEngineHistory_230(QDataStream* stream, QWebEngineHistory* history) {
  auto& rv = operator<<(*stream, *history);
return &rv;
}

// Invalid Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:108
// [8] QDebug operator<<(QDebug, const QWebEngineScript &)
extern "C" Q_DECL_EXPORT
void* C_Zls6QDebugRK16QWebEngineScript_231(QDebug* arg0, QWebEngineScript* arg1) {
  auto rv = operator<<(*arg0, *arg1);
return new QDebug(rv);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginehistory.h:82
// [-2] void swap(QWebEngineHistoryItem &, QWebEngineHistoryItem &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR21QWebEngineHistoryItemS0__98(QWebEngineHistoryItem* value1, QWebEngineHistoryItem* value2) {
  swap(*value1, *value2);
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWebEngineWidgets/qwebenginescript.h:105
// [-2] void swap(QWebEngineScript &, QWebEngineScript &)
extern "C" Q_DECL_EXPORT
void C_Z4swapR16QWebEngineScriptS0__99(QWebEngineScript* value1, QWebEngineScript* value2) {
  swap(*value1, *value2);
}

//  main block end
