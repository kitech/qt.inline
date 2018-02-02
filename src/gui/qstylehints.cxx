//  header block begin
// /usr/include/qt/QtGui/qstylehints.h
#include <qstylehints.h>
#include <QtGui>
#include "callback_inherit.h"

// QStyleHints is pure virtual: false
// QStyleHints has virtual projected: false
//  header block end

//  main block begin

class MyQStyleHints : public QStyleHints {
public:
  virtual ~MyQStyleHints() {}
};

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:54
// [8] const QMetaObject * metaObject()
extern "C"
void* C_ZNK11QStyleHints10metaObjectEv(void *this_) {
  return (void*)((QStyleHints*)this_)->metaObject();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:78
// [-2] void setMouseDoubleClickInterval(int)
extern "C"
void C_ZN11QStyleHints27setMouseDoubleClickIntervalEi(void *this_, int mouseDoubleClickInterval) {
  ((QStyleHints*)this_)->setMouseDoubleClickInterval(mouseDoubleClickInterval);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:79
// [4] int mouseDoubleClickInterval()
extern "C"
int C_ZNK11QStyleHints24mouseDoubleClickIntervalEv(void *this_) {
  return (int)((QStyleHints*)this_)->mouseDoubleClickInterval();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:80
// [-2] void setMousePressAndHoldInterval(int)
extern "C"
void C_ZN11QStyleHints28setMousePressAndHoldIntervalEi(void *this_, int mousePressAndHoldInterval) {
  ((QStyleHints*)this_)->setMousePressAndHoldInterval(mousePressAndHoldInterval);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:81
// [4] int mousePressAndHoldInterval()
extern "C"
int C_ZNK11QStyleHints25mousePressAndHoldIntervalEv(void *this_) {
  return (int)((QStyleHints*)this_)->mousePressAndHoldInterval();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:82
// [-2] void setStartDragDistance(int)
extern "C"
void C_ZN11QStyleHints20setStartDragDistanceEi(void *this_, int startDragDistance) {
  ((QStyleHints*)this_)->setStartDragDistance(startDragDistance);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:83
// [4] int startDragDistance()
extern "C"
int C_ZNK11QStyleHints17startDragDistanceEv(void *this_) {
  return (int)((QStyleHints*)this_)->startDragDistance();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:84
// [-2] void setStartDragTime(int)
extern "C"
void C_ZN11QStyleHints16setStartDragTimeEi(void *this_, int startDragTime) {
  ((QStyleHints*)this_)->setStartDragTime(startDragTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:85
// [4] int startDragTime()
extern "C"
int C_ZNK11QStyleHints13startDragTimeEv(void *this_) {
  return (int)((QStyleHints*)this_)->startDragTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:86
// [4] int startDragVelocity()
extern "C"
int C_ZNK11QStyleHints17startDragVelocityEv(void *this_) {
  return (int)((QStyleHints*)this_)->startDragVelocity();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:87
// [-2] void setKeyboardInputInterval(int)
extern "C"
void C_ZN11QStyleHints24setKeyboardInputIntervalEi(void *this_, int keyboardInputInterval) {
  ((QStyleHints*)this_)->setKeyboardInputInterval(keyboardInputInterval);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:88
// [4] int keyboardInputInterval()
extern "C"
int C_ZNK11QStyleHints21keyboardInputIntervalEv(void *this_) {
  return (int)((QStyleHints*)this_)->keyboardInputInterval();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:89
// [4] int keyboardAutoRepeatRate()
extern "C"
int C_ZNK11QStyleHints22keyboardAutoRepeatRateEv(void *this_) {
  return (int)((QStyleHints*)this_)->keyboardAutoRepeatRate();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:90
// [-2] void setCursorFlashTime(int)
extern "C"
void C_ZN11QStyleHints18setCursorFlashTimeEi(void *this_, int cursorFlashTime) {
  ((QStyleHints*)this_)->setCursorFlashTime(cursorFlashTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:91
// [4] int cursorFlashTime()
extern "C"
int C_ZNK11QStyleHints15cursorFlashTimeEv(void *this_) {
  return (int)((QStyleHints*)this_)->cursorFlashTime();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:92
// [1] bool showIsFullScreen()
extern "C"
bool C_ZNK11QStyleHints16showIsFullScreenEv(void *this_) {
  return (bool)((QStyleHints*)this_)->showIsFullScreen();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:93
// [1] bool showIsMaximized()
extern "C"
bool C_ZNK11QStyleHints15showIsMaximizedEv(void *this_) {
  return (bool)((QStyleHints*)this_)->showIsMaximized();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:94
// [1] bool showShortcutsInContextMenus()
extern "C"
bool C_ZNK11QStyleHints27showShortcutsInContextMenusEv(void *this_) {
  return (bool)((QStyleHints*)this_)->showShortcutsInContextMenus();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:95
// [4] int passwordMaskDelay()
extern "C"
int C_ZNK11QStyleHints17passwordMaskDelayEv(void *this_) {
  return (int)((QStyleHints*)this_)->passwordMaskDelay();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:96
// [2] QChar passwordMaskCharacter()
extern "C"
void* C_ZNK11QStyleHints21passwordMaskCharacterEv(void *this_) {
  auto rv = ((QStyleHints*)this_)->passwordMaskCharacter();
return new QChar(rv);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:97
// [8] qreal fontSmoothingGamma()
extern "C"
qreal C_ZNK11QStyleHints18fontSmoothingGammaEv(void *this_) {
  return (qreal)((QStyleHints*)this_)->fontSmoothingGamma();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:98
// [1] bool useRtlExtensions()
extern "C"
bool C_ZNK11QStyleHints16useRtlExtensionsEv(void *this_) {
  return (bool)((QStyleHints*)this_)->useRtlExtensions();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:99
// [1] bool setFocusOnTouchRelease()
extern "C"
bool C_ZNK11QStyleHints22setFocusOnTouchReleaseEv(void *this_) {
  return (bool)((QStyleHints*)this_)->setFocusOnTouchRelease();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:100
// [4] Qt::TabFocusBehavior tabFocusBehavior()
extern "C"
Qt::TabFocusBehavior C_ZNK11QStyleHints16tabFocusBehaviorEv(void *this_) {
  return (Qt::TabFocusBehavior)((QStyleHints*)this_)->tabFocusBehavior();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:101
// [-2] void setTabFocusBehavior(Qt::TabFocusBehavior)
extern "C"
void C_ZN11QStyleHints19setTabFocusBehaviorEN2Qt16TabFocusBehaviorE(void *this_, Qt::TabFocusBehavior tabFocusBehavior) {
  ((QStyleHints*)this_)->setTabFocusBehavior(tabFocusBehavior);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:102
// [1] bool singleClickActivation()
extern "C"
bool C_ZNK11QStyleHints21singleClickActivationEv(void *this_) {
  return (bool)((QStyleHints*)this_)->singleClickActivation();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:103
// [1] bool useHoverEffects()
extern "C"
bool C_ZNK11QStyleHints15useHoverEffectsEv(void *this_) {
  return (bool)((QStyleHints*)this_)->useHoverEffects();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:104
// [-2] void setUseHoverEffects(_Bool)
extern "C"
void C_ZN11QStyleHints18setUseHoverEffectsEb(void *this_, bool useHoverEffects) {
  ((QStyleHints*)this_)->setUseHoverEffects(useHoverEffects);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:105
// [4] int wheelScrollLines()
extern "C"
int C_ZNK11QStyleHints16wheelScrollLinesEv(void *this_) {
  return (int)((QStyleHints*)this_)->wheelScrollLines();
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:106
// [-2] void setWheelScrollLines(int)
extern "C"
void C_ZN11QStyleHints19setWheelScrollLinesEi(void *this_, int scrollLines) {
  ((QStyleHints*)this_)->setWheelScrollLines(scrollLines);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:109
// [-2] void cursorFlashTimeChanged(int)
extern "C"
void C_ZN11QStyleHints22cursorFlashTimeChangedEi(void *this_, int cursorFlashTime) {
  ((QStyleHints*)this_)->cursorFlashTimeChanged(cursorFlashTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:110
// [-2] void keyboardInputIntervalChanged(int)
extern "C"
void C_ZN11QStyleHints28keyboardInputIntervalChangedEi(void *this_, int keyboardInputInterval) {
  ((QStyleHints*)this_)->keyboardInputIntervalChanged(keyboardInputInterval);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:111
// [-2] void mouseDoubleClickIntervalChanged(int)
extern "C"
void C_ZN11QStyleHints31mouseDoubleClickIntervalChangedEi(void *this_, int mouseDoubleClickInterval) {
  ((QStyleHints*)this_)->mouseDoubleClickIntervalChanged(mouseDoubleClickInterval);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:112
// [-2] void mousePressAndHoldIntervalChanged(int)
extern "C"
void C_ZN11QStyleHints32mousePressAndHoldIntervalChangedEi(void *this_, int mousePressAndHoldInterval) {
  ((QStyleHints*)this_)->mousePressAndHoldIntervalChanged(mousePressAndHoldInterval);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:113
// [-2] void startDragDistanceChanged(int)
extern "C"
void C_ZN11QStyleHints24startDragDistanceChangedEi(void *this_, int startDragDistance) {
  ((QStyleHints*)this_)->startDragDistanceChanged(startDragDistance);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:114
// [-2] void startDragTimeChanged(int)
extern "C"
void C_ZN11QStyleHints20startDragTimeChangedEi(void *this_, int startDragTime) {
  ((QStyleHints*)this_)->startDragTimeChanged(startDragTime);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:115
// [-2] void tabFocusBehaviorChanged(Qt::TabFocusBehavior)
extern "C"
void C_ZN11QStyleHints23tabFocusBehaviorChangedEN2Qt16TabFocusBehaviorE(void *this_, Qt::TabFocusBehavior tabFocusBehavior) {
  ((QStyleHints*)this_)->tabFocusBehaviorChanged(tabFocusBehavior);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:116
// [-2] void useHoverEffectsChanged(_Bool)
extern "C"
void C_ZN11QStyleHints22useHoverEffectsChangedEb(void *this_, bool useHoverEffects) {
  ((QStyleHints*)this_)->useHoverEffectsChanged(useHoverEffects);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtGui/qstylehints.h:117
// [-2] void wheelScrollLinesChanged(int)
extern "C"
void C_ZN11QStyleHints23wheelScrollLinesChangedEi(void *this_, int scrollLines) {
  ((QStyleHints*)this_)->wheelScrollLinesChanged(scrollLines);
}

extern "C"
void C_ZN11QStyleHintsD2Ev(void *this_) {
  delete (QStyleHints*)(this_);
}
//  main block end
