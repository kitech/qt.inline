// /usr/include/qt/QtWidgets/qtooltip.h
#include <qtooltip.h>
#include <QtWidgets>

// static
// /usr/include/qt/QtWidgets/qtooltip.h:55
// void showText(const class QPoint &, const class QString &, class QWidget *)
extern "C"
void C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidget(const QPoint & pos, const QString & text, QWidget * w) {
  QToolTip::showText(pos, text, w);
}
// static
// /usr/include/qt/QtWidgets/qtooltip.h:56
// void showText(const class QPoint &, const class QString &, class QWidget *, const class QRect &)
extern "C"
void C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRect(const QPoint & pos, const QString & text, QWidget * w, const QRect & rect) {
  QToolTip::showText(pos, text, w, rect);
}
// static
// /usr/include/qt/QtWidgets/qtooltip.h:57
// void showText(const class QPoint &, const class QString &, class QWidget *, const class QRect &, int)
extern "C"
void C_ZN8QToolTip8showTextERK6QPointRK7QStringP7QWidgetRK5QRecti(const QPoint & pos, const QString & text, QWidget * w, const QRect & rect, int msecShowTime) {
  QToolTip::showText(pos, text, w, rect, msecShowTime);
}
// static inline
// /usr/include/qt/QtWidgets/qtooltip.h:58
// void hideText()
extern "C"
void C_ZN8QToolTip8hideTextEv() {
  QToolTip::hideText();
}
// static
// /usr/include/qt/QtWidgets/qtooltip.h:60
// bool isVisible()
extern "C"
void C_ZN8QToolTip9isVisibleEv() {
  /*return*/ QToolTip::isVisible();
}
// static
// /usr/include/qt/QtWidgets/qtooltip.h:61
// QString text()
extern "C"
void C_ZN8QToolTip4textEv() {
  /*return*/ QToolTip::text();
}
// static
// /usr/include/qt/QtWidgets/qtooltip.h:63
// QPalette palette()
extern "C"
void C_ZN8QToolTip7paletteEv() {
  /*return*/ QToolTip::palette();
}
// static
// /usr/include/qt/QtWidgets/qtooltip.h:64
// void setPalette(const class QPalette &)
extern "C"
void C_ZN8QToolTip10setPaletteERK8QPalette(const QPalette & a0) {
  QToolTip::setPalette(a0);
}
// static
// /usr/include/qt/QtWidgets/qtooltip.h:65
// QFont font()
extern "C"
void C_ZN8QToolTip4fontEv() {
  /*return*/ QToolTip::font();
}
// static
// /usr/include/qt/QtWidgets/qtooltip.h:66
// void setFont(const class QFont &)
extern "C"
void C_ZN8QToolTip7setFontERK5QFont(const QFont & a0) {
  QToolTip::setFont(a0);
}