#ifndef _QTHDRSRC_H_
#define _QTHDRSRC_H_

#include <string>  // fix: std::string 识别成了UNEXPOSED
// 使用在程序中自动生成的GEN_GO_QT_*宏确定是否#include某个模块，这样不需要修改这个文件了
// essentials
#ifndef protected
#define protected public
#define private public
#endif

#ifdef QT_WIDGETS_LIB
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#endif

#ifdef QT_QUICK_WIDGETS_LIB
#include <QtNetwork>
#include <QtQml>
#include <QtQuick>

// add-ons
// #include <QtQuickTemplates2>
#include <QtQuickControls2>
#include <QtQuickWidgets>
#endif

// webengines
/* #undef USE_WEBENGINES */
#ifdef QT_WEBENGINE_LIB
#include <QtPositioning>
#include <QtWebChannel>
#include <QtWebEngineCore>
#include <QtWebEngine>
#include <QtWebEngineWidgets>
#endif

#endif
