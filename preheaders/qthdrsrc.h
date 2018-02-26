#ifndef _QTHDRSRC_H_
#define _QTHDRSRC_H_

#include <string>  // fix: std::string 识别成了UNEXPOSED
// 使用在程序中自动生成的GEN_GO_QT_*宏确定是否#include某个模块，这样不需要修改这个文件了
// essentials
#ifndef protected
#define protected public
// #define private public
#endif

#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include <QtNetwork>
#include <QtQml>
#include <QtQuick>

// add-ons
// #include <QtQuickTemplates2>
#include <QtQuickControls2>
#include <QtQuickWidgets>

#endif
