//  header block begin
// /usr/include/qt/QtWidgets/qtooltip.h
#include <qtooltip.h>
#include <QtWidgets>

// QToolTip is pure virtual: false
//  header block end

//  main block begin

class MyQToolTip : public QToolTip {
public:
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:56
// [-2] void showText(const class QPoint &, const class QString &, class QWidget *)
extern "C"
void C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidget(const QPoint & pos, const QString & text, QWidget * w) {
  QToolTip::showText(pos, text, w);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:57
// [-2] void showText(const class QPoint &, const class QString &, class QWidget *, const class QRect &)
extern "C"
void C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRect(const QPoint & pos, const QString & text, QWidget * w, const QRect & rect) {
  QToolTip::showText(pos, text, w, rect);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:58
// [-2] void showText(const class QPoint &, const class QString &, class QWidget *, const class QRect &, int)
extern "C"
void C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRecti(const QPoint & pos, const QString & text, QWidget * w, const QRect & rect, int msecShowTime) {
  QToolTip::showText(pos, text, w, rect, msecShowTime);
}
// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:59
// [-2] void hideText()
extern "C"
void C_ZN8QToolTip8hideTextEv() {
  QToolTip::hideText();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:61
// [1] bool isVisible()
extern "C"
bool C_ZN8QToolTip9isVisibleEv() {
  return (bool)QToolTip::isVisible();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:62
// [8] QString text()
extern "C"
void* C_ZN8QToolTip4textEv() {
  auto rv = QToolTip::text();
return new QString(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:64
// [16] QPalette palette()
extern "C"
void* C_ZN8QToolTip7paletteEv() {
  auto rv = QToolTip::palette();
return new QPalette(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:65
// [-2] void setPalette(const class QPalette &)
extern "C"
void C_ZN8QToolTip10setPaletteERK8QPalette(const QPalette & arg0) {
  QToolTip::setPalette(arg0);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:66
// [16] QFont font()
extern "C"
void* C_ZN8QToolTip4fontEv() {
  auto rv = QToolTip::font();
return new QFont(rv);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtooltip.h:67
// [-2] void setFont(const class QFont &)
extern "C"
void C_ZN8QToolTip7setFontERK5QFont(const QFont & arg0) {
  QToolTip::setFont(arg0);
}
//  main block end
