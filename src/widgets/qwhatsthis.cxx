//  header block begin
// /usr/include/qt/QtWidgets/qwhatsthis.h
#ifndef protected
#define protected public
#endif
#include <qwhatsthis.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QWhatsThis is pure virtual: false
// QWhatsThis has virtual projected: false
//  header block end

//  main block begin

class Q_DECL_EXPORT MyQWhatsThis : public QWhatsThis {
public:
  virtual ~MyQWhatsThis() {}
};

// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwhatsthis.h:58
// [-2] void enterWhatsThisMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QWhatsThis18enterWhatsThisModeEv() {
  QWhatsThis::enterWhatsThisMode();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwhatsthis.h:59
// [1] bool inWhatsThisMode()
extern "C" Q_DECL_EXPORT
bool C_ZN10QWhatsThis15inWhatsThisModeEv() {
  return (bool)QWhatsThis::inWhatsThisMode();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwhatsthis.h:60
// [-2] void leaveWhatsThisMode()
extern "C" Q_DECL_EXPORT
void C_ZN10QWhatsThis18leaveWhatsThisModeEv() {
  QWhatsThis::leaveWhatsThisMode();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwhatsthis.h:62
// [-2] void showText(const class QPoint &, const class QString &, class QWidget *)
extern "C" Q_DECL_EXPORT
void C_ZN10QWhatsThis8showTextERK6QPointRK7QStringP7QWidget(QPoint* pos, QString* text, QWidget * w) {
  QWhatsThis::showText(*pos, *text, w);
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwhatsthis.h:63
// [-2] void hideText()
extern "C" Q_DECL_EXPORT
void C_ZN10QWhatsThis8hideTextEv() {
  QWhatsThis::hideText();
}
// Public static Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwhatsthis.h:65
// [8] QAction * createAction(class QObject *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QWhatsThis12createActionEP7QObject(QObject * parent) {
  return (void*)QWhatsThis::createAction(parent);
}

extern "C" Q_DECL_EXPORT
void C_ZN10QWhatsThisD2Ev(void *this_) {
  delete (QWhatsThis*)(this_);
}
//  main block end
