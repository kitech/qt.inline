//  header block begin
// /usr/include/qt/QtQuickControls2/qquickstyle.h
#ifndef protected
#define protected public
#endif
#include <qquickstyle.h>
#include <QtQuickControls2>
#include "callback_inherit.h"

// QQuickStyle is pure virtual: false
// QQuickStyle has virtual projected: false
//  header block end

//  main block begin

class MyQQuickStyle : public QQuickStyle {
public:
  virtual ~MyQQuickStyle() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuickControls2/qquickstyle.h:49
// [8] QString name()
extern "C"
void* C_ZN11QQuickStyle4nameEv() {
  auto rv = QQuickStyle::name();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuickControls2/qquickstyle.h:50
// [8] QString path()
extern "C"
void* C_ZN11QQuickStyle4pathEv() {
  auto rv = QQuickStyle::path();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuickControls2/qquickstyle.h:51
// [-2] void setStyle(const class QString &)
extern "C"
void C_ZN11QQuickStyle8setStyleERK7QString(QString* style) {
  QQuickStyle::setStyle(*style);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuickControls2/qquickstyle.h:52
// [-2] void setFallbackStyle(const class QString &)
extern "C"
void C_ZN11QQuickStyle16setFallbackStyleERK7QString(QString* style) {
  QQuickStyle::setFallbackStyle(*style);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtQuickControls2/qquickstyle.h:53
// [8] QStringList availableStyles()
extern "C"
void* C_ZN11QQuickStyle15availableStylesEv() {
  auto rv = QQuickStyle::availableStyles();
return new QStringList(rv);
}

extern "C"
void C_ZN11QQuickStyleD2Ev(void *this_) {
  delete (QQuickStyle*)(this_);
}
//  main block end
