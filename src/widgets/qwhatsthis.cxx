// /usr/include/qt/QtWidgets/qwhatsthis.h
#include <qwhatsthis.h>
#include <QtWidgets>

// static
// /usr/include/qt/QtWidgets/qwhatsthis.h:58
// void enterWhatsThisMode()
extern "C"
void C_ZN10QWhatsThis18enterWhatsThisModeEv() {
  QWhatsThis::enterWhatsThisMode();
}
// static
// /usr/include/qt/QtWidgets/qwhatsthis.h:59
// bool inWhatsThisMode()
extern "C"
void C_ZN10QWhatsThis15inWhatsThisModeEv() {
  /*return*/ QWhatsThis::inWhatsThisMode();
}
// static
// /usr/include/qt/QtWidgets/qwhatsthis.h:60
// void leaveWhatsThisMode()
extern "C"
void C_ZN10QWhatsThis18leaveWhatsThisModeEv() {
  QWhatsThis::leaveWhatsThisMode();
}
// static
// /usr/include/qt/QtWidgets/qwhatsthis.h:62
// void showText(const class QPoint &, const class QString &, class QWidget *)
extern "C"
void C_ZN10QWhatsThis8showTextERK6QPointRK7QStringP7QWidget(const QPoint & pos, const QString & text, QWidget * w) {
  QWhatsThis::showText(pos, text, w);
}
// static
// /usr/include/qt/QtWidgets/qwhatsthis.h:63
// void hideText()
extern "C"
void C_ZN10QWhatsThis8hideTextEv() {
  QWhatsThis::hideText();
}
// static
// /usr/include/qt/QtWidgets/qwhatsthis.h:65
// QAction * createAction(class QObject *)
extern "C"
void C_ZN10QWhatsThis12createActionEP7QObject(QObject * parent) {
  /*return*/ QWhatsThis::createAction(parent);
}